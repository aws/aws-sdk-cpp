/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentsResult.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/CreateApplicationResult.h>
#include <aws/codedeploy/model/CreateDeploymentResult.h>
#include <aws/codedeploy/model/CreateDeploymentConfigResult.h>
#include <aws/codedeploy/model/CreateDeploymentGroupResult.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetApplicationResult.h>
#include <aws/codedeploy/model/GetApplicationRevisionResult.h>
#include <aws/codedeploy/model/GetDeploymentResult.h>
#include <aws/codedeploy/model/GetDeploymentConfigResult.h>
#include <aws/codedeploy/model/GetDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetDeploymentInstanceResult.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceResult.h>
#include <aws/codedeploy/model/ListApplicationRevisionsResult.h>
#include <aws/codedeploy/model/ListApplicationsResult.h>
#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>
#include <aws/codedeploy/model/ListDeploymentGroupsResult.h>
#include <aws/codedeploy/model/ListDeploymentInstancesResult.h>
#include <aws/codedeploy/model/ListDeploymentsResult.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/StopDeploymentResult.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace CodeDeploy
{

namespace Model
{
        class AddTagsToOnPremisesInstancesRequest;
        class BatchGetApplicationsRequest;
        class BatchGetDeploymentsRequest;
        class BatchGetOnPremisesInstancesRequest;
        class CreateApplicationRequest;
        class CreateDeploymentRequest;
        class CreateDeploymentConfigRequest;
        class CreateDeploymentGroupRequest;
        class DeleteApplicationRequest;
        class DeleteDeploymentConfigRequest;
        class DeleteDeploymentGroupRequest;
        class DeregisterOnPremisesInstanceRequest;
        class GetApplicationRequest;
        class GetApplicationRevisionRequest;
        class GetDeploymentRequest;
        class GetDeploymentConfigRequest;
        class GetDeploymentGroupRequest;
        class GetDeploymentInstanceRequest;
        class GetOnPremisesInstanceRequest;
        class ListApplicationRevisionsRequest;
        class ListApplicationsRequest;
        class ListDeploymentConfigsRequest;
        class ListDeploymentGroupsRequest;
        class ListDeploymentInstancesRequest;
        class ListDeploymentsRequest;
        class ListOnPremisesInstancesRequest;
        class RegisterApplicationRevisionRequest;
        class RegisterOnPremisesInstanceRequest;
        class RemoveTagsFromOnPremisesInstancesRequest;
        class StopDeploymentRequest;
        class UpdateApplicationRequest;
        class UpdateDeploymentGroupRequest;

        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> AddTagsToOnPremisesInstancesOutcome;
        typedef Utils::Outcome<BatchGetApplicationsResult, Client::AWSError<CodeDeployErrors>> BatchGetApplicationsOutcome;
        typedef Utils::Outcome<BatchGetDeploymentsResult, Client::AWSError<CodeDeployErrors>> BatchGetDeploymentsOutcome;
        typedef Utils::Outcome<BatchGetOnPremisesInstancesResult, Client::AWSError<CodeDeployErrors>> BatchGetOnPremisesInstancesOutcome;
        typedef Utils::Outcome<CreateApplicationResult, Client::AWSError<CodeDeployErrors>> CreateApplicationOutcome;
        typedef Utils::Outcome<CreateDeploymentResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentOutcome;
        typedef Utils::Outcome<CreateDeploymentConfigResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentConfigOutcome;
        typedef Utils::Outcome<CreateDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeleteApplicationOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeleteDeploymentConfigOutcome;
        typedef Utils::Outcome<DeleteDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> DeleteDeploymentGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeregisterOnPremisesInstanceOutcome;
        typedef Utils::Outcome<GetApplicationResult, Client::AWSError<CodeDeployErrors>> GetApplicationOutcome;
        typedef Utils::Outcome<GetApplicationRevisionResult, Client::AWSError<CodeDeployErrors>> GetApplicationRevisionOutcome;
        typedef Utils::Outcome<GetDeploymentResult, Client::AWSError<CodeDeployErrors>> GetDeploymentOutcome;
        typedef Utils::Outcome<GetDeploymentConfigResult, Client::AWSError<CodeDeployErrors>> GetDeploymentConfigOutcome;
        typedef Utils::Outcome<GetDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> GetDeploymentGroupOutcome;
        typedef Utils::Outcome<GetDeploymentInstanceResult, Client::AWSError<CodeDeployErrors>> GetDeploymentInstanceOutcome;
        typedef Utils::Outcome<GetOnPremisesInstanceResult, Client::AWSError<CodeDeployErrors>> GetOnPremisesInstanceOutcome;
        typedef Utils::Outcome<ListApplicationRevisionsResult, Client::AWSError<CodeDeployErrors>> ListApplicationRevisionsOutcome;
        typedef Utils::Outcome<ListApplicationsResult, Client::AWSError<CodeDeployErrors>> ListApplicationsOutcome;
        typedef Utils::Outcome<ListDeploymentConfigsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentConfigsOutcome;
        typedef Utils::Outcome<ListDeploymentGroupsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentGroupsOutcome;
        typedef Utils::Outcome<ListDeploymentInstancesResult, Client::AWSError<CodeDeployErrors>> ListDeploymentInstancesOutcome;
        typedef Utils::Outcome<ListDeploymentsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentsOutcome;
        typedef Utils::Outcome<ListOnPremisesInstancesResult, Client::AWSError<CodeDeployErrors>> ListOnPremisesInstancesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RegisterApplicationRevisionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RegisterOnPremisesInstanceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RemoveTagsFromOnPremisesInstancesOutcome;
        typedef Utils::Outcome<StopDeploymentResult, Client::AWSError<CodeDeployErrors>> StopDeploymentOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> UpdateApplicationOutcome;
        typedef Utils::Outcome<UpdateDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> UpdateDeploymentGroupOutcome;

        typedef std::future<AddTagsToOnPremisesInstancesOutcome> AddTagsToOnPremisesInstancesOutcomeCallable;
        typedef std::future<BatchGetApplicationsOutcome> BatchGetApplicationsOutcomeCallable;
        typedef std::future<BatchGetDeploymentsOutcome> BatchGetDeploymentsOutcomeCallable;
        typedef std::future<BatchGetOnPremisesInstancesOutcome> BatchGetOnPremisesInstancesOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateDeploymentConfigOutcome> CreateDeploymentConfigOutcomeCallable;
        typedef std::future<CreateDeploymentGroupOutcome> CreateDeploymentGroupOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteDeploymentConfigOutcome> DeleteDeploymentConfigOutcomeCallable;
        typedef std::future<DeleteDeploymentGroupOutcome> DeleteDeploymentGroupOutcomeCallable;
        typedef std::future<DeregisterOnPremisesInstanceOutcome> DeregisterOnPremisesInstanceOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetApplicationRevisionOutcome> GetApplicationRevisionOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<GetDeploymentConfigOutcome> GetDeploymentConfigOutcomeCallable;
        typedef std::future<GetDeploymentGroupOutcome> GetDeploymentGroupOutcomeCallable;
        typedef std::future<GetDeploymentInstanceOutcome> GetDeploymentInstanceOutcomeCallable;
        typedef std::future<GetOnPremisesInstanceOutcome> GetOnPremisesInstanceOutcomeCallable;
        typedef std::future<ListApplicationRevisionsOutcome> ListApplicationRevisionsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListDeploymentConfigsOutcome> ListDeploymentConfigsOutcomeCallable;
        typedef std::future<ListDeploymentGroupsOutcome> ListDeploymentGroupsOutcomeCallable;
        typedef std::future<ListDeploymentInstancesOutcome> ListDeploymentInstancesOutcomeCallable;
        typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
        typedef std::future<ListOnPremisesInstancesOutcome> ListOnPremisesInstancesOutcomeCallable;
        typedef std::future<RegisterApplicationRevisionOutcome> RegisterApplicationRevisionOutcomeCallable;
        typedef std::future<RegisterOnPremisesInstanceOutcome> RegisterOnPremisesInstanceOutcomeCallable;
        typedef std::future<RemoveTagsFromOnPremisesInstancesOutcome> RemoveTagsFromOnPremisesInstancesOutcomeCallable;
        typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateDeploymentGroupOutcome> UpdateDeploymentGroupOutcomeCallable;
} // namespace Model

    class CodeDeployClient;

    typedef std::function<void(const CodeDeployClient*, const Model::AddTagsToOnPremisesInstancesRequest&, const Model::AddTagsToOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationsRequest&, const Model::BatchGetApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentsRequest&, const Model::BatchGetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetOnPremisesInstancesRequest&, const Model::BatchGetOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentConfigRequest&, const Model::CreateDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentGroupRequest&, const Model::CreateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentConfigRequest&, const Model::DeleteDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentGroupRequest&, const Model::DeleteDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeregisterOnPremisesInstanceRequest&, const Model::DeregisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRevisionRequest&, const Model::GetApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentConfigRequest&, const Model::GetDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentGroupRequest&, const Model::GetDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentInstanceRequest&, const Model::GetDeploymentInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetOnPremisesInstanceRequest&, const Model::GetOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationRevisionsRequest&, const Model::ListApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentConfigsRequest&, const Model::ListDeploymentConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentConfigsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentGroupsRequest&, const Model::ListDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentInstancesRequest&, const Model::ListDeploymentInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListOnPremisesInstancesRequest&, const Model::ListOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterApplicationRevisionRequest&, const Model::RegisterApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterOnPremisesInstanceRequest&, const Model::RegisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RemoveTagsFromOnPremisesInstancesRequest&, const Model::RemoveTagsFromOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateDeploymentGroupRequest&, const Model::UpdateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentGroupResponseReceivedHandler;

  /*
    <fullname>AWS CodeDeploy</fullname> <b>Overview</b> <p>This is the AWS CodeDeploy API Reference. This guide provides descriptions of the AWS CodeDeploy APIs. For additional information, see the <a href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User Guide</a>.</p> <b>Using the APIs</b> <p>You can use the AWS CodeDeploy APIs to work with the following items:</p> <ul> <li> <p>Applications are unique identifiers that AWS CodeDeploy uses to ensure that the correct combinations of revisions, deployment configurations, and deployment groups are being referenced during deployments.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, list, and update applications.</p> </li> <li> <p>Deployment configurations are sets of deployment rules and deployment success and failure conditions that AWS CodeDeploy uses during deployments.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, and list deployment configurations.</p> </li> <li> <p>Deployment groups are groups of instances to which application revisions can be deployed.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, list, and update deployment groups.</p> </li> <li> <p>Instances represent Amazon EC2 instances to which application revisions are deployed. Instances are identified by their Amazon EC2 tags or Auto Scaling group names. Instances belong to deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get and list instances.</p> </li> <li> <p>Deployments represent the process of deploying revisions to instances.</p> <p>You can use the AWS CodeDeploy APIs to create, get, list, and stop deployments.</p> </li> <li> <p>Application revisions are archive files that are stored in Amazon S3 buckets or GitHub repositories. These revisions contain source content (such as source code, web pages, executable files, any deployment scripts, and similar) along with an Application Specification file (AppSpec file). (The AppSpec file is unique to AWS CodeDeploy; it defines a series of deployment actions that you want AWS CodeDeploy to execute.) An application revision is uniquely identified by its Amazon S3 object key and its ETag, version, or both (for application revisions that are stored in Amazon S3 buckets) or by its repository name and commit ID (for applications revisions that are stored in GitHub repositories). Application revisions are deployed through deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get, list, and register application revisions.</p> </li> </ul>
  */
  class AWS_CODEDEPLOY_API CodeDeployClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

            /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeDeployClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~CodeDeployClient();
            /*
            <p>Adds tags to on-premises instances.</p>
        */
        Model::AddTagsToOnPremisesInstancesOutcome AddTagsToOnPremisesInstances(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /*
            <p>Adds tags to on-premises instances.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /*
            <p>Adds tags to on-premises instances.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddTagsToOnPremisesInstancesAsync(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about one or more applications.</p>
        */
        Model::BatchGetApplicationsOutcome BatchGetApplications(const Model::BatchGetApplicationsRequest& request) const;

        /*
            <p>Gets information about one or more applications.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const Model::BatchGetApplicationsRequest& request) const;

        /*
            <p>Gets information about one or more applications.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void BatchGetApplicationsAsync(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about one or more deployments.</p>
        */
        Model::BatchGetDeploymentsOutcome BatchGetDeployments(const Model::BatchGetDeploymentsRequest& request) const;

        /*
            <p>Gets information about one or more deployments.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const Model::BatchGetDeploymentsRequest& request) const;

        /*
            <p>Gets information about one or more deployments.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void BatchGetDeploymentsAsync(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about one or more on-premises instances.</p>
        */
        Model::BatchGetOnPremisesInstancesOutcome BatchGetOnPremisesInstances(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /*
            <p>Gets information about one or more on-premises instances.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /*
            <p>Gets information about one or more on-premises instances.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void BatchGetOnPremisesInstancesAsync(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new application.</p>
        */
        Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /*
            <p>Creates a new application.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /*
            <p>Creates a new application.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deploys an application revision through the specified deployment group.</p>
        */
        Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /*
            <p>Deploys an application revision through the specified deployment group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /*
            <p>Deploys an application revision through the specified deployment group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new deployment configuration.</p>
        */
        Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

        /*
            <p>Creates a new deployment configuration.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const Model::CreateDeploymentConfigRequest& request) const;

        /*
            <p>Creates a new deployment configuration.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateDeploymentConfigAsync(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new deployment group for application revisions to be deployed to.</p>
        */
        Model::CreateDeploymentGroupOutcome CreateDeploymentGroup(const Model::CreateDeploymentGroupRequest& request) const;

        /*
            <p>Creates a new deployment group for application revisions to be deployed to.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const Model::CreateDeploymentGroupRequest& request) const;

        /*
            <p>Creates a new deployment group for application revisions to be deployed to.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateDeploymentGroupAsync(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes an application.</p>
        */
        Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /*
            <p>Deletes an application.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /*
            <p>Deletes an application.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>
        */
        Model::DeleteDeploymentConfigOutcome DeleteDeploymentConfig(const Model::DeleteDeploymentConfigRequest& request) const;

        /*
            <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const Model::DeleteDeploymentConfigRequest& request) const;

        /*
            <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteDeploymentConfigAsync(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a deployment group.</p>
        */
        Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

        /*
            <p>Deletes a deployment group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const Model::DeleteDeploymentGroupRequest& request) const;

        /*
            <p>Deletes a deployment group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteDeploymentGroupAsync(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deregisters an on-premises instance.</p>
        */
        Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /*
            <p>Deregisters an on-premises instance.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /*
            <p>Deregisters an on-premises instance.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeregisterOnPremisesInstanceAsync(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about an application.</p>
        */
        Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /*
            <p>Gets information about an application.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /*
            <p>Gets information about an application.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about an application revision.</p>
        */
        Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

        /*
            <p>Gets information about an application revision.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const Model::GetApplicationRevisionRequest& request) const;

        /*
            <p>Gets information about an application revision.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetApplicationRevisionAsync(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about a deployment.</p>
        */
        Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /*
            <p>Gets information about a deployment.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /*
            <p>Gets information about a deployment.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about a deployment configuration.</p>
        */
        Model::GetDeploymentConfigOutcome GetDeploymentConfig(const Model::GetDeploymentConfigRequest& request) const;

        /*
            <p>Gets information about a deployment configuration.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const Model::GetDeploymentConfigRequest& request) const;

        /*
            <p>Gets information about a deployment configuration.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetDeploymentConfigAsync(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about a deployment group.</p>
        */
        Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

        /*
            <p>Gets information about a deployment group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const Model::GetDeploymentGroupRequest& request) const;

        /*
            <p>Gets information about a deployment group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetDeploymentGroupAsync(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about an instance as part of a deployment.</p>
        */
        Model::GetDeploymentInstanceOutcome GetDeploymentInstance(const Model::GetDeploymentInstanceRequest& request) const;

        /*
            <p>Gets information about an instance as part of a deployment.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetDeploymentInstanceOutcomeCallable GetDeploymentInstanceCallable(const Model::GetDeploymentInstanceRequest& request) const;

        /*
            <p>Gets information about an instance as part of a deployment.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetDeploymentInstanceAsync(const Model::GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets information about an on-premises instance.</p>
        */
        Model::GetOnPremisesInstanceOutcome GetOnPremisesInstance(const Model::GetOnPremisesInstanceRequest& request) const;

        /*
            <p>Gets information about an on-premises instance.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const Model::GetOnPremisesInstanceRequest& request) const;

        /*
            <p>Gets information about an on-premises instance.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetOnPremisesInstanceAsync(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists information about revisions for an application.</p>
        */
        Model::ListApplicationRevisionsOutcome ListApplicationRevisions(const Model::ListApplicationRevisionsRequest& request) const;

        /*
            <p>Lists information about revisions for an application.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const Model::ListApplicationRevisionsRequest& request) const;

        /*
            <p>Lists information about revisions for an application.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListApplicationRevisionsAsync(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the applications registered with the applicable IAM user or AWS account.</p>
        */
        Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /*
            <p>Lists the applications registered with the applicable IAM user or AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /*
            <p>Lists the applications registered with the applicable IAM user or AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>
        */
        Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

        /*
            <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const Model::ListDeploymentConfigsRequest& request) const;

        /*
            <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListDeploymentConfigsAsync(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>
        */
        Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

        /*
            <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const Model::ListDeploymentGroupsRequest& request) const;

        /*
            <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListDeploymentGroupsAsync(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>
        */
        Model::ListDeploymentInstancesOutcome ListDeploymentInstances(const Model::ListDeploymentInstancesRequest& request) const;

        /*
            <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListDeploymentInstancesOutcomeCallable ListDeploymentInstancesCallable(const Model::ListDeploymentInstancesRequest& request) const;

        /*
            <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListDeploymentInstancesAsync(const Model::ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>
        */
        Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /*
            <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /*
            <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>
        */
        Model::ListOnPremisesInstancesOutcome ListOnPremisesInstances(const Model::ListOnPremisesInstancesRequest& request) const;

        /*
            <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const Model::ListOnPremisesInstancesRequest& request) const;

        /*
            <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListOnPremisesInstancesAsync(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Registers with AWS CodeDeploy a revision for the specified application.</p>
        */
        Model::RegisterApplicationRevisionOutcome RegisterApplicationRevision(const Model::RegisterApplicationRevisionRequest& request) const;

        /*
            <p>Registers with AWS CodeDeploy a revision for the specified application.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const Model::RegisterApplicationRevisionRequest& request) const;

        /*
            <p>Registers with AWS CodeDeploy a revision for the specified application.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RegisterApplicationRevisionAsync(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Registers an on-premises instance.</p>
        */
        Model::RegisterOnPremisesInstanceOutcome RegisterOnPremisesInstance(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /*
            <p>Registers an on-premises instance.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /*
            <p>Registers an on-premises instance.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RegisterOnPremisesInstanceAsync(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes one or more tags from one or more on-premises instances.</p>
        */
        Model::RemoveTagsFromOnPremisesInstancesOutcome RemoveTagsFromOnPremisesInstances(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /*
            <p>Removes one or more tags from one or more on-premises instances.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /*
            <p>Removes one or more tags from one or more on-premises instances.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemoveTagsFromOnPremisesInstancesAsync(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Attempts to stop an ongoing deployment.</p>
        */
        Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /*
            <p>Attempts to stop an ongoing deployment.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

        /*
            <p>Attempts to stop an ongoing deployment.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes an existing application's name.</p>
        */
        Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /*
            <p>Changes an existing application's name.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /*
            <p>Changes an existing application's name.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes information about an existing deployment group.</p>
        */
        Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

        /*
            <p>Changes information about an existing deployment group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const Model::UpdateDeploymentGroupRequest& request) const;

        /*
            <p>Changes information about an existing deployment group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateDeploymentGroupAsync(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
        void AddTagsToOnPremisesInstancesAsyncHelper(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetApplicationsAsyncHelper(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentsAsyncHelper(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetOnPremisesInstancesAsyncHelper(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentConfigAsyncHelper(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentGroupAsyncHelper(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentConfigAsyncHelper(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentGroupAsyncHelper(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterOnPremisesInstanceAsyncHelper(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationRevisionAsyncHelper(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentConfigAsyncHelper(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentGroupAsyncHelper(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentInstanceAsyncHelper(const Model::GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOnPremisesInstanceAsyncHelper(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationRevisionsAsyncHelper(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentConfigsAsyncHelper(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentGroupsAsyncHelper(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentInstancesAsyncHelper(const Model::ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOnPremisesInstancesAsyncHelper(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterApplicationRevisionAsyncHelper(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterOnPremisesInstanceAsyncHelper(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromOnPremisesInstancesAsyncHelper(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDeploymentAsyncHelper(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeploymentGroupAsyncHelper(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CodeDeploy
} // namespace Aws
