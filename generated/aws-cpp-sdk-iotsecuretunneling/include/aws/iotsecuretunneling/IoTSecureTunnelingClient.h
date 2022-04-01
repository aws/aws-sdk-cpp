/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsecuretunneling/model/CloseTunnelResult.h>
#include <aws/iotsecuretunneling/model/DescribeTunnelResult.h>
#include <aws/iotsecuretunneling/model/ListTagsForResourceResult.h>
#include <aws/iotsecuretunneling/model/ListTunnelsResult.h>
#include <aws/iotsecuretunneling/model/OpenTunnelResult.h>
#include <aws/iotsecuretunneling/model/TagResourceResult.h>
#include <aws/iotsecuretunneling/model/UntagResourceResult.h>
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

namespace IoTSecureTunneling
{

namespace Model
{
        class CloseTunnelRequest;
        class DescribeTunnelRequest;
        class ListTagsForResourceRequest;
        class ListTunnelsRequest;
        class OpenTunnelRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CloseTunnelResult, IoTSecureTunnelingError> CloseTunnelOutcome;
        typedef Aws::Utils::Outcome<DescribeTunnelResult, IoTSecureTunnelingError> DescribeTunnelOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTSecureTunnelingError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTunnelsResult, IoTSecureTunnelingError> ListTunnelsOutcome;
        typedef Aws::Utils::Outcome<OpenTunnelResult, IoTSecureTunnelingError> OpenTunnelOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IoTSecureTunnelingError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IoTSecureTunnelingError> UntagResourceOutcome;

        typedef std::future<CloseTunnelOutcome> CloseTunnelOutcomeCallable;
        typedef std::future<DescribeTunnelOutcome> DescribeTunnelOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTunnelsOutcome> ListTunnelsOutcomeCallable;
        typedef std::future<OpenTunnelOutcome> OpenTunnelOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class IoTSecureTunnelingClient;

    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::CloseTunnelRequest&, const Model::CloseTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::DescribeTunnelRequest&, const Model::DescribeTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::ListTunnelsRequest&, const Model::ListTunnelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTunnelsResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::OpenTunnelRequest&, const Model::OpenTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OpenTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <fullname>AWS IoT Secure Tunneling</fullname> <p>AWS IoT Secure Tunnling enables
   * you to create remote connections to devices deployed in the field.</p> <p>For
   * more information about how AWS IoT Secure Tunneling works, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS
   * IoT Secure Tunneling</a>.</p>
   */
  class AWS_IOTSECURETUNNELING_API IoTSecureTunnelingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSecureTunnelingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTSecureTunnelingClient();


        /**
         * <p>Closes a tunnel identified by the unique tunnel id. When a
         * <code>CloseTunnel</code> request is received, we close the WebSocket connections
         * between the client and proxy server so no data can be transmitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/CloseTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseTunnelOutcome CloseTunnel(const Model::CloseTunnelRequest& request) const;

        /**
         * <p>Closes a tunnel identified by the unique tunnel id. When a
         * <code>CloseTunnel</code> request is received, we close the WebSocket connections
         * between the client and proxy server so no data can be transmitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/CloseTunnel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloseTunnelOutcomeCallable CloseTunnelCallable(const Model::CloseTunnelRequest& request) const;

        /**
         * <p>Closes a tunnel identified by the unique tunnel id. When a
         * <code>CloseTunnel</code> request is received, we close the WebSocket connections
         * between the client and proxy server so no data can be transmitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/CloseTunnel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloseTunnelAsync(const Model::CloseTunnelRequest& request, const CloseTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a tunnel identified by the unique tunnel
         * id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/DescribeTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTunnelOutcome DescribeTunnel(const Model::DescribeTunnelRequest& request) const;

        /**
         * <p>Gets information about a tunnel identified by the unique tunnel
         * id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/DescribeTunnel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTunnelOutcomeCallable DescribeTunnelCallable(const Model::DescribeTunnelRequest& request) const;

        /**
         * <p>Gets information about a tunnel identified by the unique tunnel
         * id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/DescribeTunnel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTunnelAsync(const Model::DescribeTunnelRequest& request, const DescribeTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tunnels for an AWS account. Tunnels are listed by creation time in
         * descending order, newer tunnels will be listed before older
         * tunnels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTunnels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTunnelsOutcome ListTunnels(const Model::ListTunnelsRequest& request) const;

        /**
         * <p>List all tunnels for an AWS account. Tunnels are listed by creation time in
         * descending order, newer tunnels will be listed before older
         * tunnels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTunnels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTunnelsOutcomeCallable ListTunnelsCallable(const Model::ListTunnelsRequest& request) const;

        /**
         * <p>List all tunnels for an AWS account. Tunnels are listed by creation time in
         * descending order, newer tunnels will be listed before older
         * tunnels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTunnels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTunnelsAsync(const Model::ListTunnelsRequest& request, const ListTunnelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new tunnel, and returns two client access tokens for clients to use
         * to connect to the AWS IoT Secure Tunneling proxy server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/OpenTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenTunnelOutcome OpenTunnel(const Model::OpenTunnelRequest& request) const;

        /**
         * <p>Creates a new tunnel, and returns two client access tokens for clients to use
         * to connect to the AWS IoT Secure Tunneling proxy server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/OpenTunnel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OpenTunnelOutcomeCallable OpenTunnelCallable(const Model::OpenTunnelRequest& request) const;

        /**
         * <p>Creates a new tunnel, and returns two client access tokens for clients to use
         * to connect to the AWS IoT Secure Tunneling proxy server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/OpenTunnel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OpenTunnelAsync(const Model::OpenTunnelRequest& request, const OpenTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>A resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>A resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CloseTunnelAsyncHelper(const Model::CloseTunnelRequest& request, const CloseTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTunnelAsyncHelper(const Model::DescribeTunnelRequest& request, const DescribeTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTunnelsAsyncHelper(const Model::ListTunnelsRequest& request, const ListTunnelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void OpenTunnelAsyncHelper(const Model::OpenTunnelRequest& request, const OpenTunnelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTSecureTunneling
} // namespace Aws
