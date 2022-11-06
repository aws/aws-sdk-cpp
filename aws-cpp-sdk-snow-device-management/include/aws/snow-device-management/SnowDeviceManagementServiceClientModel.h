/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/snow-device-management/SnowDeviceManagementErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SnowDeviceManagementClient header */
#include <aws/snow-device-management/model/CancelTaskResult.h>
#include <aws/snow-device-management/model/CreateTaskResult.h>
#include <aws/snow-device-management/model/DescribeDeviceResult.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesResult.h>
#include <aws/snow-device-management/model/DescribeExecutionResult.h>
#include <aws/snow-device-management/model/DescribeTaskResult.h>
#include <aws/snow-device-management/model/ListDeviceResourcesResult.h>
#include <aws/snow-device-management/model/ListDevicesResult.h>
#include <aws/snow-device-management/model/ListExecutionsResult.h>
#include <aws/snow-device-management/model/ListTagsForResourceResult.h>
#include <aws/snow-device-management/model/ListTasksResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SnowDeviceManagementClient header */

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

  namespace SnowDeviceManagement
  {
    using SnowDeviceManagementClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SnowDeviceManagementEndpointProviderBase = Aws::SnowDeviceManagement::Endpoint::SnowDeviceManagementEndpointProviderBase;
    using SnowDeviceManagementEndpointProvider = Aws::SnowDeviceManagement::Endpoint::SnowDeviceManagementEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SnowDeviceManagementClient header */
      class CancelTaskRequest;
      class CreateTaskRequest;
      class DescribeDeviceRequest;
      class DescribeDeviceEc2InstancesRequest;
      class DescribeExecutionRequest;
      class DescribeTaskRequest;
      class ListDeviceResourcesRequest;
      class ListDevicesRequest;
      class ListExecutionsRequest;
      class ListTagsForResourceRequest;
      class ListTasksRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SnowDeviceManagementClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelTaskResult, SnowDeviceManagementError> CancelTaskOutcome;
      typedef Aws::Utils::Outcome<CreateTaskResult, SnowDeviceManagementError> CreateTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceResult, SnowDeviceManagementError> DescribeDeviceOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceEc2InstancesResult, SnowDeviceManagementError> DescribeDeviceEc2InstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeExecutionResult, SnowDeviceManagementError> DescribeExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeTaskResult, SnowDeviceManagementError> DescribeTaskOutcome;
      typedef Aws::Utils::Outcome<ListDeviceResourcesResult, SnowDeviceManagementError> ListDeviceResourcesOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, SnowDeviceManagementError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListExecutionsResult, SnowDeviceManagementError> ListExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SnowDeviceManagementError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTasksResult, SnowDeviceManagementError> ListTasksOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SnowDeviceManagementError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SnowDeviceManagementError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
      typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
      typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
      typedef std::future<DescribeDeviceEc2InstancesOutcome> DescribeDeviceEc2InstancesOutcomeCallable;
      typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
      typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
      typedef std::future<ListDeviceResourcesOutcome> ListDeviceResourcesOutcomeCallable;
      typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
      typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SnowDeviceManagementClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::CancelTaskRequest&, const Model::CancelTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::CreateTaskRequest&, const Model::CreateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeDeviceEc2InstancesRequest&, const Model::DescribeDeviceEc2InstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceEc2InstancesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeExecutionRequest&, const Model::DescribeExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExecutionResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeTaskRequest&, const Model::DescribeTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListDeviceResourcesRequest&, const Model::ListDeviceResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceResourcesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SnowDeviceManagement
} // namespace Aws
