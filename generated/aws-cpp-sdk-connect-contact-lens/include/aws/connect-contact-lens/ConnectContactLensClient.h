/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/ConnectContactLensErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsResult.h>
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

namespace ConnectContactLens
{

namespace Model
{
        class ListRealtimeContactAnalysisSegmentsRequest;

        typedef Aws::Utils::Outcome<ListRealtimeContactAnalysisSegmentsResult, ConnectContactLensError> ListRealtimeContactAnalysisSegmentsOutcome;

        typedef std::future<ListRealtimeContactAnalysisSegmentsOutcome> ListRealtimeContactAnalysisSegmentsOutcomeCallable;
} // namespace Model

  class ConnectContactLensClient;

    typedef std::function<void(const ConnectContactLensClient*, const Model::ListRealtimeContactAnalysisSegmentsRequest&, const Model::ListRealtimeContactAnalysisSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRealtimeContactAnalysisSegmentsResponseReceivedHandler;

  /**
   * <p>Contact Lens for Amazon Connect enables you to analyze conversations between
   * customer and agents, by using speech transcription, natural language processing,
   * and intelligent search capabilities. It performs sentiment analysis, detects
   * issues, and enables you to automatically categorize contacts.</p> <p>Contact
   * Lens for Amazon Connect provides both real-time and post-call analytics of
   * customer-agent conversations. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/analyze-conversations.html">Analyze
   * conversations using Contact Lens</a> in the <i>Amazon Connect Administrator
   * Guide</i>. </p>
   */
  class AWS_CONNECTCONTACTLENS_API ConnectContactLensClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectContactLensClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConnectContactLensClient();


        /**
         * <p>Provides a list of analysis segments for a real-time analysis
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ListRealtimeContactAnalysisSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeContactAnalysisSegmentsOutcome ListRealtimeContactAnalysisSegments(const Model::ListRealtimeContactAnalysisSegmentsRequest& request) const;

        /**
         * <p>Provides a list of analysis segments for a real-time analysis
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ListRealtimeContactAnalysisSegments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRealtimeContactAnalysisSegmentsOutcomeCallable ListRealtimeContactAnalysisSegmentsCallable(const Model::ListRealtimeContactAnalysisSegmentsRequest& request) const;

        /**
         * <p>Provides a list of analysis segments for a real-time analysis
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ListRealtimeContactAnalysisSegments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRealtimeContactAnalysisSegmentsAsync(const Model::ListRealtimeContactAnalysisSegmentsRequest& request, const ListRealtimeContactAnalysisSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ListRealtimeContactAnalysisSegmentsAsyncHelper(const Model::ListRealtimeContactAnalysisSegmentsRequest& request, const ListRealtimeContactAnalysisSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ConnectContactLens
} // namespace Aws
