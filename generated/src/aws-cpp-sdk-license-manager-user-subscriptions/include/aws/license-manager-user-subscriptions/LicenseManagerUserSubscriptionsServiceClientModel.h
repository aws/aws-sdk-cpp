/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LicenseManagerUserSubscriptionsClient header */
#include <aws/license-manager-user-subscriptions/model/AssociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersResult.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesResult.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsResult.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsResult.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionResult.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionResult.h>
#include <aws/license-manager-user-subscriptions/model/UpdateIdentityProviderSettingsResult.h>
/* End of service model headers required in LicenseManagerUserSubscriptionsClient header */

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

  namespace LicenseManagerUserSubscriptions
  {
    using LicenseManagerUserSubscriptionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LicenseManagerUserSubscriptionsEndpointProviderBase = Aws::LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsEndpointProviderBase;
    using LicenseManagerUserSubscriptionsEndpointProvider = Aws::LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LicenseManagerUserSubscriptionsClient header */
      class AssociateUserRequest;
      class DeregisterIdentityProviderRequest;
      class DisassociateUserRequest;
      class ListIdentityProvidersRequest;
      class ListInstancesRequest;
      class ListProductSubscriptionsRequest;
      class ListUserAssociationsRequest;
      class RegisterIdentityProviderRequest;
      class StartProductSubscriptionRequest;
      class StopProductSubscriptionRequest;
      class UpdateIdentityProviderSettingsRequest;
      /* End of service model forward declarations required in LicenseManagerUserSubscriptionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateUserResult, LicenseManagerUserSubscriptionsError> AssociateUserOutcome;
      typedef Aws::Utils::Outcome<DeregisterIdentityProviderResult, LicenseManagerUserSubscriptionsError> DeregisterIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<DisassociateUserResult, LicenseManagerUserSubscriptionsError> DisassociateUserOutcome;
      typedef Aws::Utils::Outcome<ListIdentityProvidersResult, LicenseManagerUserSubscriptionsError> ListIdentityProvidersOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, LicenseManagerUserSubscriptionsError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListProductSubscriptionsResult, LicenseManagerUserSubscriptionsError> ListProductSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListUserAssociationsResult, LicenseManagerUserSubscriptionsError> ListUserAssociationsOutcome;
      typedef Aws::Utils::Outcome<RegisterIdentityProviderResult, LicenseManagerUserSubscriptionsError> RegisterIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<StartProductSubscriptionResult, LicenseManagerUserSubscriptionsError> StartProductSubscriptionOutcome;
      typedef Aws::Utils::Outcome<StopProductSubscriptionResult, LicenseManagerUserSubscriptionsError> StopProductSubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateIdentityProviderSettingsResult, LicenseManagerUserSubscriptionsError> UpdateIdentityProviderSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateUserOutcome> AssociateUserOutcomeCallable;
      typedef std::future<DeregisterIdentityProviderOutcome> DeregisterIdentityProviderOutcomeCallable;
      typedef std::future<DisassociateUserOutcome> DisassociateUserOutcomeCallable;
      typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListProductSubscriptionsOutcome> ListProductSubscriptionsOutcomeCallable;
      typedef std::future<ListUserAssociationsOutcome> ListUserAssociationsOutcomeCallable;
      typedef std::future<RegisterIdentityProviderOutcome> RegisterIdentityProviderOutcomeCallable;
      typedef std::future<StartProductSubscriptionOutcome> StartProductSubscriptionOutcomeCallable;
      typedef std::future<StopProductSubscriptionOutcome> StopProductSubscriptionOutcomeCallable;
      typedef std::future<UpdateIdentityProviderSettingsOutcome> UpdateIdentityProviderSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LicenseManagerUserSubscriptionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::AssociateUserRequest&, const Model::AssociateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::DeregisterIdentityProviderRequest&, const Model::DeregisterIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::DisassociateUserRequest&, const Model::DisassociateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListIdentityProvidersRequest&, const Model::ListIdentityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProvidersResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListProductSubscriptionsRequest&, const Model::ListProductSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProductSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListUserAssociationsRequest&, const Model::ListUserAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserAssociationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::RegisterIdentityProviderRequest&, const Model::RegisterIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::StartProductSubscriptionRequest&, const Model::StartProductSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProductSubscriptionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::StopProductSubscriptionRequest&, const Model::StopProductSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopProductSubscriptionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::UpdateIdentityProviderSettingsRequest&, const Model::UpdateIdentityProviderSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityProviderSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LicenseManagerUserSubscriptions
} // namespace Aws
