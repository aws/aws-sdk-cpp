/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediapackage-vod/MediaPackageVodErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediapackage-vod/MediaPackageVodEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaPackageVodClient header */
#include <aws/mediapackage-vod/model/ConfigureLogsResult.h>
#include <aws/mediapackage-vod/model/CreateAssetResult.h>
#include <aws/mediapackage-vod/model/CreatePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/CreatePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/DeleteAssetResult.h>
#include <aws/mediapackage-vod/model/DeletePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/DeletePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/DescribeAssetResult.h>
#include <aws/mediapackage-vod/model/DescribePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/DescribePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/ListAssetsResult.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsResult.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsResult.h>
#include <aws/mediapackage-vod/model/ListTagsForResourceResult.h>
#include <aws/mediapackage-vod/model/UpdatePackagingGroupResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaPackageVodClient header */

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

  namespace MediaPackageVod
  {
    using MediaPackageVodClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaPackageVodEndpointProviderBase = Aws::MediaPackageVod::Endpoint::MediaPackageVodEndpointProviderBase;
    using MediaPackageVodEndpointProvider = Aws::MediaPackageVod::Endpoint::MediaPackageVodEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaPackageVodClient header */
      class ConfigureLogsRequest;
      class CreateAssetRequest;
      class CreatePackagingConfigurationRequest;
      class CreatePackagingGroupRequest;
      class DeleteAssetRequest;
      class DeletePackagingConfigurationRequest;
      class DeletePackagingGroupRequest;
      class DescribeAssetRequest;
      class DescribePackagingConfigurationRequest;
      class DescribePackagingGroupRequest;
      class ListAssetsRequest;
      class ListPackagingConfigurationsRequest;
      class ListPackagingGroupsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePackagingGroupRequest;
      /* End of service model forward declarations required in MediaPackageVodClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ConfigureLogsResult, MediaPackageVodError> ConfigureLogsOutcome;
      typedef Aws::Utils::Outcome<CreateAssetResult, MediaPackageVodError> CreateAssetOutcome;
      typedef Aws::Utils::Outcome<CreatePackagingConfigurationResult, MediaPackageVodError> CreatePackagingConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreatePackagingGroupResult, MediaPackageVodError> CreatePackagingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteAssetResult, MediaPackageVodError> DeleteAssetOutcome;
      typedef Aws::Utils::Outcome<DeletePackagingConfigurationResult, MediaPackageVodError> DeletePackagingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePackagingGroupResult, MediaPackageVodError> DeletePackagingGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeAssetResult, MediaPackageVodError> DescribeAssetOutcome;
      typedef Aws::Utils::Outcome<DescribePackagingConfigurationResult, MediaPackageVodError> DescribePackagingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribePackagingGroupResult, MediaPackageVodError> DescribePackagingGroupOutcome;
      typedef Aws::Utils::Outcome<ListAssetsResult, MediaPackageVodError> ListAssetsOutcome;
      typedef Aws::Utils::Outcome<ListPackagingConfigurationsResult, MediaPackageVodError> ListPackagingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListPackagingGroupsResult, MediaPackageVodError> ListPackagingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaPackageVodError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageVodError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageVodError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePackagingGroupResult, MediaPackageVodError> UpdatePackagingGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ConfigureLogsOutcome> ConfigureLogsOutcomeCallable;
      typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
      typedef std::future<CreatePackagingConfigurationOutcome> CreatePackagingConfigurationOutcomeCallable;
      typedef std::future<CreatePackagingGroupOutcome> CreatePackagingGroupOutcomeCallable;
      typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
      typedef std::future<DeletePackagingConfigurationOutcome> DeletePackagingConfigurationOutcomeCallable;
      typedef std::future<DeletePackagingGroupOutcome> DeletePackagingGroupOutcomeCallable;
      typedef std::future<DescribeAssetOutcome> DescribeAssetOutcomeCallable;
      typedef std::future<DescribePackagingConfigurationOutcome> DescribePackagingConfigurationOutcomeCallable;
      typedef std::future<DescribePackagingGroupOutcome> DescribePackagingGroupOutcomeCallable;
      typedef std::future<ListAssetsOutcome> ListAssetsOutcomeCallable;
      typedef std::future<ListPackagingConfigurationsOutcome> ListPackagingConfigurationsOutcomeCallable;
      typedef std::future<ListPackagingGroupsOutcome> ListPackagingGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePackagingGroupOutcome> UpdatePackagingGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaPackageVodClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaPackageVodClient*, const Model::ConfigureLogsRequest&, const Model::ConfigureLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureLogsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::CreateAssetRequest&, const Model::CreateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::CreatePackagingConfigurationRequest&, const Model::CreatePackagingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackagingConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::CreatePackagingGroupRequest&, const Model::CreatePackagingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackagingGroupResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DeleteAssetRequest&, const Model::DeleteAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DeletePackagingConfigurationRequest&, const Model::DeletePackagingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackagingConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DeletePackagingGroupRequest&, const Model::DeletePackagingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackagingGroupResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DescribeAssetRequest&, const Model::DescribeAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DescribePackagingConfigurationRequest&, const Model::DescribePackagingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagingConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::DescribePackagingGroupRequest&, const Model::DescribePackagingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagingGroupResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::ListAssetsRequest&, const Model::ListAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::ListPackagingConfigurationsRequest&, const Model::ListPackagingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::ListPackagingGroupsRequest&, const Model::ListPackagingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagingGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageVodClient*, const Model::UpdatePackagingGroupRequest&, const Model::UpdatePackagingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackagingGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaPackageVod
} // namespace Aws
