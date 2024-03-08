/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/braket/BraketServiceClientModel.h>

namespace Aws
{
namespace Braket
{
  /**
   * <p>The Amazon Braket API Reference provides information about the operations and
   * structures supported in Amazon Braket.</p> <p>Additional Resources:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon
   * Braket Developer Guide</a> </p> </li> </ul>
   */
  class AWS_BRAKET_API BraketClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BraketClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BraketClientConfiguration ClientConfigurationType;
      typedef BraketEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Braket::BraketClientConfiguration& clientConfiguration = Aws::Braket::BraketClientConfiguration(),
                     std::shared_ptr<BraketEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<BraketEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Braket::BraketClientConfiguration& clientConfiguration = Aws::Braket::BraketClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BraketClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<BraketEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Braket::BraketClientConfiguration& clientConfiguration = Aws::Braket::BraketClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BraketClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BraketClient();

        /**
         * <p>Cancels an Amazon Braket job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&BraketClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::CancelJob, request, handler, context);
        }

        /**
         * <p>Cancels the specified task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CancelQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQuantumTaskOutcome CancelQuantumTask(const Model::CancelQuantumTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelQuantumTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelQuantumTaskRequestT = Model::CancelQuantumTaskRequest>
        Model::CancelQuantumTaskOutcomeCallable CancelQuantumTaskCallable(const CancelQuantumTaskRequestT& request) const
        {
            return SubmitCallable(&BraketClient::CancelQuantumTask, request);
        }

        /**
         * An Async wrapper for CancelQuantumTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelQuantumTaskRequestT = Model::CancelQuantumTaskRequest>
        void CancelQuantumTaskAsync(const CancelQuantumTaskRequestT& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::CancelQuantumTask, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Braket job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&BraketClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::CreateJob, request, handler, context);
        }

        /**
         * <p>Creates a quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CreateQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuantumTaskOutcome CreateQuantumTask(const Model::CreateQuantumTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateQuantumTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQuantumTaskRequestT = Model::CreateQuantumTaskRequest>
        Model::CreateQuantumTaskOutcomeCallable CreateQuantumTaskCallable(const CreateQuantumTaskRequestT& request) const
        {
            return SubmitCallable(&BraketClient::CreateQuantumTask, request);
        }

        /**
         * An Async wrapper for CreateQuantumTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQuantumTaskRequestT = Model::CreateQuantumTaskRequest>
        void CreateQuantumTaskAsync(const CreateQuantumTaskRequestT& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::CreateQuantumTask, request, handler, context);
        }

        /**
         * <p>Retrieves the devices available in Amazon Braket.</p>  <p>For backwards
         * compatibility with older versions of BraketSchemas, OpenQASM information is
         * omitted from GetDevice API calls. To get this information the user-agent needs
         * to present a recent version of the BraketSchemas (1.8.0 or later). The Braket
         * SDK automatically reports this for you. If you do not see OpenQASM results in
         * the GetDevice response when using a Braket SDK, you may need to set
         * AWS_EXECUTION_ENV environment variable to configure user-agent. See the code
         * examples provided below for how to do this for the AWS CLI, Boto3, and the Go,
         * Java, and JavaScript/TypeScript SDKs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        Model::GetDeviceOutcomeCallable GetDeviceCallable(const GetDeviceRequestT& request) const
        {
            return SubmitCallable(&BraketClient::GetDevice, request);
        }

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        void GetDeviceAsync(const GetDeviceRequestT& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::GetDevice, request, handler, context);
        }

        /**
         * <p>Retrieves the specified Amazon Braket job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&BraketClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::GetJob, request, handler, context);
        }

        /**
         * <p>Retrieves the specified quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQuantumTaskOutcome GetQuantumTask(const Model::GetQuantumTaskRequest& request) const;

        /**
         * A Callable wrapper for GetQuantumTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQuantumTaskRequestT = Model::GetQuantumTaskRequest>
        Model::GetQuantumTaskOutcomeCallable GetQuantumTaskCallable(const GetQuantumTaskRequestT& request) const
        {
            return SubmitCallable(&BraketClient::GetQuantumTask, request);
        }

        /**
         * An Async wrapper for GetQuantumTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQuantumTaskRequestT = Model::GetQuantumTaskRequest>
        void GetQuantumTaskAsync(const GetQuantumTaskRequestT& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::GetQuantumTask, request, handler, context);
        }

        /**
         * <p>Shows the tags associated with this resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BraketClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Searches for devices using the specified filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDevicesOutcome SearchDevices(const Model::SearchDevicesRequest& request) const;

        /**
         * A Callable wrapper for SearchDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchDevicesRequestT = Model::SearchDevicesRequest>
        Model::SearchDevicesOutcomeCallable SearchDevicesCallable(const SearchDevicesRequestT& request) const
        {
            return SubmitCallable(&BraketClient::SearchDevices, request);
        }

        /**
         * An Async wrapper for SearchDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDevicesRequestT = Model::SearchDevicesRequest>
        void SearchDevicesAsync(const SearchDevicesRequestT& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::SearchDevices, request, handler, context);
        }

        /**
         * <p>Searches for Amazon Braket jobs that match the specified filter
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchJobsOutcome SearchJobs(const Model::SearchJobsRequest& request) const;

        /**
         * A Callable wrapper for SearchJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchJobsRequestT = Model::SearchJobsRequest>
        Model::SearchJobsOutcomeCallable SearchJobsCallable(const SearchJobsRequestT& request) const
        {
            return SubmitCallable(&BraketClient::SearchJobs, request);
        }

        /**
         * An Async wrapper for SearchJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchJobsRequestT = Model::SearchJobsRequest>
        void SearchJobsAsync(const SearchJobsRequestT& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::SearchJobs, request, handler, context);
        }

        /**
         * <p>Searches for tasks that match the specified filter values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchQuantumTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQuantumTasksOutcome SearchQuantumTasks(const Model::SearchQuantumTasksRequest& request) const;

        /**
         * A Callable wrapper for SearchQuantumTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchQuantumTasksRequestT = Model::SearchQuantumTasksRequest>
        Model::SearchQuantumTasksOutcomeCallable SearchQuantumTasksCallable(const SearchQuantumTasksRequestT& request) const
        {
            return SubmitCallable(&BraketClient::SearchQuantumTasks, request);
        }

        /**
         * An Async wrapper for SearchQuantumTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchQuantumTasksRequestT = Model::SearchQuantumTasksRequest>
        void SearchQuantumTasksAsync(const SearchQuantumTasksRequestT& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::SearchQuantumTasks, request, handler, context);
        }

        /**
         * <p>Add a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BraketClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BraketClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BraketClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BraketEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BraketClient>;
      void init(const BraketClientConfiguration& clientConfiguration);

      BraketClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BraketEndpointProviderBase> m_endpointProvider;
  };

} // namespace Braket
} // namespace Aws
