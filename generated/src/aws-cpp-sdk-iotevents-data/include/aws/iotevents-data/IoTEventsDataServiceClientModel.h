/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotevents-data/IoTEventsDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotevents-data/IoTEventsDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTEventsDataClient header */
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmResult.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorResult.h>
#include <aws/iotevents-data/model/BatchDisableAlarmResult.h>
#include <aws/iotevents-data/model/BatchEnableAlarmResult.h>
#include <aws/iotevents-data/model/BatchPutMessageResult.h>
#include <aws/iotevents-data/model/BatchResetAlarmResult.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmResult.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorResult.h>
#include <aws/iotevents-data/model/DescribeAlarmResult.h>
#include <aws/iotevents-data/model/DescribeDetectorResult.h>
#include <aws/iotevents-data/model/ListAlarmsResult.h>
#include <aws/iotevents-data/model/ListDetectorsResult.h>
/* End of service model headers required in IoTEventsDataClient header */

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

  namespace IoTEventsData
  {
    using IoTEventsDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTEventsDataEndpointProviderBase = Aws::IoTEventsData::Endpoint::IoTEventsDataEndpointProviderBase;
    using IoTEventsDataEndpointProvider = Aws::IoTEventsData::Endpoint::IoTEventsDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTEventsDataClient header */
      class BatchAcknowledgeAlarmRequest;
      class BatchDeleteDetectorRequest;
      class BatchDisableAlarmRequest;
      class BatchEnableAlarmRequest;
      class BatchPutMessageRequest;
      class BatchResetAlarmRequest;
      class BatchSnoozeAlarmRequest;
      class BatchUpdateDetectorRequest;
      class DescribeAlarmRequest;
      class DescribeDetectorRequest;
      class ListAlarmsRequest;
      class ListDetectorsRequest;
      /* End of service model forward declarations required in IoTEventsDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchAcknowledgeAlarmResult, IoTEventsDataError> BatchAcknowledgeAlarmOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteDetectorResult, IoTEventsDataError> BatchDeleteDetectorOutcome;
      typedef Aws::Utils::Outcome<BatchDisableAlarmResult, IoTEventsDataError> BatchDisableAlarmOutcome;
      typedef Aws::Utils::Outcome<BatchEnableAlarmResult, IoTEventsDataError> BatchEnableAlarmOutcome;
      typedef Aws::Utils::Outcome<BatchPutMessageResult, IoTEventsDataError> BatchPutMessageOutcome;
      typedef Aws::Utils::Outcome<BatchResetAlarmResult, IoTEventsDataError> BatchResetAlarmOutcome;
      typedef Aws::Utils::Outcome<BatchSnoozeAlarmResult, IoTEventsDataError> BatchSnoozeAlarmOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateDetectorResult, IoTEventsDataError> BatchUpdateDetectorOutcome;
      typedef Aws::Utils::Outcome<DescribeAlarmResult, IoTEventsDataError> DescribeAlarmOutcome;
      typedef Aws::Utils::Outcome<DescribeDetectorResult, IoTEventsDataError> DescribeDetectorOutcome;
      typedef Aws::Utils::Outcome<ListAlarmsResult, IoTEventsDataError> ListAlarmsOutcome;
      typedef Aws::Utils::Outcome<ListDetectorsResult, IoTEventsDataError> ListDetectorsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchAcknowledgeAlarmOutcome> BatchAcknowledgeAlarmOutcomeCallable;
      typedef std::future<BatchDeleteDetectorOutcome> BatchDeleteDetectorOutcomeCallable;
      typedef std::future<BatchDisableAlarmOutcome> BatchDisableAlarmOutcomeCallable;
      typedef std::future<BatchEnableAlarmOutcome> BatchEnableAlarmOutcomeCallable;
      typedef std::future<BatchPutMessageOutcome> BatchPutMessageOutcomeCallable;
      typedef std::future<BatchResetAlarmOutcome> BatchResetAlarmOutcomeCallable;
      typedef std::future<BatchSnoozeAlarmOutcome> BatchSnoozeAlarmOutcomeCallable;
      typedef std::future<BatchUpdateDetectorOutcome> BatchUpdateDetectorOutcomeCallable;
      typedef std::future<DescribeAlarmOutcome> DescribeAlarmOutcomeCallable;
      typedef std::future<DescribeDetectorOutcome> DescribeDetectorOutcomeCallable;
      typedef std::future<ListAlarmsOutcome> ListAlarmsOutcomeCallable;
      typedef std::future<ListDetectorsOutcome> ListDetectorsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTEventsDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchAcknowledgeAlarmRequest&, const Model::BatchAcknowledgeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAcknowledgeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchDeleteDetectorRequest&, const Model::BatchDeleteDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchDisableAlarmRequest&, const Model::BatchDisableAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchEnableAlarmRequest&, const Model::BatchEnableAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchPutMessageRequest&, const Model::BatchPutMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutMessageResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchResetAlarmRequest&, const Model::BatchResetAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchResetAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchSnoozeAlarmRequest&, const Model::BatchSnoozeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchSnoozeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchUpdateDetectorRequest&, const Model::BatchUpdateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::DescribeAlarmRequest&, const Model::DescribeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::DescribeDetectorRequest&, const Model::DescribeDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::ListAlarmsRequest&, const Model::ListAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlarmsResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::ListDetectorsRequest&, const Model::ListDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTEventsData
} // namespace Aws
