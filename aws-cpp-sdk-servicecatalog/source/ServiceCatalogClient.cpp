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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::~ServiceCatalogClient()
{
}

void ServiceCatalogClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Service Catalog");
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AcceptPortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptPortfolioShareOutcomeCallable ServiceCatalogClient::AcceptPortfolioShareCallable(const AcceptPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AcceptPortfolioShareAsync(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptPortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AcceptPortfolioShareAsyncHelper(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptPortfolioShare(request), context);
}

AssociateBudgetWithResourceOutcome ServiceCatalogClient::AssociateBudgetWithResource(const AssociateBudgetWithResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateBudgetWithResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateBudgetWithResourceOutcomeCallable ServiceCatalogClient::AssociateBudgetWithResourceCallable(const AssociateBudgetWithResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateBudgetWithResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateBudgetWithResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateBudgetWithResourceAsync(const AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateBudgetWithResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateBudgetWithResourceAsyncHelper(const AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateBudgetWithResource(request), context);
}

AssociatePrincipalWithPortfolioOutcome ServiceCatalogClient::AssociatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociatePrincipalWithPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePrincipalWithPortfolioOutcomeCallable ServiceCatalogClient::AssociatePrincipalWithPortfolioCallable(const AssociatePrincipalWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePrincipalWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePrincipalWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsync(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePrincipalWithPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsyncHelper(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePrincipalWithPortfolio(request), context);
}

AssociateProductWithPortfolioOutcome ServiceCatalogClient::AssociateProductWithPortfolio(const AssociateProductWithPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateProductWithPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateProductWithPortfolioOutcomeCallable ServiceCatalogClient::AssociateProductWithPortfolioCallable(const AssociateProductWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateProductWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateProductWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateProductWithPortfolioAsync(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateProductWithPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateProductWithPortfolioAsyncHelper(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateProductWithPortfolio(request), context);
}

AssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactCallable(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceActionWithProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactAsync(const AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateServiceActionWithProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactAsyncHelper(const AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateServiceActionWithProvisioningArtifact(request), context);
}

AssociateTagOptionWithResourceOutcome ServiceCatalogClient::AssociateTagOptionWithResource(const AssociateTagOptionWithResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateTagOptionWithResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTagOptionWithResourceOutcomeCallable ServiceCatalogClient::AssociateTagOptionWithResourceCallable(const AssociateTagOptionWithResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTagOptionWithResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTagOptionWithResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateTagOptionWithResourceAsync(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTagOptionWithResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateTagOptionWithResourceAsyncHelper(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTagOptionWithResource(request), context);
}

BatchAssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchAssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactCallable(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateServiceActionWithProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactAsync(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchAssociateServiceActionWithProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactAsyncHelper(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchAssociateServiceActionWithProvisioningArtifact(request), context);
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactCallable(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateServiceActionFromProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactAsync(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDisassociateServiceActionFromProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactAsyncHelper(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDisassociateServiceActionFromProvisioningArtifact(request), context);
}

CopyProductOutcome ServiceCatalogClient::CopyProduct(const CopyProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyProductOutcomeCallable ServiceCatalogClient::CopyProductCallable(const CopyProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CopyProductAsync(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CopyProductAsyncHelper(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyProduct(request), context);
}

CreateConstraintOutcome ServiceCatalogClient::CreateConstraint(const CreateConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConstraintOutcomeCallable ServiceCatalogClient::CreateConstraintCallable(const CreateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateConstraintAsync(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateConstraintAsyncHelper(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConstraint(request), context);
}

CreatePortfolioOutcome ServiceCatalogClient::CreatePortfolio(const CreatePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioOutcomeCallable ServiceCatalogClient::CreatePortfolioCallable(const CreatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreatePortfolioAsync(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreatePortfolioAsyncHelper(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePortfolio(request), context);
}

CreatePortfolioShareOutcome ServiceCatalogClient::CreatePortfolioShare(const CreatePortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioShareOutcomeCallable ServiceCatalogClient::CreatePortfolioShareCallable(const CreatePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreatePortfolioShareAsync(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreatePortfolioShareAsyncHelper(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePortfolioShare(request), context);
}

CreateProductOutcome ServiceCatalogClient::CreateProduct(const CreateProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProductOutcomeCallable ServiceCatalogClient::CreateProductCallable(const CreateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProductAsyncHelper(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProduct(request), context);
}

CreateProvisionedProductPlanOutcome ServiceCatalogClient::CreateProvisionedProductPlan(const CreateProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisionedProductPlanOutcomeCallable ServiceCatalogClient::CreateProvisionedProductPlanCallable(const CreateProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProvisionedProductPlanAsync(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProvisionedProductPlanAsyncHelper(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProvisionedProductPlan(request), context);
}

CreateProvisioningArtifactOutcome ServiceCatalogClient::CreateProvisioningArtifact(const CreateProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningArtifactOutcomeCallable ServiceCatalogClient::CreateProvisioningArtifactCallable(const CreateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProvisioningArtifactAsync(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProvisioningArtifactAsyncHelper(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProvisioningArtifact(request), context);
}

CreateServiceActionOutcome ServiceCatalogClient::CreateServiceAction(const CreateServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceActionOutcomeCallable ServiceCatalogClient::CreateServiceActionCallable(const CreateServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateServiceActionAsync(const CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateServiceActionAsyncHelper(const CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateServiceAction(request), context);
}

CreateTagOptionOutcome ServiceCatalogClient::CreateTagOption(const CreateTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagOptionOutcomeCallable ServiceCatalogClient::CreateTagOptionCallable(const CreateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateTagOptionAsync(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateTagOptionAsyncHelper(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTagOption(request), context);
}

DeleteConstraintOutcome ServiceCatalogClient::DeleteConstraint(const DeleteConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConstraintOutcomeCallable ServiceCatalogClient::DeleteConstraintCallable(const DeleteConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteConstraintAsync(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteConstraintAsyncHelper(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConstraint(request), context);
}

DeletePortfolioOutcome ServiceCatalogClient::DeletePortfolio(const DeletePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioOutcomeCallable ServiceCatalogClient::DeletePortfolioCallable(const DeletePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeletePortfolioAsync(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeletePortfolioAsyncHelper(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePortfolio(request), context);
}

DeletePortfolioShareOutcome ServiceCatalogClient::DeletePortfolioShare(const DeletePortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioShareOutcomeCallable ServiceCatalogClient::DeletePortfolioShareCallable(const DeletePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeletePortfolioShareAsync(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeletePortfolioShareAsyncHelper(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePortfolioShare(request), context);
}

DeleteProductOutcome ServiceCatalogClient::DeleteProduct(const DeleteProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProductOutcomeCallable ServiceCatalogClient::DeleteProductCallable(const DeleteProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProductAsyncHelper(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProduct(request), context);
}

DeleteProvisionedProductPlanOutcome ServiceCatalogClient::DeleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DeleteProvisionedProductPlanCallable(const DeleteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProvisionedProductPlanAsync(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProvisionedProductPlanAsyncHelper(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProvisionedProductPlan(request), context);
}

DeleteProvisioningArtifactOutcome ServiceCatalogClient::DeleteProvisioningArtifact(const DeleteProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisioningArtifactOutcomeCallable ServiceCatalogClient::DeleteProvisioningArtifactCallable(const DeleteProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProvisioningArtifactAsync(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProvisioningArtifactAsyncHelper(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProvisioningArtifact(request), context);
}

DeleteServiceActionOutcome ServiceCatalogClient::DeleteServiceAction(const DeleteServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceActionOutcomeCallable ServiceCatalogClient::DeleteServiceActionCallable(const DeleteServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteServiceActionAsync(const DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteServiceActionAsyncHelper(const DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServiceAction(request), context);
}

DeleteTagOptionOutcome ServiceCatalogClient::DeleteTagOption(const DeleteTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagOptionOutcomeCallable ServiceCatalogClient::DeleteTagOptionCallable(const DeleteTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteTagOptionAsync(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteTagOptionAsyncHelper(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTagOption(request), context);
}

DescribeConstraintOutcome ServiceCatalogClient::DescribeConstraint(const DescribeConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConstraintOutcomeCallable ServiceCatalogClient::DescribeConstraintCallable(const DescribeConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeConstraintAsync(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeConstraintAsyncHelper(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConstraint(request), context);
}

DescribeCopyProductStatusOutcome ServiceCatalogClient::DescribeCopyProductStatus(const DescribeCopyProductStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCopyProductStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCopyProductStatusOutcomeCallable ServiceCatalogClient::DescribeCopyProductStatusCallable(const DescribeCopyProductStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCopyProductStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCopyProductStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeCopyProductStatusAsync(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCopyProductStatusAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeCopyProductStatusAsyncHelper(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCopyProductStatus(request), context);
}

DescribePortfolioOutcome ServiceCatalogClient::DescribePortfolio(const DescribePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioOutcomeCallable ServiceCatalogClient::DescribePortfolioCallable(const DescribePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribePortfolioAsync(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribePortfolioAsyncHelper(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePortfolio(request), context);
}

DescribePortfolioShareStatusOutcome ServiceCatalogClient::DescribePortfolioShareStatus(const DescribePortfolioShareStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePortfolioShareStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioShareStatusOutcomeCallable ServiceCatalogClient::DescribePortfolioShareStatusCallable(const DescribePortfolioShareStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioShareStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolioShareStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribePortfolioShareStatusAsync(const DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePortfolioShareStatusAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribePortfolioShareStatusAsyncHelper(const DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePortfolioShareStatus(request), context);
}

DescribeProductOutcome ServiceCatalogClient::DescribeProduct(const DescribeProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductOutcomeCallable ServiceCatalogClient::DescribeProductCallable(const DescribeProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductAsyncHelper(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProduct(request), context);
}

DescribeProductAsAdminOutcome ServiceCatalogClient::DescribeProductAsAdmin(const DescribeProductAsAdminRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProductAsAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductAsAdminOutcomeCallable ServiceCatalogClient::DescribeProductAsAdminCallable(const DescribeProductAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductAsAdminAsync(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductAsAdminAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductAsAdminAsyncHelper(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProductAsAdmin(request), context);
}

DescribeProductViewOutcome ServiceCatalogClient::DescribeProductView(const DescribeProductViewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProductViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductViewOutcomeCallable ServiceCatalogClient::DescribeProductViewCallable(const DescribeProductViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductViewAsync(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductViewAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductViewAsyncHelper(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProductView(request), context);
}

DescribeProvisionedProductOutcome ServiceCatalogClient::DescribeProvisionedProduct(const DescribeProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductCallable(const DescribeProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisionedProductAsync(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisionedProductAsyncHelper(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisionedProduct(request), context);
}

DescribeProvisionedProductPlanOutcome ServiceCatalogClient::DescribeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductPlanCallable(const DescribeProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisionedProductPlanAsync(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisionedProductPlanAsyncHelper(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisionedProductPlan(request), context);
}

DescribeProvisioningArtifactOutcome ServiceCatalogClient::DescribeProvisioningArtifact(const DescribeProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningArtifactOutcomeCallable ServiceCatalogClient::DescribeProvisioningArtifactCallable(const DescribeProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisioningArtifactAsync(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisioningArtifactAsyncHelper(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisioningArtifact(request), context);
}

DescribeProvisioningParametersOutcome ServiceCatalogClient::DescribeProvisioningParameters(const DescribeProvisioningParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProvisioningParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningParametersOutcomeCallable ServiceCatalogClient::DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisioningParametersAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisioningParametersAsyncHelper(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisioningParameters(request), context);
}

DescribeRecordOutcome ServiceCatalogClient::DescribeRecord(const DescribeRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecordOutcomeCallable ServiceCatalogClient::DescribeRecordCallable(const DescribeRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecordAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeRecordAsyncHelper(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecord(request), context);
}

DescribeServiceActionOutcome ServiceCatalogClient::DescribeServiceAction(const DescribeServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionOutcomeCallable ServiceCatalogClient::DescribeServiceActionCallable(const DescribeServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeServiceActionAsync(const DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeServiceActionAsyncHelper(const DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceAction(request), context);
}

DescribeServiceActionExecutionParametersOutcome ServiceCatalogClient::DescribeServiceActionExecutionParameters(const DescribeServiceActionExecutionParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeServiceActionExecutionParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionExecutionParametersOutcomeCallable ServiceCatalogClient::DescribeServiceActionExecutionParametersCallable(const DescribeServiceActionExecutionParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionExecutionParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceActionExecutionParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeServiceActionExecutionParametersAsync(const DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceActionExecutionParametersAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeServiceActionExecutionParametersAsyncHelper(const DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceActionExecutionParameters(request), context);
}

DescribeTagOptionOutcome ServiceCatalogClient::DescribeTagOption(const DescribeTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagOptionOutcomeCallable ServiceCatalogClient::DescribeTagOptionCallable(const DescribeTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeTagOptionAsync(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeTagOptionAsyncHelper(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTagOption(request), context);
}

DisableAWSOrganizationsAccessOutcome ServiceCatalogClient::DisableAWSOrganizationsAccess(const DisableAWSOrganizationsAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableAWSOrganizationsAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::DisableAWSOrganizationsAccessCallable(const DisableAWSOrganizationsAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAWSOrganizationsAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisableAWSOrganizationsAccessAsync(const DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableAWSOrganizationsAccessAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisableAWSOrganizationsAccessAsyncHelper(const DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableAWSOrganizationsAccess(request), context);
}

DisassociateBudgetFromResourceOutcome ServiceCatalogClient::DisassociateBudgetFromResource(const DisassociateBudgetFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateBudgetFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBudgetFromResourceOutcomeCallable ServiceCatalogClient::DisassociateBudgetFromResourceCallable(const DisassociateBudgetFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBudgetFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateBudgetFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateBudgetFromResourceAsync(const DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateBudgetFromResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateBudgetFromResourceAsyncHelper(const DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateBudgetFromResource(request), context);
}

DisassociatePrincipalFromPortfolioOutcome ServiceCatalogClient::DisassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociatePrincipalFromPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePrincipalFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociatePrincipalFromPortfolioCallable(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePrincipalFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePrincipalFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsync(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePrincipalFromPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsyncHelper(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePrincipalFromPortfolio(request), context);
}

DisassociateProductFromPortfolioOutcome ServiceCatalogClient::DisassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateProductFromPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateProductFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociateProductFromPortfolioCallable(const DisassociateProductFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateProductFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateProductFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateProductFromPortfolioAsync(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateProductFromPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateProductFromPortfolioAsyncHelper(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateProductFromPortfolio(request), context);
}

DisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactCallable(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceActionFromProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactAsync(const DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateServiceActionFromProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactAsyncHelper(const DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateServiceActionFromProvisioningArtifact(request), context);
}

DisassociateTagOptionFromResourceOutcome ServiceCatalogClient::DisassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateTagOptionFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTagOptionFromResourceOutcomeCallable ServiceCatalogClient::DisassociateTagOptionFromResourceCallable(const DisassociateTagOptionFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTagOptionFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTagOptionFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateTagOptionFromResourceAsync(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateTagOptionFromResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateTagOptionFromResourceAsyncHelper(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateTagOptionFromResource(request), context);
}

EnableAWSOrganizationsAccessOutcome ServiceCatalogClient::EnableAWSOrganizationsAccess(const EnableAWSOrganizationsAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableAWSOrganizationsAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::EnableAWSOrganizationsAccessCallable(const EnableAWSOrganizationsAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAWSOrganizationsAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::EnableAWSOrganizationsAccessAsync(const EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableAWSOrganizationsAccessAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::EnableAWSOrganizationsAccessAsyncHelper(const EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableAWSOrganizationsAccess(request), context);
}

ExecuteProvisionedProductPlanOutcome ServiceCatalogClient::ExecuteProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ExecuteProvisionedProductPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductPlanCallable(const ExecuteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ExecuteProvisionedProductPlanAsync(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ExecuteProvisionedProductPlanAsyncHelper(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteProvisionedProductPlan(request), context);
}

ExecuteProvisionedProductServiceActionOutcome ServiceCatalogClient::ExecuteProvisionedProductServiceAction(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ExecuteProvisionedProductServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductServiceActionOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductServiceActionCallable(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteProvisionedProductServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ExecuteProvisionedProductServiceActionAsync(const ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteProvisionedProductServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ExecuteProvisionedProductServiceActionAsyncHelper(const ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteProvisionedProductServiceAction(request), context);
}

GetAWSOrganizationsAccessStatusOutcome ServiceCatalogClient::GetAWSOrganizationsAccessStatus(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAWSOrganizationsAccessStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAWSOrganizationsAccessStatusOutcomeCallable ServiceCatalogClient::GetAWSOrganizationsAccessStatusCallable(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAWSOrganizationsAccessStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAWSOrganizationsAccessStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::GetAWSOrganizationsAccessStatusAsync(const GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAWSOrganizationsAccessStatusAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::GetAWSOrganizationsAccessStatusAsyncHelper(const GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAWSOrganizationsAccessStatus(request), context);
}

GetProvisionedProductOutputsOutcome ServiceCatalogClient::GetProvisionedProductOutputs(const GetProvisionedProductOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetProvisionedProductOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProvisionedProductOutputsOutcomeCallable ServiceCatalogClient::GetProvisionedProductOutputsCallable(const GetProvisionedProductOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProvisionedProductOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProvisionedProductOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::GetProvisionedProductOutputsAsync(const GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProvisionedProductOutputsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::GetProvisionedProductOutputsAsyncHelper(const GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProvisionedProductOutputs(request), context);
}

ImportAsProvisionedProductOutcome ServiceCatalogClient::ImportAsProvisionedProduct(const ImportAsProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ImportAsProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportAsProvisionedProductOutcomeCallable ServiceCatalogClient::ImportAsProvisionedProductCallable(const ImportAsProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportAsProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportAsProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ImportAsProvisionedProductAsync(const ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportAsProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ImportAsProvisionedProductAsyncHelper(const ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportAsProvisionedProduct(request), context);
}

ListAcceptedPortfolioSharesOutcome ServiceCatalogClient::ListAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAcceptedPortfolioSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAcceptedPortfolioSharesOutcomeCallable ServiceCatalogClient::ListAcceptedPortfolioSharesCallable(const ListAcceptedPortfolioSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAcceptedPortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAcceptedPortfolioShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListAcceptedPortfolioSharesAsync(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAcceptedPortfolioSharesAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListAcceptedPortfolioSharesAsyncHelper(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAcceptedPortfolioShares(request), context);
}

ListBudgetsForResourceOutcome ServiceCatalogClient::ListBudgetsForResource(const ListBudgetsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListBudgetsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBudgetsForResourceOutcomeCallable ServiceCatalogClient::ListBudgetsForResourceCallable(const ListBudgetsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBudgetsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBudgetsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListBudgetsForResourceAsync(const ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBudgetsForResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListBudgetsForResourceAsyncHelper(const ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBudgetsForResource(request), context);
}

ListConstraintsForPortfolioOutcome ServiceCatalogClient::ListConstraintsForPortfolio(const ListConstraintsForPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListConstraintsForPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConstraintsForPortfolioOutcomeCallable ServiceCatalogClient::ListConstraintsForPortfolioCallable(const ListConstraintsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConstraintsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConstraintsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListConstraintsForPortfolioAsync(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConstraintsForPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListConstraintsForPortfolioAsyncHelper(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConstraintsForPortfolio(request), context);
}

ListLaunchPathsOutcome ServiceCatalogClient::ListLaunchPaths(const ListLaunchPathsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListLaunchPathsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchPathsOutcomeCallable ServiceCatalogClient::ListLaunchPathsCallable(const ListLaunchPathsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchPathsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunchPaths(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListLaunchPathsAsync(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLaunchPathsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListLaunchPathsAsyncHelper(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLaunchPaths(request), context);
}

ListOrganizationPortfolioAccessOutcome ServiceCatalogClient::ListOrganizationPortfolioAccess(const ListOrganizationPortfolioAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListOrganizationPortfolioAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationPortfolioAccessOutcomeCallable ServiceCatalogClient::ListOrganizationPortfolioAccessCallable(const ListOrganizationPortfolioAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationPortfolioAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListOrganizationPortfolioAccessAsync(const ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrganizationPortfolioAccessAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListOrganizationPortfolioAccessAsyncHelper(const ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrganizationPortfolioAccess(request), context);
}

ListPortfolioAccessOutcome ServiceCatalogClient::ListPortfolioAccess(const ListPortfolioAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPortfolioAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfolioAccessOutcomeCallable ServiceCatalogClient::ListPortfolioAccessCallable(const ListPortfolioAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolioAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfolioAccessAsync(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfolioAccessAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfolioAccessAsyncHelper(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfolioAccess(request), context);
}

ListPortfoliosOutcome ServiceCatalogClient::ListPortfolios(const ListPortfoliosRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPortfoliosOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosOutcomeCallable ServiceCatalogClient::ListPortfoliosCallable(const ListPortfoliosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfoliosAsync(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfoliosAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfoliosAsyncHelper(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfolios(request), context);
}

ListPortfoliosForProductOutcome ServiceCatalogClient::ListPortfoliosForProduct(const ListPortfoliosForProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPortfoliosForProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosForProductOutcomeCallable ServiceCatalogClient::ListPortfoliosForProductCallable(const ListPortfoliosForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfoliosForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfoliosForProductAsync(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfoliosForProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfoliosForProductAsyncHelper(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfoliosForProduct(request), context);
}

ListPrincipalsForPortfolioOutcome ServiceCatalogClient::ListPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPrincipalsForPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPrincipalsForPortfolioOutcomeCallable ServiceCatalogClient::ListPrincipalsForPortfolioCallable(const ListPrincipalsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipalsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPrincipalsForPortfolioAsync(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPrincipalsForPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPrincipalsForPortfolioAsyncHelper(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipalsForPortfolio(request), context);
}

ListProvisionedProductPlansOutcome ServiceCatalogClient::ListProvisionedProductPlans(const ListProvisionedProductPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProvisionedProductPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisionedProductPlansOutcomeCallable ServiceCatalogClient::ListProvisionedProductPlansCallable(const ListProvisionedProductPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedProductPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisionedProductPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListProvisionedProductPlansAsync(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisionedProductPlansAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListProvisionedProductPlansAsyncHelper(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisionedProductPlans(request), context);
}

ListProvisioningArtifactsOutcome ServiceCatalogClient::ListProvisioningArtifacts(const ListProvisioningArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProvisioningArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsCallable(const ListProvisioningArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListProvisioningArtifactsAsync(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisioningArtifactsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListProvisioningArtifactsAsyncHelper(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisioningArtifacts(request), context);
}

ListProvisioningArtifactsForServiceActionOutcome ServiceCatalogClient::ListProvisioningArtifactsForServiceAction(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProvisioningArtifactsForServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsForServiceActionOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsForServiceActionCallable(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsForServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningArtifactsForServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListProvisioningArtifactsForServiceActionAsync(const ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisioningArtifactsForServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListProvisioningArtifactsForServiceActionAsyncHelper(const ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisioningArtifactsForServiceAction(request), context);
}

ListRecordHistoryOutcome ServiceCatalogClient::ListRecordHistory(const ListRecordHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRecordHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecordHistoryOutcomeCallable ServiceCatalogClient::ListRecordHistoryCallable(const ListRecordHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecordHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecordHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListRecordHistoryAsync(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecordHistoryAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListRecordHistoryAsyncHelper(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecordHistory(request), context);
}

ListResourcesForTagOptionOutcome ServiceCatalogClient::ListResourcesForTagOption(const ListResourcesForTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListResourcesForTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForTagOptionOutcomeCallable ServiceCatalogClient::ListResourcesForTagOptionCallable(const ListResourcesForTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListResourcesForTagOptionAsync(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesForTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListResourcesForTagOptionAsyncHelper(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourcesForTagOption(request), context);
}

ListServiceActionsOutcome ServiceCatalogClient::ListServiceActions(const ListServiceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListServiceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsOutcomeCallable ServiceCatalogClient::ListServiceActionsCallable(const ListServiceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListServiceActionsAsync(const ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServiceActionsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListServiceActionsAsyncHelper(const ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServiceActions(request), context);
}

ListServiceActionsForProvisioningArtifactOutcome ServiceCatalogClient::ListServiceActionsForProvisioningArtifact(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListServiceActionsForProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsForProvisioningArtifactOutcomeCallable ServiceCatalogClient::ListServiceActionsForProvisioningArtifactCallable(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsForProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceActionsForProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListServiceActionsForProvisioningArtifactAsync(const ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServiceActionsForProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListServiceActionsForProvisioningArtifactAsyncHelper(const ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServiceActionsForProvisioningArtifact(request), context);
}

ListStackInstancesForProvisionedProductOutcome ServiceCatalogClient::ListStackInstancesForProvisionedProduct(const ListStackInstancesForProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStackInstancesForProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStackInstancesForProvisionedProductOutcomeCallable ServiceCatalogClient::ListStackInstancesForProvisionedProductCallable(const ListStackInstancesForProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStackInstancesForProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStackInstancesForProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListStackInstancesForProvisionedProductAsync(const ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStackInstancesForProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListStackInstancesForProvisionedProductAsyncHelper(const ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStackInstancesForProvisionedProduct(request), context);
}

ListTagOptionsOutcome ServiceCatalogClient::ListTagOptions(const ListTagOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagOptionsOutcomeCallable ServiceCatalogClient::ListTagOptionsCallable(const ListTagOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListTagOptionsAsync(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagOptionsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListTagOptionsAsyncHelper(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagOptions(request), context);
}

ProvisionProductOutcome ServiceCatalogClient::ProvisionProduct(const ProvisionProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ProvisionProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionProductOutcomeCallable ServiceCatalogClient::ProvisionProductCallable(const ProvisionProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ProvisionProductAsync(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ProvisionProductAsyncHelper(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionProduct(request), context);
}

RejectPortfolioShareOutcome ServiceCatalogClient::RejectPortfolioShare(const RejectPortfolioShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RejectPortfolioShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectPortfolioShareOutcomeCallable ServiceCatalogClient::RejectPortfolioShareCallable(const RejectPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::RejectPortfolioShareAsync(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectPortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::RejectPortfolioShareAsyncHelper(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectPortfolioShare(request), context);
}

ScanProvisionedProductsOutcome ServiceCatalogClient::ScanProvisionedProducts(const ScanProvisionedProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ScanProvisionedProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScanProvisionedProductsOutcomeCallable ServiceCatalogClient::ScanProvisionedProductsCallable(const ScanProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScanProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScanProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ScanProvisionedProductsAsync(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScanProvisionedProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ScanProvisionedProductsAsyncHelper(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScanProvisionedProducts(request), context);
}

SearchProductsOutcome ServiceCatalogClient::SearchProducts(const SearchProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SearchProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsOutcomeCallable ServiceCatalogClient::SearchProductsCallable(const SearchProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProductsAsync(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProductsAsyncHelper(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProducts(request), context);
}

SearchProductsAsAdminOutcome ServiceCatalogClient::SearchProductsAsAdmin(const SearchProductsAsAdminRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SearchProductsAsAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsAsAdminOutcomeCallable ServiceCatalogClient::SearchProductsAsAdminCallable(const SearchProductsAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProductsAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProductsAsAdminAsync(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProductsAsAdminAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProductsAsAdminAsyncHelper(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProductsAsAdmin(request), context);
}

SearchProvisionedProductsOutcome ServiceCatalogClient::SearchProvisionedProducts(const SearchProvisionedProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SearchProvisionedProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProvisionedProductsOutcomeCallable ServiceCatalogClient::SearchProvisionedProductsCallable(const SearchProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProvisionedProductsAsync(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProvisionedProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProvisionedProductsAsyncHelper(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProvisionedProducts(request), context);
}

TerminateProvisionedProductOutcome ServiceCatalogClient::TerminateProvisionedProduct(const TerminateProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TerminateProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateProvisionedProductOutcomeCallable ServiceCatalogClient::TerminateProvisionedProductCallable(const TerminateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::TerminateProvisionedProductAsync(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::TerminateProvisionedProductAsyncHelper(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateProvisionedProduct(request), context);
}

UpdateConstraintOutcome ServiceCatalogClient::UpdateConstraint(const UpdateConstraintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateConstraintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConstraintOutcomeCallable ServiceCatalogClient::UpdateConstraintCallable(const UpdateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateConstraintAsync(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateConstraintAsyncHelper(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConstraint(request), context);
}

UpdatePortfolioOutcome ServiceCatalogClient::UpdatePortfolio(const UpdatePortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortfolioOutcomeCallable ServiceCatalogClient::UpdatePortfolioCallable(const UpdatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdatePortfolioAsync(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdatePortfolioAsyncHelper(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePortfolio(request), context);
}

UpdateProductOutcome ServiceCatalogClient::UpdateProduct(const UpdateProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProductOutcomeCallable ServiceCatalogClient::UpdateProductCallable(const UpdateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProductAsync(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProductAsyncHelper(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProduct(request), context);
}

UpdateProvisionedProductOutcome ServiceCatalogClient::UpdateProvisionedProduct(const UpdateProvisionedProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProvisionedProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductCallable(const UpdateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProvisionedProductAsync(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisionedProductAsyncHelper(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisionedProduct(request), context);
}

UpdateProvisionedProductPropertiesOutcome ServiceCatalogClient::UpdateProvisionedProductProperties(const UpdateProvisionedProductPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProvisionedProductPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductPropertiesOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductPropertiesCallable(const UpdateProvisionedProductPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisionedProductProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProvisionedProductPropertiesAsync(const UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisionedProductPropertiesAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisionedProductPropertiesAsyncHelper(const UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisionedProductProperties(request), context);
}

UpdateProvisioningArtifactOutcome ServiceCatalogClient::UpdateProvisioningArtifact(const UpdateProvisioningArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProvisioningArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisioningArtifactOutcomeCallable ServiceCatalogClient::UpdateProvisioningArtifactCallable(const UpdateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProvisioningArtifactAsync(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisioningArtifactAsyncHelper(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisioningArtifact(request), context);
}

UpdateServiceActionOutcome ServiceCatalogClient::UpdateServiceAction(const UpdateServiceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateServiceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceActionOutcomeCallable ServiceCatalogClient::UpdateServiceActionCallable(const UpdateServiceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateServiceActionAsync(const UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceActionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateServiceActionAsyncHelper(const UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServiceAction(request), context);
}

UpdateTagOptionOutcome ServiceCatalogClient::UpdateTagOption(const UpdateTagOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateTagOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTagOptionOutcomeCallable ServiceCatalogClient::UpdateTagOptionCallable(const UpdateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateTagOptionAsync(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateTagOptionAsyncHelper(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTagOption(request), context);
}

