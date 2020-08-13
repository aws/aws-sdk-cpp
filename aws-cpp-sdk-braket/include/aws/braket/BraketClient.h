/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/braket/model/CancelQuantumTaskResult.h>
#include <aws/braket/model/CreateQuantumTaskResult.h>
#include <aws/braket/model/GetDeviceResult.h>
#include <aws/braket/model/GetQuantumTaskResult.h>
#include <aws/braket/model/SearchDevicesResult.h>
#include <aws/braket/model/SearchQuantumTasksResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Braket
{

namespace Model
{
        class CancelQuantumTaskRequest;
        class CreateQuantumTaskRequest;
        class GetDeviceRequest;
        class GetQuantumTaskRequest;
        class SearchDevicesRequest;
        class SearchQuantumTasksRequest;

        typedef Aws::Utils::Outcome<CancelQuantumTaskResult, BraketError> CancelQuantumTaskOutcome;
        typedef Aws::Utils::Outcome<CreateQuantumTaskResult, BraketError> CreateQuantumTaskOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, BraketError> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetQuantumTaskResult, BraketError> GetQuantumTaskOutcome;
        typedef Aws::Utils::Outcome<SearchDevicesResult, BraketError> SearchDevicesOutcome;
        typedef Aws::Utils::Outcome<SearchQuantumTasksResult, BraketError> SearchQuantumTasksOutcome;

        typedef std::future<CancelQuantumTaskOutcome> CancelQuantumTaskOutcomeCallable;
        typedef std::future<CreateQuantumTaskOutcome> CreateQuantumTaskOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetQuantumTaskOutcome> GetQuantumTaskOutcomeCallable;
        typedef std::future<SearchDevicesOutcome> SearchDevicesOutcomeCallable;
        typedef std::future<SearchQuantumTasksOutcome> SearchQuantumTasksOutcomeCallable;
} // namespace Model

  class BraketClient;

    typedef std::function<void(const BraketClient*, const Model::CancelQuantumTaskRequest&, const Model::CancelQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::CreateQuantumTaskRequest&, const Model::CreateQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::GetQuantumTaskRequest&, const Model::GetQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::SearchDevicesRequest&, const Model::SearchDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDevicesResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::SearchQuantumTasksRequest&, const Model::SearchQuantumTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuantumTasksResponseReceivedHandler;

  /**
   * <p>The Amazon Braket API Reference provides information about the operations and
   * structures supported in Amazon Braket.</p>
   */
  class AWS_BRAKET_API BraketClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BraketClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BraketClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BraketClient();


        /**
         * <p>Cancels the specified task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CancelQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQuantumTaskOutcome CancelQuantumTask(const Model::CancelQuantumTaskRequest& request) const;

        /**
         * <p>Cancels the specified task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CancelQuantumTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelQuantumTaskOutcomeCallable CancelQuantumTaskCallable(const Model::CancelQuantumTaskRequest& request) const;

        /**
         * <p>Cancels the specified task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CancelQuantumTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelQuantumTaskAsync(const Model::CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CreateQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuantumTaskOutcome CreateQuantumTask(const Model::CreateQuantumTaskRequest& request) const;

        /**
         * <p>Creates a quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CreateQuantumTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQuantumTaskOutcomeCallable CreateQuantumTaskCallable(const Model::CreateQuantumTaskRequest& request) const;

        /**
         * <p>Creates a quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/CreateQuantumTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQuantumTaskAsync(const Model::CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the devices available in Amazon Braket.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Retrieves the devices available in Amazon Braket.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Retrieves the devices available in Amazon Braket.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetQuantumTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQuantumTaskOutcome GetQuantumTask(const Model::GetQuantumTaskRequest& request) const;

        /**
         * <p>Retrieves the specified quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetQuantumTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQuantumTaskOutcomeCallable GetQuantumTaskCallable(const Model::GetQuantumTaskRequest& request) const;

        /**
         * <p>Retrieves the specified quantum task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/GetQuantumTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQuantumTaskAsync(const Model::GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for devices using the specified filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDevicesOutcome SearchDevices(const Model::SearchDevicesRequest& request) const;

        /**
         * <p>Searches for devices using the specified filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDevicesOutcomeCallable SearchDevicesCallable(const Model::SearchDevicesRequest& request) const;

        /**
         * <p>Searches for devices using the specified filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDevicesAsync(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for tasks that match the specified filter values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchQuantumTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQuantumTasksOutcome SearchQuantumTasks(const Model::SearchQuantumTasksRequest& request) const;

        /**
         * <p>Searches for tasks that match the specified filter values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchQuantumTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchQuantumTasksOutcomeCallable SearchQuantumTasksCallable(const Model::SearchQuantumTasksRequest& request) const;

        /**
         * <p>Searches for tasks that match the specified filter values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchQuantumTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchQuantumTasksAsync(const Model::SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelQuantumTaskAsyncHelper(const Model::CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQuantumTaskAsyncHelper(const Model::CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQuantumTaskAsyncHelper(const Model::GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchDevicesAsyncHelper(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchQuantumTasksAsyncHelper(const Model::SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Braket
} // namespace Aws
