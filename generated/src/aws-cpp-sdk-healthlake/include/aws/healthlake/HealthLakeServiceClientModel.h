/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <aws/healthlake/HealthLakeErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in HealthLakeClient header */
#include <aws/healthlake/model/CreateDataTransformationProfileResult.h>
#include <aws/healthlake/model/CreateFHIRDatastoreResult.h>
#include <aws/healthlake/model/DeleteDataTransformationProfileResult.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeDataTransformationJobResult.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/GetDataTransformationProfileResult.h>
#include <aws/healthlake/model/ListDataTransformationJobsRequest.h>
#include <aws/healthlake/model/ListDataTransformationJobsResult.h>
#include <aws/healthlake/model/ListDataTransformationProfileVersionsResult.h>
#include <aws/healthlake/model/ListDataTransformationProfilesResult.h>
#include <aws/healthlake/model/ListFHIRDatastoresRequest.h>
#include <aws/healthlake/model/ListFHIRDatastoresResult.h>
#include <aws/healthlake/model/ListFHIRExportJobsResult.h>
#include <aws/healthlake/model/ListFHIRImportJobsResult.h>
#include <aws/healthlake/model/ListTagsForResourceResult.h>
#include <aws/healthlake/model/PublishDataTransformationProfileResult.h>
#include <aws/healthlake/model/StartDataTransformationJobResult.h>
#include <aws/healthlake/model/StartFHIRExportJobResult.h>
#include <aws/healthlake/model/StartFHIRImportJobResult.h>
#include <aws/healthlake/model/TagResourceResult.h>
#include <aws/healthlake/model/UntagResourceResult.h>
#include <aws/healthlake/model/UpdateDataTransformationProfileResult.h>
#include <aws/healthlake/model/UpdateFHIRDatastoreResult.h>
#include <aws/healthlake/model/UpdateProfileWithAgentResult.h>
/* End of service model headers required in HealthLakeClient header */

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

namespace HealthLake {
using HealthLakeClientConfiguration = Aws::Client::GenericClientConfiguration;
using HealthLakeEndpointProviderBase = Aws::HealthLake::Endpoint::HealthLakeEndpointProviderBase;
using HealthLakeEndpointProvider = Aws::HealthLake::Endpoint::HealthLakeEndpointProvider;

namespace Model {
/* Service model forward declarations required in HealthLakeClient header */
class CreateDataTransformationProfileRequest;
class CreateFHIRDatastoreRequest;
class DeleteDataTransformationProfileRequest;
class DeleteFHIRDatastoreRequest;
class DescribeDataTransformationJobRequest;
class DescribeFHIRDatastoreRequest;
class DescribeFHIRExportJobRequest;
class DescribeFHIRImportJobRequest;
class GetDataTransformationProfileRequest;
class ListDataTransformationJobsRequest;
class ListDataTransformationProfileVersionsRequest;
class ListDataTransformationProfilesRequest;
class ListFHIRDatastoresRequest;
class ListFHIRExportJobsRequest;
class ListFHIRImportJobsRequest;
class ListTagsForResourceRequest;
class PublishDataTransformationProfileRequest;
class StartDataTransformationJobRequest;
class StartFHIRExportJobRequest;
class StartFHIRImportJobRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateDataTransformationProfileRequest;
class UpdateFHIRDatastoreRequest;
class UpdateProfileWithAgentRequest;
/* End of service model forward declarations required in HealthLakeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateDataTransformationProfileResult, HealthLakeError> CreateDataTransformationProfileOutcome;
typedef Aws::Utils::Outcome<CreateFHIRDatastoreResult, HealthLakeError> CreateFHIRDatastoreOutcome;
typedef Aws::Utils::Outcome<DeleteDataTransformationProfileResult, HealthLakeError> DeleteDataTransformationProfileOutcome;
typedef Aws::Utils::Outcome<DeleteFHIRDatastoreResult, HealthLakeError> DeleteFHIRDatastoreOutcome;
typedef Aws::Utils::Outcome<DescribeDataTransformationJobResult, HealthLakeError> DescribeDataTransformationJobOutcome;
typedef Aws::Utils::Outcome<DescribeFHIRDatastoreResult, HealthLakeError> DescribeFHIRDatastoreOutcome;
typedef Aws::Utils::Outcome<DescribeFHIRExportJobResult, HealthLakeError> DescribeFHIRExportJobOutcome;
typedef Aws::Utils::Outcome<DescribeFHIRImportJobResult, HealthLakeError> DescribeFHIRImportJobOutcome;
typedef Aws::Utils::Outcome<GetDataTransformationProfileResult, HealthLakeError> GetDataTransformationProfileOutcome;
typedef Aws::Utils::Outcome<ListDataTransformationJobsResult, HealthLakeError> ListDataTransformationJobsOutcome;
typedef Aws::Utils::Outcome<ListDataTransformationProfileVersionsResult, HealthLakeError> ListDataTransformationProfileVersionsOutcome;
typedef Aws::Utils::Outcome<ListDataTransformationProfilesResult, HealthLakeError> ListDataTransformationProfilesOutcome;
typedef Aws::Utils::Outcome<ListFHIRDatastoresResult, HealthLakeError> ListFHIRDatastoresOutcome;
typedef Aws::Utils::Outcome<ListFHIRExportJobsResult, HealthLakeError> ListFHIRExportJobsOutcome;
typedef Aws::Utils::Outcome<ListFHIRImportJobsResult, HealthLakeError> ListFHIRImportJobsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, HealthLakeError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PublishDataTransformationProfileResult, HealthLakeError> PublishDataTransformationProfileOutcome;
typedef Aws::Utils::Outcome<StartDataTransformationJobResult, HealthLakeError> StartDataTransformationJobOutcome;
typedef Aws::Utils::Outcome<StartFHIRExportJobResult, HealthLakeError> StartFHIRExportJobOutcome;
typedef Aws::Utils::Outcome<StartFHIRImportJobResult, HealthLakeError> StartFHIRImportJobOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, HealthLakeError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, HealthLakeError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateDataTransformationProfileResult, HealthLakeError> UpdateDataTransformationProfileOutcome;
typedef Aws::Utils::Outcome<UpdateFHIRDatastoreResult, HealthLakeError> UpdateFHIRDatastoreOutcome;
typedef Aws::Utils::Outcome<UpdateProfileWithAgentResult, HealthLakeError> UpdateProfileWithAgentOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateDataTransformationProfileOutcome> CreateDataTransformationProfileOutcomeCallable;
typedef std::future<CreateFHIRDatastoreOutcome> CreateFHIRDatastoreOutcomeCallable;
typedef std::future<DeleteDataTransformationProfileOutcome> DeleteDataTransformationProfileOutcomeCallable;
typedef std::future<DeleteFHIRDatastoreOutcome> DeleteFHIRDatastoreOutcomeCallable;
typedef std::future<DescribeDataTransformationJobOutcome> DescribeDataTransformationJobOutcomeCallable;
typedef std::future<DescribeFHIRDatastoreOutcome> DescribeFHIRDatastoreOutcomeCallable;
typedef std::future<DescribeFHIRExportJobOutcome> DescribeFHIRExportJobOutcomeCallable;
typedef std::future<DescribeFHIRImportJobOutcome> DescribeFHIRImportJobOutcomeCallable;
typedef std::future<GetDataTransformationProfileOutcome> GetDataTransformationProfileOutcomeCallable;
typedef std::future<ListDataTransformationJobsOutcome> ListDataTransformationJobsOutcomeCallable;
typedef std::future<ListDataTransformationProfileVersionsOutcome> ListDataTransformationProfileVersionsOutcomeCallable;
typedef std::future<ListDataTransformationProfilesOutcome> ListDataTransformationProfilesOutcomeCallable;
typedef std::future<ListFHIRDatastoresOutcome> ListFHIRDatastoresOutcomeCallable;
typedef std::future<ListFHIRExportJobsOutcome> ListFHIRExportJobsOutcomeCallable;
typedef std::future<ListFHIRImportJobsOutcome> ListFHIRImportJobsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PublishDataTransformationProfileOutcome> PublishDataTransformationProfileOutcomeCallable;
typedef std::future<StartDataTransformationJobOutcome> StartDataTransformationJobOutcomeCallable;
typedef std::future<StartFHIRExportJobOutcome> StartFHIRExportJobOutcomeCallable;
typedef std::future<StartFHIRImportJobOutcome> StartFHIRImportJobOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateDataTransformationProfileOutcome> UpdateDataTransformationProfileOutcomeCallable;
typedef std::future<UpdateFHIRDatastoreOutcome> UpdateFHIRDatastoreOutcomeCallable;
typedef std::future<UpdateProfileWithAgentOutcome> UpdateProfileWithAgentOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class HealthLakeClient;

/* Service model async handlers definitions */
typedef std::function<void(const HealthLakeClient*, const Model::CreateDataTransformationProfileRequest&,
                           const Model::CreateDataTransformationProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDataTransformationProfileResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::CreateFHIRDatastoreRequest&, const Model::CreateFHIRDatastoreOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFHIRDatastoreResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DeleteDataTransformationProfileRequest&,
                           const Model::DeleteDataTransformationProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDataTransformationProfileResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DeleteFHIRDatastoreRequest&, const Model::DeleteFHIRDatastoreOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFHIRDatastoreResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DescribeDataTransformationJobRequest&,
                           const Model::DescribeDataTransformationJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeDataTransformationJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRDatastoreRequest&, const Model::DescribeFHIRDatastoreOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeFHIRDatastoreResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRExportJobRequest&, const Model::DescribeFHIRExportJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeFHIRExportJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRImportJobRequest&, const Model::DescribeFHIRImportJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeFHIRImportJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::GetDataTransformationProfileRequest&,
                           const Model::GetDataTransformationProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataTransformationProfileResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListDataTransformationJobsRequest&,
                           const Model::ListDataTransformationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataTransformationJobsResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListDataTransformationProfileVersionsRequest&,
                           const Model::ListDataTransformationProfileVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataTransformationProfileVersionsResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListDataTransformationProfilesRequest&,
                           const Model::ListDataTransformationProfilesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataTransformationProfilesResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRDatastoresRequest&, const Model::ListFHIRDatastoresOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFHIRDatastoresResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRExportJobsRequest&, const Model::ListFHIRExportJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFHIRExportJobsResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRImportJobsRequest&, const Model::ListFHIRImportJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFHIRImportJobsResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::PublishDataTransformationProfileRequest&,
                           const Model::PublishDataTransformationProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PublishDataTransformationProfileResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::StartDataTransformationJobRequest&,
                           const Model::StartDataTransformationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartDataTransformationJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRExportJobRequest&, const Model::StartFHIRExportJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartFHIRExportJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRImportJobRequest&, const Model::StartFHIRImportJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartFHIRImportJobResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::UpdateDataTransformationProfileRequest&,
                           const Model::UpdateDataTransformationProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDataTransformationProfileResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::UpdateFHIRDatastoreRequest&, const Model::UpdateFHIRDatastoreOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFHIRDatastoreResponseReceivedHandler;
typedef std::function<void(const HealthLakeClient*, const Model::UpdateProfileWithAgentRequest&,
                           const Model::UpdateProfileWithAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProfileWithAgentResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace HealthLake
}  // namespace Aws
