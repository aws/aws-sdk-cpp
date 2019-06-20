/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotevents-data/model/BatchPutMessageResult.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorResult.h>
#include <aws/iotevents-data/model/DescribeDetectorResult.h>
#include <aws/iotevents-data/model/ListDetectorsResult.h>
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

namespace IoTEventsData
{

namespace Model
{
        class BatchPutMessageRequest;
        class BatchUpdateDetectorRequest;
        class DescribeDetectorRequest;
        class ListDetectorsRequest;

        typedef Aws::Utils::Outcome<BatchPutMessageResult, Aws::Client::AWSError<IoTEventsDataErrors>> BatchPutMessageOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateDetectorResult, Aws::Client::AWSError<IoTEventsDataErrors>> BatchUpdateDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeDetectorResult, Aws::Client::AWSError<IoTEventsDataErrors>> DescribeDetectorOutcome;
        typedef Aws::Utils::Outcome<ListDetectorsResult, Aws::Client::AWSError<IoTEventsDataErrors>> ListDetectorsOutcome;

        typedef std::future<BatchPutMessageOutcome> BatchPutMessageOutcomeCallable;
        typedef std::future<BatchUpdateDetectorOutcome> BatchUpdateDetectorOutcomeCallable;
        typedef std::future<DescribeDetectorOutcome> DescribeDetectorOutcomeCallable;
        typedef std::future<ListDetectorsOutcome> ListDetectorsOutcomeCallable;
} // namespace Model

  class IoTEventsDataClient;

    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchPutMessageRequest&, const Model::BatchPutMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutMessageResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::BatchUpdateDetectorRequest&, const Model::BatchUpdateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::DescribeDetectorRequest&, const Model::DescribeDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorResponseReceivedHandler;
    typedef std::function<void(const IoTEventsDataClient*, const Model::ListDetectorsRequest&, const Model::ListDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorsResponseReceivedHandler;

  /**
   * <p>AWS IoT Events monitors your equipment or device fleets for failures or
   * changes in operation, and triggers actions when such events occur. AWS IoT
   * Events Data API commands enable you to send inputs to detectors, list detectors,
   * and view or update a detector's status.</p>
   */
  class AWS_IOTEVENTSDATA_API IoTEventsDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTEventsDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTEventsDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTEventsDataClient();

        inline virtual const char* GetServiceClientName() const override { return "IoT Events Data"; }


        /**
         * <p>Sends a set of messages to the AWS IoT Events system. Each message payload is
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
         * <p>Sends a set of messages to the AWS IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const Model::BatchPutMessageRequest& request) const;

        /**
         * <p>Sends a set of messages to the AWS IoT Events system. Each message payload is
         * transformed into the input you specify (<code>"inputName"</code>) and ingested
         * into any detectors that monitor that input. If multiple messages are sent, the
         * order in which the messages are processed isn't guaranteed. To guarantee
         * ordering, you must send messages one at a time and wait for a successful
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutMessageAsync(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateDetectorOutcome BatchUpdateDetector(const Model::BatchUpdateDetectorRequest& request) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateDetectorOutcomeCallable BatchUpdateDetectorCallable(const Model::BatchUpdateDetectorRequest& request) const;

        /**
         * <p>Updates the state, variable values, and timer settings of one or more
         * detectors (instances) of a specified detector model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateDetectorAsync(const Model::BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Returns information about the specified detector (instance).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectorAsync(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectors (the instances of a detector model).</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/ListDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorsAsync(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchPutMessageAsyncHelper(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateDetectorAsyncHelper(const Model::BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDetectorAsyncHelper(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDetectorsAsyncHelper(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTEventsData
} // namespace Aws
