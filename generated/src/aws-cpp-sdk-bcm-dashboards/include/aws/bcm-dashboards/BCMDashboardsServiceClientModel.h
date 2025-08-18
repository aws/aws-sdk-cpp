/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bcm-dashboards/BCMDashboardsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bcm-dashboards/BCMDashboardsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BCMDashboardsClient header */
#include <aws/bcm-dashboards/model/CreateDashboardResult.h>
#include <aws/bcm-dashboards/model/DeleteDashboardResult.h>
#include <aws/bcm-dashboards/model/GetDashboardResult.h>
#include <aws/bcm-dashboards/model/GetResourcePolicyResult.h>
#include <aws/bcm-dashboards/model/ListDashboardsResult.h>
#include <aws/bcm-dashboards/model/ListTagsForResourceResult.h>
#include <aws/bcm-dashboards/model/TagResourceResult.h>
#include <aws/bcm-dashboards/model/UntagResourceResult.h>
#include <aws/bcm-dashboards/model/UpdateDashboardResult.h>
#include <aws/bcm-dashboards/model/ListDashboardsRequest.h>
/* End of service model headers required in BCMDashboardsClient header */

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

  namespace BCMDashboards
  {
    using BCMDashboardsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BCMDashboardsEndpointProviderBase = Aws::BCMDashboards::Endpoint::BCMDashboardsEndpointProviderBase;
    using BCMDashboardsEndpointProvider = Aws::BCMDashboards::Endpoint::BCMDashboardsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BCMDashboardsClient header */
      class CreateDashboardRequest;
      class DeleteDashboardRequest;
      class GetDashboardRequest;
      class GetResourcePolicyRequest;
      class ListDashboardsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDashboardRequest;
      /* End of service model forward declarations required in BCMDashboardsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDashboardResult, BCMDashboardsError> CreateDashboardOutcome;
      typedef Aws::Utils::Outcome<DeleteDashboardResult, BCMDashboardsError> DeleteDashboardOutcome;
      typedef Aws::Utils::Outcome<GetDashboardResult, BCMDashboardsError> GetDashboardOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, BCMDashboardsError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<ListDashboardsResult, BCMDashboardsError> ListDashboardsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BCMDashboardsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BCMDashboardsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BCMDashboardsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDashboardResult, BCMDashboardsError> UpdateDashboardOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
      typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
      typedef std::future<GetDashboardOutcome> GetDashboardOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BCMDashboardsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BCMDashboardsClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDashboardResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::GetDashboardRequest&, const Model::GetDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDashboardsClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BCMDashboards
} // namespace Aws
