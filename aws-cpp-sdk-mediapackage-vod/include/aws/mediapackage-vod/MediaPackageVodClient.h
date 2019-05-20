/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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

        typedef Aws::Utils::Outcome<CreateAssetResult, Aws::Client::AWSError<MediaPackageVodErrors>> CreateAssetOutcome;
        typedef Aws::Utils::Outcome<CreatePackagingConfigurationResult, Aws::Client::AWSError<MediaPackageVodErrors>> CreatePackagingConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreatePackagingGroupResult, Aws::Client::AWSError<MediaPackageVodErrors>> CreatePackagingGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteAssetResult, Aws::Client::AWSError<MediaPackageVodErrors>> DeleteAssetOutcome;
        typedef Aws::Utils::Outcome<DeletePackagingConfigurationResult, Aws::Client::AWSError<MediaPackageVodErrors>> DeletePackagingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeletePackagingGroupResult, Aws::Client::AWSError<MediaPackageVodErrors>> DeletePackagingGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeAssetResult, Aws::Client::AWSError<MediaPackageVodErrors>> DescribeAssetOutcome;
        typedef Aws::Utils::Outcome<DescribePackagingConfigurationResult, Aws::Client::AWSError<MediaPackageVodErrors>> DescribePackagingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribePackagingGroupResult, Aws::Client::AWSError<MediaPackageVodErrors>> DescribePackagingGroupOutcome;
        typedef Aws::Utils::Outcome<ListAssetsResult, Aws::Client::AWSError<MediaPackageVodErrors>> ListAssetsOutcome;
        typedef Aws::Utils::Outcome<ListPackagingConfigurationsResult, Aws::Client::AWSError<MediaPackageVodErrors>> ListPackagingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListPackagingGroupsResult, Aws::Client::AWSError<MediaPackageVodErrors>> ListPackagingGroupsOutcome;

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
} // namespace Model

  class MediaPackageVodClient;

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

  /**
   * AWS Elemental MediaPackage VOD
   */
  class AWS_MEDIAPACKAGEVOD_API MediaPackageVodClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageVodClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaPackageVodClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaPackage Vod"; }


        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request) const;

        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Creates a new MediaPackage VOD PackagingConfiguration resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackagingConfigurationOutcomeCallable CreatePackagingConfigurationCallable(const Model::CreatePackagingConfigurationRequest& request) const;

        /**
         * Creates a new MediaPackage VOD PackagingConfiguration resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Creates a new MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackagingGroupOutcomeCallable CreatePackagingGroupCallable(const Model::CreatePackagingGroupRequest& request) const;

        /**
         * Creates a new MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackagingGroupAsync(const Model::CreatePackagingGroupRequest& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request) const;

        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Deletes a MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackagingConfigurationOutcomeCallable DeletePackagingConfigurationCallable(const Model::DeletePackagingConfigurationRequest& request) const;

        /**
         * Deletes a MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackagingConfigurationAsync(const Model::DeletePackagingConfigurationRequest& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingGroupOutcome DeletePackagingGroup(const Model::DeletePackagingGroupRequest& request) const;

        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackagingGroupOutcomeCallable DeletePackagingGroupCallable(const Model::DeletePackagingGroupRequest& request) const;

        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a description of a MediaPackage VOD Asset resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribeAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request) const;

        /**
         * Returns a description of a MediaPackage VOD Asset resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribeAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a description of a MediaPackage VOD PackagingConfiguration
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagingConfigurationOutcomeCallable DescribePackagingConfigurationCallable(const Model::DescribePackagingConfigurationRequest& request) const;

        /**
         * Returns a description of a MediaPackage VOD PackagingConfiguration
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a description of a MediaPackage VOD PackagingGroup resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagingGroupOutcomeCallable DescribePackagingGroupCallable(const Model::DescribePackagingGroupRequest& request) const;

        /**
         * Returns a description of a MediaPackage VOD PackagingGroup resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a collection of MediaPackage VOD Asset resources.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetsOutcomeCallable ListAssetsCallable(const Model::ListAssetsRequest& request) const;

        /**
         * Returns a collection of MediaPackage VOD Asset resources.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a collection of MediaPackage VOD PackagingConfiguration
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagingConfigurationsOutcomeCallable ListPackagingConfigurationsCallable(const Model::ListPackagingConfigurationsRequest& request) const;

        /**
         * Returns a collection of MediaPackage VOD PackagingConfiguration
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * Returns a collection of MediaPackage VOD PackagingGroup resources.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagingGroupsOutcomeCallable ListPackagingGroupsCallable(const Model::ListPackagingGroupsRequest& request) const;

        /**
         * Returns a collection of MediaPackage VOD PackagingGroup resources.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagingGroupsAsync(const Model::ListPackagingGroupsRequest& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAssetAsyncHelper(const Model::CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePackagingConfigurationAsyncHelper(const Model::CreatePackagingConfigurationRequest& request, const CreatePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePackagingGroupAsyncHelper(const Model::CreatePackagingGroupRequest& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssetAsyncHelper(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePackagingConfigurationAsyncHelper(const Model::DeletePackagingConfigurationRequest& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePackagingGroupAsyncHelper(const Model::DeletePackagingGroupRequest& request, const DeletePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssetAsyncHelper(const Model::DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePackagingConfigurationAsyncHelper(const Model::DescribePackagingConfigurationRequest& request, const DescribePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePackagingGroupAsyncHelper(const Model::DescribePackagingGroupRequest& request, const DescribePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssetsAsyncHelper(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackagingConfigurationsAsyncHelper(const Model::ListPackagingConfigurationsRequest& request, const ListPackagingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackagingGroupsAsyncHelper(const Model::ListPackagingGroupsRequest& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaPackageVod
} // namespace Aws
