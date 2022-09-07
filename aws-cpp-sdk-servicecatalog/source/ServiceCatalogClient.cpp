/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/ServiceCatalogEndpoint.h>
#include <aws/servicecatalog/ServiceCatalogErrorMarshaller.h>
#include <aws/servicecatalog/model/AcceptPortfolioShareRequest.h>
#include <aws/servicecatalog/model/AssociateBudgetWithResourceRequest.h>
#include <aws/servicecatalog/model/AssociatePrincipalWithPortfolioRequest.h>
#include <aws/servicecatalog/model/AssociateProductWithPortfolioRequest.h>
#include <aws/servicecatalog/model/AssociateServiceActionWithProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/AssociateTagOptionWithResourceRequest.h>
#include <aws/servicecatalog/model/BatchAssociateServiceActionWithProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/BatchDisassociateServiceActionFromProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/CopyProductRequest.h>
#include <aws/servicecatalog/model/CreateConstraintRequest.h>
#include <aws/servicecatalog/model/CreatePortfolioRequest.h>
#include <aws/servicecatalog/model/CreatePortfolioShareRequest.h>
#include <aws/servicecatalog/model/CreateProductRequest.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/CreateServiceActionRequest.h>
#include <aws/servicecatalog/model/CreateTagOptionRequest.h>
#include <aws/servicecatalog/model/DeleteConstraintRequest.h>
#include <aws/servicecatalog/model/DeletePortfolioRequest.h>
#include <aws/servicecatalog/model/DeletePortfolioShareRequest.h>
#include <aws/servicecatalog/model/DeleteProductRequest.h>
#include <aws/servicecatalog/model/DeleteProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/DeleteServiceActionRequest.h>
#include <aws/servicecatalog/model/DeleteTagOptionRequest.h>
#include <aws/servicecatalog/model/DescribeConstraintRequest.h>
#include <aws/servicecatalog/model/DescribeCopyProductStatusRequest.h>
#include <aws/servicecatalog/model/DescribePortfolioRequest.h>
#include <aws/servicecatalog/model/DescribePortfolioShareStatusRequest.h>
#include <aws/servicecatalog/model/DescribePortfolioSharesRequest.h>
#include <aws/servicecatalog/model/DescribeProductRequest.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminRequest.h>
#include <aws/servicecatalog/model/DescribeProductViewRequest.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductRequest.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersRequest.h>
#include <aws/servicecatalog/model/DescribeRecordRequest.h>
#include <aws/servicecatalog/model/DescribeServiceActionRequest.h>
#include <aws/servicecatalog/model/DescribeServiceActionExecutionParametersRequest.h>
#include <aws/servicecatalog/model/DescribeTagOptionRequest.h>
#include <aws/servicecatalog/model/DisableAWSOrganizationsAccessRequest.h>
#include <aws/servicecatalog/model/DisassociateBudgetFromResourceRequest.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioRequest.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioRequest.h>
#include <aws/servicecatalog/model/DisassociateServiceActionFromProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceRequest.h>
#include <aws/servicecatalog/model/EnableAWSOrganizationsAccessRequest.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductServiceActionRequest.h>
#include <aws/servicecatalog/model/GetAWSOrganizationsAccessStatusRequest.h>
#include <aws/servicecatalog/model/GetProvisionedProductOutputsRequest.h>
#include <aws/servicecatalog/model/ImportAsProvisionedProductRequest.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesRequest.h>
#include <aws/servicecatalog/model/ListBudgetsForResourceRequest.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioRequest.h>
#include <aws/servicecatalog/model/ListLaunchPathsRequest.h>
#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessRequest.h>
#include <aws/servicecatalog/model/ListPortfolioAccessRequest.h>
#include <aws/servicecatalog/model/ListPortfoliosRequest.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductRequest.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioRequest.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansRequest.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsRequest.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionRequest.h>
#include <aws/servicecatalog/model/ListRecordHistoryRequest.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionRequest.h>
#include <aws/servicecatalog/model/ListServiceActionsRequest.h>
#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductRequest.h>
#include <aws/servicecatalog/model/ListTagOptionsRequest.h>
#include <aws/servicecatalog/model/ProvisionProductRequest.h>
#include <aws/servicecatalog/model/RejectPortfolioShareRequest.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminRequest.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsRequest.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>
#include <aws/servicecatalog/model/UpdateConstraintRequest.h>
#include <aws/servicecatalog/model/UpdatePortfolioRequest.h>
#include <aws/servicecatalog/model/UpdatePortfolioShareRequest.h>
#include <aws/servicecatalog/model/UpdateProductRequest.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductRequest.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductPropertiesRequest.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/UpdateServiceActionRequest.h>
#include <aws/servicecatalog/model/UpdateTagOptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceCatalog;
using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "servicecatalog";
static const char* ALLOCATION_TAG = "ServiceCatalogClient";

ServiceCatalogClient::ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::~ServiceCatalogClient()
{
}

void ServiceCatalogClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Service Catalog");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ServiceCatalogEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ServiceCatalogClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptPortfolioShareOutcome ServiceCatalogClient::AcceptPortfolioShare(const AcceptPortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptPortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptPortfolioShareOutcomeCallable ServiceCatalogClient::AcceptPortfolioShareCallable(const AcceptPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAcceptPortfolioShareAsyncHelper(ServiceCatalogClient const * const clientThis, const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptPortfolioShare(request), context);
}

void ServiceCatalogClient::AcceptPortfolioShareAsync(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAcceptPortfolioShareAsyncHelper( this, request, handler, context ); } );
}

AssociateBudgetWithResourceOutcome ServiceCatalogClient::AssociateBudgetWithResource(const AssociateBudgetWithResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateBudgetWithResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateBudgetWithResourceOutcomeCallable ServiceCatalogClient::AssociateBudgetWithResourceCallable(const AssociateBudgetWithResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateBudgetWithResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateBudgetWithResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAssociateBudgetWithResourceAsyncHelper(ServiceCatalogClient const * const clientThis, const AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateBudgetWithResource(request), context);
}

void ServiceCatalogClient::AssociateBudgetWithResourceAsync(const AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAssociateBudgetWithResourceAsyncHelper( this, request, handler, context ); } );
}

AssociatePrincipalWithPortfolioOutcome ServiceCatalogClient::AssociatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociatePrincipalWithPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePrincipalWithPortfolioOutcomeCallable ServiceCatalogClient::AssociatePrincipalWithPortfolioCallable(const AssociatePrincipalWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePrincipalWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePrincipalWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAssociatePrincipalWithPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociatePrincipalWithPortfolio(request), context);
}

void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsync(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAssociatePrincipalWithPortfolioAsyncHelper( this, request, handler, context ); } );
}

AssociateProductWithPortfolioOutcome ServiceCatalogClient::AssociateProductWithPortfolio(const AssociateProductWithPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateProductWithPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateProductWithPortfolioOutcomeCallable ServiceCatalogClient::AssociateProductWithPortfolioCallable(const AssociateProductWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateProductWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateProductWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAssociateProductWithPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateProductWithPortfolio(request), context);
}

void ServiceCatalogClient::AssociateProductWithPortfolioAsync(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAssociateProductWithPortfolioAsyncHelper( this, request, handler, context ); } );
}

AssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactCallable(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceActionWithProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAssociateServiceActionWithProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateServiceActionWithProvisioningArtifact(request), context);
}

void ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactAsync(const AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAssociateServiceActionWithProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

AssociateTagOptionWithResourceOutcome ServiceCatalogClient::AssociateTagOptionWithResource(const AssociateTagOptionWithResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateTagOptionWithResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTagOptionWithResourceOutcomeCallable ServiceCatalogClient::AssociateTagOptionWithResourceCallable(const AssociateTagOptionWithResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTagOptionWithResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTagOptionWithResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientAssociateTagOptionWithResourceAsyncHelper(ServiceCatalogClient const * const clientThis, const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTagOptionWithResource(request), context);
}

void ServiceCatalogClient::AssociateTagOptionWithResourceAsync(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientAssociateTagOptionWithResourceAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchAssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactCallable(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateServiceActionWithProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientBatchAssociateServiceActionWithProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateServiceActionWithProvisioningArtifact(request), context);
}

void ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactAsync(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientBatchAssociateServiceActionWithProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactCallable(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateServiceActionFromProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientBatchDisassociateServiceActionFromProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateServiceActionFromProvisioningArtifact(request), context);
}

void ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactAsync(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientBatchDisassociateServiceActionFromProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

CopyProductOutcome ServiceCatalogClient::CopyProduct(const CopyProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyProductOutcomeCallable ServiceCatalogClient::CopyProductCallable(const CopyProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCopyProductAsyncHelper(ServiceCatalogClient const * const clientThis, const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyProduct(request), context);
}

void ServiceCatalogClient::CopyProductAsync(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCopyProductAsyncHelper( this, request, handler, context ); } );
}

CreateConstraintOutcome ServiceCatalogClient::CreateConstraint(const CreateConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConstraintOutcomeCallable ServiceCatalogClient::CreateConstraintCallable(const CreateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateConstraintAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConstraint(request), context);
}

void ServiceCatalogClient::CreateConstraintAsync(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateConstraintAsyncHelper( this, request, handler, context ); } );
}

CreatePortfolioOutcome ServiceCatalogClient::CreatePortfolio(const CreatePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioOutcomeCallable ServiceCatalogClient::CreatePortfolioCallable(const CreatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreatePortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePortfolio(request), context);
}

void ServiceCatalogClient::CreatePortfolioAsync(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreatePortfolioAsyncHelper( this, request, handler, context ); } );
}

CreatePortfolioShareOutcome ServiceCatalogClient::CreatePortfolioShare(const CreatePortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioShareOutcomeCallable ServiceCatalogClient::CreatePortfolioShareCallable(const CreatePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreatePortfolioShareAsyncHelper(ServiceCatalogClient const * const clientThis, const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePortfolioShare(request), context);
}

void ServiceCatalogClient::CreatePortfolioShareAsync(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreatePortfolioShareAsyncHelper( this, request, handler, context ); } );
}

CreateProductOutcome ServiceCatalogClient::CreateProduct(const CreateProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProductOutcomeCallable ServiceCatalogClient::CreateProductCallable(const CreateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateProductAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProduct(request), context);
}

void ServiceCatalogClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateProductAsyncHelper( this, request, handler, context ); } );
}

CreateProvisionedProductPlanOutcome ServiceCatalogClient::CreateProvisionedProductPlan(const CreateProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisionedProductPlanOutcomeCallable ServiceCatalogClient::CreateProvisionedProductPlanCallable(const CreateProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateProvisionedProductPlanAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProvisionedProductPlan(request), context);
}

void ServiceCatalogClient::CreateProvisionedProductPlanAsync(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateProvisionedProductPlanAsyncHelper( this, request, handler, context ); } );
}

CreateProvisioningArtifactOutcome ServiceCatalogClient::CreateProvisioningArtifact(const CreateProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningArtifactOutcomeCallable ServiceCatalogClient::CreateProvisioningArtifactCallable(const CreateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProvisioningArtifact(request), context);
}

void ServiceCatalogClient::CreateProvisioningArtifactAsync(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

CreateServiceActionOutcome ServiceCatalogClient::CreateServiceAction(const CreateServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceActionOutcomeCallable ServiceCatalogClient::CreateServiceActionCallable(const CreateServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateServiceAction(request), context);
}

void ServiceCatalogClient::CreateServiceActionAsync(const CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateServiceActionAsyncHelper( this, request, handler, context ); } );
}

CreateTagOptionOutcome ServiceCatalogClient::CreateTagOption(const CreateTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagOptionOutcomeCallable ServiceCatalogClient::CreateTagOptionCallable(const CreateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientCreateTagOptionAsyncHelper(ServiceCatalogClient const * const clientThis, const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTagOption(request), context);
}

void ServiceCatalogClient::CreateTagOptionAsync(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientCreateTagOptionAsyncHelper( this, request, handler, context ); } );
}

DeleteConstraintOutcome ServiceCatalogClient::DeleteConstraint(const DeleteConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConstraintOutcomeCallable ServiceCatalogClient::DeleteConstraintCallable(const DeleteConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteConstraintAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConstraint(request), context);
}

void ServiceCatalogClient::DeleteConstraintAsync(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteConstraintAsyncHelper( this, request, handler, context ); } );
}

DeletePortfolioOutcome ServiceCatalogClient::DeletePortfolio(const DeletePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioOutcomeCallable ServiceCatalogClient::DeletePortfolioCallable(const DeletePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeletePortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePortfolio(request), context);
}

void ServiceCatalogClient::DeletePortfolioAsync(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeletePortfolioAsyncHelper( this, request, handler, context ); } );
}

DeletePortfolioShareOutcome ServiceCatalogClient::DeletePortfolioShare(const DeletePortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioShareOutcomeCallable ServiceCatalogClient::DeletePortfolioShareCallable(const DeletePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeletePortfolioShareAsyncHelper(ServiceCatalogClient const * const clientThis, const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePortfolioShare(request), context);
}

void ServiceCatalogClient::DeletePortfolioShareAsync(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeletePortfolioShareAsyncHelper( this, request, handler, context ); } );
}

DeleteProductOutcome ServiceCatalogClient::DeleteProduct(const DeleteProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProductOutcomeCallable ServiceCatalogClient::DeleteProductCallable(const DeleteProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteProductAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProduct(request), context);
}

void ServiceCatalogClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteProductAsyncHelper( this, request, handler, context ); } );
}

DeleteProvisionedProductPlanOutcome ServiceCatalogClient::DeleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DeleteProvisionedProductPlanCallable(const DeleteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteProvisionedProductPlanAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProvisionedProductPlan(request), context);
}

void ServiceCatalogClient::DeleteProvisionedProductPlanAsync(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteProvisionedProductPlanAsyncHelper( this, request, handler, context ); } );
}

DeleteProvisioningArtifactOutcome ServiceCatalogClient::DeleteProvisioningArtifact(const DeleteProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisioningArtifactOutcomeCallable ServiceCatalogClient::DeleteProvisioningArtifactCallable(const DeleteProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProvisioningArtifact(request), context);
}

void ServiceCatalogClient::DeleteProvisioningArtifactAsync(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

DeleteServiceActionOutcome ServiceCatalogClient::DeleteServiceAction(const DeleteServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceActionOutcomeCallable ServiceCatalogClient::DeleteServiceActionCallable(const DeleteServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteServiceAction(request), context);
}

void ServiceCatalogClient::DeleteServiceActionAsync(const DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteServiceActionAsyncHelper( this, request, handler, context ); } );
}

DeleteTagOptionOutcome ServiceCatalogClient::DeleteTagOption(const DeleteTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagOptionOutcomeCallable ServiceCatalogClient::DeleteTagOptionCallable(const DeleteTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDeleteTagOptionAsyncHelper(ServiceCatalogClient const * const clientThis, const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTagOption(request), context);
}

void ServiceCatalogClient::DeleteTagOptionAsync(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDeleteTagOptionAsyncHelper( this, request, handler, context ); } );
}

DescribeConstraintOutcome ServiceCatalogClient::DescribeConstraint(const DescribeConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConstraintOutcomeCallable ServiceCatalogClient::DescribeConstraintCallable(const DescribeConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeConstraintAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConstraint(request), context);
}

void ServiceCatalogClient::DescribeConstraintAsync(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeConstraintAsyncHelper( this, request, handler, context ); } );
}

DescribeCopyProductStatusOutcome ServiceCatalogClient::DescribeCopyProductStatus(const DescribeCopyProductStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCopyProductStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCopyProductStatusOutcomeCallable ServiceCatalogClient::DescribeCopyProductStatusCallable(const DescribeCopyProductStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCopyProductStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCopyProductStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeCopyProductStatusAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCopyProductStatus(request), context);
}

void ServiceCatalogClient::DescribeCopyProductStatusAsync(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeCopyProductStatusAsyncHelper( this, request, handler, context ); } );
}

DescribePortfolioOutcome ServiceCatalogClient::DescribePortfolio(const DescribePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioOutcomeCallable ServiceCatalogClient::DescribePortfolioCallable(const DescribePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribePortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePortfolio(request), context);
}

void ServiceCatalogClient::DescribePortfolioAsync(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribePortfolioAsyncHelper( this, request, handler, context ); } );
}

DescribePortfolioShareStatusOutcome ServiceCatalogClient::DescribePortfolioShareStatus(const DescribePortfolioShareStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePortfolioShareStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioShareStatusOutcomeCallable ServiceCatalogClient::DescribePortfolioShareStatusCallable(const DescribePortfolioShareStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioShareStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolioShareStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribePortfolioShareStatusAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePortfolioShareStatus(request), context);
}

void ServiceCatalogClient::DescribePortfolioShareStatusAsync(const DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribePortfolioShareStatusAsyncHelper( this, request, handler, context ); } );
}

DescribePortfolioSharesOutcome ServiceCatalogClient::DescribePortfolioShares(const DescribePortfolioSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePortfolioSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioSharesOutcomeCallable ServiceCatalogClient::DescribePortfolioSharesCallable(const DescribePortfolioSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolioShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribePortfolioSharesAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribePortfolioSharesRequest& request, const DescribePortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePortfolioShares(request), context);
}

void ServiceCatalogClient::DescribePortfolioSharesAsync(const DescribePortfolioSharesRequest& request, const DescribePortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribePortfolioSharesAsyncHelper( this, request, handler, context ); } );
}

DescribeProductOutcome ServiceCatalogClient::DescribeProduct(const DescribeProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductOutcomeCallable ServiceCatalogClient::DescribeProductCallable(const DescribeProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProductAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProduct(request), context);
}

void ServiceCatalogClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProductAsyncHelper( this, request, handler, context ); } );
}

DescribeProductAsAdminOutcome ServiceCatalogClient::DescribeProductAsAdmin(const DescribeProductAsAdminRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProductAsAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductAsAdminOutcomeCallable ServiceCatalogClient::DescribeProductAsAdminCallable(const DescribeProductAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProductAsAdminAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProductAsAdmin(request), context);
}

void ServiceCatalogClient::DescribeProductAsAdminAsync(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProductAsAdminAsyncHelper( this, request, handler, context ); } );
}

DescribeProductViewOutcome ServiceCatalogClient::DescribeProductView(const DescribeProductViewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProductViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductViewOutcomeCallable ServiceCatalogClient::DescribeProductViewCallable(const DescribeProductViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProductViewAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProductView(request), context);
}

void ServiceCatalogClient::DescribeProductViewAsync(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProductViewAsyncHelper( this, request, handler, context ); } );
}

DescribeProvisionedProductOutcome ServiceCatalogClient::DescribeProvisionedProduct(const DescribeProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductCallable(const DescribeProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProvisionedProductAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProvisionedProduct(request), context);
}

void ServiceCatalogClient::DescribeProvisionedProductAsync(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProvisionedProductAsyncHelper( this, request, handler, context ); } );
}

DescribeProvisionedProductPlanOutcome ServiceCatalogClient::DescribeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductPlanCallable(const DescribeProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProvisionedProductPlanAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProvisionedProductPlan(request), context);
}

void ServiceCatalogClient::DescribeProvisionedProductPlanAsync(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProvisionedProductPlanAsyncHelper( this, request, handler, context ); } );
}

DescribeProvisioningArtifactOutcome ServiceCatalogClient::DescribeProvisioningArtifact(const DescribeProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningArtifactOutcomeCallable ServiceCatalogClient::DescribeProvisioningArtifactCallable(const DescribeProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProvisioningArtifact(request), context);
}

void ServiceCatalogClient::DescribeProvisioningArtifactAsync(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

DescribeProvisioningParametersOutcome ServiceCatalogClient::DescribeProvisioningParameters(const DescribeProvisioningParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProvisioningParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningParametersOutcomeCallable ServiceCatalogClient::DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeProvisioningParametersAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProvisioningParameters(request), context);
}

void ServiceCatalogClient::DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeProvisioningParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeRecordOutcome ServiceCatalogClient::DescribeRecord(const DescribeRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecordOutcomeCallable ServiceCatalogClient::DescribeRecordCallable(const DescribeRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeRecordAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRecord(request), context);
}

void ServiceCatalogClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeRecordAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceActionOutcome ServiceCatalogClient::DescribeServiceAction(const DescribeServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionOutcomeCallable ServiceCatalogClient::DescribeServiceActionCallable(const DescribeServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceAction(request), context);
}

void ServiceCatalogClient::DescribeServiceActionAsync(const DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeServiceActionAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceActionExecutionParametersOutcome ServiceCatalogClient::DescribeServiceActionExecutionParameters(const DescribeServiceActionExecutionParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceActionExecutionParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionExecutionParametersOutcomeCallable ServiceCatalogClient::DescribeServiceActionExecutionParametersCallable(const DescribeServiceActionExecutionParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionExecutionParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceActionExecutionParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeServiceActionExecutionParametersAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceActionExecutionParameters(request), context);
}

void ServiceCatalogClient::DescribeServiceActionExecutionParametersAsync(const DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeServiceActionExecutionParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeTagOptionOutcome ServiceCatalogClient::DescribeTagOption(const DescribeTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagOptionOutcomeCallable ServiceCatalogClient::DescribeTagOptionCallable(const DescribeTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDescribeTagOptionAsyncHelper(ServiceCatalogClient const * const clientThis, const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTagOption(request), context);
}

void ServiceCatalogClient::DescribeTagOptionAsync(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDescribeTagOptionAsyncHelper( this, request, handler, context ); } );
}

DisableAWSOrganizationsAccessOutcome ServiceCatalogClient::DisableAWSOrganizationsAccess(const DisableAWSOrganizationsAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableAWSOrganizationsAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::DisableAWSOrganizationsAccessCallable(const DisableAWSOrganizationsAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAWSOrganizationsAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisableAWSOrganizationsAccessAsyncHelper(ServiceCatalogClient const * const clientThis, const DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableAWSOrganizationsAccess(request), context);
}

void ServiceCatalogClient::DisableAWSOrganizationsAccessAsync(const DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisableAWSOrganizationsAccessAsyncHelper( this, request, handler, context ); } );
}

DisassociateBudgetFromResourceOutcome ServiceCatalogClient::DisassociateBudgetFromResource(const DisassociateBudgetFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateBudgetFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBudgetFromResourceOutcomeCallable ServiceCatalogClient::DisassociateBudgetFromResourceCallable(const DisassociateBudgetFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBudgetFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateBudgetFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisassociateBudgetFromResourceAsyncHelper(ServiceCatalogClient const * const clientThis, const DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateBudgetFromResource(request), context);
}

void ServiceCatalogClient::DisassociateBudgetFromResourceAsync(const DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisassociateBudgetFromResourceAsyncHelper( this, request, handler, context ); } );
}

DisassociatePrincipalFromPortfolioOutcome ServiceCatalogClient::DisassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociatePrincipalFromPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePrincipalFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociatePrincipalFromPortfolioCallable(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePrincipalFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePrincipalFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisassociatePrincipalFromPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociatePrincipalFromPortfolio(request), context);
}

void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsync(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisassociatePrincipalFromPortfolioAsyncHelper( this, request, handler, context ); } );
}

DisassociateProductFromPortfolioOutcome ServiceCatalogClient::DisassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateProductFromPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateProductFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociateProductFromPortfolioCallable(const DisassociateProductFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateProductFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateProductFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisassociateProductFromPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateProductFromPortfolio(request), context);
}

void ServiceCatalogClient::DisassociateProductFromPortfolioAsync(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisassociateProductFromPortfolioAsyncHelper( this, request, handler, context ); } );
}

DisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactCallable(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceActionFromProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisassociateServiceActionFromProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateServiceActionFromProvisioningArtifact(request), context);
}

void ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactAsync(const DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisassociateServiceActionFromProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

DisassociateTagOptionFromResourceOutcome ServiceCatalogClient::DisassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateTagOptionFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTagOptionFromResourceOutcomeCallable ServiceCatalogClient::DisassociateTagOptionFromResourceCallable(const DisassociateTagOptionFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTagOptionFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTagOptionFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientDisassociateTagOptionFromResourceAsyncHelper(ServiceCatalogClient const * const clientThis, const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTagOptionFromResource(request), context);
}

void ServiceCatalogClient::DisassociateTagOptionFromResourceAsync(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientDisassociateTagOptionFromResourceAsyncHelper( this, request, handler, context ); } );
}

EnableAWSOrganizationsAccessOutcome ServiceCatalogClient::EnableAWSOrganizationsAccess(const EnableAWSOrganizationsAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableAWSOrganizationsAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::EnableAWSOrganizationsAccessCallable(const EnableAWSOrganizationsAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAWSOrganizationsAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientEnableAWSOrganizationsAccessAsyncHelper(ServiceCatalogClient const * const clientThis, const EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAWSOrganizationsAccess(request), context);
}

void ServiceCatalogClient::EnableAWSOrganizationsAccessAsync(const EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientEnableAWSOrganizationsAccessAsyncHelper( this, request, handler, context ); } );
}

ExecuteProvisionedProductPlanOutcome ServiceCatalogClient::ExecuteProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductPlanCallable(const ExecuteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientExecuteProvisionedProductPlanAsyncHelper(ServiceCatalogClient const * const clientThis, const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteProvisionedProductPlan(request), context);
}

void ServiceCatalogClient::ExecuteProvisionedProductPlanAsync(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientExecuteProvisionedProductPlanAsyncHelper( this, request, handler, context ); } );
}

ExecuteProvisionedProductServiceActionOutcome ServiceCatalogClient::ExecuteProvisionedProductServiceAction(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteProvisionedProductServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductServiceActionOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductServiceActionCallable(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteProvisionedProductServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientExecuteProvisionedProductServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteProvisionedProductServiceAction(request), context);
}

void ServiceCatalogClient::ExecuteProvisionedProductServiceActionAsync(const ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientExecuteProvisionedProductServiceActionAsyncHelper( this, request, handler, context ); } );
}

GetAWSOrganizationsAccessStatusOutcome ServiceCatalogClient::GetAWSOrganizationsAccessStatus(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAWSOrganizationsAccessStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAWSOrganizationsAccessStatusOutcomeCallable ServiceCatalogClient::GetAWSOrganizationsAccessStatusCallable(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAWSOrganizationsAccessStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAWSOrganizationsAccessStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientGetAWSOrganizationsAccessStatusAsyncHelper(ServiceCatalogClient const * const clientThis, const GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAWSOrganizationsAccessStatus(request), context);
}

void ServiceCatalogClient::GetAWSOrganizationsAccessStatusAsync(const GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientGetAWSOrganizationsAccessStatusAsyncHelper( this, request, handler, context ); } );
}

GetProvisionedProductOutputsOutcome ServiceCatalogClient::GetProvisionedProductOutputs(const GetProvisionedProductOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetProvisionedProductOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProvisionedProductOutputsOutcomeCallable ServiceCatalogClient::GetProvisionedProductOutputsCallable(const GetProvisionedProductOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProvisionedProductOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProvisionedProductOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientGetProvisionedProductOutputsAsyncHelper(ServiceCatalogClient const * const clientThis, const GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProvisionedProductOutputs(request), context);
}

void ServiceCatalogClient::GetProvisionedProductOutputsAsync(const GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientGetProvisionedProductOutputsAsyncHelper( this, request, handler, context ); } );
}

ImportAsProvisionedProductOutcome ServiceCatalogClient::ImportAsProvisionedProduct(const ImportAsProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportAsProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportAsProvisionedProductOutcomeCallable ServiceCatalogClient::ImportAsProvisionedProductCallable(const ImportAsProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportAsProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportAsProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientImportAsProvisionedProductAsyncHelper(ServiceCatalogClient const * const clientThis, const ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportAsProvisionedProduct(request), context);
}

void ServiceCatalogClient::ImportAsProvisionedProductAsync(const ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientImportAsProvisionedProductAsyncHelper( this, request, handler, context ); } );
}

ListAcceptedPortfolioSharesOutcome ServiceCatalogClient::ListAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAcceptedPortfolioSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAcceptedPortfolioSharesOutcomeCallable ServiceCatalogClient::ListAcceptedPortfolioSharesCallable(const ListAcceptedPortfolioSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAcceptedPortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAcceptedPortfolioShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListAcceptedPortfolioSharesAsyncHelper(ServiceCatalogClient const * const clientThis, const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAcceptedPortfolioShares(request), context);
}

void ServiceCatalogClient::ListAcceptedPortfolioSharesAsync(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListAcceptedPortfolioSharesAsyncHelper( this, request, handler, context ); } );
}

ListBudgetsForResourceOutcome ServiceCatalogClient::ListBudgetsForResource(const ListBudgetsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBudgetsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBudgetsForResourceOutcomeCallable ServiceCatalogClient::ListBudgetsForResourceCallable(const ListBudgetsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBudgetsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBudgetsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListBudgetsForResourceAsyncHelper(ServiceCatalogClient const * const clientThis, const ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBudgetsForResource(request), context);
}

void ServiceCatalogClient::ListBudgetsForResourceAsync(const ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListBudgetsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListConstraintsForPortfolioOutcome ServiceCatalogClient::ListConstraintsForPortfolio(const ListConstraintsForPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConstraintsForPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConstraintsForPortfolioOutcomeCallable ServiceCatalogClient::ListConstraintsForPortfolioCallable(const ListConstraintsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConstraintsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConstraintsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListConstraintsForPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConstraintsForPortfolio(request), context);
}

void ServiceCatalogClient::ListConstraintsForPortfolioAsync(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListConstraintsForPortfolioAsyncHelper( this, request, handler, context ); } );
}

ListLaunchPathsOutcome ServiceCatalogClient::ListLaunchPaths(const ListLaunchPathsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLaunchPathsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchPathsOutcomeCallable ServiceCatalogClient::ListLaunchPathsCallable(const ListLaunchPathsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchPathsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunchPaths(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListLaunchPathsAsyncHelper(ServiceCatalogClient const * const clientThis, const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLaunchPaths(request), context);
}

void ServiceCatalogClient::ListLaunchPathsAsync(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListLaunchPathsAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationPortfolioAccessOutcome ServiceCatalogClient::ListOrganizationPortfolioAccess(const ListOrganizationPortfolioAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOrganizationPortfolioAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationPortfolioAccessOutcomeCallable ServiceCatalogClient::ListOrganizationPortfolioAccessCallable(const ListOrganizationPortfolioAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationPortfolioAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListOrganizationPortfolioAccessAsyncHelper(ServiceCatalogClient const * const clientThis, const ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationPortfolioAccess(request), context);
}

void ServiceCatalogClient::ListOrganizationPortfolioAccessAsync(const ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListOrganizationPortfolioAccessAsyncHelper( this, request, handler, context ); } );
}

ListPortfolioAccessOutcome ServiceCatalogClient::ListPortfolioAccess(const ListPortfolioAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPortfolioAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfolioAccessOutcomeCallable ServiceCatalogClient::ListPortfolioAccessCallable(const ListPortfolioAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolioAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListPortfolioAccessAsyncHelper(ServiceCatalogClient const * const clientThis, const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPortfolioAccess(request), context);
}

void ServiceCatalogClient::ListPortfolioAccessAsync(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListPortfolioAccessAsyncHelper( this, request, handler, context ); } );
}

ListPortfoliosOutcome ServiceCatalogClient::ListPortfolios(const ListPortfoliosRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPortfoliosOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosOutcomeCallable ServiceCatalogClient::ListPortfoliosCallable(const ListPortfoliosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListPortfoliosAsyncHelper(ServiceCatalogClient const * const clientThis, const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPortfolios(request), context);
}

void ServiceCatalogClient::ListPortfoliosAsync(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListPortfoliosAsyncHelper( this, request, handler, context ); } );
}

ListPortfoliosForProductOutcome ServiceCatalogClient::ListPortfoliosForProduct(const ListPortfoliosForProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPortfoliosForProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosForProductOutcomeCallable ServiceCatalogClient::ListPortfoliosForProductCallable(const ListPortfoliosForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfoliosForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListPortfoliosForProductAsyncHelper(ServiceCatalogClient const * const clientThis, const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPortfoliosForProduct(request), context);
}

void ServiceCatalogClient::ListPortfoliosForProductAsync(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListPortfoliosForProductAsyncHelper( this, request, handler, context ); } );
}

ListPrincipalsForPortfolioOutcome ServiceCatalogClient::ListPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPrincipalsForPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPrincipalsForPortfolioOutcomeCallable ServiceCatalogClient::ListPrincipalsForPortfolioCallable(const ListPrincipalsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipalsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListPrincipalsForPortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPrincipalsForPortfolio(request), context);
}

void ServiceCatalogClient::ListPrincipalsForPortfolioAsync(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListPrincipalsForPortfolioAsyncHelper( this, request, handler, context ); } );
}

ListProvisionedProductPlansOutcome ServiceCatalogClient::ListProvisionedProductPlans(const ListProvisionedProductPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProvisionedProductPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisionedProductPlansOutcomeCallable ServiceCatalogClient::ListProvisionedProductPlansCallable(const ListProvisionedProductPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedProductPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisionedProductPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListProvisionedProductPlansAsyncHelper(ServiceCatalogClient const * const clientThis, const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProvisionedProductPlans(request), context);
}

void ServiceCatalogClient::ListProvisionedProductPlansAsync(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListProvisionedProductPlansAsyncHelper( this, request, handler, context ); } );
}

ListProvisioningArtifactsOutcome ServiceCatalogClient::ListProvisioningArtifacts(const ListProvisioningArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProvisioningArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsCallable(const ListProvisioningArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListProvisioningArtifactsAsyncHelper(ServiceCatalogClient const * const clientThis, const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProvisioningArtifacts(request), context);
}

void ServiceCatalogClient::ListProvisioningArtifactsAsync(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListProvisioningArtifactsAsyncHelper( this, request, handler, context ); } );
}

ListProvisioningArtifactsForServiceActionOutcome ServiceCatalogClient::ListProvisioningArtifactsForServiceAction(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProvisioningArtifactsForServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsForServiceActionOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsForServiceActionCallable(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsForServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningArtifactsForServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListProvisioningArtifactsForServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProvisioningArtifactsForServiceAction(request), context);
}

void ServiceCatalogClient::ListProvisioningArtifactsForServiceActionAsync(const ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListProvisioningArtifactsForServiceActionAsyncHelper( this, request, handler, context ); } );
}

ListRecordHistoryOutcome ServiceCatalogClient::ListRecordHistory(const ListRecordHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRecordHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecordHistoryOutcomeCallable ServiceCatalogClient::ListRecordHistoryCallable(const ListRecordHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecordHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecordHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListRecordHistoryAsyncHelper(ServiceCatalogClient const * const clientThis, const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecordHistory(request), context);
}

void ServiceCatalogClient::ListRecordHistoryAsync(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListRecordHistoryAsyncHelper( this, request, handler, context ); } );
}

ListResourcesForTagOptionOutcome ServiceCatalogClient::ListResourcesForTagOption(const ListResourcesForTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesForTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForTagOptionOutcomeCallable ServiceCatalogClient::ListResourcesForTagOptionCallable(const ListResourcesForTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListResourcesForTagOptionAsyncHelper(ServiceCatalogClient const * const clientThis, const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourcesForTagOption(request), context);
}

void ServiceCatalogClient::ListResourcesForTagOptionAsync(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListResourcesForTagOptionAsyncHelper( this, request, handler, context ); } );
}

ListServiceActionsOutcome ServiceCatalogClient::ListServiceActions(const ListServiceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsOutcomeCallable ServiceCatalogClient::ListServiceActionsCallable(const ListServiceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListServiceActionsAsyncHelper(ServiceCatalogClient const * const clientThis, const ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServiceActions(request), context);
}

void ServiceCatalogClient::ListServiceActionsAsync(const ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListServiceActionsAsyncHelper( this, request, handler, context ); } );
}

ListServiceActionsForProvisioningArtifactOutcome ServiceCatalogClient::ListServiceActionsForProvisioningArtifact(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceActionsForProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsForProvisioningArtifactOutcomeCallable ServiceCatalogClient::ListServiceActionsForProvisioningArtifactCallable(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsForProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceActionsForProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListServiceActionsForProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServiceActionsForProvisioningArtifact(request), context);
}

void ServiceCatalogClient::ListServiceActionsForProvisioningArtifactAsync(const ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListServiceActionsForProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

ListStackInstancesForProvisionedProductOutcome ServiceCatalogClient::ListStackInstancesForProvisionedProduct(const ListStackInstancesForProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStackInstancesForProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStackInstancesForProvisionedProductOutcomeCallable ServiceCatalogClient::ListStackInstancesForProvisionedProductCallable(const ListStackInstancesForProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackInstancesForProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackInstancesForProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListStackInstancesForProvisionedProductAsyncHelper(ServiceCatalogClient const * const clientThis, const ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStackInstancesForProvisionedProduct(request), context);
}

void ServiceCatalogClient::ListStackInstancesForProvisionedProductAsync(const ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListStackInstancesForProvisionedProductAsyncHelper( this, request, handler, context ); } );
}

ListTagOptionsOutcome ServiceCatalogClient::ListTagOptions(const ListTagOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagOptionsOutcomeCallable ServiceCatalogClient::ListTagOptionsCallable(const ListTagOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientListTagOptionsAsyncHelper(ServiceCatalogClient const * const clientThis, const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagOptions(request), context);
}

void ServiceCatalogClient::ListTagOptionsAsync(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientListTagOptionsAsyncHelper( this, request, handler, context ); } );
}

ProvisionProductOutcome ServiceCatalogClient::ProvisionProduct(const ProvisionProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ProvisionProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionProductOutcomeCallable ServiceCatalogClient::ProvisionProductCallable(const ProvisionProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientProvisionProductAsyncHelper(ServiceCatalogClient const * const clientThis, const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ProvisionProduct(request), context);
}

void ServiceCatalogClient::ProvisionProductAsync(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientProvisionProductAsyncHelper( this, request, handler, context ); } );
}

RejectPortfolioShareOutcome ServiceCatalogClient::RejectPortfolioShare(const RejectPortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectPortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectPortfolioShareOutcomeCallable ServiceCatalogClient::RejectPortfolioShareCallable(const RejectPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientRejectPortfolioShareAsyncHelper(ServiceCatalogClient const * const clientThis, const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectPortfolioShare(request), context);
}

void ServiceCatalogClient::RejectPortfolioShareAsync(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientRejectPortfolioShareAsyncHelper( this, request, handler, context ); } );
}

ScanProvisionedProductsOutcome ServiceCatalogClient::ScanProvisionedProducts(const ScanProvisionedProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ScanProvisionedProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScanProvisionedProductsOutcomeCallable ServiceCatalogClient::ScanProvisionedProductsCallable(const ScanProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScanProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScanProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientScanProvisionedProductsAsyncHelper(ServiceCatalogClient const * const clientThis, const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ScanProvisionedProducts(request), context);
}

void ServiceCatalogClient::ScanProvisionedProductsAsync(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientScanProvisionedProductsAsyncHelper( this, request, handler, context ); } );
}

SearchProductsOutcome ServiceCatalogClient::SearchProducts(const SearchProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsOutcomeCallable ServiceCatalogClient::SearchProductsCallable(const SearchProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientSearchProductsAsyncHelper(ServiceCatalogClient const * const clientThis, const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchProducts(request), context);
}

void ServiceCatalogClient::SearchProductsAsync(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientSearchProductsAsyncHelper( this, request, handler, context ); } );
}

SearchProductsAsAdminOutcome ServiceCatalogClient::SearchProductsAsAdmin(const SearchProductsAsAdminRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchProductsAsAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsAsAdminOutcomeCallable ServiceCatalogClient::SearchProductsAsAdminCallable(const SearchProductsAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProductsAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientSearchProductsAsAdminAsyncHelper(ServiceCatalogClient const * const clientThis, const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchProductsAsAdmin(request), context);
}

void ServiceCatalogClient::SearchProductsAsAdminAsync(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientSearchProductsAsAdminAsyncHelper( this, request, handler, context ); } );
}

SearchProvisionedProductsOutcome ServiceCatalogClient::SearchProvisionedProducts(const SearchProvisionedProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchProvisionedProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProvisionedProductsOutcomeCallable ServiceCatalogClient::SearchProvisionedProductsCallable(const SearchProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientSearchProvisionedProductsAsyncHelper(ServiceCatalogClient const * const clientThis, const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchProvisionedProducts(request), context);
}

void ServiceCatalogClient::SearchProvisionedProductsAsync(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientSearchProvisionedProductsAsyncHelper( this, request, handler, context ); } );
}

TerminateProvisionedProductOutcome ServiceCatalogClient::TerminateProvisionedProduct(const TerminateProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateProvisionedProductOutcomeCallable ServiceCatalogClient::TerminateProvisionedProductCallable(const TerminateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientTerminateProvisionedProductAsyncHelper(ServiceCatalogClient const * const clientThis, const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateProvisionedProduct(request), context);
}

void ServiceCatalogClient::TerminateProvisionedProductAsync(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientTerminateProvisionedProductAsyncHelper( this, request, handler, context ); } );
}

UpdateConstraintOutcome ServiceCatalogClient::UpdateConstraint(const UpdateConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConstraintOutcomeCallable ServiceCatalogClient::UpdateConstraintCallable(const UpdateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateConstraintAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConstraint(request), context);
}

void ServiceCatalogClient::UpdateConstraintAsync(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateConstraintAsyncHelper( this, request, handler, context ); } );
}

UpdatePortfolioOutcome ServiceCatalogClient::UpdatePortfolio(const UpdatePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortfolioOutcomeCallable ServiceCatalogClient::UpdatePortfolioCallable(const UpdatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdatePortfolioAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePortfolio(request), context);
}

void ServiceCatalogClient::UpdatePortfolioAsync(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdatePortfolioAsyncHelper( this, request, handler, context ); } );
}

UpdatePortfolioShareOutcome ServiceCatalogClient::UpdatePortfolioShare(const UpdatePortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortfolioShareOutcomeCallable ServiceCatalogClient::UpdatePortfolioShareCallable(const UpdatePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdatePortfolioShareAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdatePortfolioShareRequest& request, const UpdatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePortfolioShare(request), context);
}

void ServiceCatalogClient::UpdatePortfolioShareAsync(const UpdatePortfolioShareRequest& request, const UpdatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdatePortfolioShareAsyncHelper( this, request, handler, context ); } );
}

UpdateProductOutcome ServiceCatalogClient::UpdateProduct(const UpdateProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProductOutcomeCallable ServiceCatalogClient::UpdateProductCallable(const UpdateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateProductAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProduct(request), context);
}

void ServiceCatalogClient::UpdateProductAsync(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateProductAsyncHelper( this, request, handler, context ); } );
}

UpdateProvisionedProductOutcome ServiceCatalogClient::UpdateProvisionedProduct(const UpdateProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductCallable(const UpdateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateProvisionedProductAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProvisionedProduct(request), context);
}

void ServiceCatalogClient::UpdateProvisionedProductAsync(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateProvisionedProductAsyncHelper( this, request, handler, context ); } );
}

UpdateProvisionedProductPropertiesOutcome ServiceCatalogClient::UpdateProvisionedProductProperties(const UpdateProvisionedProductPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProvisionedProductPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductPropertiesOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductPropertiesCallable(const UpdateProvisionedProductPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisionedProductProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateProvisionedProductPropertiesAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProvisionedProductProperties(request), context);
}

void ServiceCatalogClient::UpdateProvisionedProductPropertiesAsync(const UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateProvisionedProductPropertiesAsyncHelper( this, request, handler, context ); } );
}

UpdateProvisioningArtifactOutcome ServiceCatalogClient::UpdateProvisioningArtifact(const UpdateProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisioningArtifactOutcomeCallable ServiceCatalogClient::UpdateProvisioningArtifactCallable(const UpdateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateProvisioningArtifactAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProvisioningArtifact(request), context);
}

void ServiceCatalogClient::UpdateProvisioningArtifactAsync(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateProvisioningArtifactAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceActionOutcome ServiceCatalogClient::UpdateServiceAction(const UpdateServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceActionOutcomeCallable ServiceCatalogClient::UpdateServiceActionCallable(const UpdateServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateServiceActionAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceAction(request), context);
}

void ServiceCatalogClient::UpdateServiceActionAsync(const UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateServiceActionAsyncHelper( this, request, handler, context ); } );
}

UpdateTagOptionOutcome ServiceCatalogClient::UpdateTagOption(const UpdateTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTagOptionOutcomeCallable ServiceCatalogClient::UpdateTagOptionCallable(const UpdateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClientUpdateTagOptionAsyncHelper(ServiceCatalogClient const * const clientThis, const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTagOption(request), context);
}

void ServiceCatalogClient::UpdateTagOptionAsync(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceCatalogClientUpdateTagOptionAsyncHelper( this, request, handler, context ); } );
}

