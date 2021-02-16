/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/greengrassv2/model/CancelDeploymentResult.h>
#include <aws/greengrassv2/model/CreateComponentVersionResult.h>
#include <aws/greengrassv2/model/CreateDeploymentResult.h>
#include <aws/greengrassv2/model/DescribeComponentResult.h>
#include <aws/greengrassv2/model/GetComponentResult.h>
#include <aws/greengrassv2/model/GetComponentVersionArtifactResult.h>
#include <aws/greengrassv2/model/GetCoreDeviceResult.h>
#include <aws/greengrassv2/model/GetDeploymentResult.h>
#include <aws/greengrassv2/model/ListComponentVersionsResult.h>
#include <aws/greengrassv2/model/ListComponentsResult.h>
#include <aws/greengrassv2/model/ListCoreDevicesResult.h>
#include <aws/greengrassv2/model/ListDeploymentsResult.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsResult.h>
#include <aws/greengrassv2/model/ListInstalledComponentsResult.h>
#include <aws/greengrassv2/model/ListTagsForResourceResult.h>
#include <aws/greengrassv2/model/ResolveComponentCandidatesResult.h>
#include <aws/greengrassv2/model/TagResourceResult.h>
#include <aws/greengrassv2/model/UntagResourceResult.h>
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

namespace GreengrassV2
{

namespace Model
{
        class CancelDeploymentRequest;
        class CreateComponentVersionRequest;
        class CreateDeploymentRequest;
        class DeleteComponentRequest;
        class DeleteCoreDeviceRequest;
        class DescribeComponentRequest;
        class GetComponentRequest;
        class GetComponentVersionArtifactRequest;
        class GetCoreDeviceRequest;
        class GetDeploymentRequest;
        class ListComponentVersionsRequest;
        class ListComponentsRequest;
        class ListCoreDevicesRequest;
        class ListDeploymentsRequest;
        class ListEffectiveDeploymentsRequest;
        class ListInstalledComponentsRequest;
        class ListTagsForResourceRequest;
        class ResolveComponentCandidatesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CancelDeploymentResult, GreengrassV2Error> CancelDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateComponentVersionResult, GreengrassV2Error> CreateComponentVersionOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, GreengrassV2Error> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassV2Error> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassV2Error> DeleteCoreDeviceOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentResult, GreengrassV2Error> DescribeComponentOutcome;
        typedef Aws::Utils::Outcome<GetComponentResult, GreengrassV2Error> GetComponentOutcome;
        typedef Aws::Utils::Outcome<GetComponentVersionArtifactResult, GreengrassV2Error> GetComponentVersionArtifactOutcome;
        typedef Aws::Utils::Outcome<GetCoreDeviceResult, GreengrassV2Error> GetCoreDeviceOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, GreengrassV2Error> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<ListComponentVersionsResult, GreengrassV2Error> ListComponentVersionsOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, GreengrassV2Error> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListCoreDevicesResult, GreengrassV2Error> ListCoreDevicesOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, GreengrassV2Error> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListEffectiveDeploymentsResult, GreengrassV2Error> ListEffectiveDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListInstalledComponentsResult, GreengrassV2Error> ListInstalledComponentsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, GreengrassV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ResolveComponentCandidatesResult, GreengrassV2Error> ResolveComponentCandidatesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, GreengrassV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, GreengrassV2Error> UntagResourceOutcome;

        typedef std::future<CancelDeploymentOutcome> CancelDeploymentOutcomeCallable;
        typedef std::future<CreateComponentVersionOutcome> CreateComponentVersionOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DeleteCoreDeviceOutcome> DeleteCoreDeviceOutcomeCallable;
        typedef std::future<DescribeComponentOutcome> DescribeComponentOutcomeCallable;
        typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
        typedef std::future<GetComponentVersionArtifactOutcome> GetComponentVersionArtifactOutcomeCallable;
        typedef std::future<GetCoreDeviceOutcome> GetCoreDeviceOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<ListComponentVersionsOutcome> ListComponentVersionsOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListCoreDevicesOutcome> ListCoreDevicesOutcomeCallable;
        typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
        typedef std::future<ListEffectiveDeploymentsOutcome> ListEffectiveDeploymentsOutcomeCallable;
        typedef std::future<ListInstalledComponentsOutcome> ListInstalledComponentsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ResolveComponentCandidatesOutcome> ResolveComponentCandidatesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class GreengrassV2Client;

    typedef std::function<void(const GreengrassV2Client*, const Model::CancelDeploymentRequest&, const Model::CancelDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::CreateComponentVersionRequest&, const Model::CreateComponentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DeleteCoreDeviceRequest&, const Model::DeleteCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DescribeComponentRequest&, const Model::DescribeComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetComponentVersionArtifactRequest&, const Model::GetComponentVersionArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentVersionArtifactResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetCoreDeviceRequest&, const Model::GetCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListComponentVersionsRequest&, const Model::ListComponentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListCoreDevicesRequest&, const Model::ListCoreDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreDevicesResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListEffectiveDeploymentsRequest&, const Model::ListEffectiveDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEffectiveDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListInstalledComponentsRequest&, const Model::ListInstalledComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstalledComponentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ResolveComponentCandidatesRequest&, const Model::ResolveComponentCandidatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveComponentCandidatesResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>AWS IoT Greengrass brings local compute, messaging, data management, sync,
   * and ML inference capabilities to edge devices. This enables devices to collect
   * and analyze data closer to the source of information, react autonomously to
   * local events, and communicate securely with each other on local networks. Local
   * devices can also communicate securely with AWS IoT Core and export IoT data to
   * the AWS Cloud. AWS IoT Greengrass developers can use AWS Lambda functions and
   * components to create and deploy applications to fleets of edge devices for local
   * operation.</p> <p>AWS IoT Greengrass Version 2 provides a new major version of
   * the AWS IoT Greengrass Core software, new APIs, and a new console. Use this API
   * reference to learn how to use the AWS IoT Greengrass V2 API operations to manage
   * components, manage deployments, and core devices.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What
   * is AWS IoT Greengrass?</a> in the <i>AWS IoT Greengrass V2 Developer
   * Guide</i>.</p>
   */
  class AWS_GREENGRASSV2_API GreengrassV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GreengrassV2Client();


        /**
         * <p>Cancels a deployment. This operation cancels the deployment for devices that
         * haven't yet received it. If a device already received the deployment, this
         * operation doesn't change anything for that device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CancelDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDeploymentOutcome CancelDeployment(const Model::CancelDeploymentRequest& request) const;

        /**
         * <p>Cancels a deployment. This operation cancels the deployment for devices that
         * haven't yet received it. If a device already received the deployment, this
         * operation doesn't change anything for that device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CancelDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelDeploymentOutcomeCallable CancelDeploymentCallable(const Model::CancelDeploymentRequest& request) const;

        /**
         * <p>Cancels a deployment. This operation cancels the deployment for devices that
         * haven't yet received it. If a device already received the deployment, this
         * operation doesn't change anything for that device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CancelDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDeploymentAsync(const Model::CancelDeploymentRequest& request, const CancelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a component. Components are software that run on AWS IoT Greengrass
         * core devices. After you develop and test a component on your core device, you
         * can use this operation to upload your component to AWS IoT Greengrass. Then, you
         * can deploy the component to other core devices.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p> <b>Create components from
         * recipes</b> </p> <p>Create a component from a recipe, which is a file that
         * defines the component's metadata, parameters, dependencies, lifecycle,
         * artifacts, and platform capability. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/component-recipe-reference.html">AWS
         * IoT Greengrass component recipe reference</a> in the <i>AWS IoT Greengrass V2
         * Developer Guide</i>.</p> <p>To create a component from a recipe, specify
         * <code>inlineRecipe</code> when you call this operation.</p> </li> <li> <p>
         * <b>Create components from Lambda functions</b> </p> <p>Create a component from
         * an AWS Lambda function that runs on AWS IoT Greengrass. This creates a recipe
         * and artifacts from the Lambda function's deployment package. You can use this
         * operation to migrate Lambda functions from AWS IoT Greengrass V1 to AWS IoT
         * Greengrass V2.</p> <p>This function only accepts Lambda functions that use the
         * following runtimes:</p> <ul> <li> <p>Python 2.7 – <code>python2.7</code> </p>
         * </li> <li> <p>Python 3.7 – <code>python3.7</code> </p> </li> <li> <p>Python 3.8
         * – <code>python3.8</code> </p> </li> <li> <p>Java 8 – <code>java8</code> </p>
         * </li> <li> <p>Node.js 10 – <code>nodejs10.x</code> </p> </li> <li> <p>Node.js 12
         * – <code>nodejs12.x</code> </p> </li> </ul> <p>To create a component from a
         * Lambda function, specify <code>lambdaFunction</code> when you call this
         * operation.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateComponentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentVersionOutcome CreateComponentVersion(const Model::CreateComponentVersionRequest& request) const;

        /**
         * <p>Creates a component. Components are software that run on AWS IoT Greengrass
         * core devices. After you develop and test a component on your core device, you
         * can use this operation to upload your component to AWS IoT Greengrass. Then, you
         * can deploy the component to other core devices.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p> <b>Create components from
         * recipes</b> </p> <p>Create a component from a recipe, which is a file that
         * defines the component's metadata, parameters, dependencies, lifecycle,
         * artifacts, and platform capability. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/component-recipe-reference.html">AWS
         * IoT Greengrass component recipe reference</a> in the <i>AWS IoT Greengrass V2
         * Developer Guide</i>.</p> <p>To create a component from a recipe, specify
         * <code>inlineRecipe</code> when you call this operation.</p> </li> <li> <p>
         * <b>Create components from Lambda functions</b> </p> <p>Create a component from
         * an AWS Lambda function that runs on AWS IoT Greengrass. This creates a recipe
         * and artifacts from the Lambda function's deployment package. You can use this
         * operation to migrate Lambda functions from AWS IoT Greengrass V1 to AWS IoT
         * Greengrass V2.</p> <p>This function only accepts Lambda functions that use the
         * following runtimes:</p> <ul> <li> <p>Python 2.7 – <code>python2.7</code> </p>
         * </li> <li> <p>Python 3.7 – <code>python3.7</code> </p> </li> <li> <p>Python 3.8
         * – <code>python3.8</code> </p> </li> <li> <p>Java 8 – <code>java8</code> </p>
         * </li> <li> <p>Node.js 10 – <code>nodejs10.x</code> </p> </li> <li> <p>Node.js 12
         * – <code>nodejs12.x</code> </p> </li> </ul> <p>To create a component from a
         * Lambda function, specify <code>lambdaFunction</code> when you call this
         * operation.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateComponentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentVersionOutcomeCallable CreateComponentVersionCallable(const Model::CreateComponentVersionRequest& request) const;

        /**
         * <p>Creates a component. Components are software that run on AWS IoT Greengrass
         * core devices. After you develop and test a component on your core device, you
         * can use this operation to upload your component to AWS IoT Greengrass. Then, you
         * can deploy the component to other core devices.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p> <b>Create components from
         * recipes</b> </p> <p>Create a component from a recipe, which is a file that
         * defines the component's metadata, parameters, dependencies, lifecycle,
         * artifacts, and platform capability. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/component-recipe-reference.html">AWS
         * IoT Greengrass component recipe reference</a> in the <i>AWS IoT Greengrass V2
         * Developer Guide</i>.</p> <p>To create a component from a recipe, specify
         * <code>inlineRecipe</code> when you call this operation.</p> </li> <li> <p>
         * <b>Create components from Lambda functions</b> </p> <p>Create a component from
         * an AWS Lambda function that runs on AWS IoT Greengrass. This creates a recipe
         * and artifacts from the Lambda function's deployment package. You can use this
         * operation to migrate Lambda functions from AWS IoT Greengrass V1 to AWS IoT
         * Greengrass V2.</p> <p>This function only accepts Lambda functions that use the
         * following runtimes:</p> <ul> <li> <p>Python 2.7 – <code>python2.7</code> </p>
         * </li> <li> <p>Python 3.7 – <code>python3.7</code> </p> </li> <li> <p>Python 3.8
         * – <code>python3.8</code> </p> </li> <li> <p>Java 8 – <code>java8</code> </p>
         * </li> <li> <p>Node.js 10 – <code>nodejs10.x</code> </p> </li> <li> <p>Node.js 12
         * – <code>nodejs12.x</code> </p> </li> </ul> <p>To create a component from a
         * Lambda function, specify <code>lambdaFunction</code> when you call this
         * operation.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateComponentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentVersionAsync(const Model::CreateComponentVersionRequest& request, const CreateComponentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a continuous deployment for a target, which is a AWS IoT Greengrass
         * core device or group of core devices. When you add a new core device to a group
         * of core devices that has a deployment, AWS IoT Greengrass deploys that group's
         * deployment to the new device.</p> <p>You can define one deployment for each
         * target. When you create a new deployment for a target that has an existing
         * deployment, you replace the previous deployment. AWS IoT Greengrass applies the
         * new deployment to the target devices.</p> <p>Every deployment has a revision
         * number that indicates how many deployment revisions you define for a target. Use
         * this operation to create a new revision of an existing deployment. This
         * operation returns the revision number of the new deployment when you create
         * it.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
         * deployments</a> in the <i>AWS IoT Greengrass V2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a continuous deployment for a target, which is a AWS IoT Greengrass
         * core device or group of core devices. When you add a new core device to a group
         * of core devices that has a deployment, AWS IoT Greengrass deploys that group's
         * deployment to the new device.</p> <p>You can define one deployment for each
         * target. When you create a new deployment for a target that has an existing
         * deployment, you replace the previous deployment. AWS IoT Greengrass applies the
         * new deployment to the target devices.</p> <p>Every deployment has a revision
         * number that indicates how many deployment revisions you define for a target. Use
         * this operation to create a new revision of an existing deployment. This
         * operation returns the revision number of the new deployment when you create
         * it.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
         * deployments</a> in the <i>AWS IoT Greengrass V2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a continuous deployment for a target, which is a AWS IoT Greengrass
         * core device or group of core devices. When you add a new core device to a group
         * of core devices that has a deployment, AWS IoT Greengrass deploys that group's
         * deployment to the new device.</p> <p>You can define one deployment for each
         * target. When you create a new deployment for a target that has an existing
         * deployment, you replace the previous deployment. AWS IoT Greengrass applies the
         * new deployment to the target devices.</p> <p>Every deployment has a revision
         * number that indicates how many deployment revisions you define for a target. Use
         * this operation to create a new revision of an existing deployment. This
         * operation returns the revision number of the new deployment when you create
         * it.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
         * deployments</a> in the <i>AWS IoT Greengrass V2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of a component from AWS IoT Greengrass.</p>  <p>This
         * operation deletes the component's recipe and artifacts. As a result, deployments
         * that refer to this component version will fail. If you have deployments that use
         * this component version, you can remove the component from the deployment or
         * update the deployment to use a valid version.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * <p>Deletes a version of a component from AWS IoT Greengrass.</p>  <p>This
         * operation deletes the component's recipe and artifacts. As a result, deployments
         * that refer to this component version will fail. If you have deployments that use
         * this component version, you can remove the component from the deployment or
         * update the deployment to use a valid version.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * <p>Deletes a version of a component from AWS IoT Greengrass.</p>  <p>This
         * operation deletes the component's recipe and artifacts. As a result, deployments
         * that refer to this component version will fail. If you have deployments that use
         * this component version, you can remove the component from the deployment or
         * update the deployment to use a valid version.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a AWS IoT Greengrass core device, which is an AWS IoT thing. This
         * operation removes the core device from the list of core devices. This operation
         * doesn't delete the AWS IoT thing. For more information about how to delete the
         * AWS IoT thing, see <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DeleteThing.html">DeleteThing</a>
         * in the <i>AWS IoT API Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDeviceOutcome DeleteCoreDevice(const Model::DeleteCoreDeviceRequest& request) const;

        /**
         * <p>Deletes a AWS IoT Greengrass core device, which is an AWS IoT thing. This
         * operation removes the core device from the list of core devices. This operation
         * doesn't delete the AWS IoT thing. For more information about how to delete the
         * AWS IoT thing, see <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DeleteThing.html">DeleteThing</a>
         * in the <i>AWS IoT API Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteCoreDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoreDeviceOutcomeCallable DeleteCoreDeviceCallable(const Model::DeleteCoreDeviceRequest& request) const;

        /**
         * <p>Deletes a AWS IoT Greengrass core device, which is an AWS IoT thing. This
         * operation removes the core device from the list of core devices. This operation
         * doesn't delete the AWS IoT thing. For more information about how to delete the
         * AWS IoT thing, see <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DeleteThing.html">DeleteThing</a>
         * in the <i>AWS IoT API Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteCoreDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoreDeviceAsync(const Model::DeleteCoreDeviceRequest& request, const DeleteCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for a version of a component.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DescribeComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentOutcome DescribeComponent(const Model::DescribeComponentRequest& request) const;

        /**
         * <p>Retrieves metadata for a version of a component.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DescribeComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComponentOutcomeCallable DescribeComponentCallable(const Model::DescribeComponentRequest& request) const;

        /**
         * <p>Retrieves metadata for a version of a component.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DescribeComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentAsync(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the recipe for a version of a component. Core devices can call this
         * operation to identify the artifacts and requirements to install a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * <p>Gets the recipe for a version of a component. Core devices can call this
         * operation to identify the artifacts and requirements to install a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentOutcomeCallable GetComponentCallable(const Model::GetComponentRequest& request) const;

        /**
         * <p>Gets the recipe for a version of a component. Core devices can call this
         * operation to identify the artifacts and requirements to install a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentAsync(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the pre-signed URL to download a public component artifact. Core devices
         * call this operation to identify the URL that they can use to download an
         * artifact to install.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponentVersionArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentVersionArtifactOutcome GetComponentVersionArtifact(const Model::GetComponentVersionArtifactRequest& request) const;

        /**
         * <p>Gets the pre-signed URL to download a public component artifact. Core devices
         * call this operation to identify the URL that they can use to download an
         * artifact to install.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponentVersionArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentVersionArtifactOutcomeCallable GetComponentVersionArtifactCallable(const Model::GetComponentVersionArtifactRequest& request) const;

        /**
         * <p>Gets the pre-signed URL to download a public component artifact. Core devices
         * call this operation to identify the URL that they can use to download an
         * artifact to install.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponentVersionArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentVersionArtifactAsync(const Model::GetComponentVersionArtifactRequest& request, const GetComponentVersionArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for a AWS IoT Greengrass core device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDeviceOutcome GetCoreDevice(const Model::GetCoreDeviceRequest& request) const;

        /**
         * <p>Retrieves metadata for a AWS IoT Greengrass core device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetCoreDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreDeviceOutcomeCallable GetCoreDeviceCallable(const Model::GetCoreDeviceRequest& request) const;

        /**
         * <p>Retrieves metadata for a AWS IoT Greengrass core device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetCoreDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreDeviceAsync(const Model::GetCoreDeviceRequest& request, const GetCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a deployment. Deployments define the components that run on AWS IoT
         * Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets a deployment. Deployments define the components that run on AWS IoT
         * Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets a deployment. Deployments define the components that run on AWS IoT
         * Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of all versions for a component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentVersionsOutcome ListComponentVersions(const Model::ListComponentVersionsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of all versions for a component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentVersionsOutcomeCallable ListComponentVersionsCallable(const Model::ListComponentVersionsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of all versions for a component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentVersionsAsync(const Model::ListComponentVersionsRequest& request, const ListComponentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of component summaries. This list includes
         * components that you have permission to view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of component summaries. This list includes
         * components that you have permission to view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of component summaries. This list includes
         * components that you have permission to view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT Greengrass core devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListCoreDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDevicesOutcome ListCoreDevices(const Model::ListCoreDevicesRequest& request) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT Greengrass core devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListCoreDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreDevicesOutcomeCallable ListCoreDevicesCallable(const Model::ListCoreDevicesRequest& request) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT Greengrass core devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListCoreDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreDevicesAsync(const Model::ListCoreDevicesRequest& request, const ListCoreDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of deployment jobs that AWS IoT Greengrass sends
         * to AWS IoT Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListEffectiveDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEffectiveDeploymentsOutcome ListEffectiveDeployments(const Model::ListEffectiveDeploymentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of deployment jobs that AWS IoT Greengrass sends
         * to AWS IoT Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListEffectiveDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEffectiveDeploymentsOutcomeCallable ListEffectiveDeploymentsCallable(const Model::ListEffectiveDeploymentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of deployment jobs that AWS IoT Greengrass sends
         * to AWS IoT Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListEffectiveDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEffectiveDeploymentsAsync(const Model::ListEffectiveDeploymentsRequest& request, const ListEffectiveDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of the components that a AWS IoT Greengrass core
         * device runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListInstalledComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstalledComponentsOutcome ListInstalledComponents(const Model::ListInstalledComponentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the components that a AWS IoT Greengrass core
         * device runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListInstalledComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstalledComponentsOutcomeCallable ListInstalledComponentsCallable(const Model::ListInstalledComponentsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the components that a AWS IoT Greengrass core
         * device runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListInstalledComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstalledComponentsAsync(const Model::ListInstalledComponentsRequest& request, const ListInstalledComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT Greengrass resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT Greengrass resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT Greengrass resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of components that meet the component, version, and platform
         * requirements of a deployment. AWS IoT Greengrass core devices call this
         * operation when they receive a deployment to identify the components to
         * install.</p> <p>This operation identifies components that meet all dependency
         * requirements for a deployment. If the requirements conflict, then this operation
         * returns an error and the deployment fails. For example, this occurs if component
         * <code>A</code> requires version <code>&gt;2.0.0</code> and component
         * <code>B</code> requires version <code>&lt;2.0.0</code> of a component
         * dependency.</p> <p>When you specify the component candidates to resolve, AWS IoT
         * Greengrass compares each component's digest from the core device with the
         * component's digest in the AWS Cloud. If the digests don't match, then AWS IoT
         * Greengrass specifies to use the version from the AWS Cloud.</p> 
         * <p>To use this operation, you must use the data plane API endpoint and
         * authenticate with an AWS IoT device certificate. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/greengrass.html">AWS IoT
         * Greengrass endpoints and quotas</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ResolveComponentCandidates">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveComponentCandidatesOutcome ResolveComponentCandidates(const Model::ResolveComponentCandidatesRequest& request) const;

        /**
         * <p>Retrieves a list of components that meet the component, version, and platform
         * requirements of a deployment. AWS IoT Greengrass core devices call this
         * operation when they receive a deployment to identify the components to
         * install.</p> <p>This operation identifies components that meet all dependency
         * requirements for a deployment. If the requirements conflict, then this operation
         * returns an error and the deployment fails. For example, this occurs if component
         * <code>A</code> requires version <code>&gt;2.0.0</code> and component
         * <code>B</code> requires version <code>&lt;2.0.0</code> of a component
         * dependency.</p> <p>When you specify the component candidates to resolve, AWS IoT
         * Greengrass compares each component's digest from the core device with the
         * component's digest in the AWS Cloud. If the digests don't match, then AWS IoT
         * Greengrass specifies to use the version from the AWS Cloud.</p> 
         * <p>To use this operation, you must use the data plane API endpoint and
         * authenticate with an AWS IoT device certificate. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/greengrass.html">AWS IoT
         * Greengrass endpoints and quotas</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ResolveComponentCandidates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveComponentCandidatesOutcomeCallable ResolveComponentCandidatesCallable(const Model::ResolveComponentCandidatesRequest& request) const;

        /**
         * <p>Retrieves a list of components that meet the component, version, and platform
         * requirements of a deployment. AWS IoT Greengrass core devices call this
         * operation when they receive a deployment to identify the components to
         * install.</p> <p>This operation identifies components that meet all dependency
         * requirements for a deployment. If the requirements conflict, then this operation
         * returns an error and the deployment fails. For example, this occurs if component
         * <code>A</code> requires version <code>&gt;2.0.0</code> and component
         * <code>B</code> requires version <code>&lt;2.0.0</code> of a component
         * dependency.</p> <p>When you specify the component candidates to resolve, AWS IoT
         * Greengrass compares each component's digest from the core device with the
         * component's digest in the AWS Cloud. If the digests don't match, then AWS IoT
         * Greengrass specifies to use the version from the AWS Cloud.</p> 
         * <p>To use this operation, you must use the data plane API endpoint and
         * authenticate with an AWS IoT device certificate. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/greengrass.html">AWS IoT
         * Greengrass endpoints and quotas</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ResolveComponentCandidates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveComponentCandidatesAsync(const Model::ResolveComponentCandidatesRequest& request, const ResolveComponentCandidatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to an AWS IoT Greengrass resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an AWS IoT Greengrass resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an AWS IoT Greengrass resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from an AWS IoT Greengrass resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS IoT Greengrass resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS IoT Greengrass resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelDeploymentAsyncHelper(const Model::CancelDeploymentRequest& request, const CancelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComponentVersionAsyncHelper(const Model::CreateComponentVersionRequest& request, const CreateComponentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComponentAsyncHelper(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCoreDeviceAsyncHelper(const Model::DeleteCoreDeviceRequest& request, const DeleteCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentAsyncHelper(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComponentAsyncHelper(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComponentVersionArtifactAsyncHelper(const Model::GetComponentVersionArtifactRequest& request, const GetComponentVersionArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCoreDeviceAsyncHelper(const Model::GetCoreDeviceRequest& request, const GetCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentVersionsAsyncHelper(const Model::ListComponentVersionsRequest& request, const ListComponentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentsAsyncHelper(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCoreDevicesAsyncHelper(const Model::ListCoreDevicesRequest& request, const ListCoreDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEffectiveDeploymentsAsyncHelper(const Model::ListEffectiveDeploymentsRequest& request, const ListEffectiveDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstalledComponentsAsyncHelper(const Model::ListInstalledComponentsRequest& request, const ListInstalledComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveComponentCandidatesAsyncHelper(const Model::ResolveComponentCandidatesRequest& request, const ResolveComponentCandidatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GreengrassV2
} // namespace Aws
