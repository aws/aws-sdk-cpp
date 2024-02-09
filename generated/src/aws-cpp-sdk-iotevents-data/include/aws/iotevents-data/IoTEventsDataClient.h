/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotevents-data/IoTEventsDataServiceClientModel.h>

namespace Aws
{
namespace IoTEventsData
{
  /**
   * <p>IoT Events monitors your equipment or device fleets for failures or changes
   * in operation, and triggers actions when such events occur. You can use IoT
   * Events Data API commands to send inputs to detectors, list detectors, and view
   * or update a detector's status.</p> <p> For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What
   * is IoT Events?</a> in the <i>IoT Events Developer Guide</i>.</p>
   */
  class AWS_IOTEVENTSDATA_API IoTEventsDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTEventsDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTEventsDataClientConfiguration ClientConfigurationType;
      typedef IoTEventsDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration = Aws::IoTEventsData::IoTEventsDataClientConfiguration(),
                            std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration = Aws::IoTEventsData::IoTEventsDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration = Aws::IoTEventsData::IoTEventsDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTEventsDataClient();

        /**
         * <p>Acknowledges one or more alarms. The alarms change to the
         * <code>ACKNOWLEDGED</code> state after you acknowledge them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchAcknowledgeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAcknowledgeAlarmOutcome BatchAcknowledgeAlarm(const Model::BatchAcknowledgeAlarmRequest& request) const;

        /**
         * A Callable wrapper for BatchAcknowledgeAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAcknowledgeAlarmRequestT = Model::BatchAcknowledgeAlarmRequest>
        Model::BatchAcknowledgeAlarmOutcomeCallable BatchAcknowledgeAlarmCallable(const BatchAcknowledgeAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchAcknowledgeAlarm, request);
        }

        /**
         * An Async wrapper for BatchAcknowledgeAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAcknowledgeAlarmRequestT = Model::BatchAcknowledgeAlarmRequest>
        void BatchAcknowledgeAlarmAsync(const BatchAcknowledgeAlarmRequestT& request, const BatchAcknowledgeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchAcknowledgeAlarm, request, handler, context);
        }

        /**
         * <p>Deletes one or more detectors that were created. When a detector is deleted,
         * its state will be cleared and the detector will be removed from the list of
         * detectors. The deleted detector will no longer appear if referenced in the <a
         * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_ListDetectors.html">ListDetectors</a>
         * API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchDeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDetectorOutcome BatchDeleteDetector(const Model::BatchDeleteDetectorRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteDetectorRequestT = Model::BatchDeleteDetectorRequest>
        Model::BatchDeleteDetectorOutcomeCallable BatchDeleteDetectorCallable(const BatchDeleteDetectorRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchDeleteDetector, request);
        }

        /**
         * An Async wrapper for BatchDeleteDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteDetectorRequestT = Model::BatchDeleteDetectorRequest>
        void BatchDeleteDetectorAsync(const BatchDeleteDetectorRequestT& request, const BatchDeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchDeleteDetector, request, handler, context);
        }

        /**
         * <p>Disables one or more alarms. The alarms change to the <code>DISABLED</code>
         * state after you disable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchDisableAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableAlarmOutcome BatchDisableAlarm(const Model::BatchDisableAlarmRequest& request) const;

        /**
         * A Callable wrapper for BatchDisableAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisableAlarmRequestT = Model::BatchDisableAlarmRequest>
        Model::BatchDisableAlarmOutcomeCallable BatchDisableAlarmCallable(const BatchDisableAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchDisableAlarm, request);
        }

        /**
         * An Async wrapper for BatchDisableAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisableAlarmRequestT = Model::BatchDisableAlarmRequest>
        void BatchDisableAlarmAsync(const BatchDisableAlarmRequestT& request, const BatchDisableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchDisableAlarm, request, handler, context);
        }

        /**
         * <p>Enables one or more alarms. The alarms change to the <code>NORMAL</code>
         * state after you enable them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchEnableAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableAlarmOutcome BatchEnableAlarm(const Model::BatchEnableAlarmRequest& request) const;

        /**
         * A Callable wrapper for BatchEnableAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchEnableAlarmRequestT = Model::BatchEnableAlarmRequest>
        Model::BatchEnableAlarmOutcomeCallable BatchEnableAlarmCallable(const BatchEnableAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchEnableAlarm, request);
        }

        /**
         * An Async wrapper for BatchEnableAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchEnableAlarmRequestT = Model::BatchEnableAlarmRequest>
        void BatchEnableAlarmAsync(const BatchEnableAlarmRequestT& request, const BatchEnableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchEnableAlarm, request, handler, context);
        }

        /**
         * <p>Sends a set of messages to the IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMessageOutcome BatchPutMessage(const Model::BatchPutMessageRequest& request) const;

        /**
         * A Callable wrapper for BatchPutMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutMessageRequestT = Model::BatchPutMessageRequest>
        Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const BatchPutMessageRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchPutMessage, request);
        }

        /**
         * An Async wrapper for BatchPutMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutMessageRequestT = Model::BatchPutMessageRequest>
        void BatchPutMessageAsync(const BatchPutMessageRequestT& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchPutMessage, request, handler, context);
        }

        /**
         * <p>Resets one or more alarms. The alarms return to the <code>NORMAL</code> state
         * after you reset them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchResetAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchResetAlarmOutcome BatchResetAlarm(const Model::BatchResetAlarmRequest& request) const;

        /**
         * A Callable wrapper for BatchResetAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchResetAlarmRequestT = Model::BatchResetAlarmRequest>
        Model::BatchResetAlarmOutcomeCallable BatchResetAlarmCallable(const BatchResetAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchResetAlarm, request);
        }

        /**
         * An Async wrapper for BatchResetAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchResetAlarmRequestT = Model::BatchResetAlarmRequest>
        void BatchResetAlarmAsync(const BatchResetAlarmRequestT& request, const BatchResetAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchResetAlarm, request, handler, context);
        }

        /**
         * <p>Changes one or more alarms to the snooze mode. The alarms change to the
         * <code>SNOOZE_DISABLED</code> state after you set them to the snooze
         * mode.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchSnoozeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchSnoozeAlarmOutcome BatchSnoozeAlarm(const Model::BatchSnoozeAlarmRequest& request) const;

        /**
         * A Callable wrapper for BatchSnoozeAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchSnoozeAlarmRequestT = Model::BatchSnoozeAlarmRequest>
        Model::BatchSnoozeAlarmOutcomeCallable BatchSnoozeAlarmCallable(const BatchSnoozeAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchSnoozeAlarm, request);
        }

        /**
         * An Async wrapper for BatchSnoozeAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchSnoozeAlarmRequestT = Model::BatchSnoozeAlarmRequest>
        void BatchSnoozeAlarmAsync(const BatchSnoozeAlarmRequestT& request, const BatchSnoozeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchSnoozeAlarm, request, handler, context);
        }

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateDetectorOutcome BatchUpdateDetector(const Model::BatchUpdateDetectorRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateDetectorRequestT = Model::BatchUpdateDetectorRequest>
        Model::BatchUpdateDetectorOutcomeCallable BatchUpdateDetectorCallable(const BatchUpdateDetectorRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::BatchUpdateDetector, request);
        }

        /**
         * An Async wrapper for BatchUpdateDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateDetectorRequestT = Model::BatchUpdateDetectorRequest>
        void BatchUpdateDetectorAsync(const BatchUpdateDetectorRequestT& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::BatchUpdateDetector, request, handler, context);
        }

        /**
         * <p>Retrieves information about an alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmOutcome DescribeAlarm(const Model::DescribeAlarmRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlarmRequestT = Model::DescribeAlarmRequest>
        Model::DescribeAlarmOutcomeCallable DescribeAlarmCallable(const DescribeAlarmRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::DescribeAlarm, request);
        }

        /**
         * An Async wrapper for DescribeAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlarmRequestT = Model::DescribeAlarmRequest>
        void DescribeAlarmAsync(const DescribeAlarmRequestT& request, const DescribeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::DescribeAlarm, request, handler, context);
        }

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDetectorRequestT = Model::DescribeDetectorRequest>
        Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const DescribeDetectorRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::DescribeDetector, request);
        }

        /**
         * An Async wrapper for DescribeDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDetectorRequestT = Model::DescribeDetectorRequest>
        void DescribeDetectorAsync(const DescribeDetectorRequestT& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::DescribeDetector, request, handler, context);
        }

        /**
         * <p>Lists one or more alarms. The operation returns only the metadata associated
         * with each alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmsOutcome ListAlarms(const Model::ListAlarmsRequest& request) const;

        /**
         * A Callable wrapper for ListAlarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlarmsRequestT = Model::ListAlarmsRequest>
        Model::ListAlarmsOutcomeCallable ListAlarmsCallable(const ListAlarmsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::ListAlarms, request);
        }

        /**
         * An Async wrapper for ListAlarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlarmsRequestT = Model::ListAlarmsRequest>
        void ListAlarmsAsync(const ListAlarmsRequestT& request, const ListAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::ListAlarms, request, handler, context);
        }

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * A Callable wrapper for ListDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDetectorsRequestT = Model::ListDetectorsRequest>
        Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const ListDetectorsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsDataClient::ListDetectors, request);
        }

        /**
         * An Async wrapper for ListDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectorsRequestT = Model::ListDetectorsRequest>
        void ListDetectorsAsync(const ListDetectorsRequestT& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsDataClient::ListDetectors, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTEventsDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTEventsDataClient>;
      void init(const IoTEventsDataClientConfiguration& clientConfiguration);

      IoTEventsDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTEventsDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTEventsData
} // namespace Aws
