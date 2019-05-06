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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mobile/model/CreateProjectResult.h>
#include <aws/mobile/model/DeleteProjectResult.h>
#include <aws/mobile/model/DescribeBundleResult.h>
#include <aws/mobile/model/DescribeProjectResult.h>
#include <aws/mobile/model/ExportBundleResult.h>
#include <aws/mobile/model/ExportProjectResult.h>
#include <aws/mobile/model/ListBundlesResult.h>
#include <aws/mobile/model/ListProjectsResult.h>
#include <aws/mobile/model/UpdateProjectResult.h>
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

namespace Mobile
{

namespace Model
{
        class CreateProjectRequest;
        class DeleteProjectRequest;
        class DescribeBundleRequest;
        class DescribeProjectRequest;
        class ExportBundleRequest;
        class ExportProjectRequest;
        class ListBundlesRequest;
        class ListProjectsRequest;
        class UpdateProjectRequest;

        typedef Aws::Utils::Outcome<CreateProjectResult, Aws::Client::AWSError<MobileErrors>> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, Aws::Client::AWSError<MobileErrors>> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DescribeBundleResult, Aws::Client::AWSError<MobileErrors>> DescribeBundleOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, Aws::Client::AWSError<MobileErrors>> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<ExportBundleResult, Aws::Client::AWSError<MobileErrors>> ExportBundleOutcome;
        typedef Aws::Utils::Outcome<ExportProjectResult, Aws::Client::AWSError<MobileErrors>> ExportProjectOutcome;
        typedef Aws::Utils::Outcome<ListBundlesResult, Aws::Client::AWSError<MobileErrors>> ListBundlesOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, Aws::Client::AWSError<MobileErrors>> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, Aws::Client::AWSError<MobileErrors>> UpdateProjectOutcome;

        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DescribeBundleOutcome> DescribeBundleOutcomeCallable;
        typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
        typedef std::future<ExportBundleOutcome> ExportBundleOutcomeCallable;
        typedef std::future<ExportProjectOutcome> ExportProjectOutcomeCallable;
        typedef std::future<ListBundlesOutcome> ListBundlesOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
} // namespace Model

  class MobileClient;

    typedef std::function<void(const MobileClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DescribeBundleRequest&, const Model::DescribeBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBundleResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ExportBundleRequest&, const Model::ExportBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportBundleResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ExportProjectRequest&, const Model::ExportProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ListBundlesRequest&, const Model::ListBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBundlesResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MobileClient();

        inline virtual const char* GetServiceClientName() const override { return "mobile"; }


        /**
         * <p> Creates an AWS Mobile Hub project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p> Creates an AWS Mobile Hub project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p> Creates an AWS Mobile Hub project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Delets a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p> Delets a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p> Delets a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Get the bundle details for the requested bundle id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleOutcome DescribeBundle(const Model::DescribeBundleRequest& request) const;

        /**
         * <p> Get the bundle details for the requested bundle id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBundleOutcomeCallable DescribeBundleCallable(const Model::DescribeBundleRequest& request) const;

        /**
         * <p> Get the bundle details for the requested bundle id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBundleAsync(const Model::DescribeBundleRequest& request, const DescribeBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets details about a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * <p> Gets details about a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * <p> Gets details about a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates customized software development kit (SDK) and or tool packages
         * used to integrate mobile web or mobile app clients with backend AWS resources.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBundleOutcome ExportBundle(const Model::ExportBundleRequest& request) const;

        /**
         * <p> Generates customized software development kit (SDK) and or tool packages
         * used to integrate mobile web or mobile app clients with backend AWS resources.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportBundleOutcomeCallable ExportBundleCallable(const Model::ExportBundleRequest& request) const;

        /**
         * <p> Generates customized software development kit (SDK) and or tool packages
         * used to integrate mobile web or mobile app clients with backend AWS resources.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportBundleAsync(const Model::ExportBundleRequest& request, const ExportBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> Exports project configuration to a snapshot which can be downloaded and
         * shared. Note that mobile app push credentials are encrypted in exported
         * projects, so they can only be shared successfully within the same AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportProjectOutcomeCallable ExportProjectCallable(const Model::ExportProjectRequest& request) const;

        /**
         * <p> Exports project configuration to a snapshot which can be downloaded and
         * shared. Note that mobile app push credentials are encrypted in exported
         * projects, so they can only be shared successfully within the same AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportProjectAsync(const Model::ExportProjectRequest& request, const ExportProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List all available bundles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBundlesOutcome ListBundles(const Model::ListBundlesRequest& request) const;

        /**
         * <p> List all available bundles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBundlesOutcomeCallable ListBundlesCallable(const Model::ListBundlesRequest& request) const;

        /**
         * <p> List all available bundles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBundlesAsync(const Model::ListBundlesRequest& request, const ListBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists projects in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p> Lists projects in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p> Lists projects in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Update an existing project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p> Update an existing project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p> Update an existing project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBundleAsyncHelper(const Model::DescribeBundleRequest& request, const DescribeBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportBundleAsyncHelper(const Model::ExportBundleRequest& request, const ExportBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportProjectAsyncHelper(const Model::ExportProjectRequest& request, const ExportProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBundlesAsyncHelper(const Model::ListBundlesRequest& request, const ListBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Mobile
} // namespace Aws
