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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/serverlessrepo/model/CreateApplicationResult.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/GetApplicationResult.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesResult.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsResult.h>
#include <aws/serverlessrepo/model/ListApplicationsResult.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/UpdateApplicationResult.h>
#include <aws/core/NoResult.h>
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

namespace ServerlessApplicationRepository
{

namespace Model
{
        class CreateApplicationRequest;
        class CreateApplicationVersionRequest;
        class CreateCloudFormationChangeSetRequest;
        class CreateCloudFormationTemplateRequest;
        class DeleteApplicationRequest;
        class GetApplicationRequest;
        class GetApplicationPolicyRequest;
        class GetCloudFormationTemplateRequest;
        class ListApplicationDependenciesRequest;
        class ListApplicationVersionsRequest;
        class ListApplicationsRequest;
        class PutApplicationPolicyRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationVersionResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> CreateApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateCloudFormationChangeSetResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> CreateCloudFormationChangeSetOutcome;
        typedef Aws::Utils::Outcome<CreateCloudFormationTemplateResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> CreateCloudFormationTemplateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationPolicyResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> GetApplicationPolicyOutcome;
        typedef Aws::Utils::Outcome<GetCloudFormationTemplateResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> GetCloudFormationTemplateOutcome;
        typedef Aws::Utils::Outcome<ListApplicationDependenciesResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> ListApplicationDependenciesOutcome;
        typedef Aws::Utils::Outcome<ListApplicationVersionsResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> ListApplicationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<PutApplicationPolicyResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> PutApplicationPolicyOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>> UpdateApplicationOutcome;

        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateApplicationVersionOutcome> CreateApplicationVersionOutcomeCallable;
        typedef std::future<CreateCloudFormationChangeSetOutcome> CreateCloudFormationChangeSetOutcomeCallable;
        typedef std::future<CreateCloudFormationTemplateOutcome> CreateCloudFormationTemplateOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetApplicationPolicyOutcome> GetApplicationPolicyOutcomeCallable;
        typedef std::future<GetCloudFormationTemplateOutcome> GetCloudFormationTemplateOutcomeCallable;
        typedef std::future<ListApplicationDependenciesOutcome> ListApplicationDependenciesOutcomeCallable;
        typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<PutApplicationPolicyOutcome> PutApplicationPolicyOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class ServerlessApplicationRepositoryClient;

    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateApplicationVersionRequest&, const Model::CreateApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateCloudFormationChangeSetRequest&, const Model::CreateCloudFormationChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationChangeSetResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateCloudFormationTemplateRequest&, const Model::CreateCloudFormationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationTemplateResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetApplicationPolicyRequest&, const Model::GetApplicationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationPolicyResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetCloudFormationTemplateRequest&, const Model::GetCloudFormationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFormationTemplateResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationDependenciesRequest&, const Model::ListApplicationDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationDependenciesResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::PutApplicationPolicyRequest&, const Model::PutApplicationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationPolicyResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  /**
   * <p>The AWS Serverless Application Repository makes it easy for developers and
   * enterprises to quickly find
 and deploy serverless applications in the AWS
   * Cloud. For more information about serverless applications,
 see Serverless
   * Computing and Applications on the AWS website.</p><p>The AWS Serverless
   * Application Repository is deeply integrated with the AWS Lambda console, so that
   * developers of 
 all levels can get started with serverless computing without
   * needing to learn anything new. You can use category 
 keywords to browse for
   * applications such as web and mobile backends, data processing applications, or
   * chatbots. 
 You can also search for applications by name, publisher, or event
   * source. To use an application, you simply choose it, 
 configure any required
   * fields, and deploy it with a few clicks. </p><p>You can also easily publish
   * applications, sharing them publicly with the community at large, or privately

   * within your team or across your organization. To publish a serverless
   * application (or app), you can use the
 AWS Management Console, AWS Command Line
   * Interface (AWS CLI), or AWS SDKs to upload the code. Along with the
 code, you
   * upload a simple manifest file, also known as the AWS Serverless Application
   * Model (AWS SAM) template.
 For more information about AWS SAM, see AWS
   * Serverless Application Model (AWS SAM) on the AWS Labs
 GitHub
   * repository.</p><p>The AWS Serverless Application Repository Developer Guide
   * contains more information about the two developer
 experiences
   * available:</p><ul>
 <li>
 <p>Consuming Applications – Browse for applications
   * and view information about them, including
 source code and readme files. Also
   * install, configure, and deploy applications of your choosing. </p>

   * <p>Publishing Applications – Configure and upload applications to make them
   * available to other
 developers, and publish new versions of applications. </p>

   * </li>
 </ul>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServerlessApplicationRepositoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ServerlessApplicationRepositoryClient();

        inline virtual const char* GetServiceClientName() const override { return "ServerlessApplicationRepository"; }


        /**
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationVersionAsync(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation change set for the given
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationChangeSetOutcome CreateCloudFormationChangeSet(const Model::CreateCloudFormationChangeSetRequest& request) const;

        /**
         * <p>Creates an AWS CloudFormation change set for the given
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationChangeSetOutcomeCallable CreateCloudFormationChangeSetCallable(const Model::CreateCloudFormationChangeSetRequest& request) const;

        /**
         * <p>Creates an AWS CloudFormation change set for the given
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationChangeSetAsync(const Model::CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationTemplateOutcome CreateCloudFormationTemplate(const Model::CreateCloudFormationTemplateRequest& request) const;

        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationTemplateOutcomeCallable CreateCloudFormationTemplateCallable(const Model::CreateCloudFormationTemplateRequest& request) const;

        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationTemplateAsync(const Model::CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationPolicyOutcome GetApplicationPolicy(const Model::GetApplicationPolicyRequest& request) const;

        /**
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationPolicyOutcomeCallable GetApplicationPolicyCallable(const Model::GetApplicationPolicyRequest& request) const;

        /**
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationPolicyAsync(const Model::GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationTemplateOutcome GetCloudFormationTemplate(const Model::GetCloudFormationTemplateRequest& request) const;

        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFormationTemplateOutcomeCallable GetCloudFormationTemplateCallable(const Model::GetCloudFormationTemplateRequest& request) const;

        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFormationTemplateAsync(const Model::GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of applications nested in the containing
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationDependenciesOutcome ListApplicationDependencies(const Model::ListApplicationDependenciesRequest& request) const;

        /**
         * <p>Retrieves the list of applications nested in the containing
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationDependencies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationDependenciesOutcomeCallable ListApplicationDependenciesCallable(const Model::ListApplicationDependenciesRequest& request) const;

        /**
         * <p>Retrieves the list of applications nested in the containing
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationDependencies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationDependenciesAsync(const Model::ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationVersionsAsync(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the permission policy for an application. For the list of actions
         * supported for this operation, see
 <a
         * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
         * 
 Permissions</a>
 .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/PutApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationPolicyOutcome PutApplicationPolicy(const Model::PutApplicationPolicyRequest& request) const;

        /**
         * <p>Sets the permission policy for an application. For the list of actions
         * supported for this operation, see
 <a
         * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
         * 
 Permissions</a>
 .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/PutApplicationPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutApplicationPolicyOutcomeCallable PutApplicationPolicyCallable(const Model::PutApplicationPolicyRequest& request) const;

        /**
         * <p>Sets the permission policy for an application. For the list of actions
         * supported for this operation, see
 <a
         * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
         * 
 Permissions</a>
 .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/PutApplicationPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutApplicationPolicyAsync(const Model::PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationVersionAsyncHelper(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCloudFormationChangeSetAsyncHelper(const Model::CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCloudFormationTemplateAsyncHelper(const Model::CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationPolicyAsyncHelper(const Model::GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFormationTemplateAsyncHelper(const Model::GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationDependenciesAsyncHelper(const Model::ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationVersionsAsyncHelper(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutApplicationPolicyAsyncHelper(const Model::PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ServerlessApplicationRepository
} // namespace Aws
