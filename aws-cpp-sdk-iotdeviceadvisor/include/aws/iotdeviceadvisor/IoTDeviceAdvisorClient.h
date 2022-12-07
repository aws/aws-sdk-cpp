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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration(),
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
                               const Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTDeviceAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateSuiteDefinitionOutcomeCallable CreateSuiteDefinitionCallable(const Model::CreateSuiteDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSuiteDefinitionAsync(const Model::CreateSuiteDefinitionRequest& request, const CreateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSuiteDefinitionOutcomeCallable DeleteSuiteDefinitionCallable(const Model::DeleteSuiteDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSuiteDefinitionAsync(const Model::DeleteSuiteDefinitionRequest& request, const DeleteSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEndpointOutcomeCallable GetEndpointCallable(const Model::GetEndpointRequest& request) const;

        /**
         * An Async wrapper for GetEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAsync(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSuiteDefinitionOutcomeCallable GetSuiteDefinitionCallable(const Model::GetSuiteDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteDefinitionAsync(const Model::GetSuiteDefinitionRequest& request, const GetSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSuiteRunOutcomeCallable GetSuiteRunCallable(const Model::GetSuiteRunRequest& request) const;

        /**
         * An Async wrapper for GetSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteRunAsync(const Model::GetSuiteRunRequest& request, const GetSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSuiteRunReportOutcomeCallable GetSuiteRunReportCallable(const Model::GetSuiteRunReportRequest& request) const;

        /**
         * An Async wrapper for GetSuiteRunReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteRunReportAsync(const Model::GetSuiteRunReportRequest& request, const GetSuiteRunReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSuiteDefinitionsOutcomeCallable ListSuiteDefinitionsCallable(const Model::ListSuiteDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListSuiteDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuiteDefinitionsAsync(const Model::ListSuiteDefinitionsRequest& request, const ListSuiteDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSuiteRunsOutcomeCallable ListSuiteRunsCallable(const Model::ListSuiteRunsRequest& request) const;

        /**
         * An Async wrapper for ListSuiteRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuiteRunsAsync(const Model::ListSuiteRunsRequest& request, const ListSuiteRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartSuiteRunOutcomeCallable StartSuiteRunCallable(const Model::StartSuiteRunRequest& request) const;

        /**
         * An Async wrapper for StartSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSuiteRunAsync(const Model::StartSuiteRunRequest& request, const StartSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopSuiteRunOutcomeCallable StopSuiteRunCallable(const Model::StopSuiteRunRequest& request) const;

        /**
         * An Async wrapper for StopSuiteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSuiteRunAsync(const Model::StopSuiteRunRequest& request, const StopSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSuiteDefinitionOutcomeCallable UpdateSuiteDefinitionCallable(const Model::UpdateSuiteDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateSuiteDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSuiteDefinitionAsync(const Model::UpdateSuiteDefinitionRequest& request, const UpdateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
