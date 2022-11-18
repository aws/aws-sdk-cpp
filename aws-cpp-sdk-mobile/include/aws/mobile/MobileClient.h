/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mobile/MobileServiceClientModel.h>
#include <aws/mobile/MobileLegacyAsyncMacros.h>

namespace Aws
{
namespace Mobile
{
  /**
   * <p> AWS Mobile Service provides mobile app and website developers with
   * capabilities required to configure AWS resources and bootstrap their developer
   * desktop projects with the necessary SDKs, constants, tools and samples to make
   * use of those resources. </p>
   */
  class AWS_MOBILE_API MobileClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration(),
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MobileClient();


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
         * <p> Creates an AWS Mobile Hub project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p> Delets a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


        /**
         * <p> Get the bundle details for the requested bundle id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleOutcome DescribeBundle(const Model::DescribeBundleRequest& request) const;


        /**
         * <p> Gets details about a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;


        /**
         * <p> Generates customized software development kit (SDK) and or tool packages
         * used to integrate mobile web or mobile app clients with backend AWS resources.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBundleOutcome ExportBundle(const Model::ExportBundleRequest& request) const;


        /**
         * <p> Exports project configuration to a snapshot which can be downloaded and
         * shared. Note that mobile app push credentials are encrypted in exported
         * projects, so they can only be shared successfully within the same AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportProjectOutcome ExportProject(const Model::ExportProjectRequest& request) const;


        /**
         * <p> List all available bundles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBundlesOutcome ListBundles(const Model::ListBundlesRequest& request) const;


        /**
         * <p> Lists projects in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p> Update an existing project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MobileEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MobileClientConfiguration& clientConfiguration);

      MobileClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MobileEndpointProviderBase> m_endpointProvider;
  };

} // namespace Mobile
} // namespace Aws
