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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudsearch/model/BuildSuggestersResult.h>
#include <aws/cloudsearch/model/CreateDomainResult.h>
#include <aws/cloudsearch/model/DefineAnalysisSchemeResult.h>
#include <aws/cloudsearch/model/DefineExpressionResult.h>
#include <aws/cloudsearch/model/DefineIndexFieldResult.h>
#include <aws/cloudsearch/model/DefineSuggesterResult.h>
#include <aws/cloudsearch/model/DeleteAnalysisSchemeResult.h>
#include <aws/cloudsearch/model/DeleteDomainResult.h>
#include <aws/cloudsearch/model/DeleteExpressionResult.h>
#include <aws/cloudsearch/model/DeleteIndexFieldResult.h>
#include <aws/cloudsearch/model/DeleteSuggesterResult.h>
#include <aws/cloudsearch/model/DescribeAnalysisSchemesResult.h>
#include <aws/cloudsearch/model/DescribeAvailabilityOptionsResult.h>
#include <aws/cloudsearch/model/DescribeDomainsResult.h>
#include <aws/cloudsearch/model/DescribeExpressionsResult.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsResult.h>
#include <aws/cloudsearch/model/DescribeScalingParametersResult.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesResult.h>
#include <aws/cloudsearch/model/DescribeSuggestersResult.h>
#include <aws/cloudsearch/model/IndexDocumentsResult.h>
#include <aws/cloudsearch/model/ListDomainNamesResult.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsResult.h>
#include <aws/cloudsearch/model/UpdateScalingParametersResult.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace CloudSearch
{

namespace Model
{
        class BuildSuggestersRequest;
        class CreateDomainRequest;
        class DefineAnalysisSchemeRequest;
        class DefineExpressionRequest;
        class DefineIndexFieldRequest;
        class DefineSuggesterRequest;
        class DeleteAnalysisSchemeRequest;
        class DeleteDomainRequest;
        class DeleteExpressionRequest;
        class DeleteIndexFieldRequest;
        class DeleteSuggesterRequest;
        class DescribeAnalysisSchemesRequest;
        class DescribeAvailabilityOptionsRequest;
        class DescribeDomainsRequest;
        class DescribeExpressionsRequest;
        class DescribeIndexFieldsRequest;
        class DescribeScalingParametersRequest;
        class DescribeServiceAccessPoliciesRequest;
        class DescribeSuggestersRequest;
        class IndexDocumentsRequest;
        class ListDomainNamesRequest;
        class UpdateAvailabilityOptionsRequest;
        class UpdateScalingParametersRequest;
        class UpdateServiceAccessPoliciesRequest;

        typedef Aws::Utils::Outcome<BuildSuggestersResult, Aws::Client::AWSError<CloudSearchErrors>> BuildSuggestersOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, Aws::Client::AWSError<CloudSearchErrors>> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<DefineAnalysisSchemeResult, Aws::Client::AWSError<CloudSearchErrors>> DefineAnalysisSchemeOutcome;
        typedef Aws::Utils::Outcome<DefineExpressionResult, Aws::Client::AWSError<CloudSearchErrors>> DefineExpressionOutcome;
        typedef Aws::Utils::Outcome<DefineIndexFieldResult, Aws::Client::AWSError<CloudSearchErrors>> DefineIndexFieldOutcome;
        typedef Aws::Utils::Outcome<DefineSuggesterResult, Aws::Client::AWSError<CloudSearchErrors>> DefineSuggesterOutcome;
        typedef Aws::Utils::Outcome<DeleteAnalysisSchemeResult, Aws::Client::AWSError<CloudSearchErrors>> DeleteAnalysisSchemeOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, Aws::Client::AWSError<CloudSearchErrors>> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteExpressionResult, Aws::Client::AWSError<CloudSearchErrors>> DeleteExpressionOutcome;
        typedef Aws::Utils::Outcome<DeleteIndexFieldResult, Aws::Client::AWSError<CloudSearchErrors>> DeleteIndexFieldOutcome;
        typedef Aws::Utils::Outcome<DeleteSuggesterResult, Aws::Client::AWSError<CloudSearchErrors>> DeleteSuggesterOutcome;
        typedef Aws::Utils::Outcome<DescribeAnalysisSchemesResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeAnalysisSchemesOutcome;
        typedef Aws::Utils::Outcome<DescribeAvailabilityOptionsResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeAvailabilityOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainsResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeDomainsOutcome;
        typedef Aws::Utils::Outcome<DescribeExpressionsResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeExpressionsOutcome;
        typedef Aws::Utils::Outcome<DescribeIndexFieldsResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeIndexFieldsOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingParametersResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeScalingParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceAccessPoliciesResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeServiceAccessPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeSuggestersResult, Aws::Client::AWSError<CloudSearchErrors>> DescribeSuggestersOutcome;
        typedef Aws::Utils::Outcome<IndexDocumentsResult, Aws::Client::AWSError<CloudSearchErrors>> IndexDocumentsOutcome;
        typedef Aws::Utils::Outcome<ListDomainNamesResult, Aws::Client::AWSError<CloudSearchErrors>> ListDomainNamesOutcome;
        typedef Aws::Utils::Outcome<UpdateAvailabilityOptionsResult, Aws::Client::AWSError<CloudSearchErrors>> UpdateAvailabilityOptionsOutcome;
        typedef Aws::Utils::Outcome<UpdateScalingParametersResult, Aws::Client::AWSError<CloudSearchErrors>> UpdateScalingParametersOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceAccessPoliciesResult, Aws::Client::AWSError<CloudSearchErrors>> UpdateServiceAccessPoliciesOutcome;

        typedef std::future<BuildSuggestersOutcome> BuildSuggestersOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<DefineAnalysisSchemeOutcome> DefineAnalysisSchemeOutcomeCallable;
        typedef std::future<DefineExpressionOutcome> DefineExpressionOutcomeCallable;
        typedef std::future<DefineIndexFieldOutcome> DefineIndexFieldOutcomeCallable;
        typedef std::future<DefineSuggesterOutcome> DefineSuggesterOutcomeCallable;
        typedef std::future<DeleteAnalysisSchemeOutcome> DeleteAnalysisSchemeOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteExpressionOutcome> DeleteExpressionOutcomeCallable;
        typedef std::future<DeleteIndexFieldOutcome> DeleteIndexFieldOutcomeCallable;
        typedef std::future<DeleteSuggesterOutcome> DeleteSuggesterOutcomeCallable;
        typedef std::future<DescribeAnalysisSchemesOutcome> DescribeAnalysisSchemesOutcomeCallable;
        typedef std::future<DescribeAvailabilityOptionsOutcome> DescribeAvailabilityOptionsOutcomeCallable;
        typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
        typedef std::future<DescribeExpressionsOutcome> DescribeExpressionsOutcomeCallable;
        typedef std::future<DescribeIndexFieldsOutcome> DescribeIndexFieldsOutcomeCallable;
        typedef std::future<DescribeScalingParametersOutcome> DescribeScalingParametersOutcomeCallable;
        typedef std::future<DescribeServiceAccessPoliciesOutcome> DescribeServiceAccessPoliciesOutcomeCallable;
        typedef std::future<DescribeSuggestersOutcome> DescribeSuggestersOutcomeCallable;
        typedef std::future<IndexDocumentsOutcome> IndexDocumentsOutcomeCallable;
        typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
        typedef std::future<UpdateAvailabilityOptionsOutcome> UpdateAvailabilityOptionsOutcomeCallable;
        typedef std::future<UpdateScalingParametersOutcome> UpdateScalingParametersOutcomeCallable;
        typedef std::future<UpdateServiceAccessPoliciesOutcome> UpdateServiceAccessPoliciesOutcomeCallable;
} // namespace Model

  class CloudSearchClient;

    typedef std::function<void(const CloudSearchClient*, const Model::BuildSuggestersRequest&, const Model::BuildSuggestersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BuildSuggestersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DefineAnalysisSchemeRequest&, const Model::DefineAnalysisSchemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DefineAnalysisSchemeResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DefineExpressionRequest&, const Model::DefineExpressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DefineExpressionResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DefineIndexFieldRequest&, const Model::DefineIndexFieldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DefineIndexFieldResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DefineSuggesterRequest&, const Model::DefineSuggesterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DefineSuggesterResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DeleteAnalysisSchemeRequest&, const Model::DeleteAnalysisSchemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalysisSchemeResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DeleteExpressionRequest&, const Model::DeleteExpressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExpressionResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DeleteIndexFieldRequest&, const Model::DeleteIndexFieldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexFieldResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DeleteSuggesterRequest&, const Model::DeleteSuggesterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSuggesterResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeAnalysisSchemesRequest&, const Model::DescribeAnalysisSchemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisSchemesResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeAvailabilityOptionsRequest&, const Model::DescribeAvailabilityOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailabilityOptionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeDomainsRequest&, const Model::DescribeDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeExpressionsRequest&, const Model::DescribeExpressionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExpressionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeIndexFieldsRequest&, const Model::DescribeIndexFieldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexFieldsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeScalingParametersRequest&, const Model::DescribeScalingParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingParametersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeServiceAccessPoliciesRequest&, const Model::DescribeServiceAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeSuggestersRequest&, const Model::DescribeSuggestersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSuggestersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::IndexDocumentsRequest&, const Model::IndexDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IndexDocumentsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateAvailabilityOptionsRequest&, const Model::UpdateAvailabilityOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAvailabilityOptionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateScalingParametersRequest&, const Model::UpdateScalingParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScalingParametersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateServiceAccessPoliciesRequest&, const Model::UpdateServiceAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceAccessPoliciesResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudSearch Configuration Service</fullname> <p>You use the
   * Amazon CloudSearch configuration service to create, configure, and manage search
   * domains. Configuration service requests are submitted using the AWS Query
   * protocol. AWS Query requests are HTTP or HTTPS requests submitted via HTTP GET
   * or POST with a query parameter named Action.</p> <p>The endpoint for
   * configuration service requests is region-specific:
   * cloudsearch.<i>region</i>.amazonaws.com. For example,
   * cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and
   * endpoints, see <a
   * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region"
   * target="_blank">Regions and Endpoints</a>.</p>
   */
  class AWS_CLOUDSEARCH_API CloudSearchClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudSearchClient();

        inline virtual const char* GetServiceClientName() const override { return "cloudsearch"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Indexes the search suggestions. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html#configuring-suggesters">Configuring
         * Suggesters</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/BuildSuggesters">AWS
         * API Reference</a></p>
         */
        virtual Model::BuildSuggestersOutcome BuildSuggesters(const Model::BuildSuggestersRequest& request) const;

        /**
         * <p>Indexes the search suggestions. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html#configuring-suggesters">Configuring
         * Suggesters</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/BuildSuggesters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BuildSuggestersOutcomeCallable BuildSuggestersCallable(const Model::BuildSuggestersRequest& request) const;

        /**
         * <p>Indexes the search suggestions. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html#configuring-suggesters">Configuring
         * Suggesters</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/BuildSuggesters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BuildSuggestersAsync(const Model::BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new search domain. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/creating-domains.html"
         * target="_blank">Creating a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a new search domain. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/creating-domains.html"
         * target="_blank">Creating a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/CreateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a new search domain. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/creating-domains.html"
         * target="_blank">Creating a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/CreateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an analysis scheme that can be applied to a <code>text</code> or
         * <code>text-array</code> field to define language-specific text processing
         * options. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineAnalysisScheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DefineAnalysisSchemeOutcome DefineAnalysisScheme(const Model::DefineAnalysisSchemeRequest& request) const;

        /**
         * <p>Configures an analysis scheme that can be applied to a <code>text</code> or
         * <code>text-array</code> field to define language-specific text processing
         * options. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineAnalysisScheme">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DefineAnalysisSchemeOutcomeCallable DefineAnalysisSchemeCallable(const Model::DefineAnalysisSchemeRequest& request) const;

        /**
         * <p>Configures an analysis scheme that can be applied to a <code>text</code> or
         * <code>text-array</code> field to define language-specific text processing
         * options. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineAnalysisScheme">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DefineAnalysisSchemeAsync(const Model::DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an <code><a>Expression</a></code> for the search domain. Used to
         * create new expressions and modify existing ones. If the expression exists, the
         * new configuration replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineExpression">AWS
         * API Reference</a></p>
         */
        virtual Model::DefineExpressionOutcome DefineExpression(const Model::DefineExpressionRequest& request) const;

        /**
         * <p>Configures an <code><a>Expression</a></code> for the search domain. Used to
         * create new expressions and modify existing ones. If the expression exists, the
         * new configuration replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineExpression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DefineExpressionOutcomeCallable DefineExpressionCallable(const Model::DefineExpressionRequest& request) const;

        /**
         * <p>Configures an <code><a>Expression</a></code> for the search domain. Used to
         * create new expressions and modify existing ones. If the expression exists, the
         * new configuration replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineExpression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DefineExpressionAsync(const Model::DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an <code><a>IndexField</a></code> for the search domain. Used to
         * create new fields and modify existing ones. You must specify the name of the
         * domain you are configuring and an index field configuration. The index field
         * configuration specifies a unique name, the index field type, and the options you
         * want to configure for the field. The options you can specify depend on the
         * <code><a>IndexFieldType</a></code>. If the field exists, the new configuration
         * replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexField">AWS
         * API Reference</a></p>
         */
        virtual Model::DefineIndexFieldOutcome DefineIndexField(const Model::DefineIndexFieldRequest& request) const;

        /**
         * <p>Configures an <code><a>IndexField</a></code> for the search domain. Used to
         * create new fields and modify existing ones. You must specify the name of the
         * domain you are configuring and an index field configuration. The index field
         * configuration specifies a unique name, the index field type, and the options you
         * want to configure for the field. The options you can specify depend on the
         * <code><a>IndexFieldType</a></code>. If the field exists, the new configuration
         * replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexField">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DefineIndexFieldOutcomeCallable DefineIndexFieldCallable(const Model::DefineIndexFieldRequest& request) const;

        /**
         * <p>Configures an <code><a>IndexField</a></code> for the search domain. Used to
         * create new fields and modify existing ones. You must specify the name of the
         * domain you are configuring and an index field configuration. The index field
         * configuration specifies a unique name, the index field type, and the options you
         * want to configure for the field. The options you can specify depend on the
         * <code><a>IndexFieldType</a></code>. If the field exists, the new configuration
         * replaces the old one. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexField">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DefineIndexFieldAsync(const Model::DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures a suggester for a domain. A suggester enables you to display
         * possible matches before users finish typing their queries. When you configure a
         * suggester, you must specify the name of the text field you want to search for
         * possible matches and a unique name for the suggester. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineSuggester">AWS
         * API Reference</a></p>
         */
        virtual Model::DefineSuggesterOutcome DefineSuggester(const Model::DefineSuggesterRequest& request) const;

        /**
         * <p>Configures a suggester for a domain. A suggester enables you to display
         * possible matches before users finish typing their queries. When you configure a
         * suggester, you must specify the name of the text field you want to search for
         * possible matches and a unique name for the suggester. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineSuggester">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DefineSuggesterOutcomeCallable DefineSuggesterCallable(const Model::DefineSuggesterRequest& request) const;

        /**
         * <p>Configures a suggester for a domain. A suggester enables you to display
         * possible matches before users finish typing their queries. When you configure a
         * suggester, you must specify the name of the text field you want to search for
         * possible matches and a unique name for the suggester. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineSuggester">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DefineSuggesterAsync(const Model::DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an analysis scheme. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteAnalysisScheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalysisSchemeOutcome DeleteAnalysisScheme(const Model::DeleteAnalysisSchemeRequest& request) const;

        /**
         * <p>Deletes an analysis scheme. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteAnalysisScheme">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnalysisSchemeOutcomeCallable DeleteAnalysisSchemeCallable(const Model::DeleteAnalysisSchemeRequest& request) const;

        /**
         * <p>Deletes an analysis scheme. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteAnalysisScheme">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnalysisSchemeAsync(const Model::DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a search domain and all of its data. Once a domain has
         * been deleted, it cannot be recovered. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/deleting-domains.html"
         * target="_blank">Deleting a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Permanently deletes a search domain and all of its data. Once a domain has
         * been deleted, it cannot be recovered. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/deleting-domains.html"
         * target="_blank">Deleting a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Permanently deletes a search domain and all of its data. Once a domain has
         * been deleted, it cannot be recovered. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/deleting-domains.html"
         * target="_blank">Deleting a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an <code><a>Expression</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteExpression">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExpressionOutcome DeleteExpression(const Model::DeleteExpressionRequest& request) const;

        /**
         * <p>Removes an <code><a>Expression</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteExpression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExpressionOutcomeCallable DeleteExpressionCallable(const Model::DeleteExpressionRequest& request) const;

        /**
         * <p>Removes an <code><a>Expression</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteExpression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExpressionAsync(const Model::DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an <code><a>IndexField</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexField">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexFieldOutcome DeleteIndexField(const Model::DeleteIndexFieldRequest& request) const;

        /**
         * <p>Removes an <code><a>IndexField</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexField">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIndexFieldOutcomeCallable DeleteIndexFieldCallable(const Model::DeleteIndexFieldRequest& request) const;

        /**
         * <p>Removes an <code><a>IndexField</a></code> from the search domain. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
         * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexField">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIndexFieldAsync(const Model::DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a suggester. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggester">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuggesterOutcome DeleteSuggester(const Model::DeleteSuggesterRequest& request) const;

        /**
         * <p>Deletes a suggester. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggester">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSuggesterOutcomeCallable DeleteSuggesterCallable(const Model::DeleteSuggesterRequest& request) const;

        /**
         * <p>Deletes a suggester. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggester">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSuggesterAsync(const Model::DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the analysis schemes configured for a domain. An analysis scheme defines
         * language-specific text processing options for a <code>text</code> field. Can be
         * limited to specific analysis schemes by name. By default, shows all analysis
         * schemes and includes any pending changes to the configuration. Set the
         * <code>Deployed</code> option to <code>true</code> to show the active
         * configuration and exclude pending changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAnalysisSchemes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisSchemesOutcome DescribeAnalysisSchemes(const Model::DescribeAnalysisSchemesRequest& request) const;

        /**
         * <p>Gets the analysis schemes configured for a domain. An analysis scheme defines
         * language-specific text processing options for a <code>text</code> field. Can be
         * limited to specific analysis schemes by name. By default, shows all analysis
         * schemes and includes any pending changes to the configuration. Set the
         * <code>Deployed</code> option to <code>true</code> to show the active
         * configuration and exclude pending changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAnalysisSchemes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnalysisSchemesOutcomeCallable DescribeAnalysisSchemesCallable(const Model::DescribeAnalysisSchemesRequest& request) const;

        /**
         * <p>Gets the analysis schemes configured for a domain. An analysis scheme defines
         * language-specific text processing options for a <code>text</code> field. Can be
         * limited to specific analysis schemes by name. By default, shows all analysis
         * schemes and includes any pending changes to the configuration. Set the
         * <code>Deployed</code> option to <code>true</code> to show the active
         * configuration and exclude pending changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAnalysisSchemes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnalysisSchemesAsync(const Model::DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the availability options configured for a domain. By default, shows the
         * configuration with any pending changes. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAvailabilityOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailabilityOptionsOutcome DescribeAvailabilityOptions(const Model::DescribeAvailabilityOptionsRequest& request) const;

        /**
         * <p>Gets the availability options configured for a domain. By default, shows the
         * configuration with any pending changes. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAvailabilityOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailabilityOptionsOutcomeCallable DescribeAvailabilityOptionsCallable(const Model::DescribeAvailabilityOptionsRequest& request) const;

        /**
         * <p>Gets the availability options configured for a domain. By default, shows the
         * configuration with any pending changes. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAvailabilityOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailabilityOptionsAsync(const Model::DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the search domains owned by this account. Can be
         * limited to specific domains. Shows all domains by default. To get the number of
         * searchable documents in a domain, use the console or submit a
         * <code>matchall</code> request to your domain's search endpoint:
         * <code>q=matchall&amp;amp;q.parser=structured&amp;amp;size=0</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Information about a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest& request) const;

        /**
         * <p>Gets information about the search domains owned by this account. Can be
         * limited to specific domains. Shows all domains by default. To get the number of
         * searchable documents in a domain, use the console or submit a
         * <code>matchall</code> request to your domain's search endpoint:
         * <code>q=matchall&amp;amp;q.parser=structured&amp;amp;size=0</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Information about a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request) const;

        /**
         * <p>Gets information about the search domains owned by this account. Can be
         * limited to specific domains. Shows all domains by default. To get the number of
         * searchable documents in a domain, use the console or submit a
         * <code>matchall</code> request to your domain's search endpoint:
         * <code>q=matchall&amp;amp;q.parser=structured&amp;amp;size=0</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Information about a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the expressions configured for the search domain. Can be limited to
         * specific expressions by name. By default, shows all expressions and includes any
         * pending changes to the configuration. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeExpressions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExpressionsOutcome DescribeExpressions(const Model::DescribeExpressionsRequest& request) const;

        /**
         * <p>Gets the expressions configured for the search domain. Can be limited to
         * specific expressions by name. By default, shows all expressions and includes any
         * pending changes to the configuration. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeExpressions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExpressionsOutcomeCallable DescribeExpressionsCallable(const Model::DescribeExpressionsRequest& request) const;

        /**
         * <p>Gets the expressions configured for the search domain. Can be limited to
         * specific expressions by name. By default, shows all expressions and includes any
         * pending changes to the configuration. Set the <code>Deployed</code> option to
         * <code>true</code> to show the active configuration and exclude pending changes.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
         * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeExpressions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExpressionsAsync(const Model::DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the index fields configured for the search domain. Can
         * be limited to specific fields by name. By default, shows all fields and includes
         * any pending changes to the configuration. Set the <code>Deployed</code> option
         * to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Domain Information</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFields">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIndexFieldsOutcome DescribeIndexFields(const Model::DescribeIndexFieldsRequest& request) const;

        /**
         * <p>Gets information about the index fields configured for the search domain. Can
         * be limited to specific fields by name. By default, shows all fields and includes
         * any pending changes to the configuration. Set the <code>Deployed</code> option
         * to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Domain Information</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFields">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIndexFieldsOutcomeCallable DescribeIndexFieldsCallable(const Model::DescribeIndexFieldsRequest& request) const;

        /**
         * <p>Gets information about the index fields configured for the search domain. Can
         * be limited to specific fields by name. By default, shows all fields and includes
         * any pending changes to the configuration. Set the <code>Deployed</code> option
         * to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
         * target="_blank">Getting Domain Information</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFields">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIndexFieldsAsync(const Model::DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the scaling parameters configured for a domain. A domain's scaling
         * parameters specify the desired search instance type and replication count. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeScalingParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingParametersOutcome DescribeScalingParameters(const Model::DescribeScalingParametersRequest& request) const;

        /**
         * <p>Gets the scaling parameters configured for a domain. A domain's scaling
         * parameters specify the desired search instance type and replication count. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeScalingParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingParametersOutcomeCallable DescribeScalingParametersCallable(const Model::DescribeScalingParametersRequest& request) const;

        /**
         * <p>Gets the scaling parameters configured for a domain. A domain's scaling
         * parameters specify the desired search instance type and replication count. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeScalingParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingParametersAsync(const Model::DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the access policies that control access to the
         * domain's document and search endpoints. By default, shows the configuration with
         * any pending changes. Set the <code>Deployed</code> option to <code>true</code>
         * to show the active configuration and exclude pending changes. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank">Configuring Access for a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeServiceAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceAccessPoliciesOutcome DescribeServiceAccessPolicies(const Model::DescribeServiceAccessPoliciesRequest& request) const;

        /**
         * <p>Gets information about the access policies that control access to the
         * domain's document and search endpoints. By default, shows the configuration with
         * any pending changes. Set the <code>Deployed</code> option to <code>true</code>
         * to show the active configuration and exclude pending changes. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank">Configuring Access for a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeServiceAccessPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceAccessPoliciesOutcomeCallable DescribeServiceAccessPoliciesCallable(const Model::DescribeServiceAccessPoliciesRequest& request) const;

        /**
         * <p>Gets information about the access policies that control access to the
         * domain's document and search endpoints. By default, shows the configuration with
         * any pending changes. Set the <code>Deployed</code> option to <code>true</code>
         * to show the active configuration and exclude pending changes. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank">Configuring Access for a Search Domain</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeServiceAccessPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceAccessPoliciesAsync(const Model::DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the suggesters configured for a domain. A suggester enables you to
         * display possible matches before users finish typing their queries. Can be
         * limited to specific suggesters by name. By default, shows all suggesters and
         * includes any pending changes to the configuration. Set the <code>Deployed</code>
         * option to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggesters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSuggestersOutcome DescribeSuggesters(const Model::DescribeSuggestersRequest& request) const;

        /**
         * <p>Gets the suggesters configured for a domain. A suggester enables you to
         * display possible matches before users finish typing their queries. Can be
         * limited to specific suggesters by name. By default, shows all suggesters and
         * includes any pending changes to the configuration. Set the <code>Deployed</code>
         * option to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggesters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSuggestersOutcomeCallable DescribeSuggestersCallable(const Model::DescribeSuggestersRequest& request) const;

        /**
         * <p>Gets the suggesters configured for a domain. A suggester enables you to
         * display possible matches before users finish typing their queries. Can be
         * limited to specific suggesters by name. By default, shows all suggesters and
         * includes any pending changes to the configuration. Set the <code>Deployed</code>
         * option to <code>true</code> to show the active configuration and exclude pending
         * changes. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggesters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSuggestersAsync(const Model::DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tells the search domain to start indexing its documents using the latest
         * indexing options. This operation must be invoked to activate options whose
         * <a>OptionStatus</a> is <code>RequiresIndexDocuments</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::IndexDocumentsOutcome IndexDocuments(const Model::IndexDocumentsRequest& request) const;

        /**
         * <p>Tells the search domain to start indexing its documents using the latest
         * indexing options. This operation must be invoked to activate options whose
         * <a>OptionStatus</a> is <code>RequiresIndexDocuments</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexDocuments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IndexDocumentsOutcomeCallable IndexDocumentsCallable(const Model::IndexDocumentsRequest& request) const;

        /**
         * <p>Tells the search domain to start indexing its documents using the latest
         * indexing options. This operation must be invoked to activate options whose
         * <a>OptionStatus</a> is <code>RequiresIndexDocuments</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexDocuments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IndexDocumentsAsync(const Model::IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all search domains owned by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * <p>Lists all search domains owned by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const Model::ListDomainNamesRequest& request) const;

        /**
         * <p>Lists all search domains owned by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainNamesAsync(const Model::ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures the availability options for a domain. Enabling the Multi-AZ
         * option expands an Amazon CloudSearch domain to an additional Availability Zone
         * in the same Region to increase fault tolerance in the event of a service
         * disruption. Changes to the Multi-AZ option can take about half an hour to become
         * active. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAvailabilityOptionsOutcome UpdateAvailabilityOptions(const Model::UpdateAvailabilityOptionsRequest& request) const;

        /**
         * <p>Configures the availability options for a domain. Enabling the Multi-AZ
         * option expands an Amazon CloudSearch domain to an additional Availability Zone
         * in the same Region to increase fault tolerance in the event of a service
         * disruption. Changes to the Multi-AZ option can take about half an hour to become
         * active. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAvailabilityOptionsOutcomeCallable UpdateAvailabilityOptionsCallable(const Model::UpdateAvailabilityOptionsRequest& request) const;

        /**
         * <p>Configures the availability options for a domain. Enabling the Multi-AZ
         * option expands an Amazon CloudSearch domain to an additional Availability Zone
         * in the same Region to increase fault tolerance in the event of a service
         * disruption. Changes to the Multi-AZ option can take about half an hour to become
         * active. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
         * target="_blank">Configuring Availability Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAvailabilityOptionsAsync(const Model::UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures scaling parameters for a domain. A domain's scaling parameters
         * specify the desired search instance type and replication count. Amazon
         * CloudSearch will still automatically scale your domain based on the volume of
         * data and traffic, but not below the desired instance type and replication count.
         * If the Multi-AZ option is enabled, these values control the resources used per
         * Availability Zone. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateScalingParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScalingParametersOutcome UpdateScalingParameters(const Model::UpdateScalingParametersRequest& request) const;

        /**
         * <p>Configures scaling parameters for a domain. A domain's scaling parameters
         * specify the desired search instance type and replication count. Amazon
         * CloudSearch will still automatically scale your domain based on the volume of
         * data and traffic, but not below the desired instance type and replication count.
         * If the Multi-AZ option is enabled, these values control the resources used per
         * Availability Zone. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateScalingParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScalingParametersOutcomeCallable UpdateScalingParametersCallable(const Model::UpdateScalingParametersRequest& request) const;

        /**
         * <p>Configures scaling parameters for a domain. A domain's scaling parameters
         * specify the desired search instance type and replication count. Amazon
         * CloudSearch will still automatically scale your domain based on the volume of
         * data and traffic, but not below the desired instance type and replication count.
         * If the Multi-AZ option is enabled, these values control the resources used per
         * Availability Zone. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
         * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateScalingParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScalingParametersAsync(const Model::UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures the access rules that control access to the domain's document and
         * search endpoints. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank"> Configuring Access for an Amazon CloudSearch
         * Domain</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceAccessPoliciesOutcome UpdateServiceAccessPolicies(const Model::UpdateServiceAccessPoliciesRequest& request) const;

        /**
         * <p>Configures the access rules that control access to the domain's document and
         * search endpoints. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank"> Configuring Access for an Amazon CloudSearch
         * Domain</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceAccessPoliciesOutcomeCallable UpdateServiceAccessPoliciesCallable(const Model::UpdateServiceAccessPoliciesRequest& request) const;

        /**
         * <p>Configures the access rules that control access to the domain's document and
         * search endpoints. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank"> Configuring Access for an Amazon CloudSearch
         * Domain</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAccessPoliciesAsync(const Model::UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BuildSuggestersAsyncHelper(const Model::BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DefineAnalysisSchemeAsyncHelper(const Model::DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DefineExpressionAsyncHelper(const Model::DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DefineIndexFieldAsyncHelper(const Model::DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DefineSuggesterAsyncHelper(const Model::DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnalysisSchemeAsyncHelper(const Model::DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteExpressionAsyncHelper(const Model::DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIndexFieldAsyncHelper(const Model::DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSuggesterAsyncHelper(const Model::DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnalysisSchemesAsyncHelper(const Model::DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAvailabilityOptionsAsyncHelper(const Model::DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainsAsyncHelper(const Model::DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExpressionsAsyncHelper(const Model::DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIndexFieldsAsyncHelper(const Model::DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingParametersAsyncHelper(const Model::DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceAccessPoliciesAsyncHelper(const Model::DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSuggestersAsyncHelper(const Model::DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IndexDocumentsAsyncHelper(const Model::IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainNamesAsyncHelper(const Model::ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAvailabilityOptionsAsyncHelper(const Model::UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScalingParametersAsyncHelper(const Model::UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceAccessPoliciesAsyncHelper(const Model::UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudSearch
} // namespace Aws
