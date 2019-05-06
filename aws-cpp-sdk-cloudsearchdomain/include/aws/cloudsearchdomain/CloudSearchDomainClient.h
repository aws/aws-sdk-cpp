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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudsearchdomain/model/SearchResult.h>
#include <aws/cloudsearchdomain/model/SuggestResult.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsResult.h>
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

namespace CloudSearchDomain
{

namespace Model
{
        class SearchRequest;
        class SuggestRequest;
        class UploadDocumentsRequest;

        typedef Aws::Utils::Outcome<SearchResult, Aws::Client::AWSError<CloudSearchDomainErrors>> SearchOutcome;
        typedef Aws::Utils::Outcome<SuggestResult, Aws::Client::AWSError<CloudSearchDomainErrors>> SuggestOutcome;
        typedef Aws::Utils::Outcome<UploadDocumentsResult, Aws::Client::AWSError<CloudSearchDomainErrors>> UploadDocumentsOutcome;

        typedef std::future<SearchOutcome> SearchOutcomeCallable;
        typedef std::future<SuggestOutcome> SuggestOutcomeCallable;
        typedef std::future<UploadDocumentsOutcome> UploadDocumentsOutcomeCallable;
} // namespace Model

  class CloudSearchDomainClient;

    typedef std::function<void(const CloudSearchDomainClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const CloudSearchDomainClient*, const Model::SuggestRequest&, const Model::SuggestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuggestResponseReceivedHandler;
    typedef std::function<void(const CloudSearchDomainClient*, const Model::UploadDocumentsRequest&, const Model::UploadDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadDocumentsResponseReceivedHandler;

  /**
   * <p>You use the AmazonCloudSearch2013 API to upload documents to a search domain
   * and search those documents. </p> <p>The endpoints for submitting
   * <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code>
   * requests are domain-specific. To get the endpoints for your domain, use the
   * Amazon CloudSearch configuration service <code>DescribeDomains</code> action.
   * The domain endpoints are also displayed on the domain dashboard in the Amazon
   * CloudSearch console. You submit suggest requests to the search endpoint. </p>
   * <p>For more information, see the <a
   * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon
   * CloudSearch Developer Guide</a>.</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API CloudSearchDomainClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchDomainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudSearchDomainClient();

        inline virtual const char* GetServiceClientName() const override { return "cloudsearchdomain"; }


        /**
         * <p>Retrieves a list of documents that match the specified search criteria. How
         * you specify the search criteria depends on which query parser you use. Amazon
         * CloudSearch supports four query parsers:</p> <ul> <li><code>simple</code>:
         * search all <code>text</code> and <code>text-array</code> fields for the
         * specified string. Search for phrases, individual terms, and prefixes. </li>
         * <li><code>structured</code>: search specific fields, construct compound queries
         * using Boolean operators, and use advanced features such as term boosting and
         * proximity searching.</li> <li><code>lucene</code>: specify search criteria using
         * the Apache Lucene query parser syntax.</li> <li><code>dismax</code>: specify
         * search criteria using the simplified subset of the Apache Lucene query parser
         * syntax defined by the DisMax query parser.</li> </ul> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/searching.html">Searching
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p> <p>The
         * endpoint for submitting <code>Search</code> requests is domain-specific. You
         * submit search requests to a domain's search endpoint. To get the search endpoint
         * for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * <p>Retrieves a list of documents that match the specified search criteria. How
         * you specify the search criteria depends on which query parser you use. Amazon
         * CloudSearch supports four query parsers:</p> <ul> <li><code>simple</code>:
         * search all <code>text</code> and <code>text-array</code> fields for the
         * specified string. Search for phrases, individual terms, and prefixes. </li>
         * <li><code>structured</code>: search specific fields, construct compound queries
         * using Boolean operators, and use advanced features such as term boosting and
         * proximity searching.</li> <li><code>lucene</code>: specify search criteria using
         * the Apache Lucene query parser syntax.</li> <li><code>dismax</code>: specify
         * search criteria using the simplified subset of the Apache Lucene query parser
         * syntax defined by the DisMax query parser.</li> </ul> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/searching.html">Searching
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p> <p>The
         * endpoint for submitting <code>Search</code> requests is domain-specific. You
         * submit search requests to a domain's search endpoint. To get the search endpoint
         * for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Search">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOutcomeCallable SearchCallable(const Model::SearchRequest& request) const;

        /**
         * <p>Retrieves a list of documents that match the specified search criteria. How
         * you specify the search criteria depends on which query parser you use. Amazon
         * CloudSearch supports four query parsers:</p> <ul> <li><code>simple</code>:
         * search all <code>text</code> and <code>text-array</code> fields for the
         * specified string. Search for phrases, individual terms, and prefixes. </li>
         * <li><code>structured</code>: search specific fields, construct compound queries
         * using Boolean operators, and use advanced features such as term boosting and
         * proximity searching.</li> <li><code>lucene</code>: specify search criteria using
         * the Apache Lucene query parser syntax.</li> <li><code>dismax</code>: specify
         * search criteria using the simplified subset of the Apache Lucene query parser
         * syntax defined by the DisMax query parser.</li> </ul> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/searching.html">Searching
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p> <p>The
         * endpoint for submitting <code>Search</code> requests is domain-specific. You
         * submit search requests to a domain's search endpoint. To get the search endpoint
         * for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Search">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAsync(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves autocomplete suggestions for a partial query string. You can use
         * suggestions enable you to display likely matches before users finish typing. In
         * Amazon CloudSearch, suggestions are based on the contents of a particular text
         * field. When you request suggestions, Amazon CloudSearch finds all of the
         * documents whose values in the suggester field start with the specified query
         * string. The beginning of the field must match the query string to be considered
         * a match. </p> <p>For more information about configuring suggesters and
         * retrieving suggestions, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html">Getting
         * Suggestions</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p> <p>The
         * endpoint for submitting <code>Suggest</code> requests is domain-specific. You
         * submit suggest requests to a domain's search endpoint. To get the search
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Suggest">AWS
         * API Reference</a></p>
         */
        virtual Model::SuggestOutcome Suggest(const Model::SuggestRequest& request) const;

        /**
         * <p>Retrieves autocomplete suggestions for a partial query string. You can use
         * suggestions enable you to display likely matches before users finish typing. In
         * Amazon CloudSearch, suggestions are based on the contents of a particular text
         * field. When you request suggestions, Amazon CloudSearch finds all of the
         * documents whose values in the suggester field start with the specified query
         * string. The beginning of the field must match the query string to be considered
         * a match. </p> <p>For more information about configuring suggesters and
         * retrieving suggestions, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html">Getting
         * Suggestions</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p> <p>The
         * endpoint for submitting <code>Suggest</code> requests is domain-specific. You
         * submit suggest requests to a domain's search endpoint. To get the search
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Suggest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuggestOutcomeCallable SuggestCallable(const Model::SuggestRequest& request) const;

        /**
         * <p>Retrieves autocomplete suggestions for a partial query string. You can use
         * suggestions enable you to display likely matches before users finish typing. In
         * Amazon CloudSearch, suggestions are based on the contents of a particular text
         * field. When you request suggestions, Amazon CloudSearch finds all of the
         * documents whose values in the suggester field start with the specified query
         * string. The beginning of the field must match the query string to be considered
         * a match. </p> <p>For more information about configuring suggesters and
         * retrieving suggestions, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html">Getting
         * Suggestions</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p> <p>The
         * endpoint for submitting <code>Suggest</code> requests is domain-specific. You
         * submit suggest requests to a domain's search endpoint. To get the search
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Suggest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuggestAsync(const Model::SuggestRequest& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts a batch of documents to a search domain for indexing. A document batch
         * is a collection of add and delete operations that represent the documents you
         * want to add, update, or delete from your domain. Batches can be described in
         * either JSON or XML. Each item that you want Amazon CloudSearch to return as a
         * search result (such as a product) is represented as a document. Every document
         * has a unique ID and one or more fields that contain the data that you want to
         * search and return in results. Individual documents cannot contain more than 1 MB
         * of data. The entire batch cannot exceed 5 MB. To get the best possible upload
         * performance, group add and delete operations in batches that are close the 5 MB
         * limit. Submitting a large volume of single-document batches can overload a
         * domain's document service. </p> <p>The endpoint for submitting
         * <code>UploadDocuments</code> requests is domain-specific. To get the document
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p> <p>For more
         * information about formatting your data for Amazon CloudSearch, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/preparing-data.html">Preparing
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. For more
         * information about uploading data for indexing, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/uploading-data.html">Uploading
         * Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadDocumentsOutcome UploadDocuments(const Model::UploadDocumentsRequest& request) const;

        /**
         * <p>Posts a batch of documents to a search domain for indexing. A document batch
         * is a collection of add and delete operations that represent the documents you
         * want to add, update, or delete from your domain. Batches can be described in
         * either JSON or XML. Each item that you want Amazon CloudSearch to return as a
         * search result (such as a product) is represented as a document. Every document
         * has a unique ID and one or more fields that contain the data that you want to
         * search and return in results. Individual documents cannot contain more than 1 MB
         * of data. The entire batch cannot exceed 5 MB. To get the best possible upload
         * performance, group add and delete operations in batches that are close the 5 MB
         * limit. Submitting a large volume of single-document batches can overload a
         * domain's document service. </p> <p>The endpoint for submitting
         * <code>UploadDocuments</code> requests is domain-specific. To get the document
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p> <p>For more
         * information about formatting your data for Amazon CloudSearch, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/preparing-data.html">Preparing
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. For more
         * information about uploading data for indexing, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/uploading-data.html">Uploading
         * Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocuments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadDocumentsOutcomeCallable UploadDocumentsCallable(const Model::UploadDocumentsRequest& request) const;

        /**
         * <p>Posts a batch of documents to a search domain for indexing. A document batch
         * is a collection of add and delete operations that represent the documents you
         * want to add, update, or delete from your domain. Batches can be described in
         * either JSON or XML. Each item that you want Amazon CloudSearch to return as a
         * search result (such as a product) is represented as a document. Every document
         * has a unique ID and one or more fields that contain the data that you want to
         * search and return in results. Individual documents cannot contain more than 1 MB
         * of data. The entire batch cannot exceed 5 MB. To get the best possible upload
         * performance, group add and delete operations in batches that are close the 5 MB
         * limit. Submitting a large volume of single-document batches can overload a
         * domain's document service. </p> <p>The endpoint for submitting
         * <code>UploadDocuments</code> requests is domain-specific. To get the document
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p> <p>For more
         * information about formatting your data for Amazon CloudSearch, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/preparing-data.html">Preparing
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. For more
         * information about uploading data for indexing, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/uploading-data.html">Uploading
         * Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocuments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadDocumentsAsync(const Model::UploadDocumentsRequest& request, const UploadDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void SearchAsyncHelper(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuggestAsyncHelper(const Model::SuggestRequest& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadDocumentsAsyncHelper(const Model::UploadDocumentsRequest& request, const UploadDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudSearchDomain
} // namespace Aws
