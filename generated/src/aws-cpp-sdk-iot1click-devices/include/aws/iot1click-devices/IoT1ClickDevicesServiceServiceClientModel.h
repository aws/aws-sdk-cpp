/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoT1ClickDevicesServiceClient header */
#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeResult.h>
#include <aws/iot1click-devices/model/DescribeDeviceResult.h>
#include <aws/iot1click-devices/model/FinalizeDeviceClaimResult.h>
#include <aws/iot1click-devices/model/GetDeviceMethodsResult.h>
#include <aws/iot1click-devices/model/InitiateDeviceClaimResult.h>
#include <aws/iot1click-devices/model/InvokeDeviceMethodResult.h>
#include <aws/iot1click-devices/model/ListDeviceEventsResult.h>
#include <aws/iot1click-devices/model/ListDevicesResult.h>
#include <aws/iot1click-devices/model/ListTagsForResourceResult.h>
#include <aws/iot1click-devices/model/UnclaimDeviceResult.h>
#include <aws/iot1click-devices/model/UpdateDeviceStateResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IoT1ClickDevicesServiceClient header */

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

  namespace IoT1ClickDevicesService
  {
    using IoT1ClickDevicesServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoT1ClickDevicesServiceEndpointProviderBase = Aws::IoT1ClickDevicesService::Endpoint::IoT1ClickDevicesServiceEndpointProviderBase;
    using IoT1ClickDevicesServiceEndpointProvider = Aws::IoT1ClickDevicesService::Endpoint::IoT1ClickDevicesServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoT1ClickDevicesServiceClient header */
      class ClaimDevicesByClaimCodeRequest;
      class DescribeDeviceRequest;
      class FinalizeDeviceClaimRequest;
      class GetDeviceMethodsRequest;
      class InitiateDeviceClaimRequest;
      class InvokeDeviceMethodRequest;
      class ListDeviceEventsRequest;
      class ListDevicesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UnclaimDeviceRequest;
      class UntagResourceRequest;
      class UpdateDeviceStateRequest;
      /* End of service model forward declarations required in IoT1ClickDevicesServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ClaimDevicesByClaimCodeResult, IoT1ClickDevicesServiceError> ClaimDevicesByClaimCodeOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceResult, IoT1ClickDevicesServiceError> DescribeDeviceOutcome;
      typedef Aws::Utils::Outcome<FinalizeDeviceClaimResult, IoT1ClickDevicesServiceError> FinalizeDeviceClaimOutcome;
      typedef Aws::Utils::Outcome<GetDeviceMethodsResult, IoT1ClickDevicesServiceError> GetDeviceMethodsOutcome;
      typedef Aws::Utils::Outcome<InitiateDeviceClaimResult, IoT1ClickDevicesServiceError> InitiateDeviceClaimOutcome;
      typedef Aws::Utils::Outcome<InvokeDeviceMethodResult, IoT1ClickDevicesServiceError> InvokeDeviceMethodOutcome;
      typedef Aws::Utils::Outcome<ListDeviceEventsResult, IoT1ClickDevicesServiceError> ListDeviceEventsOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, IoT1ClickDevicesServiceError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoT1ClickDevicesServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoT1ClickDevicesServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UnclaimDeviceResult, IoT1ClickDevicesServiceError> UnclaimDeviceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoT1ClickDevicesServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceStateResult, IoT1ClickDevicesServiceError> UpdateDeviceStateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ClaimDevicesByClaimCodeOutcome> ClaimDevicesByClaimCodeOutcomeCallable;
      typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
      typedef std::future<FinalizeDeviceClaimOutcome> FinalizeDeviceClaimOutcomeCallable;
      typedef std::future<GetDeviceMethodsOutcome> GetDeviceMethodsOutcomeCallable;
      typedef std::future<InitiateDeviceClaimOutcome> InitiateDeviceClaimOutcomeCallable;
      typedef std::future<InvokeDeviceMethodOutcome> InvokeDeviceMethodOutcomeCallable;
      typedef std::future<ListDeviceEventsOutcome> ListDeviceEventsOutcomeCallable;
      typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnclaimDeviceOutcome> UnclaimDeviceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDeviceStateOutcome> UpdateDeviceStateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoT1ClickDevicesServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ClaimDevicesByClaimCodeRequest&, const Model::ClaimDevicesByClaimCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimDevicesByClaimCodeResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::FinalizeDeviceClaimRequest&, const Model::FinalizeDeviceClaimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FinalizeDeviceClaimResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::GetDeviceMethodsRequest&, const Model::GetDeviceMethodsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceMethodsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::InitiateDeviceClaimRequest&, const Model::InitiateDeviceClaimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateDeviceClaimResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::InvokeDeviceMethodRequest&, const Model::InvokeDeviceMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeDeviceMethodResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListDeviceEventsRequest&, const Model::ListDeviceEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceEventsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UnclaimDeviceRequest&, const Model::UnclaimDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnclaimDeviceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UpdateDeviceStateRequest&, const Model::UpdateDeviceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceStateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoT1ClickDevicesService
} // namespace Aws
