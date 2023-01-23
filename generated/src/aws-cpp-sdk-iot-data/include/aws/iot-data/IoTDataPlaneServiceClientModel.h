/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot-data/IoTDataPlaneErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot-data/IoTDataPlaneEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTDataPlaneClient header */
#include <aws/iot-data/model/DeleteThingShadowResult.h>
#include <aws/iot-data/model/GetRetainedMessageResult.h>
#include <aws/iot-data/model/GetThingShadowResult.h>
#include <aws/iot-data/model/ListNamedShadowsForThingResult.h>
#include <aws/iot-data/model/ListRetainedMessagesResult.h>
#include <aws/iot-data/model/UpdateThingShadowResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IoTDataPlaneClient header */

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

  namespace IoTDataPlane
  {
    using IoTDataPlaneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTDataPlaneEndpointProviderBase = Aws::IoTDataPlane::Endpoint::IoTDataPlaneEndpointProviderBase;
    using IoTDataPlaneEndpointProvider = Aws::IoTDataPlane::Endpoint::IoTDataPlaneEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTDataPlaneClient header */
      class DeleteThingShadowRequest;
      class GetRetainedMessageRequest;
      class GetThingShadowRequest;
      class ListNamedShadowsForThingRequest;
      class ListRetainedMessagesRequest;
      class PublishRequest;
      class UpdateThingShadowRequest;
      /* End of service model forward declarations required in IoTDataPlaneClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteThingShadowResult, IoTDataPlaneError> DeleteThingShadowOutcome;
      typedef Aws::Utils::Outcome<GetRetainedMessageResult, IoTDataPlaneError> GetRetainedMessageOutcome;
      typedef Aws::Utils::Outcome<GetThingShadowResult, IoTDataPlaneError> GetThingShadowOutcome;
      typedef Aws::Utils::Outcome<ListNamedShadowsForThingResult, IoTDataPlaneError> ListNamedShadowsForThingOutcome;
      typedef Aws::Utils::Outcome<ListRetainedMessagesResult, IoTDataPlaneError> ListRetainedMessagesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTDataPlaneError> PublishOutcome;
      typedef Aws::Utils::Outcome<UpdateThingShadowResult, IoTDataPlaneError> UpdateThingShadowOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteThingShadowOutcome> DeleteThingShadowOutcomeCallable;
      typedef std::future<GetRetainedMessageOutcome> GetRetainedMessageOutcomeCallable;
      typedef std::future<GetThingShadowOutcome> GetThingShadowOutcomeCallable;
      typedef std::future<ListNamedShadowsForThingOutcome> ListNamedShadowsForThingOutcomeCallable;
      typedef std::future<ListRetainedMessagesOutcome> ListRetainedMessagesOutcomeCallable;
      typedef std::future<PublishOutcome> PublishOutcomeCallable;
      typedef std::future<UpdateThingShadowOutcome> UpdateThingShadowOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTDataPlaneClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTDataPlaneClient*, const Model::DeleteThingShadowRequest&, Model::DeleteThingShadowOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingShadowResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::GetRetainedMessageRequest&, const Model::GetRetainedMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRetainedMessageResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::GetThingShadowRequest&, Model::GetThingShadowOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThingShadowResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::ListNamedShadowsForThingRequest&, const Model::ListNamedShadowsForThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamedShadowsForThingResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::ListRetainedMessagesRequest&, const Model::ListRetainedMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRetainedMessagesResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::UpdateThingShadowRequest&, Model::UpdateThingShadowOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingShadowResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTDataPlane
} // namespace Aws
