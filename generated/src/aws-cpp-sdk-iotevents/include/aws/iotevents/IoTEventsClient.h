/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotevents/IoTEventsServiceClientModel.h>

namespace Aws
{
namespace IoTEvents
{
  /**
   * <p>AWS IoT Events monitors your equipment or device fleets for failures or
   * changes in operation, and triggers actions when such events occur. You can use
   * AWS IoT Events API operations to create, read, update, and delete inputs and
   * detector models, and to list their versions.</p>
   */
  class AWS_IOTEVENTS_API IoTEventsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTEventsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTEventsClientConfiguration ClientConfigurationType;
      typedef IoTEventsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::IoTEvents::IoTEventsClientConfiguration& clientConfiguration = Aws::IoTEvents::IoTEventsClientConfiguration(),
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::IoTEvents::IoTEventsClientConfiguration& clientConfiguration = Aws::IoTEvents::IoTEventsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::IoTEvents::IoTEventsClientConfiguration& clientConfiguration = Aws::IoTEvents::IoTEventsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTEventsClient();

        /**
         * <p>Creates an alarm model to monitor an AWS IoT Events input attribute. You can
         * use the alarm to get notified when the value is outside a specified range. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/create-alarms.html">Create
         * an alarm model</a> in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlarmModelOutcome CreateAlarmModel(const Model::CreateAlarmModelRequest& request) const;

        /**
         * A Callable wrapper for CreateAlarmModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAlarmModelRequestT = Model::CreateAlarmModelRequest>
        Model::CreateAlarmModelOutcomeCallable CreateAlarmModelCallable(const CreateAlarmModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::CreateAlarmModel, request);
        }

        /**
         * An Async wrapper for CreateAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAlarmModelRequestT = Model::CreateAlarmModelRequest>
        void CreateAlarmModelAsync(const CreateAlarmModelRequestT& request, const CreateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::CreateAlarmModel, request, handler, context);
        }

        /**
         * <p>Creates a detector model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorModelOutcome CreateDetectorModel(const Model::CreateDetectorModelRequest& request) const;

        /**
         * A Callable wrapper for CreateDetectorModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDetectorModelRequestT = Model::CreateDetectorModelRequest>
        Model::CreateDetectorModelOutcomeCallable CreateDetectorModelCallable(const CreateDetectorModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::CreateDetectorModel, request);
        }

        /**
         * An Async wrapper for CreateDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDetectorModelRequestT = Model::CreateDetectorModelRequest>
        void CreateDetectorModelAsync(const CreateDetectorModelRequestT& request, const CreateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::CreateDetectorModel, request, handler, context);
        }

        /**
         * <p>Creates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * A Callable wrapper for CreateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        Model::CreateInputOutcomeCallable CreateInputCallable(const CreateInputRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::CreateInput, request);
        }

        /**
         * An Async wrapper for CreateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        void CreateInputAsync(const CreateInputRequestT& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::CreateInput, request, handler, context);
        }

        /**
         * <p>Deletes an alarm model. Any alarm instances that were created based on this
         * alarm model are also deleted. This action can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmModelOutcome DeleteAlarmModel(const Model::DeleteAlarmModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlarmModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlarmModelRequestT = Model::DeleteAlarmModelRequest>
        Model::DeleteAlarmModelOutcomeCallable DeleteAlarmModelCallable(const DeleteAlarmModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DeleteAlarmModel, request);
        }

        /**
         * An Async wrapper for DeleteAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlarmModelRequestT = Model::DeleteAlarmModelRequest>
        void DeleteAlarmModelAsync(const DeleteAlarmModelRequestT& request, const DeleteAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DeleteAlarmModel, request, handler, context);
        }

        /**
         * <p>Deletes a detector model. Any active instances of the detector model are also
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorModelOutcome DeleteDetectorModel(const Model::DeleteDetectorModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteDetectorModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDetectorModelRequestT = Model::DeleteDetectorModelRequest>
        Model::DeleteDetectorModelOutcomeCallable DeleteDetectorModelCallable(const DeleteDetectorModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DeleteDetectorModel, request);
        }

        /**
         * An Async wrapper for DeleteDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDetectorModelRequestT = Model::DeleteDetectorModelRequest>
        void DeleteDetectorModelAsync(const DeleteDetectorModelRequestT& request, const DeleteDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DeleteDetectorModel, request, handler, context);
        }

        /**
         * <p>Deletes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * A Callable wrapper for DeleteInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInputRequestT = Model::DeleteInputRequest>
        Model::DeleteInputOutcomeCallable DeleteInputCallable(const DeleteInputRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DeleteInput, request);
        }

        /**
         * An Async wrapper for DeleteInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInputRequestT = Model::DeleteInputRequest>
        void DeleteInputAsync(const DeleteInputRequestT& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DeleteInput, request, handler, context);
        }

        /**
         * <p>Retrieves information about an alarm model. If you don't specify a value for
         * the <code>alarmModelVersion</code> parameter, the latest version is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmModelOutcome DescribeAlarmModel(const Model::DescribeAlarmModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlarmModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlarmModelRequestT = Model::DescribeAlarmModelRequest>
        Model::DescribeAlarmModelOutcomeCallable DescribeAlarmModelCallable(const DescribeAlarmModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DescribeAlarmModel, request);
        }

        /**
         * An Async wrapper for DescribeAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlarmModelRequestT = Model::DescribeAlarmModelRequest>
        void DescribeAlarmModelAsync(const DescribeAlarmModelRequestT& request, const DescribeAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DescribeAlarmModel, request, handler, context);
        }

        /**
         * <p>Describes a detector model. If the <code>version</code> parameter is not
         * specified, information about the latest version is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorModelOutcome DescribeDetectorModel(const Model::DescribeDetectorModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetectorModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDetectorModelRequestT = Model::DescribeDetectorModelRequest>
        Model::DescribeDetectorModelOutcomeCallable DescribeDetectorModelCallable(const DescribeDetectorModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DescribeDetectorModel, request);
        }

        /**
         * An Async wrapper for DescribeDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDetectorModelRequestT = Model::DescribeDetectorModelRequest>
        void DescribeDetectorModelAsync(const DescribeDetectorModelRequestT& request, const DescribeDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DescribeDetectorModel, request, handler, context);
        }

        /**
         * <p>Retrieves runtime information about a detector model analysis.</p> 
         * <p>After AWS IoT Events starts analyzing your detector model, you have up to 24
         * hours to retrieve the analysis results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeDetectorModelAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorModelAnalysisOutcome DescribeDetectorModelAnalysis(const Model::DescribeDetectorModelAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetectorModelAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDetectorModelAnalysisRequestT = Model::DescribeDetectorModelAnalysisRequest>
        Model::DescribeDetectorModelAnalysisOutcomeCallable DescribeDetectorModelAnalysisCallable(const DescribeDetectorModelAnalysisRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DescribeDetectorModelAnalysis, request);
        }

        /**
         * An Async wrapper for DescribeDetectorModelAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDetectorModelAnalysisRequestT = Model::DescribeDetectorModelAnalysisRequest>
        void DescribeDetectorModelAnalysisAsync(const DescribeDetectorModelAnalysisRequestT& request, const DescribeDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DescribeDetectorModelAnalysis, request, handler, context);
        }

        /**
         * <p>Describes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * A Callable wrapper for DescribeInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInputRequestT = Model::DescribeInputRequest>
        Model::DescribeInputOutcomeCallable DescribeInputCallable(const DescribeInputRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DescribeInput, request);
        }

        /**
         * An Async wrapper for DescribeInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInputRequestT = Model::DescribeInputRequest>
        void DescribeInputAsync(const DescribeInputRequestT& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DescribeInput, request, handler, context);
        }

        /**
         * <p>Retrieves the current settings of the AWS IoT Events logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
        Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::DescribeLoggingOptions, request);
        }

        /**
         * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
        void DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequestT& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::DescribeLoggingOptions, request, handler, context);
        }

        /**
         * <p>Retrieves one or more analysis results of the detector model.</p> 
         * <p>After AWS IoT Events starts analyzing your detector model, you have up to 24
         * hours to retrieve the analysis results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/GetDetectorModelAnalysisResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorModelAnalysisResultsOutcome GetDetectorModelAnalysisResults(const Model::GetDetectorModelAnalysisResultsRequest& request) const;

        /**
         * A Callable wrapper for GetDetectorModelAnalysisResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDetectorModelAnalysisResultsRequestT = Model::GetDetectorModelAnalysisResultsRequest>
        Model::GetDetectorModelAnalysisResultsOutcomeCallable GetDetectorModelAnalysisResultsCallable(const GetDetectorModelAnalysisResultsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::GetDetectorModelAnalysisResults, request);
        }

        /**
         * An Async wrapper for GetDetectorModelAnalysisResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDetectorModelAnalysisResultsRequestT = Model::GetDetectorModelAnalysisResultsRequest>
        void GetDetectorModelAnalysisResultsAsync(const GetDetectorModelAnalysisResultsRequestT& request, const GetDetectorModelAnalysisResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::GetDetectorModelAnalysisResults, request, handler, context);
        }

        /**
         * <p>Lists all the versions of an alarm model. The operation returns only the
         * metadata associated with each alarm model version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListAlarmModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmModelVersionsOutcome ListAlarmModelVersions(const Model::ListAlarmModelVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAlarmModelVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlarmModelVersionsRequestT = Model::ListAlarmModelVersionsRequest>
        Model::ListAlarmModelVersionsOutcomeCallable ListAlarmModelVersionsCallable(const ListAlarmModelVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListAlarmModelVersions, request);
        }

        /**
         * An Async wrapper for ListAlarmModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlarmModelVersionsRequestT = Model::ListAlarmModelVersionsRequest>
        void ListAlarmModelVersionsAsync(const ListAlarmModelVersionsRequestT& request, const ListAlarmModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListAlarmModelVersions, request, handler, context);
        }

        /**
         * <p>Lists the alarm models that you created. The operation returns only the
         * metadata associated with each alarm model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListAlarmModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmModelsOutcome ListAlarmModels(const Model::ListAlarmModelsRequest& request) const;

        /**
         * A Callable wrapper for ListAlarmModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlarmModelsRequestT = Model::ListAlarmModelsRequest>
        Model::ListAlarmModelsOutcomeCallable ListAlarmModelsCallable(const ListAlarmModelsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListAlarmModels, request);
        }

        /**
         * An Async wrapper for ListAlarmModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlarmModelsRequestT = Model::ListAlarmModelsRequest>
        void ListAlarmModelsAsync(const ListAlarmModelsRequestT& request, const ListAlarmModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListAlarmModels, request, handler, context);
        }

        /**
         * <p>Lists all the versions of a detector model. Only the metadata associated with
         * each detector model version is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListDetectorModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorModelVersionsOutcome ListDetectorModelVersions(const Model::ListDetectorModelVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDetectorModelVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDetectorModelVersionsRequestT = Model::ListDetectorModelVersionsRequest>
        Model::ListDetectorModelVersionsOutcomeCallable ListDetectorModelVersionsCallable(const ListDetectorModelVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListDetectorModelVersions, request);
        }

        /**
         * An Async wrapper for ListDetectorModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectorModelVersionsRequestT = Model::ListDetectorModelVersionsRequest>
        void ListDetectorModelVersionsAsync(const ListDetectorModelVersionsRequestT& request, const ListDetectorModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListDetectorModelVersions, request, handler, context);
        }

        /**
         * <p>Lists the detector models you have created. Only the metadata associated with
         * each detector model is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListDetectorModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorModelsOutcome ListDetectorModels(const Model::ListDetectorModelsRequest& request) const;

        /**
         * A Callable wrapper for ListDetectorModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDetectorModelsRequestT = Model::ListDetectorModelsRequest>
        Model::ListDetectorModelsOutcomeCallable ListDetectorModelsCallable(const ListDetectorModelsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListDetectorModels, request);
        }

        /**
         * An Async wrapper for ListDetectorModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectorModelsRequestT = Model::ListDetectorModelsRequest>
        void ListDetectorModelsAsync(const ListDetectorModelsRequestT& request, const ListDetectorModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListDetectorModels, request, handler, context);
        }

        /**
         * <p> Lists one or more input routings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputRoutings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputRoutingsOutcome ListInputRoutings(const Model::ListInputRoutingsRequest& request) const;

        /**
         * A Callable wrapper for ListInputRoutings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputRoutingsRequestT = Model::ListInputRoutingsRequest>
        Model::ListInputRoutingsOutcomeCallable ListInputRoutingsCallable(const ListInputRoutingsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListInputRoutings, request);
        }

        /**
         * An Async wrapper for ListInputRoutings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputRoutingsRequestT = Model::ListInputRoutingsRequest>
        void ListInputRoutingsAsync(const ListInputRoutingsRequestT& request, const ListInputRoutingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListInputRoutings, request, handler, context);
        }

        /**
         * <p>Lists the inputs you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * A Callable wrapper for ListInputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        Model::ListInputsOutcomeCallable ListInputsCallable(const ListInputsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListInputs, request);
        }

        /**
         * An Async wrapper for ListInputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        void ListInputsAsync(const ListInputsRequestT& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListInputs, request, handler, context);
        }

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sets or updates the AWS IoT Events logging options.</p> <p>If you update the
         * value of any <code>loggingOptions</code> field, it takes up to one minute for
         * the change to take effect. If you change the policy attached to the role you
         * specified in the <code>roleArn</code> field (for example, to correct an invalid
         * policy), it takes up to five minutes for that change to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const PutLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::PutLoggingOptions, request);
        }

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        void PutLoggingOptionsAsync(const PutLoggingOptionsRequestT& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::PutLoggingOptions, request, handler, context);
        }

        /**
         * <p>Performs an analysis of your detector model. For more information, see <a
         * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-analyze-api.html">Troubleshooting
         * a detector model</a> in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/StartDetectorModelAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDetectorModelAnalysisOutcome StartDetectorModelAnalysis(const Model::StartDetectorModelAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartDetectorModelAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDetectorModelAnalysisRequestT = Model::StartDetectorModelAnalysisRequest>
        Model::StartDetectorModelAnalysisOutcomeCallable StartDetectorModelAnalysisCallable(const StartDetectorModelAnalysisRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::StartDetectorModelAnalysis, request);
        }

        /**
         * An Async wrapper for StartDetectorModelAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDetectorModelAnalysisRequestT = Model::StartDetectorModelAnalysisRequest>
        void StartDetectorModelAnalysisAsync(const StartDetectorModelAnalysisRequestT& request, const StartDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::StartDetectorModelAnalysis, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an alarm model. Any alarms that were created based on the previous
         * version are deleted and then created again as new data arrives.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAlarmModelOutcome UpdateAlarmModel(const Model::UpdateAlarmModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlarmModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAlarmModelRequestT = Model::UpdateAlarmModelRequest>
        Model::UpdateAlarmModelOutcomeCallable UpdateAlarmModelCallable(const UpdateAlarmModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::UpdateAlarmModel, request);
        }

        /**
         * An Async wrapper for UpdateAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAlarmModelRequestT = Model::UpdateAlarmModelRequest>
        void UpdateAlarmModelAsync(const UpdateAlarmModelRequestT& request, const UpdateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::UpdateAlarmModel, request, handler, context);
        }

        /**
         * <p>Updates a detector model. Detectors (instances) spawned by the previous
         * version are deleted and then re-created as new inputs arrive.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorModelOutcome UpdateDetectorModel(const Model::UpdateDetectorModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetectorModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDetectorModelRequestT = Model::UpdateDetectorModelRequest>
        Model::UpdateDetectorModelOutcomeCallable UpdateDetectorModelCallable(const UpdateDetectorModelRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::UpdateDetectorModel, request);
        }

        /**
         * An Async wrapper for UpdateDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDetectorModelRequestT = Model::UpdateDetectorModelRequest>
        void UpdateDetectorModelAsync(const UpdateDetectorModelRequestT& request, const UpdateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::UpdateDetectorModel, request, handler, context);
        }

        /**
         * <p>Updates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * A Callable wrapper for UpdateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInputRequestT = Model::UpdateInputRequest>
        Model::UpdateInputOutcomeCallable UpdateInputCallable(const UpdateInputRequestT& request) const
        {
            return SubmitCallable(&IoTEventsClient::UpdateInput, request);
        }

        /**
         * An Async wrapper for UpdateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInputRequestT = Model::UpdateInputRequest>
        void UpdateInputAsync(const UpdateInputRequestT& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTEventsClient::UpdateInput, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTEventsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTEventsClient>;
      void init(const IoTEventsClientConfiguration& clientConfiguration);

      IoTEventsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTEventsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTEvents
} // namespace Aws
