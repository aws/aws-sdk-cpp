/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentResult.h>
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

namespace WorkMailMessageFlow
{

namespace Model
{
        class GetRawMessageContentRequest;
        class PutRawMessageContentRequest;

        typedef Aws::Utils::Outcome<GetRawMessageContentResult, WorkMailMessageFlowError> GetRawMessageContentOutcome;
        typedef Aws::Utils::Outcome<PutRawMessageContentResult, WorkMailMessageFlowError> PutRawMessageContentOutcome;

        typedef std::future<GetRawMessageContentOutcome> GetRawMessageContentOutcomeCallable;
        typedef std::future<PutRawMessageContentOutcome> PutRawMessageContentOutcomeCallable;
} // namespace Model

  class WorkMailMessageFlowClient;

    typedef std::function<void(const WorkMailMessageFlowClient*, const Model::GetRawMessageContentRequest&, Model::GetRawMessageContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRawMessageContentResponseReceivedHandler;
    typedef std::function<void(const WorkMailMessageFlowClient*, const Model::PutRawMessageContentRequest&, const Model::PutRawMessageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRawMessageContentResponseReceivedHandler;

  /**
   * <p>The WorkMail Message Flow API provides access to email messages as they are
   * being sent and received by a WorkMail organization.</p>
   */
  class AWS_WORKMAILMESSAGEFLOW_API WorkMailMessageFlowClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailMessageFlowClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailMessageFlowClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailMessageFlowClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkMailMessageFlowClient();


        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRawMessageContentOutcome GetRawMessageContent(const Model::GetRawMessageContentRequest& request) const;

        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRawMessageContentOutcomeCallable GetRawMessageContentCallable(const Model::GetRawMessageContentRequest& request) const;

        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRawMessageContentAsync(const Model::GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the raw content of an in-transit email message, in MIME format.</p>
         * <p>This example describes how to update in-transit email message. For more
         * information and examples for using this API, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html">
         * Updating message content with AWS Lambda</a>.</p>  <p>Updates to an
         * in-transit message only appear when you call <code>PutRawMessageContent</code>
         * from an AWS Lambda function configured with a synchronous <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/lambda.html#synchronous-rules">
         * Run Lambda</a> rule. If you call <code>PutRawMessageContent</code> on a
         * delivered or sent message, the message remains unchanged, even though <a
         * href="https://docs.aws.amazon.com/workmail/latest/APIReference/API_messageflow_GetRawMessageContent.html">GetRawMessageContent</a>
         * returns an updated message. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/PutRawMessageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRawMessageContentOutcome PutRawMessageContent(const Model::PutRawMessageContentRequest& request) const;

        /**
         * <p>Updates the raw content of an in-transit email message, in MIME format.</p>
         * <p>This example describes how to update in-transit email message. For more
         * information and examples for using this API, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html">
         * Updating message content with AWS Lambda</a>.</p>  <p>Updates to an
         * in-transit message only appear when you call <code>PutRawMessageContent</code>
         * from an AWS Lambda function configured with a synchronous <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/lambda.html#synchronous-rules">
         * Run Lambda</a> rule. If you call <code>PutRawMessageContent</code> on a
         * delivered or sent message, the message remains unchanged, even though <a
         * href="https://docs.aws.amazon.com/workmail/latest/APIReference/API_messageflow_GetRawMessageContent.html">GetRawMessageContent</a>
         * returns an updated message. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/PutRawMessageContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRawMessageContentOutcomeCallable PutRawMessageContentCallable(const Model::PutRawMessageContentRequest& request) const;

        /**
         * <p>Updates the raw content of an in-transit email message, in MIME format.</p>
         * <p>This example describes how to update in-transit email message. For more
         * information and examples for using this API, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html">
         * Updating message content with AWS Lambda</a>.</p>  <p>Updates to an
         * in-transit message only appear when you call <code>PutRawMessageContent</code>
         * from an AWS Lambda function configured with a synchronous <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/lambda.html#synchronous-rules">
         * Run Lambda</a> rule. If you call <code>PutRawMessageContent</code> on a
         * delivered or sent message, the message remains unchanged, even though <a
         * href="https://docs.aws.amazon.com/workmail/latest/APIReference/API_messageflow_GetRawMessageContent.html">GetRawMessageContent</a>
         * returns an updated message. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/PutRawMessageContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRawMessageContentAsync(const Model::PutRawMessageContentRequest& request, const PutRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetRawMessageContentAsyncHelper(const Model::GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRawMessageContentAsyncHelper(const Model::PutRawMessageContentRequest& request, const PutRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkMailMessageFlow
} // namespace Aws
