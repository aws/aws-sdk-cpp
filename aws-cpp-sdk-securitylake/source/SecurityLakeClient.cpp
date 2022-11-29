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

#include <aws/securitylake/SecurityLakeClient.h>
#include <aws/securitylake/SecurityLakeErrorMarshaller.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/model/CreateAwsLogSourceRequest.h>
#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/securitylake/model/CreateDatalakeRequest.h>
#include <aws/securitylake/model/CreateDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/CreateDatalakeDelegatedAdminRequest.h>
#include <aws/securitylake/model/CreateDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/securitylake/model/CreateSubscriptionNotificationConfigurationRequest.h>
#include <aws/securitylake/model/DeleteAwsLogSourceRequest.h>
#include <aws/securitylake/model/DeleteCustomLogSourceRequest.h>
#include <aws/securitylake/model/DeleteDatalakeRequest.h>
#include <aws/securitylake/model/DeleteDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/DeleteDatalakeDelegatedAdminRequest.h>
#include <aws/securitylake/model/DeleteDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/DeleteSubscriberRequest.h>
#include <aws/securitylake/model/DeleteSubscriptionNotificationConfigurationRequest.h>
#include <aws/securitylake/model/GetDatalakeRequest.h>
#include <aws/securitylake/model/GetDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/GetDatalakeExceptionsExpiryRequest.h>
#include <aws/securitylake/model/GetDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/GetDatalakeStatusRequest.h>
#include <aws/securitylake/model/GetSubscriberRequest.h>
#include <aws/securitylake/model/ListDatalakeExceptionsRequest.h>
#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/securitylake/model/ListSubscribersRequest.h>
#include <aws/securitylake/model/UpdateDatalakeRequest.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsExpiryRequest.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/UpdateSubscriberRequest.h>
#include <aws/securitylake/model/UpdateSubscriptionNotificationConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityLake;
using namespace Aws::SecurityLake::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SecurityLakeClient::SERVICE_NAME = "securitylake";
const char* SecurityLakeClient::ALLOCATION_TAG = "SecurityLakeClient";

SecurityLakeClient::SecurityLakeClient(const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SecurityLakeClient::SecurityLakeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SecurityLakeClient::~SecurityLakeClient()
{
}

std::shared_ptr<SecurityLakeEndpointProviderBase>& SecurityLakeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SecurityLakeClient::init(const SecurityLake::SecurityLakeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SecurityLake");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SecurityLakeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAwsLogSourceOutcome SecurityLakeClient::CreateAwsLogSource(const CreateAwsLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/aws");
  return CreateAwsLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAwsLogSourceOutcomeCallable SecurityLakeClient::CreateAwsLogSourceCallable(const CreateAwsLogSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAwsLogSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAwsLogSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateAwsLogSourceAsync(const CreateAwsLogSourceRequest& request, const CreateAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAwsLogSource(request), context);
    } );
}

CreateCustomLogSourceOutcome SecurityLakeClient::CreateCustomLogSource(const CreateCustomLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/custom");
  return CreateCustomLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomLogSourceOutcomeCallable SecurityLakeClient::CreateCustomLogSourceCallable(const CreateCustomLogSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomLogSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomLogSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateCustomLogSourceAsync(const CreateCustomLogSourceRequest& request, const CreateCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomLogSource(request), context);
    } );
}

CreateDatalakeOutcome SecurityLakeClient::CreateDatalake(const CreateDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return CreateDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeOutcomeCallable SecurityLakeClient::CreateDatalakeCallable(const CreateDatalakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatalakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatalake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateDatalakeAsync(const CreateDatalakeRequest& request, const CreateDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatalake(request), context);
    } );
}

CreateDatalakeAutoEnableOutcome SecurityLakeClient::CreateDatalakeAutoEnable(const CreateDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable");
  return CreateDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeAutoEnableOutcomeCallable SecurityLakeClient::CreateDatalakeAutoEnableCallable(const CreateDatalakeAutoEnableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatalakeAutoEnableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatalakeAutoEnable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateDatalakeAutoEnableAsync(const CreateDatalakeAutoEnableRequest& request, const CreateDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatalakeAutoEnable(request), context);
    } );
}

CreateDatalakeDelegatedAdminOutcome SecurityLakeClient::CreateDatalakeDelegatedAdmin(const CreateDatalakeDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate");
  return CreateDatalakeDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeDelegatedAdminOutcomeCallable SecurityLakeClient::CreateDatalakeDelegatedAdminCallable(const CreateDatalakeDelegatedAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatalakeDelegatedAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatalakeDelegatedAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateDatalakeDelegatedAdminAsync(const CreateDatalakeDelegatedAdminRequest& request, const CreateDatalakeDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatalakeDelegatedAdmin(request), context);
    } );
}

CreateDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::CreateDatalakeExceptionsSubscription(const CreateDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return CreateDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeExceptionsSubscriptionOutcomeCallable SecurityLakeClient::CreateDatalakeExceptionsSubscriptionCallable(const CreateDatalakeExceptionsSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatalakeExceptionsSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatalakeExceptionsSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateDatalakeExceptionsSubscriptionAsync(const CreateDatalakeExceptionsSubscriptionRequest& request, const CreateDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatalakeExceptionsSubscription(request), context);
    } );
}

CreateSubscriberOutcome SecurityLakeClient::CreateSubscriber(const CreateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return CreateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriberOutcomeCallable SecurityLakeClient::CreateSubscriberCallable(const CreateSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateSubscriberAsync(const CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSubscriber(request), context);
    } );
}

CreateSubscriptionNotificationConfigurationOutcome SecurityLakeClient::CreateSubscriptionNotificationConfiguration(const CreateSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return CreateSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return CreateSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionNotificationConfigurationOutcomeCallable SecurityLakeClient::CreateSubscriptionNotificationConfigurationCallable(const CreateSubscriptionNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriptionNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::CreateSubscriptionNotificationConfigurationAsync(const CreateSubscriptionNotificationConfigurationRequest& request, const CreateSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSubscriptionNotificationConfiguration(request), context);
    } );
}

DeleteAwsLogSourceOutcome SecurityLakeClient::DeleteAwsLogSource(const DeleteAwsLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/aws/delete");
  return DeleteAwsLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAwsLogSourceOutcomeCallable SecurityLakeClient::DeleteAwsLogSourceCallable(const DeleteAwsLogSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAwsLogSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAwsLogSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteAwsLogSourceAsync(const DeleteAwsLogSourceRequest& request, const DeleteAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAwsLogSource(request), context);
    } );
}

DeleteCustomLogSourceOutcome SecurityLakeClient::DeleteCustomLogSource(const DeleteCustomLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomLogSource", "Required field: CustomSourceName, is not set");
    return DeleteCustomLogSourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/custom");
  return DeleteCustomLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomLogSourceOutcomeCallable SecurityLakeClient::DeleteCustomLogSourceCallable(const DeleteCustomLogSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomLogSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomLogSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteCustomLogSourceAsync(const DeleteCustomLogSourceRequest& request, const DeleteCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomLogSource(request), context);
    } );
}

DeleteDatalakeOutcome SecurityLakeClient::DeleteDatalake(const DeleteDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return DeleteDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeOutcomeCallable SecurityLakeClient::DeleteDatalakeCallable(const DeleteDatalakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatalakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatalake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteDatalakeAsync(const DeleteDatalakeRequest& request, const DeleteDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatalake(request), context);
    } );
}

DeleteDatalakeAutoEnableOutcome SecurityLakeClient::DeleteDatalakeAutoEnable(const DeleteDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable/delete");
  return DeleteDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeAutoEnableOutcomeCallable SecurityLakeClient::DeleteDatalakeAutoEnableCallable(const DeleteDatalakeAutoEnableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatalakeAutoEnableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatalakeAutoEnable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteDatalakeAutoEnableAsync(const DeleteDatalakeAutoEnableRequest& request, const DeleteDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatalakeAutoEnable(request), context);
    } );
}

DeleteDatalakeDelegatedAdminOutcome SecurityLakeClient::DeleteDatalakeDelegatedAdmin(const DeleteDatalakeDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatalakeDelegatedAdmin", "Required field: Account, is not set");
    return DeleteDatalakeDelegatedAdminOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Account]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccount());
  return DeleteDatalakeDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeDelegatedAdminOutcomeCallable SecurityLakeClient::DeleteDatalakeDelegatedAdminCallable(const DeleteDatalakeDelegatedAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatalakeDelegatedAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatalakeDelegatedAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteDatalakeDelegatedAdminAsync(const DeleteDatalakeDelegatedAdminRequest& request, const DeleteDatalakeDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatalakeDelegatedAdmin(request), context);
    } );
}

DeleteDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::DeleteDatalakeExceptionsSubscription(const DeleteDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return DeleteDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeExceptionsSubscriptionOutcomeCallable SecurityLakeClient::DeleteDatalakeExceptionsSubscriptionCallable(const DeleteDatalakeExceptionsSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatalakeExceptionsSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatalakeExceptionsSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteDatalakeExceptionsSubscriptionAsync(const DeleteDatalakeExceptionsSubscriptionRequest& request, const DeleteDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatalakeExceptionsSubscription(request), context);
    } );
}

DeleteSubscriberOutcome SecurityLakeClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriber", "Required field: Id, is not set");
    return DeleteSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return DeleteSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriberOutcomeCallable SecurityLakeClient::DeleteSubscriberCallable(const DeleteSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteSubscriberAsync(const DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSubscriber(request), context);
    } );
}

DeleteSubscriptionNotificationConfigurationOutcome SecurityLakeClient::DeleteSubscriptionNotificationConfiguration(const DeleteSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return DeleteSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return DeleteSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriptionNotificationConfigurationOutcomeCallable SecurityLakeClient::DeleteSubscriptionNotificationConfigurationCallable(const DeleteSubscriptionNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriptionNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriptionNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::DeleteSubscriptionNotificationConfigurationAsync(const DeleteSubscriptionNotificationConfigurationRequest& request, const DeleteSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSubscriptionNotificationConfiguration(request), context);
    } );
}

GetDatalakeOutcome SecurityLakeClient::GetDatalake(const GetDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return GetDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeOutcomeCallable SecurityLakeClient::GetDatalakeCallable(const GetDatalakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatalakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatalake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetDatalakeAsync(const GetDatalakeRequest& request, const GetDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDatalake(request), context);
    } );
}

GetDatalakeAutoEnableOutcome SecurityLakeClient::GetDatalakeAutoEnable(const GetDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable");
  return GetDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeAutoEnableOutcomeCallable SecurityLakeClient::GetDatalakeAutoEnableCallable(const GetDatalakeAutoEnableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatalakeAutoEnableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatalakeAutoEnable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetDatalakeAutoEnableAsync(const GetDatalakeAutoEnableRequest& request, const GetDatalakeAutoEnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDatalakeAutoEnable(request), context);
    } );
}

GetDatalakeExceptionsExpiryOutcome SecurityLakeClient::GetDatalakeExceptionsExpiry(const GetDatalakeExceptionsExpiryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/expiry");
  return GetDatalakeExceptionsExpiryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeExceptionsExpiryOutcomeCallable SecurityLakeClient::GetDatalakeExceptionsExpiryCallable(const GetDatalakeExceptionsExpiryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatalakeExceptionsExpiryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatalakeExceptionsExpiry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetDatalakeExceptionsExpiryAsync(const GetDatalakeExceptionsExpiryRequest& request, const GetDatalakeExceptionsExpiryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDatalakeExceptionsExpiry(request), context);
    } );
}

GetDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::GetDatalakeExceptionsSubscription(const GetDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return GetDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeExceptionsSubscriptionOutcomeCallable SecurityLakeClient::GetDatalakeExceptionsSubscriptionCallable(const GetDatalakeExceptionsSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatalakeExceptionsSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatalakeExceptionsSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetDatalakeExceptionsSubscriptionAsync(const GetDatalakeExceptionsSubscriptionRequest& request, const GetDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDatalakeExceptionsSubscription(request), context);
    } );
}

GetDatalakeStatusOutcome SecurityLakeClient::GetDatalakeStatus(const GetDatalakeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/status");
  return GetDatalakeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeStatusOutcomeCallable SecurityLakeClient::GetDatalakeStatusCallable(const GetDatalakeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatalakeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatalakeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetDatalakeStatusAsync(const GetDatalakeStatusRequest& request, const GetDatalakeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDatalakeStatus(request), context);
    } );
}

GetSubscriberOutcome SecurityLakeClient::GetSubscriber(const GetSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriber", "Required field: Id, is not set");
    return GetSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSubscriberOutcomeCallable SecurityLakeClient::GetSubscriberCallable(const GetSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::GetSubscriberAsync(const GetSubscriberRequest& request, const GetSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSubscriber(request), context);
    } );
}

ListDatalakeExceptionsOutcome SecurityLakeClient::ListDatalakeExceptions(const ListDatalakeExceptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatalakeExceptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatalakeExceptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions");
  return ListDatalakeExceptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatalakeExceptionsOutcomeCallable SecurityLakeClient::ListDatalakeExceptionsCallable(const ListDatalakeExceptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatalakeExceptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatalakeExceptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::ListDatalakeExceptionsAsync(const ListDatalakeExceptionsRequest& request, const ListDatalakeExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatalakeExceptions(request), context);
    } );
}

ListLogSourcesOutcome SecurityLakeClient::ListLogSources(const ListLogSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLogSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLogSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/list");
  return ListLogSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLogSourcesOutcomeCallable SecurityLakeClient::ListLogSourcesCallable(const ListLogSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLogSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLogSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::ListLogSourcesAsync(const ListLogSourcesRequest& request, const ListLogSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLogSources(request), context);
    } );
}

ListSubscribersOutcome SecurityLakeClient::ListSubscribers(const ListSubscribersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscribers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscribers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return ListSubscribersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribersOutcomeCallable SecurityLakeClient::ListSubscribersCallable(const ListSubscribersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::ListSubscribersAsync(const ListSubscribersRequest& request, const ListSubscribersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscribers(request), context);
    } );
}

UpdateDatalakeOutcome SecurityLakeClient::UpdateDatalake(const UpdateDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return UpdateDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeOutcomeCallable SecurityLakeClient::UpdateDatalakeCallable(const UpdateDatalakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatalakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatalake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::UpdateDatalakeAsync(const UpdateDatalakeRequest& request, const UpdateDatalakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDatalake(request), context);
    } );
}

UpdateDatalakeExceptionsExpiryOutcome SecurityLakeClient::UpdateDatalakeExceptionsExpiry(const UpdateDatalakeExceptionsExpiryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/expiry");
  return UpdateDatalakeExceptionsExpiryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeExceptionsExpiryOutcomeCallable SecurityLakeClient::UpdateDatalakeExceptionsExpiryCallable(const UpdateDatalakeExceptionsExpiryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatalakeExceptionsExpiryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatalakeExceptionsExpiry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::UpdateDatalakeExceptionsExpiryAsync(const UpdateDatalakeExceptionsExpiryRequest& request, const UpdateDatalakeExceptionsExpiryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDatalakeExceptionsExpiry(request), context);
    } );
}

UpdateDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::UpdateDatalakeExceptionsSubscription(const UpdateDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return UpdateDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeExceptionsSubscriptionOutcomeCallable SecurityLakeClient::UpdateDatalakeExceptionsSubscriptionCallable(const UpdateDatalakeExceptionsSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatalakeExceptionsSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatalakeExceptionsSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::UpdateDatalakeExceptionsSubscriptionAsync(const UpdateDatalakeExceptionsSubscriptionRequest& request, const UpdateDatalakeExceptionsSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDatalakeExceptionsSubscription(request), context);
    } );
}

UpdateSubscriberOutcome SecurityLakeClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriber", "Required field: Id, is not set");
    return UpdateSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriberOutcomeCallable SecurityLakeClient::UpdateSubscriberCallable(const UpdateSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::UpdateSubscriberAsync(const UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSubscriber(request), context);
    } );
}

UpdateSubscriptionNotificationConfigurationOutcome SecurityLakeClient::UpdateSubscriptionNotificationConfiguration(const UpdateSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return UpdateSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return UpdateSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionNotificationConfigurationOutcomeCallable SecurityLakeClient::UpdateSubscriptionNotificationConfigurationCallable(const UpdateSubscriptionNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriptionNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityLakeClient::UpdateSubscriptionNotificationConfigurationAsync(const UpdateSubscriptionNotificationConfigurationRequest& request, const UpdateSubscriptionNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSubscriptionNotificationConfiguration(request), context);
    } );
}

