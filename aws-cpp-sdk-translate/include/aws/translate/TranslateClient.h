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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/model/TranslateTextResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Translate
{

namespace Model
{
        class TranslateTextRequest;

        typedef Aws::Utils::Outcome<TranslateTextResult, Aws::Client::AWSError<TranslateErrors>> TranslateTextOutcome;

        typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
} // namespace Model

  class TranslateClient;

    typedef std::function<void(const TranslateClient*, const Model::TranslateTextRequest&, const Model::TranslateTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslateTextResponseReceivedHandler;

  /**
   * <p>Provides translation between English and one of six languages, or between one
   * of the six languages and English.</p>
   */
  class AWS_TRANSLATE_API TranslateClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranslateClient();

        inline virtual const char* GetServiceClientName() const override { return "translate"; }


        /**
         * <p>Translates input text from the source language to the target language. You
         * can translate between English (en) and one of the following languages, or
         * between one of the following languages and English.</p> <ul> <li> <p>Arabic
         * (ar)</p> </li> <li> <p>Chinese (Simplified) (zh)</p> </li> <li> <p>French
         * (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Portuguese (pt)</p> </li>
         * <li> <p>Spanish (es)</p> </li> </ul> <p>To have Amazon Translate determine the
         * source language of your text, you can specify <code>auto</code> in the
         * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
         * Translate will call Amazon Comprehend to determine the source
         * language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateTextOutcome TranslateText(const Model::TranslateTextRequest& request) const;

        /**
         * <p>Translates input text from the source language to the target language. You
         * can translate between English (en) and one of the following languages, or
         * between one of the following languages and English.</p> <ul> <li> <p>Arabic
         * (ar)</p> </li> <li> <p>Chinese (Simplified) (zh)</p> </li> <li> <p>French
         * (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Portuguese (pt)</p> </li>
         * <li> <p>Spanish (es)</p> </li> </ul> <p>To have Amazon Translate determine the
         * source language of your text, you can specify <code>auto</code> in the
         * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
         * Translate will call Amazon Comprehend to determine the source
         * language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TranslateTextOutcomeCallable TranslateTextCallable(const Model::TranslateTextRequest& request) const;

        /**
         * <p>Translates input text from the source language to the target language. You
         * can translate between English (en) and one of the following languages, or
         * between one of the following languages and English.</p> <ul> <li> <p>Arabic
         * (ar)</p> </li> <li> <p>Chinese (Simplified) (zh)</p> </li> <li> <p>French
         * (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Portuguese (pt)</p> </li>
         * <li> <p>Spanish (es)</p> </li> </ul> <p>To have Amazon Translate determine the
         * source language of your text, you can specify <code>auto</code> in the
         * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
         * Translate will call Amazon Comprehend to determine the source
         * language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TranslateTextAsync(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void TranslateTextAsyncHelper(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Translate
} // namespace Aws
