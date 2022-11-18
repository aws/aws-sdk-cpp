/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotevents/IoTEventsServiceClientModel.h>
#include <aws/iotevents/IoTEventsLegacyAsyncMacros.h>

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
  class AWS_IOTEVENTS_API IoTEventsClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Creates a detector model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorModelOutcome CreateDetectorModel(const Model::CreateDetectorModelRequest& request) const;


        /**
         * <p>Creates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;


        /**
         * <p>Deletes an alarm model. Any alarm instances that were created based on this
         * alarm model are also deleted. This action can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmModelOutcome DeleteAlarmModel(const Model::DeleteAlarmModelRequest& request) const;


        /**
         * <p>Deletes a detector model. Any active instances of the detector model are also
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorModelOutcome DeleteDetectorModel(const Model::DeleteDetectorModelRequest& request) const;


        /**
         * <p>Deletes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;


        /**
         * <p>Retrieves information about an alarm model. If you don't specify a value for
         * the <code>alarmModelVersion</code> parameter, the latest version is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmModelOutcome DescribeAlarmModel(const Model::DescribeAlarmModelRequest& request) const;


        /**
         * <p>Describes a detector model. If the <code>version</code> parameter is not
         * specified, information about the latest version is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorModelOutcome DescribeDetectorModel(const Model::DescribeDetectorModelRequest& request) const;


        /**
         * <p>Retrieves runtime information about a detector model analysis.</p> 
         * <p>After AWS IoT Events starts analyzing your detector model, you have up to 24
         * hours to retrieve the analysis results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeDetectorModelAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorModelAnalysisOutcome DescribeDetectorModelAnalysis(const Model::DescribeDetectorModelAnalysisRequest& request) const;


        /**
         * <p>Describes an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;


        /**
         * <p>Retrieves the current settings of the AWS IoT Events logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;


        /**
         * <p>Retrieves one or more analysis results of the detector model.</p> 
         * <p>After AWS IoT Events starts analyzing your detector model, you have up to 24
         * hours to retrieve the analysis results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/GetDetectorModelAnalysisResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorModelAnalysisResultsOutcome GetDetectorModelAnalysisResults(const Model::GetDetectorModelAnalysisResultsRequest& request) const;


        /**
         * <p>Lists all the versions of an alarm model. The operation returns only the
         * metadata associated with each alarm model version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListAlarmModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmModelVersionsOutcome ListAlarmModelVersions(const Model::ListAlarmModelVersionsRequest& request) const;


        /**
         * <p>Lists the alarm models that you created. The operation returns only the
         * metadata associated with each alarm model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListAlarmModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmModelsOutcome ListAlarmModels(const Model::ListAlarmModelsRequest& request) const;


        /**
         * <p>Lists all the versions of a detector model. Only the metadata associated with
         * each detector model version is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListDetectorModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorModelVersionsOutcome ListDetectorModelVersions(const Model::ListDetectorModelVersionsRequest& request) const;


        /**
         * <p>Lists the detector models you have created. Only the metadata associated with
         * each detector model is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListDetectorModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorModelsOutcome ListDetectorModels(const Model::ListDetectorModelsRequest& request) const;


        /**
         * <p> Lists one or more input routings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputRoutings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputRoutingsOutcome ListInputRoutings(const Model::ListInputRoutingsRequest& request) const;


        /**
         * <p>Lists the inputs you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;


        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Performs an analysis of your detector model. For more information, see <a
         * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-analyze-api.html">Troubleshooting
         * a detector model</a> in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/StartDetectorModelAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDetectorModelAnalysisOutcome StartDetectorModelAnalysis(const Model::StartDetectorModelAnalysisRequest& request) const;


        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an alarm model. Any alarms that were created based on the previous
         * version are deleted and then created again as new data arrives.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateAlarmModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAlarmModelOutcome UpdateAlarmModel(const Model::UpdateAlarmModelRequest& request) const;


        /**
         * <p>Updates a detector model. Detectors (instances) spawned by the previous
         * version are deleted and then re-created as new inputs arrive.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateDetectorModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorModelOutcome UpdateDetectorModel(const Model::UpdateDetectorModelRequest& request) const;


        /**
         * <p>Updates an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTEventsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTEventsClientConfiguration& clientConfiguration);

      IoTEventsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTEventsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTEvents
} // namespace Aws
