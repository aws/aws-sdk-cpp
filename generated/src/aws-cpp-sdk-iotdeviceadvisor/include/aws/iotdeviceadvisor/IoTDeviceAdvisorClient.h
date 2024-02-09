/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorServiceClientModel.h>

namespace Aws
{
namespace IoTDeviceAdvisor
{
  /**
   * <p>Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed
   * test capability for validating IoT devices during device software development.
   * Device Advisor provides pre-built tests that you can use to validate IoT devices
   * for reliable and secure connectivity with Amazon Web Services IoT Core before
   * deploying devices to production. By using Device Advisor, you can confirm that
   * your devices can connect to Amazon Web Services IoT Core, follow security best
   * practices and, if applicable, receive software updates from IoT Device
   * Management. You can also download signed qualification reports to submit to the
   * Amazon Web Services Partner Network to get your device qualified for the Amazon
   * Web Services Partner Device Catalog without the need to send your device in and
   * wait for it to be tested.</p>
   */
  class AWS_IOTDEVICEADVISOR_API IoTDeviceAdvisorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTDeviceAdvisorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTDeviceAdvisorClientConfiguration ClientConfigurationType;
      typedef IoTDeviceAdvisorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration(),
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTDeviceAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTDeviceAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTDeviceAdvisorClient();

        /**
         * <p>Creates a Device Advisor test suite.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateSuiteDefinition</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/CreateSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSuiteDefinitionOutcome CreateSuiteDefinition(const Model::CreateSuiteDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateSuiteDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSuiteDefinitionRequestT = Model::CreateSuiteDefinitionRequest>
        Model::CreateSuiteDefinitionOutcomeCallable CreateSuiteDefinitionCallable(const CreateSuiteDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::CreateSuiteDefinition, request);
        }

        /**
         * An Async wrapper for CreateSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSuiteDefinitionRequestT = Model::CreateSuiteDefinitionRequest>
        void CreateSuiteDefinitionAsync(const CreateSuiteDefinitionRequestT& request, const CreateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::CreateSuiteDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a Device Advisor test suite.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteSuiteDefinition</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/DeleteSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuiteDefinitionOutcome DeleteSuiteDefinition(const Model::DeleteSuiteDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSuiteDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSuiteDefinitionRequestT = Model::DeleteSuiteDefinitionRequest>
        Model::DeleteSuiteDefinitionOutcomeCallable DeleteSuiteDefinitionCallable(const DeleteSuiteDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::DeleteSuiteDefinition, request);
        }

        /**
         * An Async wrapper for DeleteSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSuiteDefinitionRequestT = Model::DeleteSuiteDefinitionRequest>
        void DeleteSuiteDefinitionAsync(const DeleteSuiteDefinitionRequestT& request, const DeleteSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::DeleteSuiteDefinition, request, handler, context);
        }

        /**
         * <p>Gets information about an Device Advisor endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEndpointRequestT = Model::GetEndpointRequest>
        Model::GetEndpointOutcomeCallable GetEndpointCallable(const GetEndpointRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::GetEndpoint, request);
        }

        /**
         * An Async wrapper for GetEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEndpointRequestT = Model::GetEndpointRequest>
        void GetEndpointAsync(const GetEndpointRequestT& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::GetEndpoint, request, handler, context);
        }

        /**
         * <p>Gets information about a Device Advisor test suite.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteDefinition</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteDefinitionOutcome GetSuiteDefinition(const Model::GetSuiteDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetSuiteDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSuiteDefinitionRequestT = Model::GetSuiteDefinitionRequest>
        Model::GetSuiteDefinitionOutcomeCallable GetSuiteDefinitionCallable(const GetSuiteDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteDefinition, request);
        }

        /**
         * An Async wrapper for GetSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSuiteDefinitionRequestT = Model::GetSuiteDefinitionRequest>
        void GetSuiteDefinitionAsync(const GetSuiteDefinitionRequestT& request, const GetSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteDefinition, request, handler, context);
        }

        /**
         * <p>Gets information about a Device Advisor test suite run.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteRun</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteRunOutcome GetSuiteRun(const Model::GetSuiteRunRequest& request) const;

        /**
         * A Callable wrapper for GetSuiteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSuiteRunRequestT = Model::GetSuiteRunRequest>
        Model::GetSuiteRunOutcomeCallable GetSuiteRunCallable(const GetSuiteRunRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteRun, request);
        }

        /**
         * An Async wrapper for GetSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSuiteRunRequestT = Model::GetSuiteRunRequest>
        void GetSuiteRunAsync(const GetSuiteRunRequestT& request, const GetSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteRun, request, handler, context);
        }

        /**
         * <p>Gets a report download link for a successful Device Advisor qualifying test
         * suite run.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteRunReport</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRunReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteRunReportOutcome GetSuiteRunReport(const Model::GetSuiteRunReportRequest& request) const;

        /**
         * A Callable wrapper for GetSuiteRunReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSuiteRunReportRequestT = Model::GetSuiteRunReportRequest>
        Model::GetSuiteRunReportOutcomeCallable GetSuiteRunReportCallable(const GetSuiteRunReportRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteRunReport, request);
        }

        /**
         * An Async wrapper for GetSuiteRunReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSuiteRunReportRequestT = Model::GetSuiteRunReportRequest>
        void GetSuiteRunReportAsync(const GetSuiteRunReportRequestT& request, const GetSuiteRunReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteRunReport, request, handler, context);
        }

        /**
         * <p>Lists the Device Advisor test suites you have created.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSuiteDefinitions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuiteDefinitionsOutcome ListSuiteDefinitions(const Model::ListSuiteDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListSuiteDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSuiteDefinitionsRequestT = Model::ListSuiteDefinitionsRequest>
        Model::ListSuiteDefinitionsOutcomeCallable ListSuiteDefinitionsCallable(const ListSuiteDefinitionsRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::ListSuiteDefinitions, request);
        }

        /**
         * An Async wrapper for ListSuiteDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSuiteDefinitionsRequestT = Model::ListSuiteDefinitionsRequest>
        void ListSuiteDefinitionsAsync(const ListSuiteDefinitionsRequestT& request, const ListSuiteDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::ListSuiteDefinitions, request, handler, context);
        }

        /**
         * <p>Lists runs of the specified Device Advisor test suite. You can list all runs
         * of the test suite, or the runs of a specific version of the test suite.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSuiteRuns</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuiteRunsOutcome ListSuiteRuns(const Model::ListSuiteRunsRequest& request) const;

        /**
         * A Callable wrapper for ListSuiteRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSuiteRunsRequestT = Model::ListSuiteRunsRequest>
        Model::ListSuiteRunsOutcomeCallable ListSuiteRunsCallable(const ListSuiteRunsRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::ListSuiteRuns, request);
        }

        /**
         * An Async wrapper for ListSuiteRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSuiteRunsRequestT = Model::ListSuiteRunsRequest>
        void ListSuiteRunsAsync(const ListSuiteRunsRequestT& request, const ListSuiteRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::ListSuiteRuns, request, handler, context);
        }

        /**
         * <p>Lists the tags attached to an IoT Device Advisor resource.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTagsForResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a Device Advisor test suite run.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartSuiteRun</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/StartSuiteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSuiteRunOutcome StartSuiteRun(const Model::StartSuiteRunRequest& request) const;

        /**
         * A Callable wrapper for StartSuiteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSuiteRunRequestT = Model::StartSuiteRunRequest>
        Model::StartSuiteRunOutcomeCallable StartSuiteRunCallable(const StartSuiteRunRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::StartSuiteRun, request);
        }

        /**
         * An Async wrapper for StartSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSuiteRunRequestT = Model::StartSuiteRunRequest>
        void StartSuiteRunAsync(const StartSuiteRunRequestT& request, const StartSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::StartSuiteRun, request, handler, context);
        }

        /**
         * <p>Stops a Device Advisor test suite run that is currently running.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StopSuiteRun</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/StopSuiteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSuiteRunOutcome StopSuiteRun(const Model::StopSuiteRunRequest& request) const;

        /**
         * A Callable wrapper for StopSuiteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSuiteRunRequestT = Model::StopSuiteRunRequest>
        Model::StopSuiteRunOutcomeCallable StopSuiteRunCallable(const StopSuiteRunRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::StopSuiteRun, request);
        }

        /**
         * An Async wrapper for StopSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSuiteRunRequestT = Model::StopSuiteRunRequest>
        void StopSuiteRunAsync(const StopSuiteRunRequestT& request, const StopSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::StopSuiteRun, request, handler, context);
        }

        /**
         * <p>Adds to and modifies existing tags of an IoT Device Advisor resource.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TagResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an IoT Device Advisor resource.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UntagResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a Device Advisor test suite.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateSuiteDefinition</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UpdateSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSuiteDefinitionOutcome UpdateSuiteDefinition(const Model::UpdateSuiteDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSuiteDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSuiteDefinitionRequestT = Model::UpdateSuiteDefinitionRequest>
        Model::UpdateSuiteDefinitionOutcomeCallable UpdateSuiteDefinitionCallable(const UpdateSuiteDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTDeviceAdvisorClient::UpdateSuiteDefinition, request);
        }

        /**
         * An Async wrapper for UpdateSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSuiteDefinitionRequestT = Model::UpdateSuiteDefinitionRequest>
        void UpdateSuiteDefinitionAsync(const UpdateSuiteDefinitionRequestT& request, const UpdateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTDeviceAdvisorClient::UpdateSuiteDefinition, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTDeviceAdvisorClient>;
      void init(const IoTDeviceAdvisorClientConfiguration& clientConfiguration);

      IoTDeviceAdvisorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTDeviceAdvisor
} // namespace Aws
