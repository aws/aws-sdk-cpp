/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/artifact/ArtifactEndpointProvider.h>
#include <aws/artifact/ArtifactErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ArtifactClient header */
#include <aws/artifact/model/CreateComplianceInquiryResult.h>
#include <aws/artifact/model/ExportComplianceInquiryResult.h>
#include <aws/artifact/model/GetAccountSettingsRequest.h>
#include <aws/artifact/model/GetAccountSettingsResult.h>
#include <aws/artifact/model/GetComplianceInquiryMetadataResult.h>
#include <aws/artifact/model/GetReportMetadataResult.h>
#include <aws/artifact/model/GetReportResult.h>
#include <aws/artifact/model/GetTermForReportResult.h>
#include <aws/artifact/model/ListComplianceInquiriesRequest.h>
#include <aws/artifact/model/ListComplianceInquiriesResult.h>
#include <aws/artifact/model/ListComplianceInquiryQueriesResult.h>
#include <aws/artifact/model/ListCustomerAgreementsRequest.h>
#include <aws/artifact/model/ListCustomerAgreementsResult.h>
#include <aws/artifact/model/ListReportVersionsResult.h>
#include <aws/artifact/model/ListReportsRequest.h>
#include <aws/artifact/model/ListReportsResult.h>
#include <aws/artifact/model/ListTagsForResourceResult.h>
#include <aws/artifact/model/PutAccountSettingsRequest.h>
#include <aws/artifact/model/PutAccountSettingsResult.h>
#include <aws/artifact/model/PutComplianceInquiryFeedbackResult.h>
#include <aws/artifact/model/TagResourceResult.h>
#include <aws/artifact/model/UntagResourceResult.h>
/* End of service model headers required in ArtifactClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace Artifact {
using ArtifactClientConfiguration = Aws::Client::GenericClientConfiguration;
using ArtifactEndpointProviderBase = Aws::Artifact::Endpoint::ArtifactEndpointProviderBase;
using ArtifactEndpointProvider = Aws::Artifact::Endpoint::ArtifactEndpointProvider;

namespace Model {
/* Service model forward declarations required in ArtifactClient header */
class CreateComplianceInquiryRequest;
class ExportComplianceInquiryRequest;
class GetAccountSettingsRequest;
class GetComplianceInquiryMetadataRequest;
class GetReportRequest;
class GetReportMetadataRequest;
class GetTermForReportRequest;
class ListComplianceInquiriesRequest;
class ListComplianceInquiryQueriesRequest;
class ListCustomerAgreementsRequest;
class ListReportVersionsRequest;
class ListReportsRequest;
class ListTagsForResourceRequest;
class PutAccountSettingsRequest;
class PutComplianceInquiryFeedbackRequest;
class TagResourceRequest;
class UntagResourceRequest;
/* End of service model forward declarations required in ArtifactClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateComplianceInquiryResult, ArtifactError> CreateComplianceInquiryOutcome;
typedef Aws::Utils::Outcome<ExportComplianceInquiryResult, ArtifactError> ExportComplianceInquiryOutcome;
typedef Aws::Utils::Outcome<GetAccountSettingsResult, ArtifactError> GetAccountSettingsOutcome;
typedef Aws::Utils::Outcome<GetComplianceInquiryMetadataResult, ArtifactError> GetComplianceInquiryMetadataOutcome;
typedef Aws::Utils::Outcome<GetReportResult, ArtifactError> GetReportOutcome;
typedef Aws::Utils::Outcome<GetReportMetadataResult, ArtifactError> GetReportMetadataOutcome;
typedef Aws::Utils::Outcome<GetTermForReportResult, ArtifactError> GetTermForReportOutcome;
typedef Aws::Utils::Outcome<ListComplianceInquiriesResult, ArtifactError> ListComplianceInquiriesOutcome;
typedef Aws::Utils::Outcome<ListComplianceInquiryQueriesResult, ArtifactError> ListComplianceInquiryQueriesOutcome;
typedef Aws::Utils::Outcome<ListCustomerAgreementsResult, ArtifactError> ListCustomerAgreementsOutcome;
typedef Aws::Utils::Outcome<ListReportVersionsResult, ArtifactError> ListReportVersionsOutcome;
typedef Aws::Utils::Outcome<ListReportsResult, ArtifactError> ListReportsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ArtifactError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutAccountSettingsResult, ArtifactError> PutAccountSettingsOutcome;
typedef Aws::Utils::Outcome<PutComplianceInquiryFeedbackResult, ArtifactError> PutComplianceInquiryFeedbackOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, ArtifactError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, ArtifactError> UntagResourceOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateComplianceInquiryOutcome> CreateComplianceInquiryOutcomeCallable;
typedef std::future<ExportComplianceInquiryOutcome> ExportComplianceInquiryOutcomeCallable;
typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
typedef std::future<GetComplianceInquiryMetadataOutcome> GetComplianceInquiryMetadataOutcomeCallable;
typedef std::future<GetReportOutcome> GetReportOutcomeCallable;
typedef std::future<GetReportMetadataOutcome> GetReportMetadataOutcomeCallable;
typedef std::future<GetTermForReportOutcome> GetTermForReportOutcomeCallable;
typedef std::future<ListComplianceInquiriesOutcome> ListComplianceInquiriesOutcomeCallable;
typedef std::future<ListComplianceInquiryQueriesOutcome> ListComplianceInquiryQueriesOutcomeCallable;
typedef std::future<ListCustomerAgreementsOutcome> ListCustomerAgreementsOutcomeCallable;
typedef std::future<ListReportVersionsOutcome> ListReportVersionsOutcomeCallable;
typedef std::future<ListReportsOutcome> ListReportsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutAccountSettingsOutcome> PutAccountSettingsOutcomeCallable;
typedef std::future<PutComplianceInquiryFeedbackOutcome> PutComplianceInquiryFeedbackOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ArtifactClient;

/* Service model async handlers definitions */
typedef std::function<void(const ArtifactClient*, const Model::CreateComplianceInquiryRequest&,
                           const Model::CreateComplianceInquiryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateComplianceInquiryResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ExportComplianceInquiryRequest&,
                           const Model::ExportComplianceInquiryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExportComplianceInquiryResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccountSettingsResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::GetComplianceInquiryMetadataRequest&,
                           const Model::GetComplianceInquiryMetadataOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetComplianceInquiryMetadataResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::GetReportRequest&, const Model::GetReportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetReportResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::GetReportMetadataRequest&, const Model::GetReportMetadataOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetReportMetadataResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::GetTermForReportRequest&, const Model::GetTermForReportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTermForReportResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListComplianceInquiriesRequest&,
                           const Model::ListComplianceInquiriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListComplianceInquiriesResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListComplianceInquiryQueriesRequest&,
                           const Model::ListComplianceInquiryQueriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListComplianceInquiryQueriesResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListCustomerAgreementsRequest&, const Model::ListCustomerAgreementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCustomerAgreementsResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListReportVersionsRequest&, const Model::ListReportVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListReportVersionsResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListReportsRequest&, const Model::ListReportsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListReportsResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::PutAccountSettingsRequest&, const Model::PutAccountSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutAccountSettingsResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::PutComplianceInquiryFeedbackRequest&,
                           const Model::PutComplianceInquiryFeedbackOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutComplianceInquiryFeedbackResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ArtifactClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Artifact
}  // namespace Aws
