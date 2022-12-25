/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>

namespace Aws
{
namespace MediaPackageVod
{
  /**
   * AWS Elemental MediaPackage VOD
   */
  class AWS_MEDIAPACKAGEVOD_API MediaPackageVodClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageVodClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration(),
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaPackageVodEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaPackageVodEndpointProvider>(ALLOCATION_TAG),
                              const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageVodClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaPackageVodEndpointProvider>(ALLOCATION_TAG),
                              const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageVodClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaPackageVodClient();

        /**
         * Changes the packaging group's properities to configure log
         * subscription<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ConfigureLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsOutcome ConfigureLogs(const Model::ConfigureLogsRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureLogsOutcomeCallable ConfigureLogsCallable(const Model::ConfigureLogsRequest& request) const;

        /**
         * An Async wrapper for ConfigureLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureLogsAsync(const Model::ConfigureLogsRequest& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * A Callable wrapper for CreateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request) const;

        /**
         * An Async wrapper for CreateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new MediaPackage VOD PackagingConfiguration resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingConfigurationOutcome CreatePackagingConfiguration(const Model::CreatePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreatePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackagingConfigurationOutcomeCallable CreatePackagingConfigurationCallable(const Model::CreatePackagingConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreatePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackagingConfigurationAsync(const Model::CreatePackagingConfigurationRequest& request, const CreatePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingGroupOutcome CreatePackagingGroup(const Model::CreatePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreatePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackagingGroupOutcomeCallable CreatePackagingGroupCallable(const Model::CreatePackagingGroupRequest& request) const;

        /**
         * An Async wrapper for CreatePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackagingGroupAsync(const Model::CreatePackagingGroupRequest& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request) const;

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingConfigurationOutcome DeletePackagingConfiguration(const Model::DeletePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeletePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackagingConfigurationOutcomeCallable DeletePackagingConfigurationCallable(const Model::DeletePackagingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeletePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackagingConfigurationAsync(const Model::DeletePackagingConfigurationRequest& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingGroupOutcome DeletePackagingGroup(const Model::DeletePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeletePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackagingGroupOutcomeCallable DeletePackagingGroupCallable(const Model::DeletePackagingGroupRequest& request) const;

        /**
         * An Async wrapper for DeletePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackagingGroupAsync(const Model::DeletePackagingGroupRequest& request, const DeletePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a description of a MediaPackage VOD Asset resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;

        /**
         * A Callable wrapper for DescribeAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request) const;

        /**
         * An Async wrapper for DescribeAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetAsync(const Model::DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a description of a MediaPackage VOD PackagingConfiguration
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingConfigurationOutcome DescribePackagingConfiguration(const Model::DescribePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagingConfigurationOutcomeCallable DescribePackagingConfigurationCallable(const Model::DescribePackagingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackagingConfigurationAsync(const Model::DescribePackagingConfigurationRequest& request, const DescribePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a description of a MediaPackage VOD PackagingGroup resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingGroupOutcome DescribePackagingGroup(const Model::DescribePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagingGroupOutcomeCallable DescribePackagingGroupCallable(const Model::DescribePackagingGroupRequest& request) const;

        /**
         * An Async wrapper for DescribePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackagingGroupAsync(const Model::DescribePackagingGroupRequest& request, const DescribePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of MediaPackage VOD Asset resources.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetsOutcomeCallable ListAssetsCallable(const Model::ListAssetsRequest& request) const;

        /**
         * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetsAsync(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of MediaPackage VOD PackagingConfiguration
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingConfigurationsOutcome ListPackagingConfigurations(const Model::ListPackagingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListPackagingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagingConfigurationsOutcomeCallable ListPackagingConfigurationsCallable(const Model::ListPackagingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListPackagingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagingConfigurationsAsync(const Model::ListPackagingConfigurationsRequest& request, const ListPackagingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of MediaPackage VOD PackagingGroup resources.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingGroupsOutcome ListPackagingGroups(const Model::ListPackagingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListPackagingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagingGroupsOutcomeCallable ListPackagingGroupsCallable(const Model::ListPackagingGroupsRequest& request) const;

        /**
         * An Async wrapper for ListPackagingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagingGroupsAsync(const Model::ListPackagingGroupsRequest& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of the tags assigned to the specified resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds tags to the specified resource. You can specify one or more tags to
         * add.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes tags from the specified resource. You can specify one or more tags to
         * remove.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a specific packaging group. You can't change the id attribute or any
         * other system-generated attributes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UpdatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackagingGroupOutcome UpdatePackagingGroup(const Model::UpdatePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePackagingGroupOutcomeCallable UpdatePackagingGroupCallable(const Model::UpdatePackagingGroupRequest& request) const;

        /**
         * An Async wrapper for UpdatePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePackagingGroupAsync(const Model::UpdatePackagingGroupRequest& request, const UpdatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaPackageVodEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageVodClient>;
      void init(const MediaPackageVodClientConfiguration& clientConfiguration);

      MediaPackageVodClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaPackageVodEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaPackageVod
} // namespace Aws
