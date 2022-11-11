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

#include <aws/license-manager/LicenseManagerClient.h>
#include <aws/license-manager/LicenseManagerErrorMarshaller.h>
#include <aws/license-manager/LicenseManagerEndpointProvider.h>
#include <aws/license-manager/model/AcceptGrantRequest.h>
#include <aws/license-manager/model/CheckInLicenseRequest.h>
#include <aws/license-manager/model/CheckoutBorrowLicenseRequest.h>
#include <aws/license-manager/model/CheckoutLicenseRequest.h>
#include <aws/license-manager/model/CreateGrantRequest.h>
#include <aws/license-manager/model/CreateGrantVersionRequest.h>
#include <aws/license-manager/model/CreateLicenseRequest.h>
#include <aws/license-manager/model/CreateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceRequest.h>
#include <aws/license-manager/model/CreateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/CreateLicenseVersionRequest.h>
#include <aws/license-manager/model/CreateTokenRequest.h>
#include <aws/license-manager/model/DeleteGrantRequest.h>
#include <aws/license-manager/model/DeleteLicenseRequest.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationRequest.h>
#include <aws/license-manager/model/DeleteLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/DeleteTokenRequest.h>
#include <aws/license-manager/model/ExtendLicenseConsumptionRequest.h>
#include <aws/license-manager/model/GetAccessTokenRequest.h>
#include <aws/license-manager/model/GetGrantRequest.h>
#include <aws/license-manager/model/GetLicenseRequest.h>
#include <aws/license-manager/model/GetLicenseConfigurationRequest.h>
#include <aws/license-manager/model/GetLicenseConversionTaskRequest.h>
#include <aws/license-manager/model/GetLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/GetLicenseUsageRequest.h>
#include <aws/license-manager/model/GetServiceSettingsRequest.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/ListDistributedGrantsRequest.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsRequest.h>
#include <aws/license-manager/model/ListLicenseConfigurationsRequest.h>
#include <aws/license-manager/model/ListLicenseConversionTasksRequest.h>
#include <aws/license-manager/model/ListLicenseManagerReportGeneratorsRequest.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/ListLicenseVersionsRequest.h>
#include <aws/license-manager/model/ListLicensesRequest.h>
#include <aws/license-manager/model/ListReceivedGrantsRequest.h>
#include <aws/license-manager/model/ListReceivedGrantsForOrganizationRequest.h>
#include <aws/license-manager/model/ListReceivedLicensesRequest.h>
#include <aws/license-manager/model/ListReceivedLicensesForOrganizationRequest.h>
#include <aws/license-manager/model/ListResourceInventoryRequest.h>
#include <aws/license-manager/model/ListTagsForResourceRequest.h>
#include <aws/license-manager/model/ListTokensRequest.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/RejectGrantRequest.h>
#include <aws/license-manager/model/TagResourceRequest.h>
#include <aws/license-manager/model/UntagResourceRequest.h>
#include <aws/license-manager/model/UpdateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/UpdateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManager;
using namespace Aws::LicenseManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LicenseManagerClient::SERVICE_NAME = "license-manager";
const char* LicenseManagerClient::ALLOCATION_TAG = "LicenseManagerClient";

LicenseManagerClient::LicenseManagerClient(const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider,
                                           const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider,
                                           const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LicenseManagerClient::LicenseManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LicenseManagerClient::~LicenseManagerClient()
{
}

std::shared_ptr<LicenseManagerEndpointProviderBase>& LicenseManagerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LicenseManagerClient::init(const LicenseManager::LicenseManagerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("License Manager");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LicenseManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptGrantOutcome LicenseManagerClient::AcceptGrant(const AcceptGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptGrantOutcomeCallable LicenseManagerClient::AcceptGrantCallable(const AcceptGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::AcceptGrantAsync(const AcceptGrantRequest& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptGrant(request), context);
    } );
}

CheckInLicenseOutcome LicenseManagerClient::CheckInLicense(const CheckInLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckInLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckInLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckInLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckInLicenseOutcomeCallable LicenseManagerClient::CheckInLicenseCallable(const CheckInLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckInLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckInLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CheckInLicenseAsync(const CheckInLicenseRequest& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CheckInLicense(request), context);
    } );
}

CheckoutBorrowLicenseOutcome LicenseManagerClient::CheckoutBorrowLicense(const CheckoutBorrowLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckoutBorrowLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckoutBorrowLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckoutBorrowLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckoutBorrowLicenseOutcomeCallable LicenseManagerClient::CheckoutBorrowLicenseCallable(const CheckoutBorrowLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckoutBorrowLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckoutBorrowLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CheckoutBorrowLicenseAsync(const CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CheckoutBorrowLicense(request), context);
    } );
}

CheckoutLicenseOutcome LicenseManagerClient::CheckoutLicense(const CheckoutLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckoutLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckoutLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckoutLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckoutLicenseOutcomeCallable LicenseManagerClient::CheckoutLicenseCallable(const CheckoutLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckoutLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckoutLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CheckoutLicenseAsync(const CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CheckoutLicense(request), context);
    } );
}

CreateGrantOutcome LicenseManagerClient::CreateGrant(const CreateGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGrantOutcomeCallable LicenseManagerClient::CreateGrantCallable(const CreateGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateGrantAsync(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGrant(request), context);
    } );
}

CreateGrantVersionOutcome LicenseManagerClient::CreateGrantVersion(const CreateGrantVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGrantVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGrantVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGrantVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGrantVersionOutcomeCallable LicenseManagerClient::CreateGrantVersionCallable(const CreateGrantVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrantVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateGrantVersionAsync(const CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGrantVersion(request), context);
    } );
}

CreateLicenseOutcome LicenseManagerClient::CreateLicense(const CreateLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseOutcomeCallable LicenseManagerClient::CreateLicenseCallable(const CreateLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLicense(request), context);
    } );
}

CreateLicenseConfigurationOutcome LicenseManagerClient::CreateLicenseConfiguration(const CreateLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseConfigurationOutcomeCallable LicenseManagerClient::CreateLicenseConfigurationCallable(const CreateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseConfigurationAsync(const CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLicenseConfiguration(request), context);
    } );
}

CreateLicenseConversionTaskForResourceOutcome LicenseManagerClient::CreateLicenseConversionTaskForResource(const CreateLicenseConversionTaskForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseConversionTaskForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicenseConversionTaskForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLicenseConversionTaskForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseConversionTaskForResourceOutcomeCallable LicenseManagerClient::CreateLicenseConversionTaskForResourceCallable(const CreateLicenseConversionTaskForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseConversionTaskForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseConversionTaskForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseConversionTaskForResourceAsync(const CreateLicenseConversionTaskForResourceRequest& request, const CreateLicenseConversionTaskForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLicenseConversionTaskForResource(request), context);
    } );
}

CreateLicenseManagerReportGeneratorOutcome LicenseManagerClient::CreateLicenseManagerReportGenerator(const CreateLicenseManagerReportGeneratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLicenseManagerReportGeneratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::CreateLicenseManagerReportGeneratorCallable(const CreateLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseManagerReportGeneratorAsync(const CreateLicenseManagerReportGeneratorRequest& request, const CreateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLicenseManagerReportGenerator(request), context);
    } );
}

CreateLicenseVersionOutcome LicenseManagerClient::CreateLicenseVersion(const CreateLicenseVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicenseVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLicenseVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseVersionOutcomeCallable LicenseManagerClient::CreateLicenseVersionCallable(const CreateLicenseVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseVersionAsync(const CreateLicenseVersionRequest& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLicenseVersion(request), context);
    } );
}

CreateTokenOutcome LicenseManagerClient::CreateToken(const CreateTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTokenOutcomeCallable LicenseManagerClient::CreateTokenCallable(const CreateTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateTokenAsync(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateToken(request), context);
    } );
}

DeleteGrantOutcome LicenseManagerClient::DeleteGrant(const DeleteGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGrantOutcomeCallable LicenseManagerClient::DeleteGrantCallable(const DeleteGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteGrantAsync(const DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGrant(request), context);
    } );
}

DeleteLicenseOutcome LicenseManagerClient::DeleteLicense(const DeleteLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseOutcomeCallable LicenseManagerClient::DeleteLicenseCallable(const DeleteLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteLicenseAsync(const DeleteLicenseRequest& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLicense(request), context);
    } );
}

DeleteLicenseConfigurationOutcome LicenseManagerClient::DeleteLicenseConfiguration(const DeleteLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseConfigurationOutcomeCallable LicenseManagerClient::DeleteLicenseConfigurationCallable(const DeleteLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteLicenseConfigurationAsync(const DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLicenseConfiguration(request), context);
    } );
}

DeleteLicenseManagerReportGeneratorOutcome LicenseManagerClient::DeleteLicenseManagerReportGenerator(const DeleteLicenseManagerReportGeneratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLicenseManagerReportGeneratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::DeleteLicenseManagerReportGeneratorCallable(const DeleteLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteLicenseManagerReportGeneratorAsync(const DeleteLicenseManagerReportGeneratorRequest& request, const DeleteLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLicenseManagerReportGenerator(request), context);
    } );
}

DeleteTokenOutcome LicenseManagerClient::DeleteToken(const DeleteTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTokenOutcomeCallable LicenseManagerClient::DeleteTokenCallable(const DeleteTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteTokenAsync(const DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteToken(request), context);
    } );
}

ExtendLicenseConsumptionOutcome LicenseManagerClient::ExtendLicenseConsumption(const ExtendLicenseConsumptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExtendLicenseConsumption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExtendLicenseConsumption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExtendLicenseConsumptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExtendLicenseConsumptionOutcomeCallable LicenseManagerClient::ExtendLicenseConsumptionCallable(const ExtendLicenseConsumptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExtendLicenseConsumptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExtendLicenseConsumption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ExtendLicenseConsumptionAsync(const ExtendLicenseConsumptionRequest& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExtendLicenseConsumption(request), context);
    } );
}

GetAccessTokenOutcome LicenseManagerClient::GetAccessToken(const GetAccessTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccessTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessTokenOutcomeCallable LicenseManagerClient::GetAccessTokenCallable(const GetAccessTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetAccessTokenAsync(const GetAccessTokenRequest& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessToken(request), context);
    } );
}

GetGrantOutcome LicenseManagerClient::GetGrant(const GetGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGrantOutcomeCallable LicenseManagerClient::GetGrantCallable(const GetGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetGrantAsync(const GetGrantRequest& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGrant(request), context);
    } );
}

GetLicenseOutcome LicenseManagerClient::GetLicense(const GetLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseOutcomeCallable LicenseManagerClient::GetLicenseCallable(const GetLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseAsync(const GetLicenseRequest& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLicense(request), context);
    } );
}

GetLicenseConfigurationOutcome LicenseManagerClient::GetLicenseConfiguration(const GetLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseConfigurationOutcomeCallable LicenseManagerClient::GetLicenseConfigurationCallable(const GetLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseConfigurationAsync(const GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLicenseConfiguration(request), context);
    } );
}

GetLicenseConversionTaskOutcome LicenseManagerClient::GetLicenseConversionTask(const GetLicenseConversionTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicenseConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicenseConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLicenseConversionTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseConversionTaskOutcomeCallable LicenseManagerClient::GetLicenseConversionTaskCallable(const GetLicenseConversionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseConversionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseConversionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseConversionTaskAsync(const GetLicenseConversionTaskRequest& request, const GetLicenseConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLicenseConversionTask(request), context);
    } );
}

GetLicenseManagerReportGeneratorOutcome LicenseManagerClient::GetLicenseManagerReportGenerator(const GetLicenseManagerReportGeneratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLicenseManagerReportGeneratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::GetLicenseManagerReportGeneratorCallable(const GetLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseManagerReportGeneratorAsync(const GetLicenseManagerReportGeneratorRequest& request, const GetLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLicenseManagerReportGenerator(request), context);
    } );
}

GetLicenseUsageOutcome LicenseManagerClient::GetLicenseUsage(const GetLicenseUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicenseUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicenseUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLicenseUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseUsageOutcomeCallable LicenseManagerClient::GetLicenseUsageCallable(const GetLicenseUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseUsageAsync(const GetLicenseUsageRequest& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLicenseUsage(request), context);
    } );
}

GetServiceSettingsOutcome LicenseManagerClient::GetServiceSettings(const GetServiceSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetServiceSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceSettingsOutcomeCallable LicenseManagerClient::GetServiceSettingsCallable(const GetServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetServiceSettingsAsync(const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceSettings(request), context);
    } );
}

ListAssociationsForLicenseConfigurationOutcome LicenseManagerClient::ListAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociationsForLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociationsForLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociationsForLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListAssociationsForLicenseConfigurationCallable(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociationsForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListAssociationsForLicenseConfigurationAsync(const ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociationsForLicenseConfiguration(request), context);
    } );
}

ListDistributedGrantsOutcome LicenseManagerClient::ListDistributedGrants(const ListDistributedGrantsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributedGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributedGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDistributedGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDistributedGrantsOutcomeCallable LicenseManagerClient::ListDistributedGrantsCallable(const ListDistributedGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributedGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributedGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListDistributedGrantsAsync(const ListDistributedGrantsRequest& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDistributedGrants(request), context);
    } );
}

ListFailuresForLicenseConfigurationOperationsOutcome LicenseManagerClient::ListFailuresForLicenseConfigurationOperations(const ListFailuresForLicenseConfigurationOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFailuresForLicenseConfigurationOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFailuresForLicenseConfigurationOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFailuresForLicenseConfigurationOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFailuresForLicenseConfigurationOperationsOutcomeCallable LicenseManagerClient::ListFailuresForLicenseConfigurationOperationsCallable(const ListFailuresForLicenseConfigurationOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFailuresForLicenseConfigurationOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFailuresForLicenseConfigurationOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListFailuresForLicenseConfigurationOperationsAsync(const ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFailuresForLicenseConfigurationOperations(request), context);
    } );
}

ListLicenseConfigurationsOutcome LicenseManagerClient::ListLicenseConfigurations(const ListLicenseConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicenseConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseConfigurationsOutcomeCallable LicenseManagerClient::ListLicenseConfigurationsCallable(const ListLicenseConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseConfigurationsAsync(const ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenseConfigurations(request), context);
    } );
}

ListLicenseConversionTasksOutcome LicenseManagerClient::ListLicenseConversionTasks(const ListLicenseConversionTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicenseConversionTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseConversionTasksOutcomeCallable LicenseManagerClient::ListLicenseConversionTasksCallable(const ListLicenseConversionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseConversionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseConversionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseConversionTasksAsync(const ListLicenseConversionTasksRequest& request, const ListLicenseConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenseConversionTasks(request), context);
    } );
}

ListLicenseManagerReportGeneratorsOutcome LicenseManagerClient::ListLicenseManagerReportGenerators(const ListLicenseManagerReportGeneratorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseManagerReportGenerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseManagerReportGenerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicenseManagerReportGeneratorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseManagerReportGeneratorsOutcomeCallable LicenseManagerClient::ListLicenseManagerReportGeneratorsCallable(const ListLicenseManagerReportGeneratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseManagerReportGeneratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseManagerReportGenerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseManagerReportGeneratorsAsync(const ListLicenseManagerReportGeneratorsRequest& request, const ListLicenseManagerReportGeneratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenseManagerReportGenerators(request), context);
    } );
}

ListLicenseSpecificationsForResourceOutcome LicenseManagerClient::ListLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseSpecificationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseSpecificationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicenseSpecificationsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::ListLicenseSpecificationsForResourceCallable(const ListLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseSpecificationsForResourceAsync(const ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenseSpecificationsForResource(request), context);
    } );
}

ListLicenseVersionsOutcome LicenseManagerClient::ListLicenseVersions(const ListLicenseVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicenseVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseVersionsOutcomeCallable LicenseManagerClient::ListLicenseVersionsCallable(const ListLicenseVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseVersionsAsync(const ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenseVersions(request), context);
    } );
}

ListLicensesOutcome LicenseManagerClient::ListLicenses(const ListLicensesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLicensesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicensesOutcomeCallable LicenseManagerClient::ListLicensesCallable(const ListLicensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicensesAsync(const ListLicensesRequest& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLicenses(request), context);
    } );
}

ListReceivedGrantsOutcome LicenseManagerClient::ListReceivedGrants(const ListReceivedGrantsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReceivedGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReceivedGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReceivedGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedGrantsOutcomeCallable LicenseManagerClient::ListReceivedGrantsCallable(const ListReceivedGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListReceivedGrantsAsync(const ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReceivedGrants(request), context);
    } );
}

ListReceivedGrantsForOrganizationOutcome LicenseManagerClient::ListReceivedGrantsForOrganization(const ListReceivedGrantsForOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReceivedGrantsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReceivedGrantsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReceivedGrantsForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedGrantsForOrganizationOutcomeCallable LicenseManagerClient::ListReceivedGrantsForOrganizationCallable(const ListReceivedGrantsForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedGrantsForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedGrantsForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListReceivedGrantsForOrganizationAsync(const ListReceivedGrantsForOrganizationRequest& request, const ListReceivedGrantsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReceivedGrantsForOrganization(request), context);
    } );
}

ListReceivedLicensesOutcome LicenseManagerClient::ListReceivedLicenses(const ListReceivedLicensesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReceivedLicenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReceivedLicenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReceivedLicensesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedLicensesOutcomeCallable LicenseManagerClient::ListReceivedLicensesCallable(const ListReceivedLicensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedLicensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedLicenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListReceivedLicensesAsync(const ListReceivedLicensesRequest& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReceivedLicenses(request), context);
    } );
}

ListReceivedLicensesForOrganizationOutcome LicenseManagerClient::ListReceivedLicensesForOrganization(const ListReceivedLicensesForOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReceivedLicensesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReceivedLicensesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReceivedLicensesForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedLicensesForOrganizationOutcomeCallable LicenseManagerClient::ListReceivedLicensesForOrganizationCallable(const ListReceivedLicensesForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedLicensesForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedLicensesForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListReceivedLicensesForOrganizationAsync(const ListReceivedLicensesForOrganizationRequest& request, const ListReceivedLicensesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReceivedLicensesForOrganization(request), context);
    } );
}

ListResourceInventoryOutcome LicenseManagerClient::ListResourceInventory(const ListResourceInventoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceInventoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceInventoryOutcomeCallable LicenseManagerClient::ListResourceInventoryCallable(const ListResourceInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListResourceInventoryAsync(const ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceInventory(request), context);
    } );
}

ListTagsForResourceOutcome LicenseManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LicenseManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTokensOutcome LicenseManagerClient::ListTokens(const ListTokensRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTokensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTokensOutcomeCallable LicenseManagerClient::ListTokensCallable(const ListTokensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTokensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTokens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListTokensAsync(const ListTokensRequest& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTokens(request), context);
    } );
}

ListUsageForLicenseConfigurationOutcome LicenseManagerClient::ListUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsageForLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsageForLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsageForLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsageForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListUsageForLicenseConfigurationCallable(const ListUsageForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsageForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsageForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListUsageForLicenseConfigurationAsync(const ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUsageForLicenseConfiguration(request), context);
    } );
}

RejectGrantOutcome LicenseManagerClient::RejectGrant(const RejectGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectGrantOutcomeCallable LicenseManagerClient::RejectGrantCallable(const RejectGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::RejectGrantAsync(const RejectGrantRequest& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectGrant(request), context);
    } );
}

TagResourceOutcome LicenseManagerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LicenseManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome LicenseManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LicenseManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLicenseConfigurationOutcome LicenseManagerClient::UpdateLicenseConfiguration(const UpdateLicenseConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLicenseConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLicenseConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseConfigurationOutcomeCallable LicenseManagerClient::UpdateLicenseConfigurationCallable(const UpdateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateLicenseConfigurationAsync(const UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLicenseConfiguration(request), context);
    } );
}

UpdateLicenseManagerReportGeneratorOutcome LicenseManagerClient::UpdateLicenseManagerReportGenerator(const UpdateLicenseManagerReportGeneratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLicenseManagerReportGenerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLicenseManagerReportGeneratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::UpdateLicenseManagerReportGeneratorCallable(const UpdateLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateLicenseManagerReportGeneratorAsync(const UpdateLicenseManagerReportGeneratorRequest& request, const UpdateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLicenseManagerReportGenerator(request), context);
    } );
}

UpdateLicenseSpecificationsForResourceOutcome LicenseManagerClient::UpdateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLicenseSpecificationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLicenseSpecificationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLicenseSpecificationsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::UpdateLicenseSpecificationsForResourceCallable(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateLicenseSpecificationsForResourceAsync(const UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLicenseSpecificationsForResource(request), context);
    } );
}

UpdateServiceSettingsOutcome LicenseManagerClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateServiceSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceSettingsOutcomeCallable LicenseManagerClient::UpdateServiceSettingsCallable(const UpdateServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateServiceSettingsAsync(const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceSettings(request), context);
    } );
}

