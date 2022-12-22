/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codedeploy/CodeDeployServiceClientModel.h>

namespace Aws
{
namespace CodeDeploy
{
  /**
   * <p>CodeDeploy is a deployment service that automates application deployments to
   * Amazon EC2 instances, on-premises instances running in your own facility,
   * serverless Lambda functions, or applications in an Amazon ECS service.</p>
   * <p>You can deploy a nearly unlimited variety of application content, such as an
   * updated Lambda function, updated applications in an Amazon ECS service, code,
   * web and configuration files, executables, packages, scripts, multimedia files,
   * and so on. CodeDeploy can deploy application content stored in Amazon S3
   * buckets, GitHub repositories, or Bitbucket repositories. You do not need to make
   * changes to your existing code before you can use CodeDeploy.</p> <p>CodeDeploy
   * makes it easier for you to rapidly release new features, helps you avoid
   * downtime during application deployment, and handles the complexity of updating
   * your applications, without many of the risks associated with error-prone manual
   * deployments.</p> <p> <b>CodeDeploy Components</b> </p> <p>Use the information in
   * this guide to help you work with the following CodeDeploy components:</p> <ul>
   * <li> <p> <b>Application</b>: A name that uniquely identifies the application you
   * want to deploy. CodeDeploy uses this name, which functions as a container, to
   * ensure the correct combination of revision, deployment configuration, and
   * deployment group are referenced during a deployment.</p> </li> <li> <p>
   * <b>Deployment group</b>: A set of individual instances, CodeDeploy Lambda
   * deployment configuration settings, or an Amazon ECS service and network details.
   * A Lambda deployment group specifies how to route traffic to a new version of a
   * Lambda function. An Amazon ECS deployment group specifies the service created in
   * Amazon ECS to deploy, a load balancer, and a listener to reroute production
   * traffic to an updated containerized application. An Amazon EC2/On-premises
   * deployment group contains individually tagged instances, Amazon EC2 instances in
   * Amazon EC2 Auto Scaling groups, or both. All deployment groups can specify
   * optional trigger, alarm, and rollback settings.</p> </li> <li> <p> <b>Deployment
   * configuration</b>: A set of deployment rules and deployment success and failure
   * conditions used by CodeDeploy during a deployment.</p> </li> <li> <p>
   * <b>Deployment</b>: The process and the components used when updating a Lambda
   * function, a containerized application in an Amazon ECS service, or of installing
   * content on one or more instances. </p> </li> <li> <p> <b>Application
   * revisions</b>: For an Lambda deployment, this is an AppSpec file that specifies
   * the Lambda function to be updated and one or more functions to validate
   * deployment lifecycle events. For an Amazon ECS deployment, this is an AppSpec
   * file that specifies the Amazon ECS task definition, container, and port where
   * production traffic is rerouted. For an EC2/On-premises deployment, this is an
   * archive file that contains source content—source code, webpages, executable
   * files, and deployment scripts—along with an AppSpec file. Revisions are stored
   * in Amazon S3 buckets or GitHub repositories. For Amazon S3, a revision is
   * uniquely identified by its Amazon S3 object key and its ETag, version, or both.
   * For GitHub, a revision is uniquely identified by its commit ID.</p> </li> </ul>
   * <p>This guide also contains information to help you get details about the
   * instances in your deployments, to make on-premises instances available for
   * CodeDeploy deployments, to get details about a Lambda function deployment, and
   * to get details about Amazon ECS service deployments.</p> <p> <b>CodeDeploy
   * Information Resources</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">CodeDeploy User
   * Guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/codedeploy/latest/APIReference/">CodeDeploy
   * API Reference Guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/deploy/index.html">CLI
   * Reference for CodeDeploy</a> </p> </li> <li> <p> <a
   * href="https://forums.aws.amazon.com/forum.jspa?forumID=179">CodeDeploy Developer
   * Forum</a> </p> </li> </ul>
   */
  class AWS_CODEDEPLOY_API CodeDeployClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeDeployClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::CodeDeploy::CodeDeployClientConfiguration& clientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration(),
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CodeDeploy::CodeDeployClientConfiguration& clientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeDeployClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CodeDeploy::CodeDeployClientConfiguration& clientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeDeployClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeDeployClient();

        /**
         * <p>Adds tags to on-premises instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AddTagsToOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcome AddTagsToOnPremisesInstances(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToOnPremisesInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * An Async wrapper for AddTagsToOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToOnPremisesInstancesAsync(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more application revisions. The maximum number
         * of application revisions that can be returned is 25.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetApplicationRevisionsOutcome BatchGetApplicationRevisions(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetApplicationRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationRevisionsOutcomeCallable BatchGetApplicationRevisionsCallable(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * An Async wrapper for BatchGetApplicationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationRevisionsAsync(const Model::BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more applications. The maximum number of
         * applications that can be returned is 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetApplicationsOutcome BatchGetApplications(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * An Async wrapper for BatchGetApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationsAsync(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more deployment groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentGroupsOutcome BatchGetDeploymentGroups(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDeploymentGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentGroupsOutcomeCallable BatchGetDeploymentGroupsCallable(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * An Async wrapper for BatchGetDeploymentGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentGroupsAsync(const Model::BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of one or more targets associated with a deployment. This
         * method works with all compute types and should be used instead of the deprecated
         * <code>BatchGetDeploymentInstances</code>. The maximum number of targets that can
         * be returned is 25.</p> <p> The type of targets returned depends on the
         * deployment's compute platform or deployment method: </p> <ul> <li> <p>
         * <b>EC2/On-premises</b>: Information about Amazon EC2 instance targets. </p>
         * </li> <li> <p> <b>Lambda</b>: Information about Lambda functions targets. </p>
         * </li> <li> <p> <b>Amazon ECS</b>: Information about Amazon ECS service targets.
         * </p> </li> <li> <p> <b>CloudFormation</b>: Information about targets of
         * blue/green deployments initiated by a CloudFormation stack update.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentTargetsOutcome BatchGetDeploymentTargets(const Model::BatchGetDeploymentTargetsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDeploymentTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentTargetsOutcomeCallable BatchGetDeploymentTargetsCallable(const Model::BatchGetDeploymentTargetsRequest& request) const;

        /**
         * An Async wrapper for BatchGetDeploymentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentTargetsAsync(const Model::BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more deployments. The maximum number of
         * deployments that can be returned is 25.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentsOutcome BatchGetDeployments(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * An Async wrapper for BatchGetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentsAsync(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more on-premises instances. The maximum number
         * of on-premises instances that can be returned is 25.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetOnPremisesInstancesOutcome BatchGetOnPremisesInstances(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetOnPremisesInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * An Async wrapper for BatchGetOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetOnPremisesInstancesAsync(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a blue/green deployment, starts the process of rerouting traffic from
         * instances in the original environment to instances in the replacement
         * environment without waiting for a specified wait time to elapse. (Traffic
         * rerouting, which is achieved by registering instances in the replacement
         * environment with the load balancer, can start as soon as all instances have a
         * status of Ready.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ContinueDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::ContinueDeploymentOutcome ContinueDeployment(const Model::ContinueDeploymentRequest& request) const;

        /**
         * A Callable wrapper for ContinueDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContinueDeploymentOutcomeCallable ContinueDeploymentCallable(const Model::ContinueDeploymentRequest& request) const;

        /**
         * An Async wrapper for ContinueDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContinueDeploymentAsync(const Model::ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys an application revision through the specified deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a deployment configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateDeploymentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * An Async wrapper for CreateDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentConfigAsync(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment group to which application revisions are
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentGroupOutcome CreateDeploymentGroup(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentGroupAsync(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment configuration.</p>  <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentConfigOutcome DeleteDeploymentConfig(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeploymentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentConfigAsync(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentGroupAsync(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a GitHub account connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGitHubAccountTokenOutcome DeleteGitHubAccountToken(const Model::DeleteGitHubAccountTokenRequest& request) const;

        /**
         * A Callable wrapper for DeleteGitHubAccountToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGitHubAccountTokenOutcomeCallable DeleteGitHubAccountTokenCallable(const Model::DeleteGitHubAccountTokenRequest& request) const;

        /**
         * An Async wrapper for DeleteGitHubAccountToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGitHubAccountTokenAsync(const Model::DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes resources linked to an external ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteResourcesByExternalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcesByExternalIdOutcome DeleteResourcesByExternalId(const Model::DeleteResourcesByExternalIdRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcesByExternalId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcesByExternalIdOutcomeCallable DeleteResourcesByExternalIdCallable(const Model::DeleteResourcesByExternalIdRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcesByExternalId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcesByExternalIdAsync(const Model::DeleteResourcesByExternalIdRequest& request, const DeleteResourcesByExternalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOnPremisesInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * An Async wrapper for DeregisterOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterOnPremisesInstanceAsync(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * An Async wrapper for GetApplicationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationRevisionAsync(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment.</p>  <p> The <code>content</code>
         * property of the <code>appSpecContent</code> object in the returned revision is
         * always null. Use <code>GetApplicationRevision</code> and the <code>sha256</code>
         * property of the returned <code>appSpecContent</code> object to get the content
         * of the deployment’s AppSpec file. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentConfigOutcome GetDeploymentConfig(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * An Async wrapper for GetDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentConfigAsync(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * An Async wrapper for GetDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentGroupAsync(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about a deployment target. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentTargetOutcome GetDeploymentTarget(const Model::GetDeploymentTargetRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentTargetOutcomeCallable GetDeploymentTargetCallable(const Model::GetDeploymentTargetRequest& request) const;

        /**
         * An Async wrapper for GetDeploymentTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentTargetAsync(const Model::GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about an on-premises instance. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOnPremisesInstanceOutcome GetOnPremisesInstance(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetOnPremisesInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * An Async wrapper for GetOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOnPremisesInstanceAsync(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about revisions for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationRevisionsOutcome ListApplicationRevisions(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * An Async wrapper for ListApplicationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationRevisionsAsync(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the applications registered with the IAM user or Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment configurations with the IAM user or Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * An Async wrapper for ListDeploymentConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentConfigsAsync(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment groups for an application registered with the IAM user
         * or Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * An Async wrapper for ListDeploymentGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentGroupsAsync(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of target IDs that are associated a deployment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentTargetsOutcome ListDeploymentTargets(const Model::ListDeploymentTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentTargetsOutcomeCallable ListDeploymentTargetsCallable(const Model::ListDeploymentTargetsRequest& request) const;

        /**
         * An Async wrapper for ListDeploymentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentTargetsAsync(const Model::ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the IAM user or Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of stored connections to GitHub accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListGitHubAccountTokenNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGitHubAccountTokenNamesOutcome ListGitHubAccountTokenNames(const Model::ListGitHubAccountTokenNamesRequest& request) const;

        /**
         * A Callable wrapper for ListGitHubAccountTokenNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGitHubAccountTokenNamesOutcomeCallable ListGitHubAccountTokenNamesCallable(const Model::ListGitHubAccountTokenNamesRequest& request) const;

        /**
         * An Async wrapper for ListGitHubAccountTokenNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGitHubAccountTokenNamesAsync(const Model::ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * are listed. To list only registered or deregistered on-premises instance names,
         * use the registration status parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOnPremisesInstancesOutcome ListOnPremisesInstances(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListOnPremisesInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * An Async wrapper for ListOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOnPremisesInstancesAsync(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of tags for the resource identified by a specified Amazon
         * Resource Name (ARN). Tags are used to organize and categorize your CodeDeploy
         * resources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListTagsForResource">AWS
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
         * <p> Sets the result of a Lambda validation function. The function validates
         * lifecycle hooks during a deployment that uses the Lambda or Amazon ECS compute
         * platform. For Lambda deployments, the available lifecycle hooks are
         * <code>BeforeAllowTraffic</code> and <code>AfterAllowTraffic</code>. For Amazon
         * ECS deployments, the available lifecycle hooks are <code>BeforeInstall</code>,
         * <code>AfterInstall</code>, <code>AfterAllowTestTraffic</code>,
         * <code>BeforeAllowTraffic</code>, and <code>AfterAllowTraffic</code>. Lambda
         * validation functions return <code>Succeeded</code> or <code>Failed</code>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/reference-appspec-file-structure-hooks.html#appspec-hooks-lambda">AppSpec
         * 'hooks' Section for an Lambda Deployment </a> and <a
         * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/reference-appspec-file-structure-hooks.html#appspec-hooks-ecs">AppSpec
         * 'hooks' Section for an Amazon ECS Deployment</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/PutLifecycleEventHookExecutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleEventHookExecutionStatusOutcome PutLifecycleEventHookExecutionStatus(const Model::PutLifecycleEventHookExecutionStatusRequest& request) const;

        /**
         * A Callable wrapper for PutLifecycleEventHookExecutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecycleEventHookExecutionStatusOutcomeCallable PutLifecycleEventHookExecutionStatusCallable(const Model::PutLifecycleEventHookExecutionStatusRequest& request) const;

        /**
         * An Async wrapper for PutLifecycleEventHookExecutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecycleEventHookExecutionStatusAsync(const Model::PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers with CodeDeploy a revision for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterApplicationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterApplicationRevisionOutcome RegisterApplicationRevision(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * A Callable wrapper for RegisterApplicationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * An Async wrapper for RegisterApplicationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterApplicationRevisionAsync(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an on-premises instance.</p>  <p>Only one IAM ARN (an IAM
         * session ARN or IAM user ARN) is supported in the request. You cannot use
         * both.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOnPremisesInstanceOutcome RegisterOnPremisesInstance(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterOnPremisesInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * An Async wrapper for RegisterOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterOnPremisesInstanceAsync(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from one or more on-premises
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RemoveTagsFromOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcome RemoveTagsFromOnPremisesInstances(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromOnPremisesInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromOnPremisesInstancesAsync(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StopDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

        /**
         * An Async wrapper for StopDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associates the list of tags in the input <code>Tags</code> parameter with
         * the resource identified by the <code>ResourceArn</code> input parameter.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TagResource">AWS
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
         * <p> Disassociates a resource from a list of tags. The resource is identified by
         * the <code>ResourceArn</code> input parameter. The tags are identified by the
         * list of keys in the <code>TagKeys</code> input parameter. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UntagResource">AWS
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
         * <p>Changes the name of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentGroupAsync(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeDeployEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeDeployClient>;
      void init(const CodeDeployClientConfiguration& clientConfiguration);

      CodeDeployClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeDeployEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeDeploy
} // namespace Aws
