/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/QLDBSessionErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qldb-session/model/SendCommandResult.h>
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

namespace QLDBSession
{

namespace Model
{
        class SendCommandRequest;

        typedef Aws::Utils::Outcome<SendCommandResult, QLDBSessionError> SendCommandOutcome;

        typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
} // namespace Model

  class QLDBSessionClient;

    typedef std::function<void(const QLDBSessionClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;

  /**
   * <p>The transactional data APIs for Amazon QLDB</p>  <p>Instead of
   * interacting directly with this API, we recommend that you use the Amazon QLDB
   * Driver or the QLDB Shell to execute data transactions on a ledger.</p> <ul> <li>
   * <p>If you are working with an AWS SDK, use the QLDB Driver. The driver provides
   * a high-level abstraction layer above this <code>qldbsession</code> data plane
   * and manages <code>SendCommand</code> API calls for you. For information and a
   * list of supported programming languages, see <a
   * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
   * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
   * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
   * the QLDB Shell. The shell is a command line interface that uses the QLDB Driver
   * to interact with a ledger. For information, see <a
   * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
   * Amazon QLDB using the QLDB Shell</a>.</p> </li> </ul> 
   */
  class AWS_QLDBSESSION_API QLDBSessionClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBSessionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~QLDBSessionClient();


        /**
         * <p>Sends a command to an Amazon QLDB ledger.</p>  <p>Instead of
         * interacting directly with this API, we recommend that you use the Amazon QLDB
         * Driver or the QLDB Shell to execute data transactions on a ledger.</p> <ul> <li>
         * <p>If you are working with an AWS SDK, use the QLDB Driver. The driver provides
         * a high-level abstraction layer above this <code>qldbsession</code> data plane
         * and manages <code>SendCommand</code> API calls for you. For information and a
         * list of supported programming languages, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
         * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
         * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
         * the QLDB Shell. The shell is a command line interface that uses the QLDB Driver
         * to interact with a ledger. For information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
         * Amazon QLDB using the QLDB Shell</a>.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/SendCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * <p>Sends a command to an Amazon QLDB ledger.</p>  <p>Instead of
         * interacting directly with this API, we recommend that you use the Amazon QLDB
         * Driver or the QLDB Shell to execute data transactions on a ledger.</p> <ul> <li>
         * <p>If you are working with an AWS SDK, use the QLDB Driver. The driver provides
         * a high-level abstraction layer above this <code>qldbsession</code> data plane
         * and manages <code>SendCommand</code> API calls for you. For information and a
         * list of supported programming languages, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
         * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
         * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
         * the QLDB Shell. The shell is a command line interface that uses the QLDB Driver
         * to interact with a ledger. For information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
         * Amazon QLDB using the QLDB Shell</a>.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/SendCommand">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCommandOutcomeCallable SendCommandCallable(const Model::SendCommandRequest& request) const;

        /**
         * <p>Sends a command to an Amazon QLDB ledger.</p>  <p>Instead of
         * interacting directly with this API, we recommend that you use the Amazon QLDB
         * Driver or the QLDB Shell to execute data transactions on a ledger.</p> <ul> <li>
         * <p>If you are working with an AWS SDK, use the QLDB Driver. The driver provides
         * a high-level abstraction layer above this <code>qldbsession</code> data plane
         * and manages <code>SendCommand</code> API calls for you. For information and a
         * list of supported programming languages, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
         * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
         * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
         * the QLDB Shell. The shell is a command line interface that uses the QLDB Driver
         * to interact with a ledger. For information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
         * Amazon QLDB using the QLDB Shell</a>.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/SendCommand">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCommandAsync(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void SendCommandAsyncHelper(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace QLDBSession
} // namespace Aws
