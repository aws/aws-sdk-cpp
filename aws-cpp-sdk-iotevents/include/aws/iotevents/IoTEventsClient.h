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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::IoTEvents::IoTEventsClientConfiguration& clientConfiguration = Aws::IoTEvents::IoTEventsClientConfiguration(),
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG),
                        const Aws::IoTEvents::IoTEventsClientConfiguration& clientConfiguration = Aws::IoTEvents::IoTEventsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateAlarmModelOutcomeCallable CreateAlarmModelCallable(const Model::CreateAlarmModelRequest& request) const;

        /**
         * An Async wrapper for CreateAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlarmModelAsync(const Model::CreateAlarmModelRequest& request, const CreateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a detector model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorModelOutcome CreateDetectorModel(const Model::CreateDetectorModelRequest& request) const;

        /**
         * A Callable wrapper for CreateDetectorModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorModelOutcomeCallable CreateDetectorModelCallable(const Model::CreateDetectorModelRequest& request) const;

        /**
         * An Async wrapper for CreateDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorModelAsync(const Model::CreateDetectorModelRequest& request, const CreateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * A Callable wrapper for CreateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputOutcomeCallable CreateInputCallable(const Model::CreateInputRequest& request) const;

        /**
         * An Async wrapper for CreateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputAsync(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAlarmModelOutcomeCallable DeleteAlarmModelCallable(const Model::DeleteAlarmModelRequest& request) const;

        /**
         * An Async wrapper for DeleteAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlarmModelAsync(const Model::DeleteAlarmModelRequest& request, const DeleteAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDetectorModelOutcomeCallable DeleteDetectorModelCallable(const Model::DeleteDetectorModelRequest& request) const;

        /**
         * An Async wrapper for DeleteDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorModelAsync(const Model::DeleteDetectorModelRequest& request, const DeleteDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * A Callable wrapper for DeleteInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputOutcomeCallable DeleteInputCallable(const Model::DeleteInputRequest& request) const;

        /**
         * An Async wrapper for DeleteInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputAsync(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAlarmModelOutcomeCallable DescribeAlarmModelCallable(const Model::DescribeAlarmModelRequest& request) const;

        /**
         * An Async wrapper for DescribeAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmModelAsync(const Model::DescribeAlarmModelRequest& request, const DescribeAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDetectorModelOutcomeCallable DescribeDetectorModelCallable(const Model::DescribeDetectorModelRequest& request) const;

        /**
         * An Async wrapper for DescribeDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectorModelAsync(const Model::DescribeDetectorModelRequest& request, const DescribeDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDetectorModelAnalysisOutcomeCallable DescribeDetectorModelAnalysisCallable(const Model::DescribeDetectorModelAnalysisRequest& request) const;

        /**
         * An Async wrapper for DescribeDetectorModelAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectorModelAnalysisAsync(const Model::DescribeDetectorModelAnalysisRequest& request, const DescribeDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * A Callable wrapper for DescribeInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputOutcomeCallable DescribeInputCallable(const Model::DescribeInputRequest& request) const;

        /**
         * An Async wrapper for DescribeInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputAsync(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingOptionsAsync(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDetectorModelAnalysisResultsOutcomeCallable GetDetectorModelAnalysisResultsCallable(const Model::GetDetectorModelAnalysisResultsRequest& request) const;

        /**
         * An Async wrapper for GetDetectorModelAnalysisResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorModelAnalysisResultsAsync(const Model::GetDetectorModelAnalysisResultsRequest& request, const GetDetectorModelAnalysisResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAlarmModelVersionsOutcomeCallable ListAlarmModelVersionsCallable(const Model::ListAlarmModelVersionsRequest& request) const;

        /**
         * An Async wrapper for ListAlarmModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlarmModelVersionsAsync(const Model::ListAlarmModelVersionsRequest& request, const ListAlarmModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAlarmModelsOutcomeCallable ListAlarmModelsCallable(const Model::ListAlarmModelsRequest& request) const;

        /**
         * An Async wrapper for ListAlarmModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlarmModelsAsync(const Model::ListAlarmModelsRequest& request, const ListAlarmModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDetectorModelVersionsOutcomeCallable ListDetectorModelVersionsCallable(const Model::ListDetectorModelVersionsRequest& request) const;

        /**
         * An Async wrapper for ListDetectorModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorModelVersionsAsync(const Model::ListDetectorModelVersionsRequest& request, const ListDetectorModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDetectorModelsOutcomeCallable ListDetectorModelsCallable(const Model::ListDetectorModelsRequest& request) const;

        /**
         * An Async wrapper for ListDetectorModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorModelsAsync(const Model::ListDetectorModelsRequest& request, const ListDetectorModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists one or more input routings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputRoutings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputRoutingsOutcome ListInputRoutings(const Model::ListInputRoutingsRequest& request) const;

        /**
         * A Callable wrapper for ListInputRoutings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputRoutingsOutcomeCallable ListInputRoutingsCallable(const Model::ListInputRoutingsRequest& request) const;

        /**
         * An Async wrapper for ListInputRoutings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputRoutingsAsync(const Model::ListInputRoutingsRequest& request, const ListInputRoutingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the inputs you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * A Callable wrapper for ListInputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputsOutcomeCallable ListInputsCallable(const Model::ListInputsRequest& request) const;

        /**
         * An Async wrapper for ListInputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputsAsync(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingOptionsAsync(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDetectorModelAnalysisOutcomeCallable StartDetectorModelAnalysisCallable(const Model::StartDetectorModelAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartDetectorModelAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDetectorModelAnalysisAsync(const Model::StartDetectorModelAnalysisRequest& request, const StartDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateAlarmModelOutcomeCallable UpdateAlarmModelCallable(const Model::UpdateAlarmModelRequest& request) const;

        /**
         * An Async wrapper for UpdateAlarmModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAlarmModelAsync(const Model::UpdateAlarmModelRequest& request, const UpdateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDetectorModelOutcomeCallable UpdateDetectorModelCallable(const Model::UpdateDetectorModelRequest& request) const;

        /**
         * An Async wrapper for UpdateDetectorModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorModelAsync(const Model::UpdateDetectorModelRequest& request, const UpdateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * A Callable wrapper for UpdateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputOutcomeCallable UpdateInputCallable(const Model::UpdateInputRequest& request) const;

        /**
         * An Async wrapper for UpdateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputAsync(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
