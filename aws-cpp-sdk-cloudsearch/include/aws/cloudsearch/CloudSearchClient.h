/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudsearch/CloudSearchServiceClientModel.h>
#include <aws/cloudsearch/CloudSearchLegacyAsyncMacros.h>

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
  class AWS_CLOUDSEARCH_API CloudSearchClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::CloudSearch::CloudSearchClientConfiguration& clientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration(),
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG),
                          const Aws::CloudSearch::CloudSearchClientConfiguration& clientConfiguration = Aws::CloudSearch::CloudSearchClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Creates a new search domain. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/creating-domains.html"
         * target="_blank">Creating a Search Domain</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;


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
         * <p>Deletes an analysis scheme. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
         * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteAnalysisScheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalysisSchemeOutcome DeleteAnalysisScheme(const Model::DeleteAnalysisSchemeRequest& request) const;


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
         * <p>Deletes a suggester. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html"
         * target="_blank">Getting Search Suggestions</a> in the <i>Amazon CloudSearch
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggester">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuggesterOutcome DeleteSuggester(const Model::DeleteSuggesterRequest& request) const;


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
         * <p>Tells the search domain to start indexing its documents using the latest
         * indexing options. This operation must be invoked to activate options whose
         * <a>OptionStatus</a> is <code>RequiresIndexDocuments</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::IndexDocumentsOutcome IndexDocuments(const Model::IndexDocumentsRequest& request) const;


        /**
         * <p>Lists all search domains owned by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;


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
         * <p>Configures the access rules that control access to the domain's document and
         * search endpoints. For more information, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html"
         * target="_blank"> Configuring Access for an Amazon CloudSearch
         * Domain</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceAccessPoliciesOutcome UpdateServiceAccessPolicies(const Model::UpdateServiceAccessPoliciesRequest& request) const;



        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<CloudSearchEndpointProviderBase>& accessEndpointProvider();
  private:
        void init(const CloudSearchClientConfiguration& clientConfiguration);

        CloudSearchClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<CloudSearchEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudSearch
} // namespace Aws
