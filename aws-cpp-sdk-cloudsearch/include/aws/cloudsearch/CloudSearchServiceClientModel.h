/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudsearch/CloudSearchErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudSearchClient header */
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
#include <aws/cloudsearch/model/DescribeDomainEndpointOptionsResult.h>
#include <aws/cloudsearch/model/DescribeDomainsResult.h>
#include <aws/cloudsearch/model/DescribeExpressionsResult.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsResult.h>
#include <aws/cloudsearch/model/DescribeScalingParametersResult.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesResult.h>
#include <aws/cloudsearch/model/DescribeSuggestersResult.h>
#include <aws/cloudsearch/model/IndexDocumentsResult.h>
#include <aws/cloudsearch/model/ListDomainNamesResult.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsResult.h>
#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsResult.h>
#include <aws/cloudsearch/model/UpdateScalingParametersResult.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesResult.h>
/* End of service model headers required in CloudSearchClient header */

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

  namespace CloudSearch
  {
    using CloudSearchClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudSearchEndpointProviderBase = Aws::CloudSearch::Endpoint::CloudSearchEndpointProviderBase;
    using CloudSearchEndpointProvider = Aws::CloudSearch::Endpoint::CloudSearchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudSearchClient header */
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
      class DescribeDomainEndpointOptionsRequest;
      class DescribeDomainsRequest;
      class DescribeExpressionsRequest;
      class DescribeIndexFieldsRequest;
      class DescribeScalingParametersRequest;
      class DescribeServiceAccessPoliciesRequest;
      class DescribeSuggestersRequest;
      class IndexDocumentsRequest;
      class ListDomainNamesRequest;
      class UpdateAvailabilityOptionsRequest;
      class UpdateDomainEndpointOptionsRequest;
      class UpdateScalingParametersRequest;
      class UpdateServiceAccessPoliciesRequest;
      /* End of service model forward declarations required in CloudSearchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BuildSuggestersResult, CloudSearchError> BuildSuggestersOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, CloudSearchError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<DefineAnalysisSchemeResult, CloudSearchError> DefineAnalysisSchemeOutcome;
      typedef Aws::Utils::Outcome<DefineExpressionResult, CloudSearchError> DefineExpressionOutcome;
      typedef Aws::Utils::Outcome<DefineIndexFieldResult, CloudSearchError> DefineIndexFieldOutcome;
      typedef Aws::Utils::Outcome<DefineSuggesterResult, CloudSearchError> DefineSuggesterOutcome;
      typedef Aws::Utils::Outcome<DeleteAnalysisSchemeResult, CloudSearchError> DeleteAnalysisSchemeOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, CloudSearchError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteExpressionResult, CloudSearchError> DeleteExpressionOutcome;
      typedef Aws::Utils::Outcome<DeleteIndexFieldResult, CloudSearchError> DeleteIndexFieldOutcome;
      typedef Aws::Utils::Outcome<DeleteSuggesterResult, CloudSearchError> DeleteSuggesterOutcome;
      typedef Aws::Utils::Outcome<DescribeAnalysisSchemesResult, CloudSearchError> DescribeAnalysisSchemesOutcome;
      typedef Aws::Utils::Outcome<DescribeAvailabilityOptionsResult, CloudSearchError> DescribeAvailabilityOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainEndpointOptionsResult, CloudSearchError> DescribeDomainEndpointOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainsResult, CloudSearchError> DescribeDomainsOutcome;
      typedef Aws::Utils::Outcome<DescribeExpressionsResult, CloudSearchError> DescribeExpressionsOutcome;
      typedef Aws::Utils::Outcome<DescribeIndexFieldsResult, CloudSearchError> DescribeIndexFieldsOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingParametersResult, CloudSearchError> DescribeScalingParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceAccessPoliciesResult, CloudSearchError> DescribeServiceAccessPoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeSuggestersResult, CloudSearchError> DescribeSuggestersOutcome;
      typedef Aws::Utils::Outcome<IndexDocumentsResult, CloudSearchError> IndexDocumentsOutcome;
      typedef Aws::Utils::Outcome<ListDomainNamesResult, CloudSearchError> ListDomainNamesOutcome;
      typedef Aws::Utils::Outcome<UpdateAvailabilityOptionsResult, CloudSearchError> UpdateAvailabilityOptionsOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainEndpointOptionsResult, CloudSearchError> UpdateDomainEndpointOptionsOutcome;
      typedef Aws::Utils::Outcome<UpdateScalingParametersResult, CloudSearchError> UpdateScalingParametersOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceAccessPoliciesResult, CloudSearchError> UpdateServiceAccessPoliciesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<DescribeDomainEndpointOptionsOutcome> DescribeDomainEndpointOptionsOutcomeCallable;
      typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
      typedef std::future<DescribeExpressionsOutcome> DescribeExpressionsOutcomeCallable;
      typedef std::future<DescribeIndexFieldsOutcome> DescribeIndexFieldsOutcomeCallable;
      typedef std::future<DescribeScalingParametersOutcome> DescribeScalingParametersOutcomeCallable;
      typedef std::future<DescribeServiceAccessPoliciesOutcome> DescribeServiceAccessPoliciesOutcomeCallable;
      typedef std::future<DescribeSuggestersOutcome> DescribeSuggestersOutcomeCallable;
      typedef std::future<IndexDocumentsOutcome> IndexDocumentsOutcomeCallable;
      typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
      typedef std::future<UpdateAvailabilityOptionsOutcome> UpdateAvailabilityOptionsOutcomeCallable;
      typedef std::future<UpdateDomainEndpointOptionsOutcome> UpdateDomainEndpointOptionsOutcomeCallable;
      typedef std::future<UpdateScalingParametersOutcome> UpdateScalingParametersOutcomeCallable;
      typedef std::future<UpdateServiceAccessPoliciesOutcome> UpdateServiceAccessPoliciesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudSearchClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeDomainEndpointOptionsRequest&, const Model::DescribeDomainEndpointOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainEndpointOptionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeDomainsRequest&, const Model::DescribeDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeExpressionsRequest&, const Model::DescribeExpressionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExpressionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeIndexFieldsRequest&, const Model::DescribeIndexFieldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexFieldsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeScalingParametersRequest&, const Model::DescribeScalingParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingParametersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeServiceAccessPoliciesRequest&, const Model::DescribeServiceAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::DescribeSuggestersRequest&, const Model::DescribeSuggestersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSuggestersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::IndexDocumentsRequest&, const Model::IndexDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IndexDocumentsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateAvailabilityOptionsRequest&, const Model::UpdateAvailabilityOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAvailabilityOptionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateDomainEndpointOptionsRequest&, const Model::UpdateDomainEndpointOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainEndpointOptionsResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateScalingParametersRequest&, const Model::UpdateScalingParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScalingParametersResponseReceivedHandler;
    typedef std::function<void(const CloudSearchClient*, const Model::UpdateServiceAccessPoliciesRequest&, const Model::UpdateServiceAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceAccessPoliciesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudSearch
} // namespace Aws
