/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>
#include <aws/mediapackage-vod/MediaPackageVodLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaPackageVod
{
  /**
   * AWS Elemental MediaPackage VOD
   */
  class AWS_MEDIAPACKAGEVOD_API MediaPackageVodClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * Changes the packaging group's properities to configure log
         * subscription<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ConfigureLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsOutcome ConfigureLogs(const Model::ConfigureLogsRequest& request) const;


        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;


        /**
         * Creates a new MediaPackage VOD PackagingConfiguration resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingConfigurationOutcome CreatePackagingConfiguration(const Model::CreatePackagingConfigurationRequest& request) const;


        /**
         * Creates a new MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingGroupOutcome CreatePackagingGroup(const Model::CreatePackagingGroupRequest& request) const;


        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;


        /**
         * Deletes a MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingConfigurationOutcome DeletePackagingConfiguration(const Model::DeletePackagingConfigurationRequest& request) const;


        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingGroupOutcome DeletePackagingGroup(const Model::DeletePackagingGroupRequest& request) const;


        /**
         * Returns a description of a MediaPackage VOD Asset resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;


        /**
         * Returns a description of a MediaPackage VOD PackagingConfiguration
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingConfigurationOutcome DescribePackagingConfiguration(const Model::DescribePackagingConfigurationRequest& request) const;


        /**
         * Returns a description of a MediaPackage VOD PackagingGroup resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingGroupOutcome DescribePackagingGroup(const Model::DescribePackagingGroupRequest& request) const;


        /**
         * Returns a collection of MediaPackage VOD Asset resources.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;


        /**
         * Returns a collection of MediaPackage VOD PackagingConfiguration
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingConfigurationsOutcome ListPackagingConfigurations(const Model::ListPackagingConfigurationsRequest& request) const;


        /**
         * Returns a collection of MediaPackage VOD PackagingGroup resources.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingGroupsOutcome ListPackagingGroups(const Model::ListPackagingGroupsRequest& request) const;


        /**
         * Returns a list of the tags assigned to the specified resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * Adds tags to the specified resource. You can specify one or more tags to
         * add.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * Removes tags from the specified resource. You can specify one or more tags to
         * remove.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * Updates a specific packaging group. You can't change the id attribute or any
         * other system-generated attributes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UpdatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackagingGroupOutcome UpdatePackagingGroup(const Model::UpdatePackagingGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaPackageVodEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaPackageVodClientConfiguration& clientConfiguration);

      MediaPackageVodClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaPackageVodEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaPackageVod
} // namespace Aws
