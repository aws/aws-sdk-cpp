/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesisanalytics/KinesisAnalyticsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisAnalyticsClient header */
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/CreateApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/DescribeApplicationResult.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalytics/model/ListApplicationsResult.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalytics/model/StartApplicationResult.h>
#include <aws/kinesisanalytics/model/StopApplicationResult.h>
#include <aws/kinesisanalytics/model/TagResourceResult.h>
#include <aws/kinesisanalytics/model/UntagResourceResult.h>
#include <aws/kinesisanalytics/model/UpdateApplicationResult.h>
/* End of service model headers required in KinesisAnalyticsClient header */

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

  namespace KinesisAnalytics
  {
    using KinesisAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisAnalyticsEndpointProviderBase = Aws::KinesisAnalytics::Endpoint::KinesisAnalyticsEndpointProviderBase;
    using KinesisAnalyticsEndpointProvider = Aws::KinesisAnalytics::Endpoint::KinesisAnalyticsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisAnalyticsClient header */
      class AddApplicationCloudWatchLoggingOptionRequest;
      class AddApplicationInputRequest;
      class AddApplicationInputProcessingConfigurationRequest;
      class AddApplicationOutputRequest;
      class AddApplicationReferenceDataSourceRequest;
      class CreateApplicationRequest;
      class DeleteApplicationRequest;
      class DeleteApplicationCloudWatchLoggingOptionRequest;
      class DeleteApplicationInputProcessingConfigurationRequest;
      class DeleteApplicationOutputRequest;
      class DeleteApplicationReferenceDataSourceRequest;
      class DescribeApplicationRequest;
      class DiscoverInputSchemaRequest;
      class ListApplicationsRequest;
      class ListTagsForResourceRequest;
      class StartApplicationRequest;
      class StopApplicationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      /* End of service model forward declarations required in KinesisAnalyticsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsError> AddApplicationCloudWatchLoggingOptionOutcome;
      typedef Aws::Utils::Outcome<AddApplicationInputResult, KinesisAnalyticsError> AddApplicationInputOutcome;
      typedef Aws::Utils::Outcome<AddApplicationInputProcessingConfigurationResult, KinesisAnalyticsError> AddApplicationInputProcessingConfigurationOutcome;
      typedef Aws::Utils::Outcome<AddApplicationOutputResult, KinesisAnalyticsError> AddApplicationOutputOutcome;
      typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, KinesisAnalyticsError> AddApplicationReferenceDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, KinesisAnalyticsError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, KinesisAnalyticsError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsError> DeleteApplicationCloudWatchLoggingOptionOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationInputProcessingConfigurationResult, KinesisAnalyticsError> DeleteApplicationInputProcessingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, KinesisAnalyticsError> DeleteApplicationOutputOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, KinesisAnalyticsError> DeleteApplicationReferenceDataSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationResult, KinesisAnalyticsError> DescribeApplicationOutcome;
      typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, KinesisAnalyticsError> DiscoverInputSchemaOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, KinesisAnalyticsError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KinesisAnalyticsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartApplicationResult, KinesisAnalyticsError> StartApplicationOutcome;
      typedef Aws::Utils::Outcome<StopApplicationResult, KinesisAnalyticsError> StopApplicationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KinesisAnalyticsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KinesisAnalyticsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, KinesisAnalyticsError> UpdateApplicationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddApplicationCloudWatchLoggingOptionOutcome> AddApplicationCloudWatchLoggingOptionOutcomeCallable;
      typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
      typedef std::future<AddApplicationInputProcessingConfigurationOutcome> AddApplicationInputProcessingConfigurationOutcomeCallable;
      typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
      typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationCloudWatchLoggingOptionOutcome> DeleteApplicationCloudWatchLoggingOptionOutcomeCallable;
      typedef std::future<DeleteApplicationInputProcessingConfigurationOutcome> DeleteApplicationInputProcessingConfigurationOutcomeCallable;
      typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
      typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
      typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
      typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
      typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisAnalyticsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationCloudWatchLoggingOptionRequest&, const Model::AddApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationInputProcessingConfigurationRequest&, const Model::AddApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationCloudWatchLoggingOptionRequest&, const Model::DeleteApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationInputProcessingConfigurationRequest&, const Model::DeleteApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisAnalytics
} // namespace Aws
