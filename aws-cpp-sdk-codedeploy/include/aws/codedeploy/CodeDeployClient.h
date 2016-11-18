/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/BatchGetApplicationRevisionsResult.h>
#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentInstancesResult.h>
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
        class BatchGetApplicationRevisionsRequest;
        class BatchGetApplicationsRequest;
        class BatchGetDeploymentGroupsRequest;
        class BatchGetDeploymentInstancesRequest;
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

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> AddTagsToOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<BatchGetApplicationRevisionsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetApplicationRevisionsOutcome;
        typedef Aws::Utils::Outcome<BatchGetApplicationsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetApplicationsOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentGroupsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentGroupsOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentInstancesOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentsOutcome;
        typedef Aws::Utils::Outcome<BatchGetOnPremisesInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<CodeDeployErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentConfigResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeregisterOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, Aws::Client::AWSError<CodeDeployErrors>> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationRevisionResult, Aws::Client::AWSError<CodeDeployErrors>> GetApplicationRevisionOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentConfigResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentInstanceResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentInstanceOutcome;
        typedef Aws::Utils::Outcome<GetOnPremisesInstanceResult, Aws::Client::AWSError<CodeDeployErrors>> GetOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<ListApplicationRevisionsResult, Aws::Client::AWSError<CodeDeployErrors>> ListApplicationRevisionsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<CodeDeployErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentConfigsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentConfigsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentGroupsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentGroupsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentInstancesOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListOnPremisesInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> ListOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> RegisterApplicationRevisionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> RegisterOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> RemoveTagsFromOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<StopDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> StopDeploymentOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodeDeployErrors>> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> UpdateDeploymentGroupOutcome;

        typedef std::future<AddTagsToOnPremisesInstancesOutcome> AddTagsToOnPremisesInstancesOutcomeCallable;
        typedef std::future<BatchGetApplicationRevisionsOutcome> BatchGetApplicationRevisionsOutcomeCallable;
        typedef std::future<BatchGetApplicationsOutcome> BatchGetApplicationsOutcomeCallable;
        typedef std::future<BatchGetDeploymentGroupsOutcome> BatchGetDeploymentGroupsOutcomeCallable;
        typedef std::future<BatchGetDeploymentInstancesOutcome> BatchGetDeploymentInstancesOutcomeCallable;
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
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationRevisionsRequest&, const Model::BatchGetApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationsRequest&, const Model::BatchGetApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentGroupsRequest&, const Model::BatchGetDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentInstancesRequest&, const Model::BatchGetDeploymentInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentInstancesResponseReceivedHandler;
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

  /**
   * <fullname>AWS CodeDeploy</fullname> <p> <b>Overview</b> </p> <p>This reference
   * guide provides descriptions of the AWS CodeDeploy APIs. For more information
   * about AWS CodeDeploy, see the <a
   * href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
   * User Guide</a>.</p> <p> <b>Using the APIs</b> </p> <p>You can use the AWS
   * CodeDeploy APIs to work with the following:</p> <ul> <li> <p>Applications are
   * unique identifiers used by AWS CodeDeploy to ensure the correct combinations of
   * revisions, deployment configurations, and deployment groups are being referenced
   * during deployments.</p> <p>You can use the AWS CodeDeploy APIs to create,
   * delete, get, list, and update applications.</p> </li> <li> <p>Deployment
   * configurations are sets of deployment rules and success and failure conditions
   * used by AWS CodeDeploy during deployments.</p> <p>You can use the AWS CodeDeploy
   * APIs to create, delete, get, and list deployment configurations.</p> </li> <li>
   * <p>Deployment groups are groups of instances to which application revisions can
   * be deployed.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get,
   * list, and update deployment groups.</p> </li> <li> <p>Instances represent Amazon
   * EC2 instances to which application revisions are deployed. Instances are
   * identified by their Amazon EC2 tags or Auto Scaling group names. Instances
   * belong to deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get
   * and list instance.</p> </li> <li> <p>Deployments represent the process of
   * deploying revisions to instances.</p> <p>You can use the AWS CodeDeploy APIs to
   * create, get, list, and stop deployments.</p> </li> <li> <p>Application revisions
   * are archive files stored in Amazon S3 buckets or GitHub repositories. These
   * revisions contain source content (such as source code, web pages, executable
   * files, and deployment scripts) along with an application specification (AppSpec)
   * file. (The AppSpec file is unique to AWS CodeDeploy; it defines the deployment
   * actions you want AWS CodeDeploy to execute.) For application revisions stored in
   * Amazon S3 buckets, an application revision is uniquely identified by its Amazon
   * S3 object key and its ETag, version, or both. For application revisions stored
   * in GitHub repositories, an application revision is uniquely identified by its
   * repository name and commit ID. Application revisions are deployed through
   * deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get, list, and
   * register application revisions.</p> </li> </ul>
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CodeDeployClient();

        /**
         * <p>Adds tags to on-premises instances.</p>
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcome AddTagsToOnPremisesInstances(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * <p>Adds tags to on-premises instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * <p>Adds tags to on-premises instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToOnPremisesInstancesAsync(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more application revisions.</p>
         */
        virtual Model::BatchGetApplicationRevisionsOutcome BatchGetApplicationRevisions(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * <p>Gets information about one or more application revisions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationRevisionsOutcomeCallable BatchGetApplicationRevisionsCallable(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * <p>Gets information about one or more application revisions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationRevisionsAsync(const Model::BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more applications.</p>
         */
        virtual Model::BatchGetApplicationsOutcome BatchGetApplications(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * <p>Gets information about one or more applications.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * <p>Gets information about one or more applications.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationsAsync(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about one or more deployment groups.</p>
         */
        virtual Model::BatchGetDeploymentGroupsOutcome BatchGetDeploymentGroups(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * <p>Get information about one or more deployment groups.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentGroupsOutcomeCallable BatchGetDeploymentGroupsCallable(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * <p>Get information about one or more deployment groups.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentGroupsAsync(const Model::BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p>
         */
        virtual Model::BatchGetDeploymentInstancesOutcome BatchGetDeploymentInstances(const Model::BatchGetDeploymentInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentInstancesOutcomeCallable BatchGetDeploymentInstancesCallable(const Model::BatchGetDeploymentInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentInstancesAsync(const Model::BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more deployments.</p>
         */
        virtual Model::BatchGetDeploymentsOutcome BatchGetDeployments(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about one or more deployments.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about one or more deployments.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentsAsync(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p>
         */
        virtual Model::BatchGetOnPremisesInstancesOutcome BatchGetOnPremisesInstances(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetOnPremisesInstancesAsync(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application.</p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys an application revision through the specified deployment group.</p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Deploys an application revision through the specified deployment group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Deploys an application revision through the specified deployment group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment configuration.</p>
         */
        virtual Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * <p>Creates a deployment configuration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * <p>Creates a deployment configuration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentConfigAsync(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p>
         */
        virtual Model::CreateDeploymentGroupOutcome CreateDeploymentGroup(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentGroupAsync(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note>
         */
        virtual Model::DeleteDeploymentConfigOutcome DeleteDeploymentConfig(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentConfigAsync(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment group.</p>
         */
        virtual Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * <p>Deletes a deployment group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * <p>Deletes a deployment group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentGroupAsync(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an on-premises instance.</p>
         */
        virtual Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Deregisters an on-premises instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Deregisters an on-premises instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterOnPremisesInstanceAsync(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application.</p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets information about an application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets information about an application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application revision.</p>
         */
        virtual Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * <p>Gets information about an application revision.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * <p>Gets information about an application revision.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationRevisionAsync(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment.</p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a deployment.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a deployment.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment configuration.</p>
         */
        virtual Model::GetDeploymentConfigOutcome GetDeploymentConfig(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * <p>Gets information about a deployment configuration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * <p>Gets information about a deployment configuration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentConfigAsync(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment group.</p>
         */
        virtual Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * <p>Gets information about a deployment group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * <p>Gets information about a deployment group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentGroupAsync(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p>
         */
        virtual Model::GetDeploymentInstanceOutcome GetDeploymentInstance(const Model::GetDeploymentInstanceRequest& request) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentInstanceOutcomeCallable GetDeploymentInstanceCallable(const Model::GetDeploymentInstanceRequest& request) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentInstanceAsync(const Model::GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an on-premises instance.</p>
         */
        virtual Model::GetOnPremisesInstanceOutcome GetOnPremisesInstance(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * <p>Gets information about an on-premises instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * <p>Gets information about an on-premises instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOnPremisesInstanceAsync(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about revisions for an application.</p>
         */
        virtual Model::ListApplicationRevisionsOutcome ListApplicationRevisions(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * <p>Lists information about revisions for an application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * <p>Lists information about revisions for an application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationRevisionsAsync(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p>
         */
        virtual Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentConfigsAsync(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p>
         */
        virtual Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentGroupsAsync(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p>
         */
        virtual Model::ListDeploymentInstancesOutcome ListDeploymentInstances(const Model::ListDeploymentInstancesRequest& request) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentInstancesOutcomeCallable ListDeploymentInstancesCallable(const Model::ListDeploymentInstancesRequest& request) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentInstancesAsync(const Model::ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p>
         */
        virtual Model::ListOnPremisesInstancesOutcome ListOnPremisesInstances(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOnPremisesInstancesAsync(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified application.</p>
         */
        virtual Model::RegisterApplicationRevisionOutcome RegisterApplicationRevision(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterApplicationRevisionAsync(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an on-premises instance.</p>
         */
        virtual Model::RegisterOnPremisesInstanceOutcome RegisterOnPremisesInstance(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Registers an on-premises instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Registers an on-premises instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterOnPremisesInstanceAsync(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from one or more on-premises instances.</p>
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcome RemoveTagsFromOnPremisesInstances(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * <p>Removes one or more tags from one or more on-premises instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * <p>Removes one or more tags from one or more on-premises instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromOnPremisesInstancesAsync(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the name of an application.</p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Changes the name of an application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Changes the name of an application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a deployment group.</p>
         */
        virtual Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * <p>Changes information about a deployment group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * <p>Changes information about a deployment group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentGroupAsync(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToOnPremisesInstancesAsyncHelper(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetApplicationRevisionsAsyncHelper(const Model::BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetApplicationsAsyncHelper(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentGroupsAsyncHelper(const Model::BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentInstancesAsyncHelper(const Model::BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
