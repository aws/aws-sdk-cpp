/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisAnalyticsV2Client header */
#include <aws/kinesisanalyticsv2/model/AddApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationVpcConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationPresignedUrlResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationVpcConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationVersionResult.h>
#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsResult.h>
#include <aws/kinesisanalyticsv2/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalyticsv2/model/RollbackApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/StartApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/StopApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/TagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UntagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationMaintenanceConfigurationResult.h>
/* End of service model headers required in KinesisAnalyticsV2Client header */

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

  namespace KinesisAnalyticsV2
  {
    using KinesisAnalyticsV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisAnalyticsV2EndpointProviderBase = Aws::KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2EndpointProviderBase;
    using KinesisAnalyticsV2EndpointProvider = Aws::KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisAnalyticsV2Client header */
      class AddApplicationCloudWatchLoggingOptionRequest;
      class AddApplicationInputRequest;
      class AddApplicationInputProcessingConfigurationRequest;
      class AddApplicationOutputRequest;
      class AddApplicationReferenceDataSourceRequest;
      class AddApplicationVpcConfigurationRequest;
      class CreateApplicationRequest;
      class CreateApplicationPresignedUrlRequest;
      class CreateApplicationSnapshotRequest;
      class DeleteApplicationRequest;
      class DeleteApplicationCloudWatchLoggingOptionRequest;
      class DeleteApplicationInputProcessingConfigurationRequest;
      class DeleteApplicationOutputRequest;
      class DeleteApplicationReferenceDataSourceRequest;
      class DeleteApplicationSnapshotRequest;
      class DeleteApplicationVpcConfigurationRequest;
      class DescribeApplicationRequest;
      class DescribeApplicationSnapshotRequest;
      class DescribeApplicationVersionRequest;
      class DiscoverInputSchemaRequest;
      class ListApplicationSnapshotsRequest;
      class ListApplicationVersionsRequest;
      class ListApplicationsRequest;
      class ListTagsForResourceRequest;
      class RollbackApplicationRequest;
      class StartApplicationRequest;
      class StopApplicationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateApplicationMaintenanceConfigurationRequest;
      /* End of service model forward declarations required in KinesisAnalyticsV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsV2Error> AddApplicationCloudWatchLoggingOptionOutcome;
      typedef Aws::Utils::Outcome<AddApplicationInputResult, KinesisAnalyticsV2Error> AddApplicationInputOutcome;
      typedef Aws::Utils::Outcome<AddApplicationInputProcessingConfigurationResult, KinesisAnalyticsV2Error> AddApplicationInputProcessingConfigurationOutcome;
      typedef Aws::Utils::Outcome<AddApplicationOutputResult, KinesisAnalyticsV2Error> AddApplicationOutputOutcome;
      typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, KinesisAnalyticsV2Error> AddApplicationReferenceDataSourceOutcome;
      typedef Aws::Utils::Outcome<AddApplicationVpcConfigurationResult, KinesisAnalyticsV2Error> AddApplicationVpcConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, KinesisAnalyticsV2Error> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationPresignedUrlResult, KinesisAnalyticsV2Error> CreateApplicationPresignedUrlOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationSnapshotResult, KinesisAnalyticsV2Error> CreateApplicationSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, KinesisAnalyticsV2Error> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsV2Error> DeleteApplicationCloudWatchLoggingOptionOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationInputProcessingConfigurationResult, KinesisAnalyticsV2Error> DeleteApplicationInputProcessingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, KinesisAnalyticsV2Error> DeleteApplicationOutputOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, KinesisAnalyticsV2Error> DeleteApplicationReferenceDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationSnapshotResult, KinesisAnalyticsV2Error> DeleteApplicationSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationVpcConfigurationResult, KinesisAnalyticsV2Error> DeleteApplicationVpcConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationResult, KinesisAnalyticsV2Error> DescribeApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationSnapshotResult, KinesisAnalyticsV2Error> DescribeApplicationSnapshotOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationVersionResult, KinesisAnalyticsV2Error> DescribeApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, KinesisAnalyticsV2Error> DiscoverInputSchemaOutcome;
      typedef Aws::Utils::Outcome<ListApplicationSnapshotsResult, KinesisAnalyticsV2Error> ListApplicationSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationVersionsResult, KinesisAnalyticsV2Error> ListApplicationVersionsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, KinesisAnalyticsV2Error> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KinesisAnalyticsV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RollbackApplicationResult, KinesisAnalyticsV2Error> RollbackApplicationOutcome;
      typedef Aws::Utils::Outcome<StartApplicationResult, KinesisAnalyticsV2Error> StartApplicationOutcome;
      typedef Aws::Utils::Outcome<StopApplicationResult, KinesisAnalyticsV2Error> StopApplicationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KinesisAnalyticsV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KinesisAnalyticsV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, KinesisAnalyticsV2Error> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationMaintenanceConfigurationResult, KinesisAnalyticsV2Error> UpdateApplicationMaintenanceConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddApplicationCloudWatchLoggingOptionOutcome> AddApplicationCloudWatchLoggingOptionOutcomeCallable;
      typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
      typedef std::future<AddApplicationInputProcessingConfigurationOutcome> AddApplicationInputProcessingConfigurationOutcomeCallable;
      typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
      typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
      typedef std::future<AddApplicationVpcConfigurationOutcome> AddApplicationVpcConfigurationOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateApplicationPresignedUrlOutcome> CreateApplicationPresignedUrlOutcomeCallable;
      typedef std::future<CreateApplicationSnapshotOutcome> CreateApplicationSnapshotOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationCloudWatchLoggingOptionOutcome> DeleteApplicationCloudWatchLoggingOptionOutcomeCallable;
      typedef std::future<DeleteApplicationInputProcessingConfigurationOutcome> DeleteApplicationInputProcessingConfigurationOutcomeCallable;
      typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
      typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
      typedef std::future<DeleteApplicationSnapshotOutcome> DeleteApplicationSnapshotOutcomeCallable;
      typedef std::future<DeleteApplicationVpcConfigurationOutcome> DeleteApplicationVpcConfigurationOutcomeCallable;
      typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
      typedef std::future<DescribeApplicationSnapshotOutcome> DescribeApplicationSnapshotOutcomeCallable;
      typedef std::future<DescribeApplicationVersionOutcome> DescribeApplicationVersionOutcomeCallable;
      typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
      typedef std::future<ListApplicationSnapshotsOutcome> ListApplicationSnapshotsOutcomeCallable;
      typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
      typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
      typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateApplicationMaintenanceConfigurationOutcome> UpdateApplicationMaintenanceConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisAnalyticsV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationCloudWatchLoggingOptionRequest&, const Model::AddApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputProcessingConfigurationRequest&, const Model::AddApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationVpcConfigurationRequest&, const Model::AddApplicationVpcConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationVpcConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationPresignedUrlRequest&, const Model::CreateApplicationPresignedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationPresignedUrlResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationSnapshotRequest&, const Model::CreateApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationCloudWatchLoggingOptionRequest&, const Model::DeleteApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationInputProcessingConfigurationRequest&, const Model::DeleteApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationSnapshotRequest&, const Model::DeleteApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationVpcConfigurationRequest&, const Model::DeleteApplicationVpcConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationVpcConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationSnapshotRequest&, const Model::DescribeApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationVersionRequest&, const Model::DescribeApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationSnapshotsRequest&, const Model::ListApplicationSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationSnapshotsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::RollbackApplicationRequest&, const Model::RollbackApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RollbackApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UpdateApplicationMaintenanceConfigurationRequest&, const Model::UpdateApplicationMaintenanceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationMaintenanceConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisAnalyticsV2
} // namespace Aws
