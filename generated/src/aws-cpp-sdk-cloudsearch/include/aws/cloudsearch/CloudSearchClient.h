/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudsearch/CloudSearchServiceClientModel.h>

namespace Aws
{
namespace CloudSearch
{
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
  class AWS_CLOUDSEARCH_API CloudSearchClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudSearchClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudSearchClientConfiguration ClientConfigurationType;
      typedef CloudSearchEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::CloudSearch::CloudSearchClientConfiguration& clientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration(),
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::CloudSearch::CloudSearchClientConfiguration& clientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::CloudSearch::CloudSearchClientConfiguration& clientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudSearchClient();


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
         * A Callable wrapper for BuildSuggesters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BuildSuggestersRequestT = Model::BuildSuggestersRequest>
        Model::BuildSuggestersOutcomeCallable BuildSuggestersCallable(const BuildSuggestersRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::BuildSuggesters, request);
        }

        /**
         * An Async wrapper for BuildSuggesters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BuildSuggestersRequestT = Model::BuildSuggestersRequest>
        void BuildSuggestersAsync(const BuildSuggestersRequestT& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::BuildSuggesters, request, handler, context);
        }

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
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::CreateDomain, request, handler, context);
        }

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
         * A Callable wrapper for DefineAnalysisScheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DefineAnalysisSchemeRequestT = Model::DefineAnalysisSchemeRequest>
        Model::DefineAnalysisSchemeOutcomeCallable DefineAnalysisSchemeCallable(const DefineAnalysisSchemeRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DefineAnalysisScheme, request);
        }

        /**
         * An Async wrapper for DefineAnalysisScheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DefineAnalysisSchemeRequestT = Model::DefineAnalysisSchemeRequest>
        void DefineAnalysisSchemeAsync(const DefineAnalysisSchemeRequestT& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DefineAnalysisScheme, request, handler, context);
        }

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
         * A Callable wrapper for DefineExpression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DefineExpressionRequestT = Model::DefineExpressionRequest>
        Model::DefineExpressionOutcomeCallable DefineExpressionCallable(const DefineExpressionRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DefineExpression, request);
        }

        /**
         * An Async wrapper for DefineExpression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DefineExpressionRequestT = Model::DefineExpressionRequest>
        void DefineExpressionAsync(const DefineExpressionRequestT& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DefineExpression, request, handler, context);
        }

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
         * A Callable wrapper for DefineIndexField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DefineIndexFieldRequestT = Model::DefineIndexFieldRequest>
        Model::DefineIndexFieldOutcomeCallable DefineIndexFieldCallable(const DefineIndexFieldRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DefineIndexField, request);
        }

        /**
         * An Async wrapper for DefineIndexField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DefineIndexFieldRequestT = Model::DefineIndexFieldRequest>
        void DefineIndexFieldAsync(const DefineIndexFieldRequestT& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DefineIndexField, request, handler, context);
        }

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
         * A Callable wrapper for DefineSuggester that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DefineSuggesterRequestT = Model::DefineSuggesterRequest>
        Model::DefineSuggesterOutcomeCallable DefineSuggesterCallable(const DefineSuggesterRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DefineSuggester, request);
        }

        /**
         * An Async wrapper for DefineSuggester that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DefineSuggesterRequestT = Model::DefineSuggesterRequest>
        void DefineSuggesterAsync(const DefineSuggesterRequestT& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DefineSuggester, request, handler, context);
        }

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
         * A Callable wrapper for DeleteAnalysisScheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnalysisSchemeRequestT = Model::DeleteAnalysisSchemeRequest>
        Model::DeleteAnalysisSchemeOutcomeCallable DeleteAnalysisSchemeCallable(const DeleteAnalysisSchemeRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DeleteAnalysisScheme, request);
        }

        /**
         * An Async wrapper for DeleteAnalysisScheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnalysisSchemeRequestT = Model::DeleteAnalysisSchemeRequest>
        void DeleteAnalysisSchemeAsync(const DeleteAnalysisSchemeRequestT& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DeleteAnalysisScheme, request, handler, context);
        }

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
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DeleteDomain, request, handler, context);
        }

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
         * A Callable wrapper for DeleteExpression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExpressionRequestT = Model::DeleteExpressionRequest>
        Model::DeleteExpressionOutcomeCallable DeleteExpressionCallable(const DeleteExpressionRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DeleteExpression, request);
        }

        /**
         * An Async wrapper for DeleteExpression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExpressionRequestT = Model::DeleteExpressionRequest>
        void DeleteExpressionAsync(const DeleteExpressionRequestT& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DeleteExpression, request, handler, context);
        }

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
         * A Callable wrapper for DeleteIndexField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIndexFieldRequestT = Model::DeleteIndexFieldRequest>
        Model::DeleteIndexFieldOutcomeCallable DeleteIndexFieldCallable(const DeleteIndexFieldRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DeleteIndexField, request);
        }

        /**
         * An Async wrapper for DeleteIndexField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIndexFieldRequestT = Model::DeleteIndexFieldRequest>
        void DeleteIndexFieldAsync(const DeleteIndexFieldRequestT& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DeleteIndexField, request, handler, context);
        }

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
         * A Callable wrapper for DeleteSuggester that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSuggesterRequestT = Model::DeleteSuggesterRequest>
        Model::DeleteSuggesterOutcomeCallable DeleteSuggesterCallable(const DeleteSuggesterRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DeleteSuggester, request);
        }

        /**
         * An Async wrapper for DeleteSuggester that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSuggesterRequestT = Model::DeleteSuggesterRequest>
        void DeleteSuggesterAsync(const DeleteSuggesterRequestT& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DeleteSuggester, request, handler, context);
        }

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
         * A Callable wrapper for DescribeAnalysisSchemes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnalysisSchemesRequestT = Model::DescribeAnalysisSchemesRequest>
        Model::DescribeAnalysisSchemesOutcomeCallable DescribeAnalysisSchemesCallable(const DescribeAnalysisSchemesRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeAnalysisSchemes, request);
        }

        /**
         * An Async wrapper for DescribeAnalysisSchemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnalysisSchemesRequestT = Model::DescribeAnalysisSchemesRequest>
        void DescribeAnalysisSchemesAsync(const DescribeAnalysisSchemesRequestT& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeAnalysisSchemes, request, handler, context);
        }

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
         * A Callable wrapper for DescribeAvailabilityOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAvailabilityOptionsRequestT = Model::DescribeAvailabilityOptionsRequest>
        Model::DescribeAvailabilityOptionsOutcomeCallable DescribeAvailabilityOptionsCallable(const DescribeAvailabilityOptionsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeAvailabilityOptions, request);
        }

        /**
         * An Async wrapper for DescribeAvailabilityOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAvailabilityOptionsRequestT = Model::DescribeAvailabilityOptionsRequest>
        void DescribeAvailabilityOptionsAsync(const DescribeAvailabilityOptionsRequestT& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeAvailabilityOptions, request, handler, context);
        }

        /**
         * <p>Returns the domain's endpoint options, specifically whether all requests to
         * the domain must arrive over HTTPS. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-domain-endpoint-options.html"
         * target="_blank">Configuring Domain Endpoint Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainEndpointOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainEndpointOptionsOutcome DescribeDomainEndpointOptions(const Model::DescribeDomainEndpointOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainEndpointOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainEndpointOptionsRequestT = Model::DescribeDomainEndpointOptionsRequest>
        Model::DescribeDomainEndpointOptionsOutcomeCallable DescribeDomainEndpointOptionsCallable(const DescribeDomainEndpointOptionsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeDomainEndpointOptions, request);
        }

        /**
         * An Async wrapper for DescribeDomainEndpointOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainEndpointOptionsRequestT = Model::DescribeDomainEndpointOptionsRequest>
        void DescribeDomainEndpointOptionsAsync(const DescribeDomainEndpointOptionsRequestT& request, const DescribeDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeDomainEndpointOptions, request, handler, context);
        }

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
         * A Callable wrapper for DescribeDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainsRequestT = Model::DescribeDomainsRequest>
        Model::DescribeDomainsOutcomeCallable DescribeDomainsCallable(const DescribeDomainsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeDomains, request);
        }

        /**
         * An Async wrapper for DescribeDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainsRequestT = Model::DescribeDomainsRequest>
        void DescribeDomainsAsync(const DescribeDomainsRequestT& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeDomains, request, handler, context);
        }

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
         * A Callable wrapper for DescribeExpressions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExpressionsRequestT = Model::DescribeExpressionsRequest>
        Model::DescribeExpressionsOutcomeCallable DescribeExpressionsCallable(const DescribeExpressionsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeExpressions, request);
        }

        /**
         * An Async wrapper for DescribeExpressions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExpressionsRequestT = Model::DescribeExpressionsRequest>
        void DescribeExpressionsAsync(const DescribeExpressionsRequestT& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeExpressions, request, handler, context);
        }

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
         * A Callable wrapper for DescribeIndexFields that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIndexFieldsRequestT = Model::DescribeIndexFieldsRequest>
        Model::DescribeIndexFieldsOutcomeCallable DescribeIndexFieldsCallable(const DescribeIndexFieldsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeIndexFields, request);
        }

        /**
         * An Async wrapper for DescribeIndexFields that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIndexFieldsRequestT = Model::DescribeIndexFieldsRequest>
        void DescribeIndexFieldsAsync(const DescribeIndexFieldsRequestT& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeIndexFields, request, handler, context);
        }

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
         * A Callable wrapper for DescribeScalingParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScalingParametersRequestT = Model::DescribeScalingParametersRequest>
        Model::DescribeScalingParametersOutcomeCallable DescribeScalingParametersCallable(const DescribeScalingParametersRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeScalingParameters, request);
        }

        /**
         * An Async wrapper for DescribeScalingParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScalingParametersRequestT = Model::DescribeScalingParametersRequest>
        void DescribeScalingParametersAsync(const DescribeScalingParametersRequestT& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeScalingParameters, request, handler, context);
        }

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
         * A Callable wrapper for DescribeServiceAccessPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceAccessPoliciesRequestT = Model::DescribeServiceAccessPoliciesRequest>
        Model::DescribeServiceAccessPoliciesOutcomeCallable DescribeServiceAccessPoliciesCallable(const DescribeServiceAccessPoliciesRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeServiceAccessPolicies, request);
        }

        /**
         * An Async wrapper for DescribeServiceAccessPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceAccessPoliciesRequestT = Model::DescribeServiceAccessPoliciesRequest>
        void DescribeServiceAccessPoliciesAsync(const DescribeServiceAccessPoliciesRequestT& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeServiceAccessPolicies, request, handler, context);
        }

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
         * A Callable wrapper for DescribeSuggesters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSuggestersRequestT = Model::DescribeSuggestersRequest>
        Model::DescribeSuggestersOutcomeCallable DescribeSuggestersCallable(const DescribeSuggestersRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::DescribeSuggesters, request);
        }

        /**
         * An Async wrapper for DescribeSuggesters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSuggestersRequestT = Model::DescribeSuggestersRequest>
        void DescribeSuggestersAsync(const DescribeSuggestersRequestT& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::DescribeSuggesters, request, handler, context);
        }

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
         * A Callable wrapper for IndexDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IndexDocumentsRequestT = Model::IndexDocumentsRequest>
        Model::IndexDocumentsOutcomeCallable IndexDocumentsCallable(const IndexDocumentsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::IndexDocuments, request);
        }

        /**
         * An Async wrapper for IndexDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IndexDocumentsRequestT = Model::IndexDocumentsRequest>
        void IndexDocumentsAsync(const IndexDocumentsRequestT& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::IndexDocuments, request, handler, context);
        }

        /**
         * <p>Lists all search domains owned by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const ListDomainNamesRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::ListDomainNames, request);
        }

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        void ListDomainNamesAsync(const ListDomainNamesRequestT& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::ListDomainNames, request, handler, context);
        }

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
         * A Callable wrapper for UpdateAvailabilityOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAvailabilityOptionsRequestT = Model::UpdateAvailabilityOptionsRequest>
        Model::UpdateAvailabilityOptionsOutcomeCallable UpdateAvailabilityOptionsCallable(const UpdateAvailabilityOptionsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::UpdateAvailabilityOptions, request);
        }

        /**
         * An Async wrapper for UpdateAvailabilityOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAvailabilityOptionsRequestT = Model::UpdateAvailabilityOptionsRequest>
        void UpdateAvailabilityOptionsAsync(const UpdateAvailabilityOptionsRequestT& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::UpdateAvailabilityOptions, request, handler, context);
        }

        /**
         * <p>Updates the domain's endpoint options, specifically whether all requests to
         * the domain must arrive over HTTPS. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-domain-endpoint-options.html"
         * target="_blank">Configuring Domain Endpoint Options</a> in the <i>Amazon
         * CloudSearch Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateDomainEndpointOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainEndpointOptionsOutcome UpdateDomainEndpointOptions(const Model::UpdateDomainEndpointOptionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainEndpointOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainEndpointOptionsRequestT = Model::UpdateDomainEndpointOptionsRequest>
        Model::UpdateDomainEndpointOptionsOutcomeCallable UpdateDomainEndpointOptionsCallable(const UpdateDomainEndpointOptionsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::UpdateDomainEndpointOptions, request);
        }

        /**
         * An Async wrapper for UpdateDomainEndpointOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainEndpointOptionsRequestT = Model::UpdateDomainEndpointOptionsRequest>
        void UpdateDomainEndpointOptionsAsync(const UpdateDomainEndpointOptionsRequestT& request, const UpdateDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::UpdateDomainEndpointOptions, request, handler, context);
        }

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
         * A Callable wrapper for UpdateScalingParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScalingParametersRequestT = Model::UpdateScalingParametersRequest>
        Model::UpdateScalingParametersOutcomeCallable UpdateScalingParametersCallable(const UpdateScalingParametersRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::UpdateScalingParameters, request);
        }

        /**
         * An Async wrapper for UpdateScalingParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScalingParametersRequestT = Model::UpdateScalingParametersRequest>
        void UpdateScalingParametersAsync(const UpdateScalingParametersRequestT& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::UpdateScalingParameters, request, handler, context);
        }

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
         * A Callable wrapper for UpdateServiceAccessPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceAccessPoliciesRequestT = Model::UpdateServiceAccessPoliciesRequest>
        Model::UpdateServiceAccessPoliciesOutcomeCallable UpdateServiceAccessPoliciesCallable(const UpdateServiceAccessPoliciesRequestT& request) const
        {
            return SubmitCallable(&CloudSearchClient::UpdateServiceAccessPolicies, request);
        }

        /**
         * An Async wrapper for UpdateServiceAccessPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceAccessPoliciesRequestT = Model::UpdateServiceAccessPoliciesRequest>
        void UpdateServiceAccessPoliciesAsync(const UpdateServiceAccessPoliciesRequestT& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchClient::UpdateServiceAccessPolicies, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<CloudSearchEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudSearchClient>;
        void init(const CloudSearchClientConfiguration& clientConfiguration);

        CloudSearchClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<CloudSearchEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudSearch
} // namespace Aws
