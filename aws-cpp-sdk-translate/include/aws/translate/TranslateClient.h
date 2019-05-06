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
#include <aws/translate/model/GetTerminologyResult.h>
#include <aws/translate/model/ImportTerminologyResult.h>
#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/translate/model/TranslateTextResult.h>
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

namespace Translate
{

namespace Model
{
        class DeleteTerminologyRequest;
        class GetTerminologyRequest;
        class ImportTerminologyRequest;
        class ListTerminologiesRequest;
        class TranslateTextRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranslateErrors>> DeleteTerminologyOutcome;
        typedef Aws::Utils::Outcome<GetTerminologyResult, Aws::Client::AWSError<TranslateErrors>> GetTerminologyOutcome;
        typedef Aws::Utils::Outcome<ImportTerminologyResult, Aws::Client::AWSError<TranslateErrors>> ImportTerminologyOutcome;
        typedef Aws::Utils::Outcome<ListTerminologiesResult, Aws::Client::AWSError<TranslateErrors>> ListTerminologiesOutcome;
        typedef Aws::Utils::Outcome<TranslateTextResult, Aws::Client::AWSError<TranslateErrors>> TranslateTextOutcome;

        typedef std::future<DeleteTerminologyOutcome> DeleteTerminologyOutcomeCallable;
        typedef std::future<GetTerminologyOutcome> GetTerminologyOutcomeCallable;
        typedef std::future<ImportTerminologyOutcome> ImportTerminologyOutcomeCallable;
        typedef std::future<ListTerminologiesOutcome> ListTerminologiesOutcomeCallable;
        typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
} // namespace Model

  class TranslateClient;

    typedef std::function<void(const TranslateClient*, const Model::DeleteTerminologyRequest&, const Model::DeleteTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetTerminologyRequest&, const Model::GetTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ImportTerminologyRequest&, const Model::ImportTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTerminologiesRequest&, const Model::ListTerminologiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTerminologiesResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::TranslateTextRequest&, const Model::TranslateTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslateTextResponseReceivedHandler;

  /**
   * <p>Provides translation between one source language and another of the same set
   * of languages.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Translate"; }


        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTerminologyOutcome DeleteTerminology(const Model::DeleteTerminologyRequest& request) const;

        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTerminologyOutcomeCallable DeleteTerminologyCallable(const Model::DeleteTerminologyRequest& request) const;

        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTerminologyAsync(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTerminologyOutcome GetTerminology(const Model::GetTerminologyRequest& request) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTerminologyOutcomeCallable GetTerminologyCallable(const Model::GetTerminologyRequest& request) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTerminologyAsync(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportTerminologyOutcome ImportTerminology(const Model::ImportTerminologyRequest& request) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportTerminologyOutcomeCallable ImportTerminologyCallable(const Model::ImportTerminologyRequest& request) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportTerminologyAsync(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTerminologiesOutcome ListTerminologies(const Model::ListTerminologiesRequest& request) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTerminologiesOutcomeCallable ListTerminologiesCallable(const Model::ListTerminologiesRequest& request) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTerminologiesAsync(const Model::ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Translates input text from the source language to the target language. It is
         * not necessary to use English (en) as either the source or the target language
         * but not all language combinations are supported by Amazon Translate. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/translate/latest/dg/pairs.html">Supported
         * Language Pairs</a>.</p> <ul> <li> <p>Arabic (ar)</p> </li> <li> <p>Chinese
         * (Simplified) (zh)</p> </li> <li> <p>Chinese (Traditional) (zh-TW)</p> </li> <li>
         * <p>Czech (cs)</p> </li> <li> <p>Danish (da)</p> </li> <li> <p>Dutch (nl)</p>
         * </li> <li> <p>English (en)</p> </li> <li> <p>Finnish (fi)</p> </li> <li>
         * <p>French (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Hebrew (he)</p>
         * </li> <li> <p>Indonesian (id)</p> </li> <li> <p>Italian (it)</p> </li> <li>
         * <p>Japanese (ja)</p> </li> <li> <p>Korean (ko)</p> </li> <li> <p>Polish (pl)</p>
         * </li> <li> <p>Portuguese (pt)</p> </li> <li> <p>Russian (ru)</p> </li> <li>
         * <p>Spanish (es)</p> </li> <li> <p>Swedish (sv)</p> </li> <li> <p>Turkish
         * (tr)</p> </li> </ul> <p>To have Amazon Translate determine the source language
         * of your text, you can specify <code>auto</code> in the
         * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
         * Translate will call Amazon Comprehend to determine the source
         * language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateTextOutcome TranslateText(const Model::TranslateTextRequest& request) const;

        /**
         * <p>Translates input text from the source language to the target language. It is
         * not necessary to use English (en) as either the source or the target language
         * but not all language combinations are supported by Amazon Translate. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/translate/latest/dg/pairs.html">Supported
         * Language Pairs</a>.</p> <ul> <li> <p>Arabic (ar)</p> </li> <li> <p>Chinese
         * (Simplified) (zh)</p> </li> <li> <p>Chinese (Traditional) (zh-TW)</p> </li> <li>
         * <p>Czech (cs)</p> </li> <li> <p>Danish (da)</p> </li> <li> <p>Dutch (nl)</p>
         * </li> <li> <p>English (en)</p> </li> <li> <p>Finnish (fi)</p> </li> <li>
         * <p>French (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Hebrew (he)</p>
         * </li> <li> <p>Indonesian (id)</p> </li> <li> <p>Italian (it)</p> </li> <li>
         * <p>Japanese (ja)</p> </li> <li> <p>Korean (ko)</p> </li> <li> <p>Polish (pl)</p>
         * </li> <li> <p>Portuguese (pt)</p> </li> <li> <p>Russian (ru)</p> </li> <li>
         * <p>Spanish (es)</p> </li> <li> <p>Swedish (sv)</p> </li> <li> <p>Turkish
         * (tr)</p> </li> </ul> <p>To have Amazon Translate determine the source language
         * of your text, you can specify <code>auto</code> in the
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
         * <p>Translates input text from the source language to the target language. It is
         * not necessary to use English (en) as either the source or the target language
         * but not all language combinations are supported by Amazon Translate. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/translate/latest/dg/pairs.html">Supported
         * Language Pairs</a>.</p> <ul> <li> <p>Arabic (ar)</p> </li> <li> <p>Chinese
         * (Simplified) (zh)</p> </li> <li> <p>Chinese (Traditional) (zh-TW)</p> </li> <li>
         * <p>Czech (cs)</p> </li> <li> <p>Danish (da)</p> </li> <li> <p>Dutch (nl)</p>
         * </li> <li> <p>English (en)</p> </li> <li> <p>Finnish (fi)</p> </li> <li>
         * <p>French (fr)</p> </li> <li> <p>German (de)</p> </li> <li> <p>Hebrew (he)</p>
         * </li> <li> <p>Indonesian (id)</p> </li> <li> <p>Italian (it)</p> </li> <li>
         * <p>Japanese (ja)</p> </li> <li> <p>Korean (ko)</p> </li> <li> <p>Polish (pl)</p>
         * </li> <li> <p>Portuguese (pt)</p> </li> <li> <p>Russian (ru)</p> </li> <li>
         * <p>Spanish (es)</p> </li> <li> <p>Swedish (sv)</p> </li> <li> <p>Turkish
         * (tr)</p> </li> </ul> <p>To have Amazon Translate determine the source language
         * of your text, you can specify <code>auto</code> in the
         * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
         * Translate will call Amazon Comprehend to determine the source
         * language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TranslateTextAsync(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteTerminologyAsyncHelper(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTerminologyAsyncHelper(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportTerminologyAsyncHelper(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTerminologiesAsyncHelper(const Model::ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TranslateTextAsyncHelper(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Translate
} // namespace Aws
