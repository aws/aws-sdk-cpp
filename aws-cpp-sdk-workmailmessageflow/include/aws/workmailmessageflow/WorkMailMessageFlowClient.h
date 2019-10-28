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
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
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

        typedef Aws::Utils::Outcome<GetRawMessageContentResult, Aws::Client::AWSError<WorkMailMessageFlowErrors>> GetRawMessageContentOutcome;

        typedef std::future<GetRawMessageContentOutcome> GetRawMessageContentOutcomeCallable;
} // namespace Model

  class WorkMailMessageFlowClient;

    typedef std::function<void(const WorkMailMessageFlowClient*, const Model::GetRawMessageContentRequest&, Model::GetRawMessageContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRawMessageContentResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "WorkMailMessageFlow"; }


        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRawMessageContentOutcome GetRawMessageContent(const Model::GetRawMessageContentRequest& request) const;

        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRawMessageContentOutcomeCallable GetRawMessageContentCallable(const Model::GetRawMessageContentRequest& request) const;

        /**
         * <p>Retrieves the raw content of an in-transit email message, in MIME format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/GetRawMessageContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRawMessageContentAsync(const Model::GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetRawMessageContentAsyncHelper(const Model::GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkMailMessageFlow
} // namespace Aws
