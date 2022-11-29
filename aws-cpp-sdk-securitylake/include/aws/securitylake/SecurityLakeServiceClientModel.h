/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/securitylake/SecurityLakeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SecurityLakeClient header */
#include <aws/securitylake/model/CreateAwsLogSourceResult.h>
#include <aws/securitylake/model/CreateCustomLogSourceResult.h>
#include <aws/securitylake/model/CreateDatalakeResult.h>
#include <aws/securitylake/model/CreateDatalakeAutoEnableResult.h>
#include <aws/securitylake/model/CreateDatalakeDelegatedAdminResult.h>
#include <aws/securitylake/model/CreateDatalakeExceptionsSubscriptionResult.h>
#include <aws/securitylake/model/CreateSubscriberResult.h>
#include <aws/securitylake/model/CreateSubscriptionNotificationConfigurationResult.h>
#include <aws/securitylake/model/DeleteAwsLogSourceResult.h>
#include <aws/securitylake/model/DeleteCustomLogSourceResult.h>
#include <aws/securitylake/model/DeleteDatalakeResult.h>
#include <aws/securitylake/model/DeleteDatalakeAutoEnableResult.h>
#include <aws/securitylake/model/DeleteDatalakeDelegatedAdminResult.h>
#include <aws/securitylake/model/DeleteDatalakeExceptionsSubscriptionResult.h>
#include <aws/securitylake/model/DeleteSubscriberResult.h>
#include <aws/securitylake/model/DeleteSubscriptionNotificationConfigurationResult.h>
#include <aws/securitylake/model/GetDatalakeResult.h>
#include <aws/securitylake/model/GetDatalakeAutoEnableResult.h>
#include <aws/securitylake/model/GetDatalakeExceptionsExpiryResult.h>
#include <aws/securitylake/model/GetDatalakeExceptionsSubscriptionResult.h>
#include <aws/securitylake/model/GetDatalakeStatusResult.h>
#include <aws/securitylake/model/GetSubscriberResult.h>
#include <aws/securitylake/model/ListDatalakeExceptionsResult.h>
#include <aws/securitylake/model/ListLogSourcesResult.h>
#include <aws/securitylake/model/ListSubscribersResult.h>
#include <aws/securitylake/model/UpdateDatalakeResult.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsExpiryResult.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsSubscriptionResult.h>
#include <aws/securitylake/model/UpdateSubscriberResult.h>
#include <aws/securitylake/model/UpdateSubscriptionNotificationConfigurationResult.h>
/* End of service model headers required in SecurityLakeClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SecurityLake
  {
    using SecurityLakeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SecurityLakeEndpointProviderBase = Aws::SecurityLake::Endpoint::SecurityLakeEndpointProviderBase;
    using SecurityLakeEndpointProvider = Aws::SecurityLake::Endpoint::SecurityLakeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SecurityLakeClient header */
      class CreateAwsLogSourceRequest;
      class CreateCustomLogSourceRequest;
      class CreateDatalakeRequest;
      class CreateDatalakeAutoEnableRequest;
      class CreateDatalakeDelegatedAdminRequest;
      class CreateDatalakeExceptionsSubscriptionRequest;
      class CreateSubscriberRequest;
      class CreateSubscriptionNotificationConfigurationRequest;
      class DeleteAwsLogSourceRequest;
      class DeleteCustomLogSourceRequest;
      class DeleteDatalakeRequest;
      class DeleteDatalakeAutoEnableRequest;
      class DeleteDatalakeDelegatedAdminRequest;
      class DeleteDatalakeExceptionsSubscriptionRequest;
      class DeleteSubscriberRequest;
      class DeleteSubscriptionNotificationConfigurationRequest;
      class GetDatalakeRequest;
      class GetDatalakeAutoEnableRequest;
      class GetDatalakeExceptionsExpiryRequest;
      class GetDatalakeExceptionsSubscriptionRequest;
      class GetDatalakeStatusRequest;
      class GetSubscriberRequest;
      class ListDatalakeExceptionsRequest;
      class ListLogSourcesRequest;
      class ListSubscribersRequest;
      class UpdateDatalakeRequest;
      class UpdateDatalakeExceptionsExpiryRequest;
      class UpdateDatalakeExceptionsSubscriptionRequest;
      class UpdateSubscriberRequest;
      class UpdateSubscriptionNotificationConfigurationRequest;
      /* End of service model forward declarations required in SecurityLakeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAwsLogSourceResult, SecurityLakeError> CreateAwsLogSourceOutcome;
      typedef Aws::Utils::Outcome<CreateCustomLogSourceResult, SecurityLakeError> CreateCustomLogSourceOutcome;
      typedef Aws::Utils::Outcome<CreateDatalakeResult, SecurityLakeError> CreateDatalakeOutcome;
      typedef Aws::Utils::Outcome<CreateDatalakeAutoEnableResult, SecurityLakeError> CreateDatalakeAutoEnableOutcome;
      typedef Aws::Utils::Outcome<CreateDatalakeDelegatedAdminResult, SecurityLakeError> CreateDatalakeDelegatedAdminOutcome;
      typedef Aws::Utils::Outcome<CreateDatalakeExceptionsSubscriptionResult, SecurityLakeError> CreateDatalakeExceptionsSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriberResult, SecurityLakeError> CreateSubscriberOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionNotificationConfigurationResult, SecurityLakeError> CreateSubscriptionNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteAwsLogSourceResult, SecurityLakeError> DeleteAwsLogSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomLogSourceResult, SecurityLakeError> DeleteCustomLogSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteDatalakeResult, SecurityLakeError> DeleteDatalakeOutcome;
      typedef Aws::Utils::Outcome<DeleteDatalakeAutoEnableResult, SecurityLakeError> DeleteDatalakeAutoEnableOutcome;
      typedef Aws::Utils::Outcome<DeleteDatalakeDelegatedAdminResult, SecurityLakeError> DeleteDatalakeDelegatedAdminOutcome;
      typedef Aws::Utils::Outcome<DeleteDatalakeExceptionsSubscriptionResult, SecurityLakeError> DeleteDatalakeExceptionsSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriberResult, SecurityLakeError> DeleteSubscriberOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriptionNotificationConfigurationResult, SecurityLakeError> DeleteSubscriptionNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDatalakeResult, SecurityLakeError> GetDatalakeOutcome;
      typedef Aws::Utils::Outcome<GetDatalakeAutoEnableResult, SecurityLakeError> GetDatalakeAutoEnableOutcome;
      typedef Aws::Utils::Outcome<GetDatalakeExceptionsExpiryResult, SecurityLakeError> GetDatalakeExceptionsExpiryOutcome;
      typedef Aws::Utils::Outcome<GetDatalakeExceptionsSubscriptionResult, SecurityLakeError> GetDatalakeExceptionsSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetDatalakeStatusResult, SecurityLakeError> GetDatalakeStatusOutcome;
      typedef Aws::Utils::Outcome<GetSubscriberResult, SecurityLakeError> GetSubscriberOutcome;
      typedef Aws::Utils::Outcome<ListDatalakeExceptionsResult, SecurityLakeError> ListDatalakeExceptionsOutcome;
      typedef Aws::Utils::Outcome<ListLogSourcesResult, SecurityLakeError> ListLogSourcesOutcome;
      typedef Aws::Utils::Outcome<ListSubscribersResult, SecurityLakeError> ListSubscribersOutcome;
      typedef Aws::Utils::Outcome<UpdateDatalakeResult, SecurityLakeError> UpdateDatalakeOutcome;
      typedef Aws::Utils::Outcome<UpdateDatalakeExceptionsExpiryResult, SecurityLakeError> UpdateDatalakeExceptionsExpiryOutcome;
      typedef Aws::Utils::Outcome<UpdateDatalakeExceptionsSubscriptionResult, SecurityLakeError> UpdateDatalakeExceptionsSubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriberResult, SecurityLakeError> UpdateSubscriberOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionNotificationConfigurationResult, SecurityLakeError> UpdateSubscriptionNotificationConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAwsLogSourceOutcome> CreateAwsLogSourceOutcomeCallable;
      typedef std::future<CreateCustomLogSourceOutcome> CreateCustomLogSourceOutcomeCallable;
      typedef std::future<CreateDatalakeOutcome> CreateDatalakeOutcomeCallable;
      typedef std::future<CreateDatalakeAutoEnableOutcome> CreateDatalakeAutoEnableOutcomeCallable;
      typedef std::future<CreateDatalakeDelegatedAdminOutcome> CreateDatalakeDelegatedAdminOutcomeCallable;
      typedef std::future<CreateDatalakeExceptionsSubscriptionOutcome> CreateDatalakeExceptionsSubscriptionOutcomeCallable;
      typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
      typedef std::future<CreateSubscriptionNotificationConfigurationOutcome> CreateSubscriptionNotificationConfigurationOutcomeCallable;
      typedef std::future<DeleteAwsLogSourceOutcome> DeleteAwsLogSourceOutcomeCallable;
      typedef std::future<DeleteCustomLogSourceOutcome> DeleteCustomLogSourceOutcomeCallable;
      typedef std::future<DeleteDatalakeOutcome> DeleteDatalakeOutcomeCallable;
      typedef std::future<DeleteDatalakeAutoEnableOutcome> DeleteDatalakeAutoEnableOutcomeCallable;
      typedef std::future<DeleteDatalakeDelegatedAdminOutcome> DeleteDatalakeDelegatedAdminOutcomeCallable;
      typedef std::future<DeleteDatalakeExceptionsSubscriptionOutcome> DeleteDatalakeExceptionsSubscriptionOutcomeCallable;
      typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
      typedef std::future<DeleteSubscriptionNotificationConfigurationOutcome> DeleteSubscriptionNotificationConfigurationOutcomeCallable;
      typedef std::future<GetDatalakeOutcome> GetDatalakeOutcomeCallable;
      typedef std::future<GetDatalakeAutoEnableOutcome> GetDatalakeAutoEnableOutcomeCallable;
      typedef std::future<GetDatalakeExceptionsExpiryOutcome> GetDatalakeExceptionsExpiryOutcomeCallable;
      typedef std::future<GetDatalakeExceptionsSubscriptionOutcome> GetDatalakeExceptionsSubscriptionOutcomeCallable;
      typedef std::future<GetDatalakeStatusOutcome> GetDatalakeStatusOutcomeCallable;
      typedef std::future<GetSubscriberOutcome> GetSubscriberOutcomeCallable;
      typedef std::future<ListDatalakeExceptionsOutcome> ListDatalakeExceptionsOutcomeCallable;
      typedef std::future<ListLogSourcesOutcome> ListLogSourcesOutcomeCallable;
      typedef std::future<ListSubscribersOutcome> ListSubscribersOutcomeCallable;
      typedef std::future<UpdateDatalakeOutcome> UpdateDatalakeOutcomeCallable;
      typedef std::future<UpdateDatalakeExceptionsExpiryOutcome> UpdateDatalakeExceptionsExpiryOutcomeCallable;
      typedef std::future<UpdateDatalakeExceptionsSubscriptionOutcome> UpdateDatalakeExceptionsSubscriptionOutcomeCallable;
      typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
      typedef std::future<UpdateSubscriptionNotificationConfigurationOutcome> UpdateSubscriptionNotificationConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SecurityLakeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateAwsLogSourceRequest&, const Model::CreateAwsLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAwsLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateCustomLogSourceRequest&, const Model::CreateCustomLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDatalakeRequest&, const Model::CreateDatalakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatalakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDatalakeAutoEnableRequest&, const Model::CreateDatalakeAutoEnableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatalakeAutoEnableResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDatalakeDelegatedAdminRequest&, const Model::CreateDatalakeDelegatedAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatalakeDelegatedAdminResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDatalakeExceptionsSubscriptionRequest&, const Model::CreateDatalakeExceptionsSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatalakeExceptionsSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateSubscriptionNotificationConfigurationRequest&, const Model::CreateSubscriptionNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteAwsLogSourceRequest&, const Model::DeleteAwsLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAwsLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteCustomLogSourceRequest&, const Model::DeleteCustomLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDatalakeRequest&, const Model::DeleteDatalakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatalakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDatalakeAutoEnableRequest&, const Model::DeleteDatalakeAutoEnableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatalakeAutoEnableResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDatalakeDelegatedAdminRequest&, const Model::DeleteDatalakeDelegatedAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatalakeDelegatedAdminResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDatalakeExceptionsSubscriptionRequest&, const Model::DeleteDatalakeExceptionsSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatalakeExceptionsSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteSubscriptionNotificationConfigurationRequest&, const Model::DeleteSubscriptionNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDatalakeRequest&, const Model::GetDatalakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatalakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDatalakeAutoEnableRequest&, const Model::GetDatalakeAutoEnableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatalakeAutoEnableResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDatalakeExceptionsExpiryRequest&, const Model::GetDatalakeExceptionsExpiryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatalakeExceptionsExpiryResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDatalakeExceptionsSubscriptionRequest&, const Model::GetDatalakeExceptionsSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatalakeExceptionsSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDatalakeStatusRequest&, const Model::GetDatalakeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatalakeStatusResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetSubscriberRequest&, const Model::GetSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListDatalakeExceptionsRequest&, const Model::ListDatalakeExceptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatalakeExceptionsResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListLogSourcesRequest&, const Model::ListLogSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogSourcesResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListSubscribersRequest&, const Model::ListSubscribersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribersResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateDatalakeRequest&, const Model::UpdateDatalakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatalakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateDatalakeExceptionsExpiryRequest&, const Model::UpdateDatalakeExceptionsExpiryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatalakeExceptionsExpiryResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateDatalakeExceptionsSubscriptionRequest&, const Model::UpdateDatalakeExceptionsSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatalakeExceptionsSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateSubscriptionNotificationConfigurationRequest&, const Model::UpdateSubscriptionNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionNotificationConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SecurityLake
} // namespace Aws
