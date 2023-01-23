/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LicenseManagerLinuxSubscriptionsClient header */
#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsResult.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesResult.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsResult.h>
#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsResult.h>
/* End of service model headers required in LicenseManagerLinuxSubscriptionsClient header */

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

  namespace LicenseManagerLinuxSubscriptions
  {
    using LicenseManagerLinuxSubscriptionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LicenseManagerLinuxSubscriptionsEndpointProviderBase = Aws::LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsEndpointProviderBase;
    using LicenseManagerLinuxSubscriptionsEndpointProvider = Aws::LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LicenseManagerLinuxSubscriptionsClient header */
      class GetServiceSettingsRequest;
      class ListLinuxSubscriptionInstancesRequest;
      class ListLinuxSubscriptionsRequest;
      class UpdateServiceSettingsRequest;
      /* End of service model forward declarations required in LicenseManagerLinuxSubscriptionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetServiceSettingsResult, LicenseManagerLinuxSubscriptionsError> GetServiceSettingsOutcome;
      typedef Aws::Utils::Outcome<ListLinuxSubscriptionInstancesResult, LicenseManagerLinuxSubscriptionsError> ListLinuxSubscriptionInstancesOutcome;
      typedef Aws::Utils::Outcome<ListLinuxSubscriptionsResult, LicenseManagerLinuxSubscriptionsError> ListLinuxSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceSettingsResult, LicenseManagerLinuxSubscriptionsError> UpdateServiceSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
      typedef std::future<ListLinuxSubscriptionInstancesOutcome> ListLinuxSubscriptionInstancesOutcomeCallable;
      typedef std::future<ListLinuxSubscriptionsOutcome> ListLinuxSubscriptionsOutcomeCallable;
      typedef std::future<UpdateServiceSettingsOutcome> UpdateServiceSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LicenseManagerLinuxSubscriptionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LicenseManagerLinuxSubscriptionsClient*, const Model::GetServiceSettingsRequest&, const Model::GetServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerLinuxSubscriptionsClient*, const Model::ListLinuxSubscriptionInstancesRequest&, const Model::ListLinuxSubscriptionInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLinuxSubscriptionInstancesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerLinuxSubscriptionsClient*, const Model::ListLinuxSubscriptionsRequest&, const Model::ListLinuxSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLinuxSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerLinuxSubscriptionsClient*, const Model::UpdateServiceSettingsRequest&, const Model::UpdateServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
