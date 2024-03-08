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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeDeployClientConfiguration ClientConfigurationType;
      typedef CodeDeployEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::CodeDeploy::CodeDeployClientConfiguration& clientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration(),
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CodeDeploy::CodeDeployClientConfiguration& clientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeDeployClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AddTagsToOnPremisesInstancesRequestT = Model::AddTagsToOnPremisesInstancesRequest>
        Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const AddTagsToOnPremisesInstancesRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::AddTagsToOnPremisesInstances, request);
        }

        /**
         * An Async wrapper for AddTagsToOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToOnPremisesInstancesRequestT = Model::AddTagsToOnPremisesInstancesRequest>
        void AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequestT& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::AddTagsToOnPremisesInstances, request, handler, context);
        }

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
        template<typename BatchGetApplicationRevisionsRequestT = Model::BatchGetApplicationRevisionsRequest>
        Model::BatchGetApplicationRevisionsOutcomeCallable BatchGetApplicationRevisionsCallable(const BatchGetApplicationRevisionsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetApplicationRevisions, request);
        }

        /**
         * An Async wrapper for BatchGetApplicationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetApplicationRevisionsRequestT = Model::BatchGetApplicationRevisionsRequest>
        void BatchGetApplicationRevisionsAsync(const BatchGetApplicationRevisionsRequestT& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetApplicationRevisions, request, handler, context);
        }

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
        template<typename BatchGetApplicationsRequestT = Model::BatchGetApplicationsRequest>
        Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const BatchGetApplicationsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetApplications, request);
        }

        /**
         * An Async wrapper for BatchGetApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetApplicationsRequestT = Model::BatchGetApplicationsRequest>
        void BatchGetApplicationsAsync(const BatchGetApplicationsRequestT& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetApplications, request, handler, context);
        }

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
        template<typename BatchGetDeploymentGroupsRequestT = Model::BatchGetDeploymentGroupsRequest>
        Model::BatchGetDeploymentGroupsOutcomeCallable BatchGetDeploymentGroupsCallable(const BatchGetDeploymentGroupsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetDeploymentGroups, request);
        }

        /**
         * An Async wrapper for BatchGetDeploymentGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDeploymentGroupsRequestT = Model::BatchGetDeploymentGroupsRequest>
        void BatchGetDeploymentGroupsAsync(const BatchGetDeploymentGroupsRequestT& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetDeploymentGroups, request, handler, context);
        }

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
        template<typename BatchGetDeploymentTargetsRequestT = Model::BatchGetDeploymentTargetsRequest>
        Model::BatchGetDeploymentTargetsOutcomeCallable BatchGetDeploymentTargetsCallable(const BatchGetDeploymentTargetsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetDeploymentTargets, request);
        }

        /**
         * An Async wrapper for BatchGetDeploymentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDeploymentTargetsRequestT = Model::BatchGetDeploymentTargetsRequest>
        void BatchGetDeploymentTargetsAsync(const BatchGetDeploymentTargetsRequestT& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetDeploymentTargets, request, handler, context);
        }

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
        template<typename BatchGetDeploymentsRequestT = Model::BatchGetDeploymentsRequest>
        Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const BatchGetDeploymentsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetDeployments, request);
        }

        /**
         * An Async wrapper for BatchGetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDeploymentsRequestT = Model::BatchGetDeploymentsRequest>
        void BatchGetDeploymentsAsync(const BatchGetDeploymentsRequestT& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetDeployments, request, handler, context);
        }

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
        template<typename BatchGetOnPremisesInstancesRequestT = Model::BatchGetOnPremisesInstancesRequest>
        Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const BatchGetOnPremisesInstancesRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::BatchGetOnPremisesInstances, request);
        }

        /**
         * An Async wrapper for BatchGetOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetOnPremisesInstancesRequestT = Model::BatchGetOnPremisesInstancesRequest>
        void BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequestT& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::BatchGetOnPremisesInstances, request, handler, context);
        }

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
        template<typename ContinueDeploymentRequestT = Model::ContinueDeploymentRequest>
        Model::ContinueDeploymentOutcomeCallable ContinueDeploymentCallable(const ContinueDeploymentRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ContinueDeployment, request);
        }

        /**
         * An Async wrapper for ContinueDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ContinueDeploymentRequestT = Model::ContinueDeploymentRequest>
        void ContinueDeploymentAsync(const ContinueDeploymentRequestT& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ContinueDeployment, request, handler, context);
        }

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::CreateApplication, request, handler, context);
        }

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
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::CreateDeployment, request, handler, context);
        }

        /**
         * <p> Creates a deployment configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateDeploymentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentConfigRequestT = Model::CreateDeploymentConfigRequest>
        Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const CreateDeploymentConfigRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::CreateDeploymentConfig, request);
        }

        /**
         * An Async wrapper for CreateDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentConfigRequestT = Model::CreateDeploymentConfigRequest>
        void CreateDeploymentConfigAsync(const CreateDeploymentConfigRequestT& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::CreateDeploymentConfig, request, handler, context);
        }

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
        template<typename CreateDeploymentGroupRequestT = Model::CreateDeploymentGroupRequest>
        Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const CreateDeploymentGroupRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::CreateDeploymentGroup, request);
        }

        /**
         * An Async wrapper for CreateDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentGroupRequestT = Model::CreateDeploymentGroupRequest>
        void CreateDeploymentGroupAsync(const CreateDeploymentGroupRequestT& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::CreateDeploymentGroup, request, handler, context);
        }

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeleteApplication, request, handler, context);
        }

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
        template<typename DeleteDeploymentConfigRequestT = Model::DeleteDeploymentConfigRequest>
        Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const DeleteDeploymentConfigRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeleteDeploymentConfig, request);
        }

        /**
         * An Async wrapper for DeleteDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentConfigRequestT = Model::DeleteDeploymentConfigRequest>
        void DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequestT& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeleteDeploymentConfig, request, handler, context);
        }

        /**
         * <p>Deletes a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentGroupRequestT = Model::DeleteDeploymentGroupRequest>
        Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const DeleteDeploymentGroupRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeleteDeploymentGroup, request);
        }

        /**
         * An Async wrapper for DeleteDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentGroupRequestT = Model::DeleteDeploymentGroupRequest>
        void DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequestT& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeleteDeploymentGroup, request, handler, context);
        }

        /**
         * <p>Deletes a GitHub account connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGitHubAccountTokenOutcome DeleteGitHubAccountToken(const Model::DeleteGitHubAccountTokenRequest& request) const;

        /**
         * A Callable wrapper for DeleteGitHubAccountToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGitHubAccountTokenRequestT = Model::DeleteGitHubAccountTokenRequest>
        Model::DeleteGitHubAccountTokenOutcomeCallable DeleteGitHubAccountTokenCallable(const DeleteGitHubAccountTokenRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeleteGitHubAccountToken, request);
        }

        /**
         * An Async wrapper for DeleteGitHubAccountToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGitHubAccountTokenRequestT = Model::DeleteGitHubAccountTokenRequest>
        void DeleteGitHubAccountTokenAsync(const DeleteGitHubAccountTokenRequestT& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeleteGitHubAccountToken, request, handler, context);
        }

        /**
         * <p>Deletes resources linked to an external ID. This action only applies if you
         * have configured blue/green deployments through CloudFormation. </p>  <p>It
         * is not necessary to call this action directly. CloudFormation calls it on your
         * behalf when it needs to delete stack resources. This action is offered publicly
         * in case you need to delete resources to comply with General Data Protection
         * Regulation (GDPR) requirements.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteResourcesByExternalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcesByExternalIdOutcome DeleteResourcesByExternalId(const Model::DeleteResourcesByExternalIdRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcesByExternalId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcesByExternalIdRequestT = Model::DeleteResourcesByExternalIdRequest>
        Model::DeleteResourcesByExternalIdOutcomeCallable DeleteResourcesByExternalIdCallable(const DeleteResourcesByExternalIdRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeleteResourcesByExternalId, request);
        }

        /**
         * An Async wrapper for DeleteResourcesByExternalId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcesByExternalIdRequestT = Model::DeleteResourcesByExternalIdRequest>
        void DeleteResourcesByExternalIdAsync(const DeleteResourcesByExternalIdRequestT& request, const DeleteResourcesByExternalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeleteResourcesByExternalId, request, handler, context);
        }

        /**
         * <p>Deregisters an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOnPremisesInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterOnPremisesInstanceRequestT = Model::DeregisterOnPremisesInstanceRequest>
        Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const DeregisterOnPremisesInstanceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::DeregisterOnPremisesInstance, request);
        }

        /**
         * An Async wrapper for DeregisterOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterOnPremisesInstanceRequestT = Model::DeregisterOnPremisesInstanceRequest>
        void DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequestT& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::DeregisterOnPremisesInstance, request, handler, context);
        }

        /**
         * <p>Gets information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Gets information about an application revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRevisionRequestT = Model::GetApplicationRevisionRequest>
        Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const GetApplicationRevisionRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetApplicationRevision, request);
        }

        /**
         * An Async wrapper for GetApplicationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRevisionRequestT = Model::GetApplicationRevisionRequest>
        void GetApplicationRevisionAsync(const GetApplicationRevisionRequestT& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetApplicationRevision, request, handler, context);
        }

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
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetDeployment, request, handler, context);
        }

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
        template<typename GetDeploymentConfigRequestT = Model::GetDeploymentConfigRequest>
        Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const GetDeploymentConfigRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetDeploymentConfig, request);
        }

        /**
         * An Async wrapper for GetDeploymentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentConfigRequestT = Model::GetDeploymentConfigRequest>
        void GetDeploymentConfigAsync(const GetDeploymentConfigRequestT& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetDeploymentConfig, request, handler, context);
        }

        /**
         * <p>Gets information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentGroupRequestT = Model::GetDeploymentGroupRequest>
        Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const GetDeploymentGroupRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetDeploymentGroup, request);
        }

        /**
         * An Async wrapper for GetDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentGroupRequestT = Model::GetDeploymentGroupRequest>
        void GetDeploymentGroupAsync(const GetDeploymentGroupRequestT& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetDeploymentGroup, request, handler, context);
        }

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
        template<typename GetDeploymentTargetRequestT = Model::GetDeploymentTargetRequest>
        Model::GetDeploymentTargetOutcomeCallable GetDeploymentTargetCallable(const GetDeploymentTargetRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetDeploymentTarget, request);
        }

        /**
         * An Async wrapper for GetDeploymentTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentTargetRequestT = Model::GetDeploymentTargetRequest>
        void GetDeploymentTargetAsync(const GetDeploymentTargetRequestT& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetDeploymentTarget, request, handler, context);
        }

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
        template<typename GetOnPremisesInstanceRequestT = Model::GetOnPremisesInstanceRequest>
        Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const GetOnPremisesInstanceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::GetOnPremisesInstance, request);
        }

        /**
         * An Async wrapper for GetOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOnPremisesInstanceRequestT = Model::GetOnPremisesInstanceRequest>
        void GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequestT& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::GetOnPremisesInstance, request, handler, context);
        }

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
        template<typename ListApplicationRevisionsRequestT = Model::ListApplicationRevisionsRequest>
        Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const ListApplicationRevisionsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListApplicationRevisions, request);
        }

        /**
         * An Async wrapper for ListApplicationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationRevisionsRequestT = Model::ListApplicationRevisionsRequest>
        void ListApplicationRevisionsAsync(const ListApplicationRevisionsRequestT& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListApplicationRevisions, request, handler, context);
        }

        /**
         * <p>Lists the applications registered with the user or Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists the deployment configurations with the user or Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentConfigsRequestT = Model::ListDeploymentConfigsRequest>
        Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const ListDeploymentConfigsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListDeploymentConfigs, request);
        }

        /**
         * An Async wrapper for ListDeploymentConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentConfigsRequestT = Model::ListDeploymentConfigsRequest>
        void ListDeploymentConfigsAsync(const ListDeploymentConfigsRequestT& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListDeploymentConfigs, request, handler, context);
        }

        /**
         * <p>Lists the deployment groups for an application registered with the Amazon Web
         * Services user or Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentGroupsRequestT = Model::ListDeploymentGroupsRequest>
        Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const ListDeploymentGroupsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListDeploymentGroups, request);
        }

        /**
         * An Async wrapper for ListDeploymentGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentGroupsRequestT = Model::ListDeploymentGroupsRequest>
        void ListDeploymentGroupsAsync(const ListDeploymentGroupsRequestT& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListDeploymentGroups, request, handler, context);
        }

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
        template<typename ListDeploymentTargetsRequestT = Model::ListDeploymentTargetsRequest>
        Model::ListDeploymentTargetsOutcomeCallable ListDeploymentTargetsCallable(const ListDeploymentTargetsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListDeploymentTargets, request);
        }

        /**
         * An Async wrapper for ListDeploymentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentTargetsRequestT = Model::ListDeploymentTargetsRequest>
        void ListDeploymentTargetsAsync(const ListDeploymentTargetsRequestT& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListDeploymentTargets, request, handler, context);
        }

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the user or Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsRequestT& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListDeployments, request, handler, context);
        }

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
        template<typename ListGitHubAccountTokenNamesRequestT = Model::ListGitHubAccountTokenNamesRequest>
        Model::ListGitHubAccountTokenNamesOutcomeCallable ListGitHubAccountTokenNamesCallable(const ListGitHubAccountTokenNamesRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListGitHubAccountTokenNames, request);
        }

        /**
         * An Async wrapper for ListGitHubAccountTokenNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGitHubAccountTokenNamesRequestT = Model::ListGitHubAccountTokenNamesRequest>
        void ListGitHubAccountTokenNamesAsync(const ListGitHubAccountTokenNamesRequestT& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListGitHubAccountTokenNames, request, handler, context);
        }

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
        template<typename ListOnPremisesInstancesRequestT = Model::ListOnPremisesInstancesRequest>
        Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const ListOnPremisesInstancesRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListOnPremisesInstances, request);
        }

        /**
         * An Async wrapper for ListOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOnPremisesInstancesRequestT = Model::ListOnPremisesInstancesRequest>
        void ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequestT& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListOnPremisesInstances, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename PutLifecycleEventHookExecutionStatusRequestT = Model::PutLifecycleEventHookExecutionStatusRequest>
        Model::PutLifecycleEventHookExecutionStatusOutcomeCallable PutLifecycleEventHookExecutionStatusCallable(const PutLifecycleEventHookExecutionStatusRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::PutLifecycleEventHookExecutionStatus, request);
        }

        /**
         * An Async wrapper for PutLifecycleEventHookExecutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLifecycleEventHookExecutionStatusRequestT = Model::PutLifecycleEventHookExecutionStatusRequest>
        void PutLifecycleEventHookExecutionStatusAsync(const PutLifecycleEventHookExecutionStatusRequestT& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::PutLifecycleEventHookExecutionStatus, request, handler, context);
        }

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
        template<typename RegisterApplicationRevisionRequestT = Model::RegisterApplicationRevisionRequest>
        Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const RegisterApplicationRevisionRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::RegisterApplicationRevision, request);
        }

        /**
         * An Async wrapper for RegisterApplicationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterApplicationRevisionRequestT = Model::RegisterApplicationRevisionRequest>
        void RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequestT& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::RegisterApplicationRevision, request, handler, context);
        }

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
        template<typename RegisterOnPremisesInstanceRequestT = Model::RegisterOnPremisesInstanceRequest>
        Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const RegisterOnPremisesInstanceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::RegisterOnPremisesInstance, request);
        }

        /**
         * An Async wrapper for RegisterOnPremisesInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterOnPremisesInstanceRequestT = Model::RegisterOnPremisesInstanceRequest>
        void RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequestT& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::RegisterOnPremisesInstance, request, handler, context);
        }

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
        template<typename RemoveTagsFromOnPremisesInstancesRequestT = Model::RemoveTagsFromOnPremisesInstancesRequest>
        Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const RemoveTagsFromOnPremisesInstancesRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::RemoveTagsFromOnPremisesInstances, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromOnPremisesInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromOnPremisesInstancesRequestT = Model::RemoveTagsFromOnPremisesInstancesRequest>
        void RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequestT& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::RemoveTagsFromOnPremisesInstances, request, handler, context);
        }

        /**
         * <p>Attempts to stop an ongoing deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StopDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDeploymentRequestT = Model::StopDeploymentRequest>
        Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const StopDeploymentRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::StopDeployment, request);
        }

        /**
         * An Async wrapper for StopDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDeploymentRequestT = Model::StopDeploymentRequest>
        void StopDeploymentAsync(const StopDeploymentRequestT& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::StopDeployment, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Changes the name of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Changes information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeploymentGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeploymentGroupRequestT = Model::UpdateDeploymentGroupRequest>
        Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const UpdateDeploymentGroupRequestT& request) const
        {
            return SubmitCallable(&CodeDeployClient::UpdateDeploymentGroup, request);
        }

        /**
         * An Async wrapper for UpdateDeploymentGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeploymentGroupRequestT = Model::UpdateDeploymentGroupRequest>
        void UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequestT& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeDeployClient::UpdateDeploymentGroup, request, handler, context);
        }


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
