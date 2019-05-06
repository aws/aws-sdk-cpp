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
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-data/model/DeleteThingShadowResult.h>
#include <aws/iot-data/model/GetThingShadowResult.h>
#include <aws/iot-data/model/UpdateThingShadowResult.h>
#include <aws/core/NoResult.h>
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

namespace IoTDataPlane
{

namespace Model
{
        class DeleteThingShadowRequest;
        class GetThingShadowRequest;
        class PublishRequest;
        class UpdateThingShadowRequest;

        typedef Aws::Utils::Outcome<DeleteThingShadowResult, Aws::Client::AWSError<IoTDataPlaneErrors>> DeleteThingShadowOutcome;
        typedef Aws::Utils::Outcome<GetThingShadowResult, Aws::Client::AWSError<IoTDataPlaneErrors>> GetThingShadowOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTDataPlaneErrors>> PublishOutcome;
        typedef Aws::Utils::Outcome<UpdateThingShadowResult, Aws::Client::AWSError<IoTDataPlaneErrors>> UpdateThingShadowOutcome;

        typedef std::future<DeleteThingShadowOutcome> DeleteThingShadowOutcomeCallable;
        typedef std::future<GetThingShadowOutcome> GetThingShadowOutcomeCallable;
        typedef std::future<PublishOutcome> PublishOutcomeCallable;
        typedef std::future<UpdateThingShadowOutcome> UpdateThingShadowOutcomeCallable;
} // namespace Model

  class IoTDataPlaneClient;

    typedef std::function<void(const IoTDataPlaneClient*, const Model::DeleteThingShadowRequest&, const Model::DeleteThingShadowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingShadowResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::GetThingShadowRequest&, const Model::GetThingShadowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThingShadowResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const IoTDataPlaneClient*, const Model::UpdateThingShadowRequest&, const Model::UpdateThingShadowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingShadowResponseReceivedHandler;

  /**
   * <fullname>AWS IoT</fullname> <p>AWS IoT-Data enables secure, bi-directional
   * communication between Internet-connected things (such as sensors, actuators,
   * embedded devices, or smart appliances) and the AWS cloud. It implements a broker
   * for applications and things to publish messages over HTTP (Publish) and
   * retrieve, update, and delete thing shadows. A thing shadow is a persistent
   * representation of your things and their state in the AWS cloud.</p>
   */
  class AWS_IOTDATAPLANE_API IoTDataPlaneClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDataPlaneClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDataPlaneClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTDataPlaneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTDataPlaneClient();

        inline virtual const char* GetServiceClientName() const override { return "data.iot"; }


        /**
         * <p>Deletes the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/DeleteThingShadow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThingShadowOutcome DeleteThingShadow(const Model::DeleteThingShadowRequest& request) const;

        /**
         * <p>Deletes the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/DeleteThingShadow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingShadowOutcomeCallable DeleteThingShadowCallable(const Model::DeleteThingShadowRequest& request) const;

        /**
         * <p>Deletes the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/DeleteThingShadow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingShadowAsync(const Model::DeleteThingShadowRequest& request, const DeleteThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the thing shadow for the specified thing.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetThingShadow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThingShadowOutcome GetThingShadow(const Model::GetThingShadowRequest& request) const;

        /**
         * <p>Gets the thing shadow for the specified thing.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetThingShadow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThingShadowOutcomeCallable GetThingShadowCallable(const Model::GetThingShadowRequest& request) const;

        /**
         * <p>Gets the thing shadow for the specified thing.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetThingShadow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThingShadowAsync(const Model::GetThingShadowRequest& request, const GetThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes state information.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/protocols.html#http">HTTP
         * Protocol</a> in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/Publish">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

        /**
         * <p>Publishes state information.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/protocols.html#http">HTTP
         * Protocol</a> in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/Publish">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishOutcomeCallable PublishCallable(const Model::PublishRequest& request) const;

        /**
         * <p>Publishes state information.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/protocols.html#http">HTTP
         * Protocol</a> in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/Publish">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishAsync(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/UpdateThingShadow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingShadowOutcome UpdateThingShadow(const Model::UpdateThingShadowRequest& request) const;

        /**
         * <p>Updates the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/UpdateThingShadow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingShadowOutcomeCallable UpdateThingShadowCallable(const Model::UpdateThingShadowRequest& request) const;

        /**
         * <p>Updates the thing shadow for the specified thing.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a>
         * in the <i>AWS IoT Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/UpdateThingShadow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingShadowAsync(const Model::UpdateThingShadowRequest& request, const UpdateThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteThingShadowAsyncHelper(const Model::DeleteThingShadowRequest& request, const DeleteThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThingShadowAsyncHelper(const Model::GetThingShadowRequest& request, const GetThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishAsyncHelper(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThingShadowAsyncHelper(const Model::UpdateThingShadowRequest& request, const UpdateThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTDataPlane
} // namespace Aws
