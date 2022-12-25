/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/accessanalyzer/AccessAnalyzerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/accessanalyzer/AccessAnalyzerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AccessAnalyzerClient header */
#include <aws/accessanalyzer/model/CancelPolicyGenerationResult.h>
#include <aws/accessanalyzer/model/CreateAccessPreviewResult.h>
#include <aws/accessanalyzer/model/CreateAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetAccessPreviewResult.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceResult.h>
#include <aws/accessanalyzer/model/GetAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetArchiveRuleResult.h>
#include <aws/accessanalyzer/model/GetFindingResult.h>
#include <aws/accessanalyzer/model/GetGeneratedPolicyResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsResult.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesResult.h>
#include <aws/accessanalyzer/model/ListAnalyzersResult.h>
#include <aws/accessanalyzer/model/ListArchiveRulesResult.h>
#include <aws/accessanalyzer/model/ListFindingsResult.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsResult.h>
#include <aws/accessanalyzer/model/ListTagsForResourceResult.h>
#include <aws/accessanalyzer/model/StartPolicyGenerationResult.h>
#include <aws/accessanalyzer/model/TagResourceResult.h>
#include <aws/accessanalyzer/model/UntagResourceResult.h>
#include <aws/accessanalyzer/model/ValidatePolicyResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AccessAnalyzerClient header */

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

  namespace AccessAnalyzer
  {
    using AccessAnalyzerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AccessAnalyzerEndpointProviderBase = Aws::AccessAnalyzer::Endpoint::AccessAnalyzerEndpointProviderBase;
    using AccessAnalyzerEndpointProvider = Aws::AccessAnalyzer::Endpoint::AccessAnalyzerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AccessAnalyzerClient header */
      class ApplyArchiveRuleRequest;
      class CancelPolicyGenerationRequest;
      class CreateAccessPreviewRequest;
      class CreateAnalyzerRequest;
      class CreateArchiveRuleRequest;
      class DeleteAnalyzerRequest;
      class DeleteArchiveRuleRequest;
      class GetAccessPreviewRequest;
      class GetAnalyzedResourceRequest;
      class GetAnalyzerRequest;
      class GetArchiveRuleRequest;
      class GetFindingRequest;
      class GetGeneratedPolicyRequest;
      class ListAccessPreviewFindingsRequest;
      class ListAccessPreviewsRequest;
      class ListAnalyzedResourcesRequest;
      class ListAnalyzersRequest;
      class ListArchiveRulesRequest;
      class ListFindingsRequest;
      class ListPolicyGenerationsRequest;
      class ListTagsForResourceRequest;
      class StartPolicyGenerationRequest;
      class StartResourceScanRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateArchiveRuleRequest;
      class UpdateFindingsRequest;
      class ValidatePolicyRequest;
      /* End of service model forward declarations required in AccessAnalyzerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> ApplyArchiveRuleOutcome;
      typedef Aws::Utils::Outcome<CancelPolicyGenerationResult, AccessAnalyzerError> CancelPolicyGenerationOutcome;
      typedef Aws::Utils::Outcome<CreateAccessPreviewResult, AccessAnalyzerError> CreateAccessPreviewOutcome;
      typedef Aws::Utils::Outcome<CreateAnalyzerResult, AccessAnalyzerError> CreateAnalyzerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> CreateArchiveRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> DeleteAnalyzerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> DeleteArchiveRuleOutcome;
      typedef Aws::Utils::Outcome<GetAccessPreviewResult, AccessAnalyzerError> GetAccessPreviewOutcome;
      typedef Aws::Utils::Outcome<GetAnalyzedResourceResult, AccessAnalyzerError> GetAnalyzedResourceOutcome;
      typedef Aws::Utils::Outcome<GetAnalyzerResult, AccessAnalyzerError> GetAnalyzerOutcome;
      typedef Aws::Utils::Outcome<GetArchiveRuleResult, AccessAnalyzerError> GetArchiveRuleOutcome;
      typedef Aws::Utils::Outcome<GetFindingResult, AccessAnalyzerError> GetFindingOutcome;
      typedef Aws::Utils::Outcome<GetGeneratedPolicyResult, AccessAnalyzerError> GetGeneratedPolicyOutcome;
      typedef Aws::Utils::Outcome<ListAccessPreviewFindingsResult, AccessAnalyzerError> ListAccessPreviewFindingsOutcome;
      typedef Aws::Utils::Outcome<ListAccessPreviewsResult, AccessAnalyzerError> ListAccessPreviewsOutcome;
      typedef Aws::Utils::Outcome<ListAnalyzedResourcesResult, AccessAnalyzerError> ListAnalyzedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListAnalyzersResult, AccessAnalyzerError> ListAnalyzersOutcome;
      typedef Aws::Utils::Outcome<ListArchiveRulesResult, AccessAnalyzerError> ListArchiveRulesOutcome;
      typedef Aws::Utils::Outcome<ListFindingsResult, AccessAnalyzerError> ListFindingsOutcome;
      typedef Aws::Utils::Outcome<ListPolicyGenerationsResult, AccessAnalyzerError> ListPolicyGenerationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AccessAnalyzerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartPolicyGenerationResult, AccessAnalyzerError> StartPolicyGenerationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> StartResourceScanOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AccessAnalyzerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AccessAnalyzerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateArchiveRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateFindingsOutcome;
      typedef Aws::Utils::Outcome<ValidatePolicyResult, AccessAnalyzerError> ValidatePolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ApplyArchiveRuleOutcome> ApplyArchiveRuleOutcomeCallable;
      typedef std::future<CancelPolicyGenerationOutcome> CancelPolicyGenerationOutcomeCallable;
      typedef std::future<CreateAccessPreviewOutcome> CreateAccessPreviewOutcomeCallable;
      typedef std::future<CreateAnalyzerOutcome> CreateAnalyzerOutcomeCallable;
      typedef std::future<CreateArchiveRuleOutcome> CreateArchiveRuleOutcomeCallable;
      typedef std::future<DeleteAnalyzerOutcome> DeleteAnalyzerOutcomeCallable;
      typedef std::future<DeleteArchiveRuleOutcome> DeleteArchiveRuleOutcomeCallable;
      typedef std::future<GetAccessPreviewOutcome> GetAccessPreviewOutcomeCallable;
      typedef std::future<GetAnalyzedResourceOutcome> GetAnalyzedResourceOutcomeCallable;
      typedef std::future<GetAnalyzerOutcome> GetAnalyzerOutcomeCallable;
      typedef std::future<GetArchiveRuleOutcome> GetArchiveRuleOutcomeCallable;
      typedef std::future<GetFindingOutcome> GetFindingOutcomeCallable;
      typedef std::future<GetGeneratedPolicyOutcome> GetGeneratedPolicyOutcomeCallable;
      typedef std::future<ListAccessPreviewFindingsOutcome> ListAccessPreviewFindingsOutcomeCallable;
      typedef std::future<ListAccessPreviewsOutcome> ListAccessPreviewsOutcomeCallable;
      typedef std::future<ListAnalyzedResourcesOutcome> ListAnalyzedResourcesOutcomeCallable;
      typedef std::future<ListAnalyzersOutcome> ListAnalyzersOutcomeCallable;
      typedef std::future<ListArchiveRulesOutcome> ListArchiveRulesOutcomeCallable;
      typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
      typedef std::future<ListPolicyGenerationsOutcome> ListPolicyGenerationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartPolicyGenerationOutcome> StartPolicyGenerationOutcomeCallable;
      typedef std::future<StartResourceScanOutcome> StartResourceScanOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateArchiveRuleOutcome> UpdateArchiveRuleOutcomeCallable;
      typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
      typedef std::future<ValidatePolicyOutcome> ValidatePolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AccessAnalyzerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ApplyArchiveRuleRequest&, const Model::ApplyArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CancelPolicyGenerationRequest&, const Model::CancelPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelPolicyGenerationResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateAccessPreviewRequest&, const Model::CreateAccessPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPreviewResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateAnalyzerRequest&, const Model::CreateAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateArchiveRuleRequest&, const Model::CreateArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::DeleteAnalyzerRequest&, const Model::DeleteAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::DeleteArchiveRuleRequest&, const Model::DeleteArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAccessPreviewRequest&, const Model::GetAccessPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPreviewResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAnalyzedResourceRequest&, const Model::GetAnalyzedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalyzedResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAnalyzerRequest&, const Model::GetAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetArchiveRuleRequest&, const Model::GetArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetFindingRequest&, const Model::GetFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetGeneratedPolicyRequest&, const Model::GetGeneratedPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeneratedPolicyResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewFindingsRequest&, const Model::ListAccessPreviewFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewsRequest&, const Model::ListAccessPreviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzedResourcesRequest&, const Model::ListAnalyzedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzedResourcesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzersRequest&, const Model::ListAnalyzersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzersResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListArchiveRulesRequest&, const Model::ListArchiveRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchiveRulesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListPolicyGenerationsRequest&, const Model::ListPolicyGenerationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyGenerationsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::StartPolicyGenerationRequest&, const Model::StartPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPolicyGenerationResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::StartResourceScanRequest&, const Model::StartResourceScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartResourceScanResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateArchiveRuleRequest&, const Model::UpdateArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ValidatePolicyRequest&, const Model::ValidatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidatePolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AccessAnalyzer
} // namespace Aws
