/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotevents/IoTEventsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotevents/IoTEventsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTEventsClient header */
#include <aws/iotevents/model/CreateAlarmModelResult.h>
#include <aws/iotevents/model/CreateDetectorModelResult.h>
#include <aws/iotevents/model/CreateInputResult.h>
#include <aws/iotevents/model/DeleteAlarmModelResult.h>
#include <aws/iotevents/model/DeleteDetectorModelResult.h>
#include <aws/iotevents/model/DeleteInputResult.h>
#include <aws/iotevents/model/DescribeAlarmModelResult.h>
#include <aws/iotevents/model/DescribeDetectorModelResult.h>
#include <aws/iotevents/model/DescribeDetectorModelAnalysisResult.h>
#include <aws/iotevents/model/DescribeInputResult.h>
#include <aws/iotevents/model/DescribeLoggingOptionsResult.h>
#include <aws/iotevents/model/GetDetectorModelAnalysisResultsResult.h>
#include <aws/iotevents/model/ListAlarmModelVersionsResult.h>
#include <aws/iotevents/model/ListAlarmModelsResult.h>
#include <aws/iotevents/model/ListDetectorModelVersionsResult.h>
#include <aws/iotevents/model/ListDetectorModelsResult.h>
#include <aws/iotevents/model/ListInputRoutingsResult.h>
#include <aws/iotevents/model/ListInputsResult.h>
#include <aws/iotevents/model/ListTagsForResourceResult.h>
#include <aws/iotevents/model/StartDetectorModelAnalysisResult.h>
#include <aws/iotevents/model/TagResourceResult.h>
#include <aws/iotevents/model/UntagResourceResult.h>
#include <aws/iotevents/model/UpdateAlarmModelResult.h>
#include <aws/iotevents/model/UpdateDetectorModelResult.h>
#include <aws/iotevents/model/UpdateInputResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IoTEventsClient header */

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

  namespace IoTEvents
  {
    using IoTEventsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTEventsEndpointProviderBase = Aws::IoTEvents::Endpoint::IoTEventsEndpointProviderBase;
    using IoTEventsEndpointProvider = Aws::IoTEvents::Endpoint::IoTEventsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTEventsClient header */
      class CreateAlarmModelRequest;
      class CreateDetectorModelRequest;
      class CreateInputRequest;
      class DeleteAlarmModelRequest;
      class DeleteDetectorModelRequest;
      class DeleteInputRequest;
      class DescribeAlarmModelRequest;
      class DescribeDetectorModelRequest;
      class DescribeDetectorModelAnalysisRequest;
      class DescribeInputRequest;
      class DescribeLoggingOptionsRequest;
      class GetDetectorModelAnalysisResultsRequest;
      class ListAlarmModelVersionsRequest;
      class ListAlarmModelsRequest;
      class ListDetectorModelVersionsRequest;
      class ListDetectorModelsRequest;
      class ListInputRoutingsRequest;
      class ListInputsRequest;
      class ListTagsForResourceRequest;
      class PutLoggingOptionsRequest;
      class StartDetectorModelAnalysisRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAlarmModelRequest;
      class UpdateDetectorModelRequest;
      class UpdateInputRequest;
      /* End of service model forward declarations required in IoTEventsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAlarmModelResult, IoTEventsError> CreateAlarmModelOutcome;
      typedef Aws::Utils::Outcome<CreateDetectorModelResult, IoTEventsError> CreateDetectorModelOutcome;
      typedef Aws::Utils::Outcome<CreateInputResult, IoTEventsError> CreateInputOutcome;
      typedef Aws::Utils::Outcome<DeleteAlarmModelResult, IoTEventsError> DeleteAlarmModelOutcome;
      typedef Aws::Utils::Outcome<DeleteDetectorModelResult, IoTEventsError> DeleteDetectorModelOutcome;
      typedef Aws::Utils::Outcome<DeleteInputResult, IoTEventsError> DeleteInputOutcome;
      typedef Aws::Utils::Outcome<DescribeAlarmModelResult, IoTEventsError> DescribeAlarmModelOutcome;
      typedef Aws::Utils::Outcome<DescribeDetectorModelResult, IoTEventsError> DescribeDetectorModelOutcome;
      typedef Aws::Utils::Outcome<DescribeDetectorModelAnalysisResult, IoTEventsError> DescribeDetectorModelAnalysisOutcome;
      typedef Aws::Utils::Outcome<DescribeInputResult, IoTEventsError> DescribeInputOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingOptionsResult, IoTEventsError> DescribeLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<GetDetectorModelAnalysisResultsResult, IoTEventsError> GetDetectorModelAnalysisResultsOutcome;
      typedef Aws::Utils::Outcome<ListAlarmModelVersionsResult, IoTEventsError> ListAlarmModelVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAlarmModelsResult, IoTEventsError> ListAlarmModelsOutcome;
      typedef Aws::Utils::Outcome<ListDetectorModelVersionsResult, IoTEventsError> ListDetectorModelVersionsOutcome;
      typedef Aws::Utils::Outcome<ListDetectorModelsResult, IoTEventsError> ListDetectorModelsOutcome;
      typedef Aws::Utils::Outcome<ListInputRoutingsResult, IoTEventsError> ListInputRoutingsOutcome;
      typedef Aws::Utils::Outcome<ListInputsResult, IoTEventsError> ListInputsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTEventsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTEventsError> PutLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<StartDetectorModelAnalysisResult, IoTEventsError> StartDetectorModelAnalysisOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTEventsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTEventsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAlarmModelResult, IoTEventsError> UpdateAlarmModelOutcome;
      typedef Aws::Utils::Outcome<UpdateDetectorModelResult, IoTEventsError> UpdateDetectorModelOutcome;
      typedef Aws::Utils::Outcome<UpdateInputResult, IoTEventsError> UpdateInputOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAlarmModelOutcome> CreateAlarmModelOutcomeCallable;
      typedef std::future<CreateDetectorModelOutcome> CreateDetectorModelOutcomeCallable;
      typedef std::future<CreateInputOutcome> CreateInputOutcomeCallable;
      typedef std::future<DeleteAlarmModelOutcome> DeleteAlarmModelOutcomeCallable;
      typedef std::future<DeleteDetectorModelOutcome> DeleteDetectorModelOutcomeCallable;
      typedef std::future<DeleteInputOutcome> DeleteInputOutcomeCallable;
      typedef std::future<DescribeAlarmModelOutcome> DescribeAlarmModelOutcomeCallable;
      typedef std::future<DescribeDetectorModelOutcome> DescribeDetectorModelOutcomeCallable;
      typedef std::future<DescribeDetectorModelAnalysisOutcome> DescribeDetectorModelAnalysisOutcomeCallable;
      typedef std::future<DescribeInputOutcome> DescribeInputOutcomeCallable;
      typedef std::future<DescribeLoggingOptionsOutcome> DescribeLoggingOptionsOutcomeCallable;
      typedef std::future<GetDetectorModelAnalysisResultsOutcome> GetDetectorModelAnalysisResultsOutcomeCallable;
      typedef std::future<ListAlarmModelVersionsOutcome> ListAlarmModelVersionsOutcomeCallable;
      typedef std::future<ListAlarmModelsOutcome> ListAlarmModelsOutcomeCallable;
      typedef std::future<ListDetectorModelVersionsOutcome> ListDetectorModelVersionsOutcomeCallable;
      typedef std::future<ListDetectorModelsOutcome> ListDetectorModelsOutcomeCallable;
      typedef std::future<ListInputRoutingsOutcome> ListInputRoutingsOutcomeCallable;
      typedef std::future<ListInputsOutcome> ListInputsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutLoggingOptionsOutcome> PutLoggingOptionsOutcomeCallable;
      typedef std::future<StartDetectorModelAnalysisOutcome> StartDetectorModelAnalysisOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAlarmModelOutcome> UpdateAlarmModelOutcomeCallable;
      typedef std::future<UpdateDetectorModelOutcome> UpdateDetectorModelOutcomeCallable;
      typedef std::future<UpdateInputOutcome> UpdateInputOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTEventsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTEventsClient*, const Model::CreateAlarmModelRequest&, const Model::CreateAlarmModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlarmModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::CreateDetectorModelRequest&, const Model::CreateDetectorModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDetectorModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::CreateInputRequest&, const Model::CreateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DeleteAlarmModelRequest&, const Model::DeleteAlarmModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlarmModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DeleteDetectorModelRequest&, const Model::DeleteDetectorModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DeleteInputRequest&, const Model::DeleteInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DescribeAlarmModelRequest&, const Model::DescribeAlarmModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DescribeDetectorModelRequest&, const Model::DescribeDetectorModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DescribeDetectorModelAnalysisRequest&, const Model::DescribeDetectorModelAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorModelAnalysisResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DescribeInputRequest&, const Model::DescribeInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::DescribeLoggingOptionsRequest&, const Model::DescribeLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::GetDetectorModelAnalysisResultsRequest&, const Model::GetDetectorModelAnalysisResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorModelAnalysisResultsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListAlarmModelVersionsRequest&, const Model::ListAlarmModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlarmModelVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListAlarmModelsRequest&, const Model::ListAlarmModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlarmModelsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListDetectorModelVersionsRequest&, const Model::ListDetectorModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorModelVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListDetectorModelsRequest&, const Model::ListDetectorModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorModelsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListInputRoutingsRequest&, const Model::ListInputRoutingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputRoutingsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListInputsRequest&, const Model::ListInputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::PutLoggingOptionsRequest&, const Model::PutLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::StartDetectorModelAnalysisRequest&, const Model::StartDetectorModelAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDetectorModelAnalysisResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::UpdateAlarmModelRequest&, const Model::UpdateAlarmModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAlarmModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::UpdateDetectorModelRequest&, const Model::UpdateDetectorModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorModelResponseReceivedHandler;
    typedef std::function<void(const IoTEventsClient*, const Model::UpdateInputRequest&, const Model::UpdateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTEvents
} // namespace Aws
