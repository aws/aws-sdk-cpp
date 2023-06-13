/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codeguru-security/CodeGuruSecurityErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codeguru-security/CodeGuruSecurityEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeGuruSecurityClient header */
#include <aws/codeguru-security/model/BatchGetFindingsResult.h>
#include <aws/codeguru-security/model/CreateScanResult.h>
#include <aws/codeguru-security/model/CreateUploadUrlResult.h>
#include <aws/codeguru-security/model/GetAccountConfigurationResult.h>
#include <aws/codeguru-security/model/GetFindingsResult.h>
#include <aws/codeguru-security/model/GetMetricsSummaryResult.h>
#include <aws/codeguru-security/model/GetScanResult.h>
#include <aws/codeguru-security/model/ListFindingsMetricsResult.h>
#include <aws/codeguru-security/model/ListScansResult.h>
#include <aws/codeguru-security/model/ListTagsForResourceResult.h>
#include <aws/codeguru-security/model/TagResourceResult.h>
#include <aws/codeguru-security/model/UntagResourceResult.h>
#include <aws/codeguru-security/model/UpdateAccountConfigurationResult.h>
/* End of service model headers required in CodeGuruSecurityClient header */

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

  namespace CodeGuruSecurity
  {
    using CodeGuruSecurityClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeGuruSecurityEndpointProviderBase = Aws::CodeGuruSecurity::Endpoint::CodeGuruSecurityEndpointProviderBase;
    using CodeGuruSecurityEndpointProvider = Aws::CodeGuruSecurity::Endpoint::CodeGuruSecurityEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeGuruSecurityClient header */
      class BatchGetFindingsRequest;
      class CreateScanRequest;
      class CreateUploadUrlRequest;
      class GetAccountConfigurationRequest;
      class GetFindingsRequest;
      class GetMetricsSummaryRequest;
      class GetScanRequest;
      class ListFindingsMetricsRequest;
      class ListScansRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccountConfigurationRequest;
      /* End of service model forward declarations required in CodeGuruSecurityClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetFindingsResult, CodeGuruSecurityError> BatchGetFindingsOutcome;
      typedef Aws::Utils::Outcome<CreateScanResult, CodeGuruSecurityError> CreateScanOutcome;
      typedef Aws::Utils::Outcome<CreateUploadUrlResult, CodeGuruSecurityError> CreateUploadUrlOutcome;
      typedef Aws::Utils::Outcome<GetAccountConfigurationResult, CodeGuruSecurityError> GetAccountConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetFindingsResult, CodeGuruSecurityError> GetFindingsOutcome;
      typedef Aws::Utils::Outcome<GetMetricsSummaryResult, CodeGuruSecurityError> GetMetricsSummaryOutcome;
      typedef Aws::Utils::Outcome<GetScanResult, CodeGuruSecurityError> GetScanOutcome;
      typedef Aws::Utils::Outcome<ListFindingsMetricsResult, CodeGuruSecurityError> ListFindingsMetricsOutcome;
      typedef Aws::Utils::Outcome<ListScansResult, CodeGuruSecurityError> ListScansOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeGuruSecurityError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeGuruSecurityError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeGuruSecurityError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountConfigurationResult, CodeGuruSecurityError> UpdateAccountConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetFindingsOutcome> BatchGetFindingsOutcomeCallable;
      typedef std::future<CreateScanOutcome> CreateScanOutcomeCallable;
      typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
      typedef std::future<GetAccountConfigurationOutcome> GetAccountConfigurationOutcomeCallable;
      typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
      typedef std::future<GetMetricsSummaryOutcome> GetMetricsSummaryOutcomeCallable;
      typedef std::future<GetScanOutcome> GetScanOutcomeCallable;
      typedef std::future<ListFindingsMetricsOutcome> ListFindingsMetricsOutcomeCallable;
      typedef std::future<ListScansOutcome> ListScansOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountConfigurationOutcome> UpdateAccountConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeGuruSecurityClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::BatchGetFindingsRequest&, const Model::BatchGetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFindingsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::CreateScanRequest&, const Model::CreateScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScanResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::CreateUploadUrlRequest&, const Model::CreateUploadUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUploadUrlResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::GetAccountConfigurationRequest&, const Model::GetAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::GetMetricsSummaryRequest&, const Model::GetMetricsSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricsSummaryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::GetScanRequest&, const Model::GetScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScanResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::ListFindingsMetricsRequest&, const Model::ListFindingsMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsMetricsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::ListScansRequest&, const Model::ListScansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScansResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruSecurityClient*, const Model::UpdateAccountConfigurationRequest&, const Model::UpdateAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeGuruSecurity
} // namespace Aws
