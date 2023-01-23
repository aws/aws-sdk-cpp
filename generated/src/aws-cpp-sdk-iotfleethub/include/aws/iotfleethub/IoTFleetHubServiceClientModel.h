/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotfleethub/IoTFleetHubErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotfleethub/IoTFleetHubEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTFleetHubClient header */
#include <aws/iotfleethub/model/CreateApplicationResult.h>
#include <aws/iotfleethub/model/DeleteApplicationResult.h>
#include <aws/iotfleethub/model/DescribeApplicationResult.h>
#include <aws/iotfleethub/model/ListApplicationsResult.h>
#include <aws/iotfleethub/model/ListTagsForResourceResult.h>
#include <aws/iotfleethub/model/TagResourceResult.h>
#include <aws/iotfleethub/model/UntagResourceResult.h>
#include <aws/iotfleethub/model/UpdateApplicationResult.h>
/* End of service model headers required in IoTFleetHubClient header */

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

  namespace IoTFleetHub
  {
    using IoTFleetHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTFleetHubEndpointProviderBase = Aws::IoTFleetHub::Endpoint::IoTFleetHubEndpointProviderBase;
    using IoTFleetHubEndpointProvider = Aws::IoTFleetHub::Endpoint::IoTFleetHubEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTFleetHubClient header */
      class CreateApplicationRequest;
      class DeleteApplicationRequest;
      class DescribeApplicationRequest;
      class ListApplicationsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      /* End of service model forward declarations required in IoTFleetHubClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationResult, IoTFleetHubError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, IoTFleetHubError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationResult, IoTFleetHubError> DescribeApplicationOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, IoTFleetHubError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTFleetHubError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTFleetHubError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTFleetHubError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, IoTFleetHubError> UpdateApplicationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTFleetHubClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTFleetHubClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetHubClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTFleetHub
} // namespace Aws
