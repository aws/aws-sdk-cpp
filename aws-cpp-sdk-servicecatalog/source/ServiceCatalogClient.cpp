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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/ServiceCatalogErrorMarshaller.h>
#include <aws/servicecatalog/ServiceCatalogEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ServiceCatalogClient::SERVICE_NAME = "servicecatalog";
const char* ServiceCatalogClient::ALLOCATION_TAG = "ServiceCatalogClient";

ServiceCatalogClient::ServiceCatalogClient(const ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration,
                                           std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials,
                                           std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider,
                                           const ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider,
                                           const ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ServiceCatalogClient::ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ServiceCatalogClient::~ServiceCatalogClient()
{
}

std::shared_ptr<ServiceCatalogEndpointProviderBase>& ServiceCatalogClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ServiceCatalogClient::init(const ServiceCatalog::ServiceCatalogClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Service Catalog");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ServiceCatalogClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptPortfolioShareOutcome ServiceCatalogClient::AcceptPortfolioShare(const AcceptPortfolioShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptPortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptPortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptPortfolioShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptPortfolioShareOutcomeCallable ServiceCatalogClient::AcceptPortfolioShareCallable(const AcceptPortfolioShareRequest& request) const
{
  std::shared_ptr<AcceptPortfolioShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptPortfolioShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AcceptPortfolioShareAsync(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptPortfolioShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptPortfolioShare(*pRequest), context);
    } );
}

AssociateBudgetWithResourceOutcome ServiceCatalogClient::AssociateBudgetWithResource(const AssociateBudgetWithResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateBudgetWithResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateBudgetWithResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateBudgetWithResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateBudgetWithResourceOutcomeCallable ServiceCatalogClient::AssociateBudgetWithResourceCallable(const AssociateBudgetWithResourceRequest& request) const
{
  std::shared_ptr<AssociateBudgetWithResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateBudgetWithResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateBudgetWithResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AssociateBudgetWithResourceAsync(const AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateBudgetWithResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateBudgetWithResource(*pRequest), context);
    } );
}

AssociatePrincipalWithPortfolioOutcome ServiceCatalogClient::AssociatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePrincipalWithPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePrincipalWithPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociatePrincipalWithPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePrincipalWithPortfolioOutcomeCallable ServiceCatalogClient::AssociatePrincipalWithPortfolioCallable(const AssociatePrincipalWithPortfolioRequest& request) const
{
  std::shared_ptr<AssociatePrincipalWithPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociatePrincipalWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociatePrincipalWithPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsync(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociatePrincipalWithPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociatePrincipalWithPortfolio(*pRequest), context);
    } );
}

AssociateProductWithPortfolioOutcome ServiceCatalogClient::AssociateProductWithPortfolio(const AssociateProductWithPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateProductWithPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateProductWithPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateProductWithPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateProductWithPortfolioOutcomeCallable ServiceCatalogClient::AssociateProductWithPortfolioCallable(const AssociateProductWithPortfolioRequest& request) const
{
  std::shared_ptr<AssociateProductWithPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateProductWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateProductWithPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AssociateProductWithPortfolioAsync(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateProductWithPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateProductWithPortfolio(*pRequest), context);
    } );
}

AssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateServiceActionWithProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateServiceActionWithProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactCallable(const AssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  std::shared_ptr<AssociateServiceActionWithProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateServiceActionWithProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifactAsync(const AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateServiceActionWithProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateServiceActionWithProvisioningArtifact(*pRequest), context);
    } );
}

AssociateTagOptionWithResourceOutcome ServiceCatalogClient::AssociateTagOptionWithResource(const AssociateTagOptionWithResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTagOptionWithResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTagOptionWithResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTagOptionWithResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTagOptionWithResourceOutcomeCallable ServiceCatalogClient::AssociateTagOptionWithResourceCallable(const AssociateTagOptionWithResourceRequest& request) const
{
  std::shared_ptr<AssociateTagOptionWithResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateTagOptionWithResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateTagOptionWithResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::AssociateTagOptionWithResourceAsync(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateTagOptionWithResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateTagOptionWithResource(*pRequest), context);
    } );
}

BatchAssociateServiceActionWithProvisioningArtifactOutcome ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateServiceActionWithProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateServiceActionWithProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchAssociateServiceActionWithProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactCallable(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const
{
  std::shared_ptr<BatchAssociateServiceActionWithProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateServiceActionWithProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchAssociateServiceActionWithProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifactAsync(const BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchAssociateServiceActionWithProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchAssociateServiceActionWithProvisioningArtifact(*pRequest), context);
    } );
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateServiceActionFromProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateServiceActionFromProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactCallable(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  std::shared_ptr<BatchDisassociateServiceActionFromProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchDisassociateServiceActionFromProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifactAsync(const BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchDisassociateServiceActionFromProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchDisassociateServiceActionFromProvisioningArtifact(*pRequest), context);
    } );
}

CopyProductOutcome ServiceCatalogClient::CopyProduct(const CopyProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyProductOutcomeCallable ServiceCatalogClient::CopyProductCallable(const CopyProductRequest& request) const
{
  std::shared_ptr<CopyProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CopyProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CopyProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CopyProductAsync(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CopyProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CopyProduct(*pRequest), context);
    } );
}

CreateConstraintOutcome ServiceCatalogClient::CreateConstraint(const CreateConstraintRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConstraintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConstraintOutcomeCallable ServiceCatalogClient::CreateConstraintCallable(const CreateConstraintRequest& request) const
{
  std::shared_ptr<CreateConstraintRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateConstraintOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateConstraint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateConstraintAsync(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateConstraintRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateConstraint(*pRequest), context);
    } );
}

CreatePortfolioOutcome ServiceCatalogClient::CreatePortfolio(const CreatePortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioOutcomeCallable ServiceCatalogClient::CreatePortfolioCallable(const CreatePortfolioRequest& request) const
{
  std::shared_ptr<CreatePortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreatePortfolioAsync(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePortfolio(*pRequest), context);
    } );
}

CreatePortfolioShareOutcome ServiceCatalogClient::CreatePortfolioShare(const CreatePortfolioShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePortfolioShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortfolioShareOutcomeCallable ServiceCatalogClient::CreatePortfolioShareCallable(const CreatePortfolioShareRequest& request) const
{
  std::shared_ptr<CreatePortfolioShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePortfolioShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreatePortfolioShareAsync(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePortfolioShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePortfolioShare(*pRequest), context);
    } );
}

CreateProductOutcome ServiceCatalogClient::CreateProduct(const CreateProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProductOutcomeCallable ServiceCatalogClient::CreateProductCallable(const CreateProductRequest& request) const
{
  std::shared_ptr<CreateProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateProduct(*pRequest), context);
    } );
}

CreateProvisionedProductPlanOutcome ServiceCatalogClient::CreateProvisionedProductPlan(const CreateProvisionedProductPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProvisionedProductPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisionedProductPlanOutcomeCallable ServiceCatalogClient::CreateProvisionedProductPlanCallable(const CreateProvisionedProductPlanRequest& request) const
{
  std::shared_ptr<CreateProvisionedProductPlanRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateProvisionedProductPlan(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateProvisionedProductPlanAsync(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateProvisionedProductPlanRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateProvisionedProductPlan(*pRequest), context);
    } );
}

CreateProvisioningArtifactOutcome ServiceCatalogClient::CreateProvisioningArtifact(const CreateProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningArtifactOutcomeCallable ServiceCatalogClient::CreateProvisioningArtifactCallable(const CreateProvisioningArtifactRequest& request) const
{
  std::shared_ptr<CreateProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateProvisioningArtifactAsync(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateProvisioningArtifact(*pRequest), context);
    } );
}

CreateServiceActionOutcome ServiceCatalogClient::CreateServiceAction(const CreateServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceActionOutcomeCallable ServiceCatalogClient::CreateServiceActionCallable(const CreateServiceActionRequest& request) const
{
  std::shared_ptr<CreateServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateServiceActionAsync(const CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateServiceAction(*pRequest), context);
    } );
}

CreateTagOptionOutcome ServiceCatalogClient::CreateTagOption(const CreateTagOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTagOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagOptionOutcomeCallable ServiceCatalogClient::CreateTagOptionCallable(const CreateTagOptionRequest& request) const
{
  std::shared_ptr<CreateTagOptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTagOptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTagOption(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::CreateTagOptionAsync(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTagOptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTagOption(*pRequest), context);
    } );
}

DeleteConstraintOutcome ServiceCatalogClient::DeleteConstraint(const DeleteConstraintRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConstraintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConstraintOutcomeCallable ServiceCatalogClient::DeleteConstraintCallable(const DeleteConstraintRequest& request) const
{
  std::shared_ptr<DeleteConstraintRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteConstraintOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteConstraint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteConstraintAsync(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteConstraintRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteConstraint(*pRequest), context);
    } );
}

DeletePortfolioOutcome ServiceCatalogClient::DeletePortfolio(const DeletePortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioOutcomeCallable ServiceCatalogClient::DeletePortfolioCallable(const DeletePortfolioRequest& request) const
{
  std::shared_ptr<DeletePortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeletePortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeletePortfolioAsync(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeletePortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeletePortfolio(*pRequest), context);
    } );
}

DeletePortfolioShareOutcome ServiceCatalogClient::DeletePortfolioShare(const DeletePortfolioShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePortfolioShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePortfolioShareOutcomeCallable ServiceCatalogClient::DeletePortfolioShareCallable(const DeletePortfolioShareRequest& request) const
{
  std::shared_ptr<DeletePortfolioShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeletePortfolioShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeletePortfolioShareAsync(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeletePortfolioShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeletePortfolioShare(*pRequest), context);
    } );
}

DeleteProductOutcome ServiceCatalogClient::DeleteProduct(const DeleteProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProductOutcomeCallable ServiceCatalogClient::DeleteProductCallable(const DeleteProductRequest& request) const
{
  std::shared_ptr<DeleteProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteProduct(*pRequest), context);
    } );
}

DeleteProvisionedProductPlanOutcome ServiceCatalogClient::DeleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProvisionedProductPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DeleteProvisionedProductPlanCallable(const DeleteProvisionedProductPlanRequest& request) const
{
  std::shared_ptr<DeleteProvisionedProductPlanRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteProvisionedProductPlan(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteProvisionedProductPlanAsync(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteProvisionedProductPlanRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteProvisionedProductPlan(*pRequest), context);
    } );
}

DeleteProvisioningArtifactOutcome ServiceCatalogClient::DeleteProvisioningArtifact(const DeleteProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisioningArtifactOutcomeCallable ServiceCatalogClient::DeleteProvisioningArtifactCallable(const DeleteProvisioningArtifactRequest& request) const
{
  std::shared_ptr<DeleteProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteProvisioningArtifactAsync(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteProvisioningArtifact(*pRequest), context);
    } );
}

DeleteServiceActionOutcome ServiceCatalogClient::DeleteServiceAction(const DeleteServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceActionOutcomeCallable ServiceCatalogClient::DeleteServiceActionCallable(const DeleteServiceActionRequest& request) const
{
  std::shared_ptr<DeleteServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteServiceActionAsync(const DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteServiceAction(*pRequest), context);
    } );
}

DeleteTagOptionOutcome ServiceCatalogClient::DeleteTagOption(const DeleteTagOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagOptionOutcomeCallable ServiceCatalogClient::DeleteTagOptionCallable(const DeleteTagOptionRequest& request) const
{
  std::shared_ptr<DeleteTagOptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagOptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTagOption(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DeleteTagOptionAsync(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTagOptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTagOption(*pRequest), context);
    } );
}

DescribeConstraintOutcome ServiceCatalogClient::DescribeConstraint(const DescribeConstraintRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConstraintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConstraintOutcomeCallable ServiceCatalogClient::DescribeConstraintCallable(const DescribeConstraintRequest& request) const
{
  std::shared_ptr<DescribeConstraintRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeConstraintOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeConstraint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeConstraintAsync(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeConstraintRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeConstraint(*pRequest), context);
    } );
}

DescribeCopyProductStatusOutcome ServiceCatalogClient::DescribeCopyProductStatus(const DescribeCopyProductStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCopyProductStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCopyProductStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCopyProductStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCopyProductStatusOutcomeCallable ServiceCatalogClient::DescribeCopyProductStatusCallable(const DescribeCopyProductStatusRequest& request) const
{
  std::shared_ptr<DescribeCopyProductStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCopyProductStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCopyProductStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeCopyProductStatusAsync(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCopyProductStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCopyProductStatus(*pRequest), context);
    } );
}

DescribePortfolioOutcome ServiceCatalogClient::DescribePortfolio(const DescribePortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioOutcomeCallable ServiceCatalogClient::DescribePortfolioCallable(const DescribePortfolioRequest& request) const
{
  std::shared_ptr<DescribePortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribePortfolioAsync(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePortfolio(*pRequest), context);
    } );
}

DescribePortfolioShareStatusOutcome ServiceCatalogClient::DescribePortfolioShareStatus(const DescribePortfolioShareStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePortfolioShareStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePortfolioShareStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePortfolioShareStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioShareStatusOutcomeCallable ServiceCatalogClient::DescribePortfolioShareStatusCallable(const DescribePortfolioShareStatusRequest& request) const
{
  std::shared_ptr<DescribePortfolioShareStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioShareStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePortfolioShareStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribePortfolioShareStatusAsync(const DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePortfolioShareStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePortfolioShareStatus(*pRequest), context);
    } );
}

DescribePortfolioSharesOutcome ServiceCatalogClient::DescribePortfolioShares(const DescribePortfolioSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePortfolioShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePortfolioShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePortfolioSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePortfolioSharesOutcomeCallable ServiceCatalogClient::DescribePortfolioSharesCallable(const DescribePortfolioSharesRequest& request) const
{
  std::shared_ptr<DescribePortfolioSharesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePortfolioShares(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribePortfolioSharesAsync(const DescribePortfolioSharesRequest& request, const DescribePortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePortfolioSharesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePortfolioShares(*pRequest), context);
    } );
}

DescribeProductOutcome ServiceCatalogClient::DescribeProduct(const DescribeProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductOutcomeCallable ServiceCatalogClient::DescribeProductCallable(const DescribeProductRequest& request) const
{
  std::shared_ptr<DescribeProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProduct(*pRequest), context);
    } );
}

DescribeProductAsAdminOutcome ServiceCatalogClient::DescribeProductAsAdmin(const DescribeProductAsAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProductAsAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProductAsAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProductAsAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductAsAdminOutcomeCallable ServiceCatalogClient::DescribeProductAsAdminCallable(const DescribeProductAsAdminRequest& request) const
{
  std::shared_ptr<DescribeProductAsAdminRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductAsAdminOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProductAsAdmin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProductAsAdminAsync(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProductAsAdminRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProductAsAdmin(*pRequest), context);
    } );
}

DescribeProductViewOutcome ServiceCatalogClient::DescribeProductView(const DescribeProductViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProductView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProductView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProductViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductViewOutcomeCallable ServiceCatalogClient::DescribeProductViewCallable(const DescribeProductViewRequest& request) const
{
  std::shared_ptr<DescribeProductViewRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductViewOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProductView(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProductViewAsync(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProductViewRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProductView(*pRequest), context);
    } );
}

DescribeProvisionedProductOutcome ServiceCatalogClient::DescribeProvisionedProduct(const DescribeProvisionedProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProvisionedProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductCallable(const DescribeProvisionedProductRequest& request) const
{
  std::shared_ptr<DescribeProvisionedProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProvisionedProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProvisionedProductAsync(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProvisionedProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProvisionedProduct(*pRequest), context);
    } );
}

DescribeProvisionedProductPlanOutcome ServiceCatalogClient::DescribeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProvisionedProductPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductPlanCallable(const DescribeProvisionedProductPlanRequest& request) const
{
  std::shared_ptr<DescribeProvisionedProductPlanRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProvisionedProductPlan(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProvisionedProductPlanAsync(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProvisionedProductPlanRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProvisionedProductPlan(*pRequest), context);
    } );
}

DescribeProvisioningArtifactOutcome ServiceCatalogClient::DescribeProvisioningArtifact(const DescribeProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningArtifactOutcomeCallable ServiceCatalogClient::DescribeProvisioningArtifactCallable(const DescribeProvisioningArtifactRequest& request) const
{
  std::shared_ptr<DescribeProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProvisioningArtifactAsync(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProvisioningArtifact(*pRequest), context);
    } );
}

DescribeProvisioningParametersOutcome ServiceCatalogClient::DescribeProvisioningParameters(const DescribeProvisioningParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisioningParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProvisioningParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProvisioningParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningParametersOutcomeCallable ServiceCatalogClient::DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequest& request) const
{
  std::shared_ptr<DescribeProvisioningParametersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeProvisioningParameters(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeProvisioningParametersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeProvisioningParameters(*pRequest), context);
    } );
}

DescribeRecordOutcome ServiceCatalogClient::DescribeRecord(const DescribeRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecordOutcomeCallable ServiceCatalogClient::DescribeRecordCallable(const DescribeRecordRequest& request) const
{
  std::shared_ptr<DescribeRecordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeRecord(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeRecordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeRecord(*pRequest), context);
    } );
}

DescribeServiceActionOutcome ServiceCatalogClient::DescribeServiceAction(const DescribeServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionOutcomeCallable ServiceCatalogClient::DescribeServiceActionCallable(const DescribeServiceActionRequest& request) const
{
  std::shared_ptr<DescribeServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeServiceActionAsync(const DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeServiceAction(*pRequest), context);
    } );
}

DescribeServiceActionExecutionParametersOutcome ServiceCatalogClient::DescribeServiceActionExecutionParameters(const DescribeServiceActionExecutionParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceActionExecutionParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceActionExecutionParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceActionExecutionParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceActionExecutionParametersOutcomeCallable ServiceCatalogClient::DescribeServiceActionExecutionParametersCallable(const DescribeServiceActionExecutionParametersRequest& request) const
{
  std::shared_ptr<DescribeServiceActionExecutionParametersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceActionExecutionParametersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeServiceActionExecutionParameters(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeServiceActionExecutionParametersAsync(const DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeServiceActionExecutionParametersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeServiceActionExecutionParameters(*pRequest), context);
    } );
}

DescribeTagOptionOutcome ServiceCatalogClient::DescribeTagOption(const DescribeTagOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagOptionOutcomeCallable ServiceCatalogClient::DescribeTagOptionCallable(const DescribeTagOptionRequest& request) const
{
  std::shared_ptr<DescribeTagOptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagOptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTagOption(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DescribeTagOptionAsync(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTagOptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTagOption(*pRequest), context);
    } );
}

DisableAWSOrganizationsAccessOutcome ServiceCatalogClient::DisableAWSOrganizationsAccess(const DisableAWSOrganizationsAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAWSOrganizationsAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAWSOrganizationsAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAWSOrganizationsAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::DisableAWSOrganizationsAccessCallable(const DisableAWSOrganizationsAccessRequest& request) const
{
  std::shared_ptr<DisableAWSOrganizationsAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableAWSOrganizationsAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisableAWSOrganizationsAccessAsync(const DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableAWSOrganizationsAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableAWSOrganizationsAccess(*pRequest), context);
    } );
}

DisassociateBudgetFromResourceOutcome ServiceCatalogClient::DisassociateBudgetFromResource(const DisassociateBudgetFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateBudgetFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateBudgetFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateBudgetFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBudgetFromResourceOutcomeCallable ServiceCatalogClient::DisassociateBudgetFromResourceCallable(const DisassociateBudgetFromResourceRequest& request) const
{
  std::shared_ptr<DisassociateBudgetFromResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBudgetFromResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateBudgetFromResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisassociateBudgetFromResourceAsync(const DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateBudgetFromResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateBudgetFromResource(*pRequest), context);
    } );
}

DisassociatePrincipalFromPortfolioOutcome ServiceCatalogClient::DisassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePrincipalFromPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePrincipalFromPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociatePrincipalFromPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePrincipalFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociatePrincipalFromPortfolioCallable(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  std::shared_ptr<DisassociatePrincipalFromPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePrincipalFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociatePrincipalFromPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsync(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociatePrincipalFromPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociatePrincipalFromPortfolio(*pRequest), context);
    } );
}

DisassociateProductFromPortfolioOutcome ServiceCatalogClient::DisassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateProductFromPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateProductFromPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateProductFromPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateProductFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociateProductFromPortfolioCallable(const DisassociateProductFromPortfolioRequest& request) const
{
  std::shared_ptr<DisassociateProductFromPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateProductFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateProductFromPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisassociateProductFromPortfolioAsync(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateProductFromPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateProductFromPortfolio(*pRequest), context);
    } );
}

DisassociateServiceActionFromProvisioningArtifactOutcome ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateServiceActionFromProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateServiceActionFromProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateServiceActionFromProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceActionFromProvisioningArtifactOutcomeCallable ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactCallable(const DisassociateServiceActionFromProvisioningArtifactRequest& request) const
{
  std::shared_ptr<DisassociateServiceActionFromProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceActionFromProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateServiceActionFromProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifactAsync(const DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateServiceActionFromProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateServiceActionFromProvisioningArtifact(*pRequest), context);
    } );
}

DisassociateTagOptionFromResourceOutcome ServiceCatalogClient::DisassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTagOptionFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTagOptionFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTagOptionFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTagOptionFromResourceOutcomeCallable ServiceCatalogClient::DisassociateTagOptionFromResourceCallable(const DisassociateTagOptionFromResourceRequest& request) const
{
  std::shared_ptr<DisassociateTagOptionFromResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTagOptionFromResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateTagOptionFromResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::DisassociateTagOptionFromResourceAsync(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateTagOptionFromResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateTagOptionFromResource(*pRequest), context);
    } );
}

EnableAWSOrganizationsAccessOutcome ServiceCatalogClient::EnableAWSOrganizationsAccess(const EnableAWSOrganizationsAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAWSOrganizationsAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAWSOrganizationsAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAWSOrganizationsAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAWSOrganizationsAccessOutcomeCallable ServiceCatalogClient::EnableAWSOrganizationsAccessCallable(const EnableAWSOrganizationsAccessRequest& request) const
{
  std::shared_ptr<EnableAWSOrganizationsAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableAWSOrganizationsAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableAWSOrganizationsAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::EnableAWSOrganizationsAccessAsync(const EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableAWSOrganizationsAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableAWSOrganizationsAccess(*pRequest), context);
    } );
}

ExecuteProvisionedProductPlanOutcome ServiceCatalogClient::ExecuteProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteProvisionedProductPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteProvisionedProductPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductPlanCallable(const ExecuteProvisionedProductPlanRequest& request) const
{
  std::shared_ptr<ExecuteProvisionedProductPlanRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExecuteProvisionedProductPlan(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ExecuteProvisionedProductPlanAsync(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExecuteProvisionedProductPlanRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExecuteProvisionedProductPlan(*pRequest), context);
    } );
}

ExecuteProvisionedProductServiceActionOutcome ServiceCatalogClient::ExecuteProvisionedProductServiceAction(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteProvisionedProductServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteProvisionedProductServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteProvisionedProductServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteProvisionedProductServiceActionOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductServiceActionCallable(const ExecuteProvisionedProductServiceActionRequest& request) const
{
  std::shared_ptr<ExecuteProvisionedProductServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExecuteProvisionedProductServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ExecuteProvisionedProductServiceActionAsync(const ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExecuteProvisionedProductServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExecuteProvisionedProductServiceAction(*pRequest), context);
    } );
}

GetAWSOrganizationsAccessStatusOutcome ServiceCatalogClient::GetAWSOrganizationsAccessStatus(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAWSOrganizationsAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAWSOrganizationsAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAWSOrganizationsAccessStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAWSOrganizationsAccessStatusOutcomeCallable ServiceCatalogClient::GetAWSOrganizationsAccessStatusCallable(const GetAWSOrganizationsAccessStatusRequest& request) const
{
  std::shared_ptr<GetAWSOrganizationsAccessStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAWSOrganizationsAccessStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAWSOrganizationsAccessStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::GetAWSOrganizationsAccessStatusAsync(const GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAWSOrganizationsAccessStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAWSOrganizationsAccessStatus(*pRequest), context);
    } );
}

GetProvisionedProductOutputsOutcome ServiceCatalogClient::GetProvisionedProductOutputs(const GetProvisionedProductOutputsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProvisionedProductOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProvisionedProductOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetProvisionedProductOutputsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProvisionedProductOutputsOutcomeCallable ServiceCatalogClient::GetProvisionedProductOutputsCallable(const GetProvisionedProductOutputsRequest& request) const
{
  std::shared_ptr<GetProvisionedProductOutputsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetProvisionedProductOutputsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetProvisionedProductOutputs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::GetProvisionedProductOutputsAsync(const GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetProvisionedProductOutputsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetProvisionedProductOutputs(*pRequest), context);
    } );
}

ImportAsProvisionedProductOutcome ServiceCatalogClient::ImportAsProvisionedProduct(const ImportAsProvisionedProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportAsProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportAsProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportAsProvisionedProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportAsProvisionedProductOutcomeCallable ServiceCatalogClient::ImportAsProvisionedProductCallable(const ImportAsProvisionedProductRequest& request) const
{
  std::shared_ptr<ImportAsProvisionedProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportAsProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportAsProvisionedProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ImportAsProvisionedProductAsync(const ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportAsProvisionedProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportAsProvisionedProduct(*pRequest), context);
    } );
}

ListAcceptedPortfolioSharesOutcome ServiceCatalogClient::ListAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAcceptedPortfolioShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAcceptedPortfolioShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAcceptedPortfolioSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAcceptedPortfolioSharesOutcomeCallable ServiceCatalogClient::ListAcceptedPortfolioSharesCallable(const ListAcceptedPortfolioSharesRequest& request) const
{
  std::shared_ptr<ListAcceptedPortfolioSharesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAcceptedPortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAcceptedPortfolioShares(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListAcceptedPortfolioSharesAsync(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAcceptedPortfolioSharesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAcceptedPortfolioShares(*pRequest), context);
    } );
}

ListBudgetsForResourceOutcome ServiceCatalogClient::ListBudgetsForResource(const ListBudgetsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBudgetsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBudgetsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBudgetsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBudgetsForResourceOutcomeCallable ServiceCatalogClient::ListBudgetsForResourceCallable(const ListBudgetsForResourceRequest& request) const
{
  std::shared_ptr<ListBudgetsForResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListBudgetsForResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListBudgetsForResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListBudgetsForResourceAsync(const ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListBudgetsForResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListBudgetsForResource(*pRequest), context);
    } );
}

ListConstraintsForPortfolioOutcome ServiceCatalogClient::ListConstraintsForPortfolio(const ListConstraintsForPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConstraintsForPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConstraintsForPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListConstraintsForPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConstraintsForPortfolioOutcomeCallable ServiceCatalogClient::ListConstraintsForPortfolioCallable(const ListConstraintsForPortfolioRequest& request) const
{
  std::shared_ptr<ListConstraintsForPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListConstraintsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListConstraintsForPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListConstraintsForPortfolioAsync(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListConstraintsForPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListConstraintsForPortfolio(*pRequest), context);
    } );
}

ListLaunchPathsOutcome ServiceCatalogClient::ListLaunchPaths(const ListLaunchPathsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLaunchPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLaunchPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLaunchPathsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchPathsOutcomeCallable ServiceCatalogClient::ListLaunchPathsCallable(const ListLaunchPathsRequest& request) const
{
  std::shared_ptr<ListLaunchPathsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchPathsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListLaunchPaths(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListLaunchPathsAsync(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListLaunchPathsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListLaunchPaths(*pRequest), context);
    } );
}

ListOrganizationPortfolioAccessOutcome ServiceCatalogClient::ListOrganizationPortfolioAccess(const ListOrganizationPortfolioAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationPortfolioAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrganizationPortfolioAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOrganizationPortfolioAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationPortfolioAccessOutcomeCallable ServiceCatalogClient::ListOrganizationPortfolioAccessCallable(const ListOrganizationPortfolioAccessRequest& request) const
{
  std::shared_ptr<ListOrganizationPortfolioAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListOrganizationPortfolioAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListOrganizationPortfolioAccessAsync(const ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListOrganizationPortfolioAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListOrganizationPortfolioAccess(*pRequest), context);
    } );
}

ListPortfolioAccessOutcome ServiceCatalogClient::ListPortfolioAccess(const ListPortfolioAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPortfolioAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPortfolioAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPortfolioAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfolioAccessOutcomeCallable ServiceCatalogClient::ListPortfolioAccessCallable(const ListPortfolioAccessRequest& request) const
{
  std::shared_ptr<ListPortfolioAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListPortfolioAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListPortfolioAccessAsync(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListPortfolioAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListPortfolioAccess(*pRequest), context);
    } );
}

ListPortfoliosOutcome ServiceCatalogClient::ListPortfolios(const ListPortfoliosRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPortfolios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPortfolios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPortfoliosOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosOutcomeCallable ServiceCatalogClient::ListPortfoliosCallable(const ListPortfoliosRequest& request) const
{
  std::shared_ptr<ListPortfoliosRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListPortfolios(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListPortfoliosAsync(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListPortfoliosRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListPortfolios(*pRequest), context);
    } );
}

ListPortfoliosForProductOutcome ServiceCatalogClient::ListPortfoliosForProduct(const ListPortfoliosForProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPortfoliosForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPortfoliosForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPortfoliosForProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPortfoliosForProductOutcomeCallable ServiceCatalogClient::ListPortfoliosForProductCallable(const ListPortfoliosForProductRequest& request) const
{
  std::shared_ptr<ListPortfoliosForProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosForProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListPortfoliosForProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListPortfoliosForProductAsync(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListPortfoliosForProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListPortfoliosForProduct(*pRequest), context);
    } );
}

ListPrincipalsForPortfolioOutcome ServiceCatalogClient::ListPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrincipalsForPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrincipalsForPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPrincipalsForPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPrincipalsForPortfolioOutcomeCallable ServiceCatalogClient::ListPrincipalsForPortfolioCallable(const ListPrincipalsForPortfolioRequest& request) const
{
  std::shared_ptr<ListPrincipalsForPortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListPrincipalsForPortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListPrincipalsForPortfolioAsync(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListPrincipalsForPortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListPrincipalsForPortfolio(*pRequest), context);
    } );
}

ListProvisionedProductPlansOutcome ServiceCatalogClient::ListProvisionedProductPlans(const ListProvisionedProductPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisionedProductPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProvisionedProductPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProvisionedProductPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisionedProductPlansOutcomeCallable ServiceCatalogClient::ListProvisionedProductPlansCallable(const ListProvisionedProductPlansRequest& request) const
{
  std::shared_ptr<ListProvisionedProductPlansRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedProductPlansOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListProvisionedProductPlans(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListProvisionedProductPlansAsync(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListProvisionedProductPlansRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListProvisionedProductPlans(*pRequest), context);
    } );
}

ListProvisioningArtifactsOutcome ServiceCatalogClient::ListProvisioningArtifacts(const ListProvisioningArtifactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisioningArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProvisioningArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProvisioningArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsCallable(const ListProvisioningArtifactsRequest& request) const
{
  std::shared_ptr<ListProvisioningArtifactsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListProvisioningArtifacts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListProvisioningArtifactsAsync(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListProvisioningArtifactsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListProvisioningArtifacts(*pRequest), context);
    } );
}

ListProvisioningArtifactsForServiceActionOutcome ServiceCatalogClient::ListProvisioningArtifactsForServiceAction(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisioningArtifactsForServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProvisioningArtifactsForServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProvisioningArtifactsForServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningArtifactsForServiceActionOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsForServiceActionCallable(const ListProvisioningArtifactsForServiceActionRequest& request) const
{
  std::shared_ptr<ListProvisioningArtifactsForServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsForServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListProvisioningArtifactsForServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListProvisioningArtifactsForServiceActionAsync(const ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListProvisioningArtifactsForServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListProvisioningArtifactsForServiceAction(*pRequest), context);
    } );
}

ListRecordHistoryOutcome ServiceCatalogClient::ListRecordHistory(const ListRecordHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecordHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecordHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRecordHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecordHistoryOutcomeCallable ServiceCatalogClient::ListRecordHistoryCallable(const ListRecordHistoryRequest& request) const
{
  std::shared_ptr<ListRecordHistoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListRecordHistoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListRecordHistory(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListRecordHistoryAsync(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListRecordHistoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListRecordHistory(*pRequest), context);
    } );
}

ListResourcesForTagOptionOutcome ServiceCatalogClient::ListResourcesForTagOption(const ListResourcesForTagOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourcesForTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourcesForTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourcesForTagOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForTagOptionOutcomeCallable ServiceCatalogClient::ListResourcesForTagOptionCallable(const ListResourcesForTagOptionRequest& request) const
{
  std::shared_ptr<ListResourcesForTagOptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForTagOptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListResourcesForTagOption(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListResourcesForTagOptionAsync(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListResourcesForTagOptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListResourcesForTagOption(*pRequest), context);
    } );
}

ListServiceActionsOutcome ServiceCatalogClient::ListServiceActions(const ListServiceActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServiceActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsOutcomeCallable ServiceCatalogClient::ListServiceActionsCallable(const ListServiceActionsRequest& request) const
{
  std::shared_ptr<ListServiceActionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListServiceActions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListServiceActionsAsync(const ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListServiceActionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListServiceActions(*pRequest), context);
    } );
}

ListServiceActionsForProvisioningArtifactOutcome ServiceCatalogClient::ListServiceActionsForProvisioningArtifact(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceActionsForProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceActionsForProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServiceActionsForProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceActionsForProvisioningArtifactOutcomeCallable ServiceCatalogClient::ListServiceActionsForProvisioningArtifactCallable(const ListServiceActionsForProvisioningArtifactRequest& request) const
{
  std::shared_ptr<ListServiceActionsForProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListServiceActionsForProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListServiceActionsForProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListServiceActionsForProvisioningArtifactAsync(const ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListServiceActionsForProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListServiceActionsForProvisioningArtifact(*pRequest), context);
    } );
}

ListStackInstancesForProvisionedProductOutcome ServiceCatalogClient::ListStackInstancesForProvisionedProduct(const ListStackInstancesForProvisionedProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStackInstancesForProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStackInstancesForProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStackInstancesForProvisionedProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStackInstancesForProvisionedProductOutcomeCallable ServiceCatalogClient::ListStackInstancesForProvisionedProductCallable(const ListStackInstancesForProvisionedProductRequest& request) const
{
  std::shared_ptr<ListStackInstancesForProvisionedProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListStackInstancesForProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListStackInstancesForProvisionedProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListStackInstancesForProvisionedProductAsync(const ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListStackInstancesForProvisionedProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListStackInstancesForProvisionedProduct(*pRequest), context);
    } );
}

ListTagOptionsOutcome ServiceCatalogClient::ListTagOptions(const ListTagOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagOptionsOutcomeCallable ServiceCatalogClient::ListTagOptionsCallable(const ListTagOptionsRequest& request) const
{
  std::shared_ptr<ListTagOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListTagOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListTagOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ListTagOptionsAsync(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListTagOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListTagOptions(*pRequest), context);
    } );
}

ProvisionProductOutcome ServiceCatalogClient::ProvisionProduct(const ProvisionProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionProductOutcomeCallable ServiceCatalogClient::ProvisionProductCallable(const ProvisionProductRequest& request) const
{
  std::shared_ptr<ProvisionProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ProvisionProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ProvisionProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ProvisionProductAsync(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ProvisionProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ProvisionProduct(*pRequest), context);
    } );
}

RejectPortfolioShareOutcome ServiceCatalogClient::RejectPortfolioShare(const RejectPortfolioShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectPortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectPortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectPortfolioShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectPortfolioShareOutcomeCallable ServiceCatalogClient::RejectPortfolioShareCallable(const RejectPortfolioShareRequest& request) const
{
  std::shared_ptr<RejectPortfolioShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectPortfolioShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::RejectPortfolioShareAsync(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectPortfolioShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectPortfolioShare(*pRequest), context);
    } );
}

ScanProvisionedProductsOutcome ServiceCatalogClient::ScanProvisionedProducts(const ScanProvisionedProductsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ScanProvisionedProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ScanProvisionedProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ScanProvisionedProductsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScanProvisionedProductsOutcomeCallable ServiceCatalogClient::ScanProvisionedProductsCallable(const ScanProvisionedProductsRequest& request) const
{
  std::shared_ptr<ScanProvisionedProductsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ScanProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ScanProvisionedProducts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::ScanProvisionedProductsAsync(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ScanProvisionedProductsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ScanProvisionedProducts(*pRequest), context);
    } );
}

SearchProductsOutcome ServiceCatalogClient::SearchProducts(const SearchProductsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchProductsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsOutcomeCallable ServiceCatalogClient::SearchProductsCallable(const SearchProductsRequest& request) const
{
  std::shared_ptr<SearchProductsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchProducts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::SearchProductsAsync(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchProductsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchProducts(*pRequest), context);
    } );
}

SearchProductsAsAdminOutcome ServiceCatalogClient::SearchProductsAsAdmin(const SearchProductsAsAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchProductsAsAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchProductsAsAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchProductsAsAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProductsAsAdminOutcomeCallable ServiceCatalogClient::SearchProductsAsAdminCallable(const SearchProductsAsAdminRequest& request) const
{
  std::shared_ptr<SearchProductsAsAdminRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsAsAdminOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchProductsAsAdmin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::SearchProductsAsAdminAsync(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchProductsAsAdminRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchProductsAsAdmin(*pRequest), context);
    } );
}

SearchProvisionedProductsOutcome ServiceCatalogClient::SearchProvisionedProducts(const SearchProvisionedProductsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchProvisionedProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchProvisionedProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchProvisionedProductsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProvisionedProductsOutcomeCallable ServiceCatalogClient::SearchProvisionedProductsCallable(const SearchProvisionedProductsRequest& request) const
{
  std::shared_ptr<SearchProvisionedProductsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchProvisionedProducts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::SearchProvisionedProductsAsync(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchProvisionedProductsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchProvisionedProducts(*pRequest), context);
    } );
}

TerminateProvisionedProductOutcome ServiceCatalogClient::TerminateProvisionedProduct(const TerminateProvisionedProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateProvisionedProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateProvisionedProductOutcomeCallable ServiceCatalogClient::TerminateProvisionedProductCallable(const TerminateProvisionedProductRequest& request) const
{
  std::shared_ptr<TerminateProvisionedProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TerminateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TerminateProvisionedProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::TerminateProvisionedProductAsync(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TerminateProvisionedProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TerminateProvisionedProduct(*pRequest), context);
    } );
}

UpdateConstraintOutcome ServiceCatalogClient::UpdateConstraint(const UpdateConstraintRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConstraint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateConstraintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConstraintOutcomeCallable ServiceCatalogClient::UpdateConstraintCallable(const UpdateConstraintRequest& request) const
{
  std::shared_ptr<UpdateConstraintRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateConstraintOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateConstraint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateConstraintAsync(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateConstraintRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateConstraint(*pRequest), context);
    } );
}

UpdatePortfolioOutcome ServiceCatalogClient::UpdatePortfolio(const UpdatePortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortfolioOutcomeCallable ServiceCatalogClient::UpdatePortfolioCallable(const UpdatePortfolioRequest& request) const
{
  std::shared_ptr<UpdatePortfolioRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePortfolio(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdatePortfolioAsync(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePortfolioRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePortfolio(*pRequest), context);
    } );
}

UpdatePortfolioShareOutcome ServiceCatalogClient::UpdatePortfolioShare(const UpdatePortfolioShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePortfolioShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePortfolioShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortfolioShareOutcomeCallable ServiceCatalogClient::UpdatePortfolioShareCallable(const UpdatePortfolioShareRequest& request) const
{
  std::shared_ptr<UpdatePortfolioShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePortfolioShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdatePortfolioShareAsync(const UpdatePortfolioShareRequest& request, const UpdatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePortfolioShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePortfolioShare(*pRequest), context);
    } );
}

UpdateProductOutcome ServiceCatalogClient::UpdateProduct(const UpdateProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProductOutcomeCallable ServiceCatalogClient::UpdateProductCallable(const UpdateProductRequest& request) const
{
  std::shared_ptr<UpdateProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateProductAsync(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateProduct(*pRequest), context);
    } );
}

UpdateProvisionedProductOutcome ServiceCatalogClient::UpdateProvisionedProduct(const UpdateProvisionedProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProvisionedProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProvisionedProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductCallable(const UpdateProvisionedProductRequest& request) const
{
  std::shared_ptr<UpdateProvisionedProductRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateProvisionedProduct(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateProvisionedProductAsync(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateProvisionedProductRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateProvisionedProduct(*pRequest), context);
    } );
}

UpdateProvisionedProductPropertiesOutcome ServiceCatalogClient::UpdateProvisionedProductProperties(const UpdateProvisionedProductPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProvisionedProductProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProvisionedProductProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProvisionedProductPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisionedProductPropertiesOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductPropertiesCallable(const UpdateProvisionedProductPropertiesRequest& request) const
{
  std::shared_ptr<UpdateProvisionedProductPropertiesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductPropertiesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateProvisionedProductProperties(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateProvisionedProductPropertiesAsync(const UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateProvisionedProductPropertiesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateProvisionedProductProperties(*pRequest), context);
    } );
}

UpdateProvisioningArtifactOutcome ServiceCatalogClient::UpdateProvisioningArtifact(const UpdateProvisioningArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProvisioningArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProvisioningArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisioningArtifactOutcomeCallable ServiceCatalogClient::UpdateProvisioningArtifactCallable(const UpdateProvisioningArtifactRequest& request) const
{
  std::shared_ptr<UpdateProvisioningArtifactRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateProvisioningArtifact(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateProvisioningArtifactAsync(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateProvisioningArtifactRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateProvisioningArtifact(*pRequest), context);
    } );
}

UpdateServiceActionOutcome ServiceCatalogClient::UpdateServiceAction(const UpdateServiceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateServiceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceActionOutcomeCallable ServiceCatalogClient::UpdateServiceActionCallable(const UpdateServiceActionRequest& request) const
{
  std::shared_ptr<UpdateServiceActionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceActionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateServiceAction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateServiceActionAsync(const UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateServiceActionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateServiceAction(*pRequest), context);
    } );
}

UpdateTagOptionOutcome ServiceCatalogClient::UpdateTagOption(const UpdateTagOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTagOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTagOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTagOptionOutcomeCallable ServiceCatalogClient::UpdateTagOptionCallable(const UpdateTagOptionRequest& request) const
{
  std::shared_ptr<UpdateTagOptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagOptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateTagOption(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void ServiceCatalogClient::UpdateTagOptionAsync(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateTagOptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateTagOption(*pRequest), context);
    } );
}

