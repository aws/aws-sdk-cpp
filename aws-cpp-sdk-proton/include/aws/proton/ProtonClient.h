/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/proton/ProtonServiceClientModel.h>

namespace Aws
{
namespace Proton
{
  /**
   * <p>This is the Proton Service API Reference. It provides descriptions, syntax
   * and usage examples for each of the <a
   * href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Operations.html">actions</a>
   * and <a
   * href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Types.html">data
   * types</a> for the Proton service.</p> <p>The documentation for each action shows
   * the Query API request parameters and the XML response.</p> <p>Alternatively, you
   * can use the Amazon Web Services CLI to access an API. For more information, see
   * the <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">Amazon
   * Web Services Command Line Interface User Guide</a>.</p> <p>The Proton service is
   * a two-pronged automation framework. Administrators create service templates to
   * provide standardized infrastructure and deployment tooling for serverless and
   * container based applications. Developers, in turn, select from the available
   * service templates to automate their application or service deployments.</p>
   * <p>Because administrators define the infrastructure and tooling that Proton
   * deploys and manages, they need permissions to use all of the listed API
   * operations.</p> <p>When developers select a specific infrastructure and tooling
   * set, Proton deploys their applications. To monitor their applications that are
   * running on Proton, developers need permissions to the service <i>create</i>,
   * <i>list</i>, <i>update</i> and <i>delete</i> API operations and the service
   * instance <i>list</i> and <i>update</i> API operations.</p> <p>To learn more
   * about Proton, see the <a
   * href="https://docs.aws.amazon.com/proton/latest/userguide/Welcome.html">Proton
   * User Guide</a>.</p> <p> <b>Ensuring Idempotency</b> </p> <p>When you make a
   * mutating API request, the request typically returns a result before the
   * asynchronous workflows of the operation are complete. Operations might also time
   * out or encounter other server issues before they're complete, even if the
   * request already returned a result. This might make it difficult to determine
   * whether the request succeeded. Moreover, you might need to retry the request
   * multiple times to ensure that the operation completes successfully. However, if
   * the original request and the subsequent retries are successful, the operation
   * occurs multiple times. This means that you might create more resources than you
   * intended.</p> <p> <i>Idempotency</i> ensures that an API request action
   * completes no more than one time. With an idempotent request, if the original
   * request action completes successfully, any subsequent retries complete
   * successfully without performing any further actions. However, the result might
   * contain updated information, such as the current creation status.</p> <p>The
   * following lists of APIs are grouped according to methods that ensure
   * idempotency.</p> <p> <b>Idempotent create APIs with a client token</b> </p>
   * <p>The API actions in this list support idempotency with the use of a <i>client
   * token</i>. The corresponding Amazon Web Services CLI commands also support
   * idempotency using a client token. A client token is a unique, case-sensitive
   * string of up to 64 ASCII characters. To make an idempotent API request using one
   * of these actions, specify a client token in the request. We recommend that you
   * <i>don't</i> reuse the same client token for other API requests. If you don’t
   * provide a client token for these APIs, a default client token is automatically
   * provided by SDKs.</p> <p>Given a request action that has succeeded:</p> <p>If
   * you retry the request using the same client token and the same parameters, the
   * retry succeeds without performing any further actions other than returning the
   * original resource detail data in the response.</p> <p>If you retry the request
   * using the same client token, but one or more of the parameters are different,
   * the retry throws a <code>ValidationException</code> with an
   * <code>IdempotentParameterMismatch</code> error.</p> <p>Client tokens expire
   * eight hours after a request is made. If you retry the request with the expired
   * token, a new resource is created.</p> <p>If the original resource is deleted and
   * you retry the request, a new resource is created.</p> <p>Idempotent create APIs
   * with a client token:</p> <ul> <li> <p>CreateEnvironmentTemplateVersion</p> </li>
   * <li> <p>CreateServiceTemplateVersion</p> </li> <li>
   * <p>CreateEnvironmentAccountConnection</p> </li> </ul> <p> <b>Idempotent create
   * APIs</b> </p> <p>Given a request action that has succeeded:</p> <p>If you retry
   * the request with an API from this group, and the original resource <i>hasn't</i>
   * been modified, the retry succeeds without performing any further actions other
   * than returning the original resource detail data in the response.</p> <p>If the
   * original resource has been modified, the retry throws a
   * <code>ConflictException</code>.</p> <p>If you retry with different input
   * parameters, the retry throws a <code>ValidationException</code> with an
   * <code>IdempotentParameterMismatch</code> error.</p> <p>Idempotent create
   * APIs:</p> <ul> <li> <p>CreateEnvironmentTemplate</p> </li> <li>
   * <p>CreateServiceTemplate</p> </li> <li> <p>CreateEnvironment</p> </li> <li>
   * <p>CreateService</p> </li> </ul> <p> <b>Idempotent delete APIs</b> </p> <p>Given
   * a request action that has succeeded:</p> <p>When you retry the request with an
   * API from this group and the resource was deleted, its metadata is returned in
   * the response.</p> <p>If you retry and the resource doesn't exist, the response
   * is empty.</p> <p>In both cases, the retry succeeds.</p> <p>Idempotent delete
   * APIs:</p> <ul> <li> <p>DeleteEnvironmentTemplate</p> </li> <li>
   * <p>DeleteEnvironmentTemplateVersion</p> </li> <li> <p>DeleteServiceTemplate</p>
   * </li> <li> <p>DeleteServiceTemplateVersion</p> </li> <li>
   * <p>DeleteEnvironmentAccountConnection</p> </li> </ul> <p> <b>Asynchronous
   * idempotent delete APIs</b> </p> <p>Given a request action that has
   * succeeded:</p> <p>If you retry the request with an API from this group, if the
   * original request delete operation status is <code>DELETE_IN_PROGRESS</code>, the
   * retry returns the resource detail data in the response without performing any
   * further actions.</p> <p>If the original request delete operation is complete, a
   * retry returns an empty response.</p> <p>Asynchronous idempotent delete APIs:</p>
   * <ul> <li> <p>DeleteEnvironment</p> </li> <li> <p>DeleteService</p> </li> </ul>
   */
  class AWS_PROTON_API ProtonClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ProtonClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ProtonClient(const Aws::Proton::ProtonClientConfiguration& clientConfiguration = Aws::Proton::ProtonClientConfiguration(),
                     std::shared_ptr<ProtonEndpointProviderBase> endpointProvider = Aws::MakeShared<ProtonEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ProtonClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<ProtonEndpointProviderBase> endpointProvider = Aws::MakeShared<ProtonEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Proton::ProtonClientConfiguration& clientConfiguration = Aws::Proton::ProtonClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ProtonClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ProtonEndpointProviderBase> endpointProvider = Aws::MakeShared<ProtonEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Proton::ProtonClientConfiguration& clientConfiguration = Aws::Proton::ProtonClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ProtonClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ProtonClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ProtonClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ProtonClient();

        /**
         * <p>In a management account, an environment account connection request is
         * accepted. When the environment account connection request is accepted, Proton
         * can use the associated IAM role to provision environment infrastructure
         * resources in the associated environment account.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/AcceptEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEnvironmentAccountConnectionOutcome AcceptEnvironmentAccountConnection(const Model::AcceptEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for AcceptEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptEnvironmentAccountConnectionOutcomeCallable AcceptEnvironmentAccountConnectionCallable(const Model::AcceptEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for AcceptEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptEnvironmentAccountConnectionAsync(const Model::AcceptEnvironmentAccountConnectionRequest& request, const AcceptEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel a component deployment (for a component that is in the
         * <code>IN_PROGRESS</code> deployment status).</p> <p>For more information about
         * components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CancelComponentDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelComponentDeploymentOutcome CancelComponentDeployment(const Model::CancelComponentDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CancelComponentDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelComponentDeploymentOutcomeCallable CancelComponentDeploymentCallable(const Model::CancelComponentDeploymentRequest& request) const;

        /**
         * An Async wrapper for CancelComponentDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelComponentDeploymentAsync(const Model::CancelComponentDeploymentRequest& request, const CancelComponentDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel an environment deployment on an <a>UpdateEnvironment</a>
         * action, if the deployment is <code>IN_PROGRESS</code>. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-update.html">Update
         * an environment</a> in the <i>Proton User guide</i>.</p> <p>The following list
         * includes potential cancellation scenarios.</p> <ul> <li> <p>If the cancellation
         * attempt succeeds, the resulting deployment state is <code>CANCELLED</code>.</p>
         * </li> <li> <p>If the cancellation attempt fails, the resulting deployment state
         * is <code>FAILED</code>.</p> </li> <li> <p>If the current
         * <a>UpdateEnvironment</a> action succeeds before the cancellation attempt starts,
         * the resulting deployment state is <code>SUCCEEDED</code> and the cancellation
         * attempt has no effect.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CancelEnvironmentDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelEnvironmentDeploymentOutcome CancelEnvironmentDeployment(const Model::CancelEnvironmentDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CancelEnvironmentDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelEnvironmentDeploymentOutcomeCallable CancelEnvironmentDeploymentCallable(const Model::CancelEnvironmentDeploymentRequest& request) const;

        /**
         * An Async wrapper for CancelEnvironmentDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelEnvironmentDeploymentAsync(const Model::CancelEnvironmentDeploymentRequest& request, const CancelEnvironmentDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel a service instance deployment on an
         * <a>UpdateServiceInstance</a> action, if the deployment is
         * <code>IN_PROGRESS</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-instance-update.html">Update
         * a service instance</a> in the <i>Proton User guide</i>.</p> <p>The following
         * list includes potential cancellation scenarios.</p> <ul> <li> <p>If the
         * cancellation attempt succeeds, the resulting deployment state is
         * <code>CANCELLED</code>.</p> </li> <li> <p>If the cancellation attempt fails, the
         * resulting deployment state is <code>FAILED</code>.</p> </li> <li> <p>If the
         * current <a>UpdateServiceInstance</a> action succeeds before the cancellation
         * attempt starts, the resulting deployment state is <code>SUCCEEDED</code> and the
         * cancellation attempt has no effect.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CancelServiceInstanceDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelServiceInstanceDeploymentOutcome CancelServiceInstanceDeployment(const Model::CancelServiceInstanceDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CancelServiceInstanceDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelServiceInstanceDeploymentOutcomeCallable CancelServiceInstanceDeploymentCallable(const Model::CancelServiceInstanceDeploymentRequest& request) const;

        /**
         * An Async wrapper for CancelServiceInstanceDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelServiceInstanceDeploymentAsync(const Model::CancelServiceInstanceDeploymentRequest& request, const CancelServiceInstanceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel a service pipeline deployment on an
         * <a>UpdateServicePipeline</a> action, if the deployment is
         * <code>IN_PROGRESS</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-svc-pipeline-update.html">Update
         * a service pipeline</a> in the <i>Proton User guide</i>.</p> <p>The following
         * list includes potential cancellation scenarios.</p> <ul> <li> <p>If the
         * cancellation attempt succeeds, the resulting deployment state is
         * <code>CANCELLED</code>.</p> </li> <li> <p>If the cancellation attempt fails, the
         * resulting deployment state is <code>FAILED</code>.</p> </li> <li> <p>If the
         * current <a>UpdateServicePipeline</a> action succeeds before the cancellation
         * attempt starts, the resulting deployment state is <code>SUCCEEDED</code> and the
         * cancellation attempt has no effect.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CancelServicePipelineDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelServicePipelineDeploymentOutcome CancelServicePipelineDeployment(const Model::CancelServicePipelineDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CancelServicePipelineDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelServicePipelineDeploymentOutcomeCallable CancelServicePipelineDeploymentCallable(const Model::CancelServicePipelineDeploymentRequest& request) const;

        /**
         * An Async wrapper for CancelServicePipelineDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelServicePipelineDeploymentAsync(const Model::CancelServicePipelineDeploymentRequest& request, const CancelServicePipelineDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an Proton component. A component is an infrastructure extension for a
         * service instance.</p> <p>For more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploy a new environment. An Proton environment is created from an
         * environment template that defines infrastructure and resources that can be
         * shared across services.</p> <p class="title"> <b>You can provision environments
         * using the following methods:</b> </p> <ul> <li> <p>Amazon Web Services-managed
         * provisioning: Proton makes direct calls to provision your resources.</p> </li>
         * <li> <p>Self-managed provisioning: Proton makes pull requests on your repository
         * to provide compiled infrastructure as code (IaC) files that your IaC engine uses
         * to provision resources.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-environments.html">Environments</a>
         * and <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html">Provisioning
         * methods</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an environment account connection in an environment account so that
         * environment infrastructure resources can be provisioned in the environment
         * account from a management account.</p> <p>An environment account connection is a
         * secure bi-directional connection between a <i>management account</i> and an
         * <i>environment account</i> that maintains authorization and permissions. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentAccountConnectionOutcome CreateEnvironmentAccountConnection(const Model::CreateEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentAccountConnectionOutcomeCallable CreateEnvironmentAccountConnectionCallable(const Model::CreateEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAccountConnectionAsync(const Model::CreateEnvironmentAccountConnectionRequest& request, const CreateEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an environment template for Proton. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-templates.html">Environment
         * Templates</a> in the <i>Proton User Guide</i>.</p> <p>You can create an
         * environment template in one of the two following ways:</p> <ul> <li> <p>Register
         * and publish a <i>standard</i> environment template that instructs Proton to
         * deploy and manage environment infrastructure.</p> </li> <li> <p>Register and
         * publish a <i>customer managed</i> environment template that connects Proton to
         * your existing provisioned infrastructure that you manage. Proton <i>doesn't</i>
         * manage your existing provisioned infrastructure. To create an environment
         * template for customer provisioned and managed infrastructure, include the
         * <code>provisioning</code> parameter and set the value to
         * <code>CUSTOMER_MANAGED</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/template-create.html">Register
         * and publish an environment template</a> in the <i>Proton User Guide</i>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentTemplateOutcome CreateEnvironmentTemplate(const Model::CreateEnvironmentTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentTemplateOutcomeCallable CreateEnvironmentTemplateCallable(const Model::CreateEnvironmentTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentTemplateAsync(const Model::CreateEnvironmentTemplateRequest& request, const CreateEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new major or minor version of an environment template. A major
         * version of an environment template is a version that <i>isn't</i> backwards
         * compatible. A minor version of an environment template is a version that's
         * backwards compatible within its major version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentTemplateVersionOutcome CreateEnvironmentTemplateVersion(const Model::CreateEnvironmentTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentTemplateVersionOutcomeCallable CreateEnvironmentTemplateVersionCallable(const Model::CreateEnvironmentTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironmentTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentTemplateVersionAsync(const Model::CreateEnvironmentTemplateVersionRequest& request, const CreateEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create and register a link to a repository. Proton uses the link to
         * repeatedly access the repository, to either push to it (self-managed
         * provisioning) or pull from it (template sync). You can share a linked repository
         * across multiple resources (like environments using self-managed provisioning, or
         * synced templates). When you create a repository link, Proton creates a <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/using-service-linked-roles.html">service-linked
         * role</a> for you.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
         * provisioning</a>, <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-template-authoring.html#ag-template-bundles">Template
         * bundles</a>, and <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-template-sync-configs.html">Template
         * sync configurations</a> in the <i>Proton User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an Proton service. An Proton service is an instantiation of a service
         * template and often includes several service instances and pipeline. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-services.html">Services</a>
         * in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a service template. The administrator creates a service template to
         * define standardized infrastructure and an optional CI/CD service pipeline.
         * Developers, in turn, select the service template from Proton. If the selected
         * service template includes a service pipeline definition, they provide a link to
         * their source code repository. Proton then deploys and manages the infrastructure
         * defined by the selected service template. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-templates.html">Proton
         * templates</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceTemplateOutcome CreateServiceTemplate(const Model::CreateServiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceTemplateOutcomeCallable CreateServiceTemplateCallable(const Model::CreateServiceTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateServiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceTemplateAsync(const Model::CreateServiceTemplateRequest& request, const CreateServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new major or minor version of a service template. A major version of
         * a service template is a version that <i>isn't</i> backward compatible. A minor
         * version of a service template is a version that's backward compatible within its
         * major version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceTemplateVersionOutcome CreateServiceTemplateVersion(const Model::CreateServiceTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceTemplateVersionOutcomeCallable CreateServiceTemplateVersionCallable(const Model::CreateServiceTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for CreateServiceTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceTemplateVersionAsync(const Model::CreateServiceTemplateVersionRequest& request, const CreateServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set up a template to create new template versions automatically by tracking a
         * linked repository. A linked repository is a repository that has been registered
         * with Proton. For more information, see <a>CreateRepository</a>.</p> <p>When a
         * commit is pushed to your linked repository, Proton checks for changes to your
         * repository template bundles. If it detects a template bundle change, a new major
         * or minor version of its template is created, if the version doesn’t already
         * exist. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-template-sync-configs.html">Template
         * sync configurations</a> in the <i>Proton User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateSyncConfigOutcome CreateTemplateSyncConfig(const Model::CreateTemplateSyncConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplateSyncConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateSyncConfigOutcomeCallable CreateTemplateSyncConfigCallable(const Model::CreateTemplateSyncConfigRequest& request) const;

        /**
         * An Async wrapper for CreateTemplateSyncConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateSyncConfigAsync(const Model::CreateTemplateSyncConfigRequest& request, const CreateTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an Proton component resource.</p> <p>For more information about
         * components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>In an environment account, delete an environment account connection.</p>
         * <p>After you delete an environment account connection that’s in use by an Proton
         * environment, Proton <i>can’t</i> manage the environment infrastructure resources
         * until a new environment account connection is accepted for the environment
         * account and associated environment. You're responsible for cleaning up
         * provisioned resources that remain without an environment connection.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentAccountConnectionOutcome DeleteEnvironmentAccountConnection(const Model::DeleteEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentAccountConnectionOutcomeCallable DeleteEnvironmentAccountConnectionCallable(const Model::DeleteEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAccountConnectionAsync(const Model::DeleteEnvironmentAccountConnectionRequest& request, const DeleteEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If no other major or minor versions of an environment template exist, delete
         * the environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentTemplateOutcome DeleteEnvironmentTemplate(const Model::DeleteEnvironmentTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentTemplateOutcomeCallable DeleteEnvironmentTemplateCallable(const Model::DeleteEnvironmentTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentTemplateAsync(const Model::DeleteEnvironmentTemplateRequest& request, const DeleteEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If no other minor versions of an environment template exist, delete a major
         * version of the environment template if it's not the <code>Recommended</code>
         * version. Delete the <code>Recommended</code> version of the environment template
         * if no other major versions or minor versions of the environment template exist.
         * A major version of an environment template is a version that's not backward
         * compatible.</p> <p>Delete a minor version of an environment template if it
         * <i>isn't</i> the <code>Recommended</code> version. Delete a
         * <code>Recommended</code> minor version of the environment template if no other
         * minor versions of the environment template exist. A minor version of an
         * environment template is a version that's backward compatible.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentTemplateVersionOutcome DeleteEnvironmentTemplateVersion(const Model::DeleteEnvironmentTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentTemplateVersionOutcomeCallable DeleteEnvironmentTemplateVersionCallable(const Model::DeleteEnvironmentTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironmentTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentTemplateVersionAsync(const Model::DeleteEnvironmentTemplateVersionRequest& request, const DeleteEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>De-register and unlink your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a service, with its instances and pipeline.</p>  <p>You can't
         * delete a service if it has any service instances that have components attached
         * to them.</p> <p>For more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If no other major or minor versions of the service template exist, delete the
         * service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceTemplateOutcome DeleteServiceTemplate(const Model::DeleteServiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceTemplateOutcomeCallable DeleteServiceTemplateCallable(const Model::DeleteServiceTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceTemplateAsync(const Model::DeleteServiceTemplateRequest& request, const DeleteServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If no other minor versions of a service template exist, delete a major
         * version of the service template if it's not the <code>Recommended</code>
         * version. Delete the <code>Recommended</code> version of the service template if
         * no other major versions or minor versions of the service template exist. A major
         * version of a service template is a version that <i>isn't</i> backwards
         * compatible.</p> <p>Delete a minor version of a service template if it's not the
         * <code>Recommended</code> version. Delete a <code>Recommended</code> minor
         * version of the service template if no other minor versions of the service
         * template exist. A minor version of a service template is a version that's
         * backwards compatible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceTemplateVersionOutcome DeleteServiceTemplateVersion(const Model::DeleteServiceTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceTemplateVersionOutcomeCallable DeleteServiceTemplateVersionCallable(const Model::DeleteServiceTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceTemplateVersionAsync(const Model::DeleteServiceTemplateVersionRequest& request, const DeleteServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a template sync configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateSyncConfigOutcome DeleteTemplateSyncConfig(const Model::DeleteTemplateSyncConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplateSyncConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateSyncConfigOutcomeCallable DeleteTemplateSyncConfigCallable(const Model::DeleteTemplateSyncConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteTemplateSyncConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateSyncConfigAsync(const Model::DeleteTemplateSyncConfigRequest& request, const DeleteTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detail data for Proton account-wide settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a component.</p> <p>For more information about
         * components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentOutcomeCallable GetComponentCallable(const Model::GetComponentRequest& request) const;

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentAsync(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>In an environment account, get the detailed data for an environment account
         * connection.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentAccountConnectionOutcome GetEnvironmentAccountConnection(const Model::GetEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentAccountConnectionOutcomeCallable GetEnvironmentAccountConnectionCallable(const Model::GetEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for GetEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAccountConnectionAsync(const Model::GetEnvironmentAccountConnectionRequest& request, const GetEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for an environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentTemplateOutcome GetEnvironmentTemplate(const Model::GetEnvironmentTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentTemplateOutcomeCallable GetEnvironmentTemplateCallable(const Model::GetEnvironmentTemplateRequest& request) const;

        /**
         * An Async wrapper for GetEnvironmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentTemplateAsync(const Model::GetEnvironmentTemplateRequest& request, const GetEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a major or minor version of an environment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentTemplateVersionOutcome GetEnvironmentTemplateVersion(const Model::GetEnvironmentTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentTemplateVersionOutcomeCallable GetEnvironmentTemplateVersionCallable(const Model::GetEnvironmentTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for GetEnvironmentTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentTemplateVersionAsync(const Model::GetEnvironmentTemplateVersionRequest& request, const GetEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detail data for a linked repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryOutcome GetRepository(const Model::GetRepositoryRequest& request) const;

        /**
         * A Callable wrapper for GetRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryOutcomeCallable GetRepositoryCallable(const Model::GetRepositoryRequest& request) const;

        /**
         * An Async wrapper for GetRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryAsync(const Model::GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the sync status of a repository used for Proton template sync. For more
         * information about template sync, see .</p>  <p>A repository sync status
         * isn't tied to the Proton Repository resource (or any other Proton resource).
         * Therefore, tags on an Proton Repository resource have no effect on this action.
         * Specifically, you can't use these tags to control access to this action using
         * Attribute-based access control (ABAC).</p> <p>For more information about ABAC,
         * see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-tags">ABAC</a>
         * in the <i>Proton User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetRepositorySyncStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositorySyncStatusOutcome GetRepositorySyncStatus(const Model::GetRepositorySyncStatusRequest& request) const;

        /**
         * A Callable wrapper for GetRepositorySyncStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositorySyncStatusOutcomeCallable GetRepositorySyncStatusCallable(const Model::GetRepositorySyncStatusRequest& request) const;

        /**
         * An Async wrapper for GetRepositorySyncStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositorySyncStatusAsync(const Model::GetRepositorySyncStatusRequest& request, const GetRepositorySyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

        /**
         * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceOutcomeCallable GetServiceCallable(const Model::GetServiceRequest& request) const;

        /**
         * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceAsync(const Model::GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a service instance. A service instance is an
         * instantiation of service template and it runs in a specific
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceInstanceOutcome GetServiceInstance(const Model::GetServiceInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetServiceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceInstanceOutcomeCallable GetServiceInstanceCallable(const Model::GetServiceInstanceRequest& request) const;

        /**
         * An Async wrapper for GetServiceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceInstanceAsync(const Model::GetServiceInstanceRequest& request, const GetServiceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceTemplateOutcome GetServiceTemplate(const Model::GetServiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetServiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceTemplateOutcomeCallable GetServiceTemplateCallable(const Model::GetServiceTemplateRequest& request) const;

        /**
         * An Async wrapper for GetServiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceTemplateAsync(const Model::GetServiceTemplateRequest& request, const GetServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed data for a major or minor version of a service
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceTemplateVersionOutcome GetServiceTemplateVersion(const Model::GetServiceTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for GetServiceTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceTemplateVersionOutcomeCallable GetServiceTemplateVersionCallable(const Model::GetServiceTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for GetServiceTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceTemplateVersionAsync(const Model::GetServiceTemplateVersionRequest& request, const GetServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detail data for a template sync configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSyncConfigOutcome GetTemplateSyncConfig(const Model::GetTemplateSyncConfigRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateSyncConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateSyncConfigOutcomeCallable GetTemplateSyncConfigCallable(const Model::GetTemplateSyncConfigRequest& request) const;

        /**
         * An Async wrapper for GetTemplateSyncConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateSyncConfigAsync(const Model::GetTemplateSyncConfigRequest& request, const GetTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the status of a template sync.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetTemplateSyncStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSyncStatusOutcome GetTemplateSyncStatus(const Model::GetTemplateSyncStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateSyncStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateSyncStatusOutcomeCallable GetTemplateSyncStatusCallable(const Model::GetTemplateSyncStatusRequest& request) const;

        /**
         * An Async wrapper for GetTemplateSyncStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateSyncStatusAsync(const Model::GetTemplateSyncStatusRequest& request, const GetTemplateSyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of component Infrastructure as Code (IaC) outputs.</p> <p>For more
         * information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListComponentOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentOutputsOutcome ListComponentOutputs(const Model::ListComponentOutputsRequest& request) const;

        /**
         * A Callable wrapper for ListComponentOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentOutputsOutcomeCallable ListComponentOutputsCallable(const Model::ListComponentOutputsRequest& request) const;

        /**
         * An Async wrapper for ListComponentOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentOutputsAsync(const Model::ListComponentOutputsRequest& request, const ListComponentOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List provisioned resources for a component with details.</p> <p>For more
         * information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListComponentProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentProvisionedResourcesOutcome ListComponentProvisionedResources(const Model::ListComponentProvisionedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListComponentProvisionedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentProvisionedResourcesOutcomeCallable ListComponentProvisionedResourcesCallable(const Model::ListComponentProvisionedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListComponentProvisionedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentProvisionedResourcesAsync(const Model::ListComponentProvisionedResourcesRequest& request, const ListComponentProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List components with summary data. You can filter the result list by
         * environment, service, or a single service instance.</p> <p>For more information
         * about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>View a list of environment account connections.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentAccountConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentAccountConnectionsOutcome ListEnvironmentAccountConnections(const Model::ListEnvironmentAccountConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentAccountConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentAccountConnectionsOutcomeCallable ListEnvironmentAccountConnectionsCallable(const Model::ListEnvironmentAccountConnectionsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentAccountConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentAccountConnectionsAsync(const Model::ListEnvironmentAccountConnectionsRequest& request, const ListEnvironmentAccountConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the infrastructure as code outputs for your environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentOutputsOutcome ListEnvironmentOutputs(const Model::ListEnvironmentOutputsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentOutputsOutcomeCallable ListEnvironmentOutputsCallable(const Model::ListEnvironmentOutputsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentOutputsAsync(const Model::ListEnvironmentOutputsRequest& request, const ListEnvironmentOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the provisioned resources for your environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentProvisionedResourcesOutcome ListEnvironmentProvisionedResources(const Model::ListEnvironmentProvisionedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentProvisionedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentProvisionedResourcesOutcomeCallable ListEnvironmentProvisionedResourcesCallable(const Model::ListEnvironmentProvisionedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentProvisionedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentProvisionedResourcesAsync(const Model::ListEnvironmentProvisionedResourcesRequest& request, const ListEnvironmentProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List major or minor versions of an environment template with detail
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentTemplateVersionsOutcome ListEnvironmentTemplateVersions(const Model::ListEnvironmentTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentTemplateVersionsOutcomeCallable ListEnvironmentTemplateVersionsCallable(const Model::ListEnvironmentTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentTemplateVersionsAsync(const Model::ListEnvironmentTemplateVersionsRequest& request, const ListEnvironmentTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List environment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentTemplatesOutcome ListEnvironmentTemplates(const Model::ListEnvironmentTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentTemplatesOutcomeCallable ListEnvironmentTemplatesCallable(const Model::ListEnvironmentTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentTemplatesAsync(const Model::ListEnvironmentTemplatesRequest& request, const ListEnvironmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List environments with detail data summaries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List linked repositories with detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;

        /**
         * An Async wrapper for ListRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List repository sync definitions with detail data.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListRepositorySyncDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositorySyncDefinitionsOutcome ListRepositorySyncDefinitions(const Model::ListRepositorySyncDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListRepositorySyncDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositorySyncDefinitionsOutcomeCallable ListRepositorySyncDefinitionsCallable(const Model::ListRepositorySyncDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListRepositorySyncDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositorySyncDefinitionsAsync(const Model::ListRepositorySyncDefinitionsRequest& request, const ListRepositorySyncDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list service of instance Infrastructure as Code (IaC)
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstanceOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstanceOutputsOutcome ListServiceInstanceOutputs(const Model::ListServiceInstanceOutputsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceInstanceOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceInstanceOutputsOutcomeCallable ListServiceInstanceOutputsCallable(const Model::ListServiceInstanceOutputsRequest& request) const;

        /**
         * An Async wrapper for ListServiceInstanceOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceInstanceOutputsAsync(const Model::ListServiceInstanceOutputsRequest& request, const ListServiceInstanceOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List provisioned resources for a service instance with details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstanceProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstanceProvisionedResourcesOutcome ListServiceInstanceProvisionedResources(const Model::ListServiceInstanceProvisionedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListServiceInstanceProvisionedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceInstanceProvisionedResourcesOutcomeCallable ListServiceInstanceProvisionedResourcesCallable(const Model::ListServiceInstanceProvisionedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListServiceInstanceProvisionedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceInstanceProvisionedResourcesAsync(const Model::ListServiceInstanceProvisionedResourcesRequest& request, const ListServiceInstanceProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List service instances with summary data. This action lists service instances
         * of all services in the Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstancesOutcome ListServiceInstances(const Model::ListServiceInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListServiceInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceInstancesOutcomeCallable ListServiceInstancesCallable(const Model::ListServiceInstancesRequest& request) const;

        /**
         * An Async wrapper for ListServiceInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceInstancesAsync(const Model::ListServiceInstancesRequest& request, const ListServiceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of service pipeline Infrastructure as Code (IaC)
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServicePipelineOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicePipelineOutputsOutcome ListServicePipelineOutputs(const Model::ListServicePipelineOutputsRequest& request) const;

        /**
         * A Callable wrapper for ListServicePipelineOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicePipelineOutputsOutcomeCallable ListServicePipelineOutputsCallable(const Model::ListServicePipelineOutputsRequest& request) const;

        /**
         * An Async wrapper for ListServicePipelineOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicePipelineOutputsAsync(const Model::ListServicePipelineOutputsRequest& request, const ListServicePipelineOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List provisioned resources for a service and pipeline with
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServicePipelineProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicePipelineProvisionedResourcesOutcome ListServicePipelineProvisionedResources(const Model::ListServicePipelineProvisionedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListServicePipelineProvisionedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicePipelineProvisionedResourcesOutcomeCallable ListServicePipelineProvisionedResourcesCallable(const Model::ListServicePipelineProvisionedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListServicePipelineProvisionedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicePipelineProvisionedResourcesAsync(const Model::ListServicePipelineProvisionedResourcesRequest& request, const ListServicePipelineProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List major or minor versions of a service template with detail
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceTemplateVersionsOutcome ListServiceTemplateVersions(const Model::ListServiceTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceTemplateVersionsOutcomeCallable ListServiceTemplateVersionsCallable(const Model::ListServiceTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for ListServiceTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceTemplateVersionsAsync(const Model::ListServiceTemplateVersionsRequest& request, const ListServiceTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List service templates with detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceTemplatesOutcome ListServiceTemplates(const Model::ListServiceTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListServiceTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceTemplatesOutcomeCallable ListServiceTemplatesCallable(const Model::ListServiceTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListServiceTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceTemplatesAsync(const Model::ListServiceTemplatesRequest& request, const ListServiceTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List services with summaries of detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
         * resources and tagging</a> in the <i>Proton User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListTagsForResource">AWS
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
         * <p>Notify Proton of status changes to a provisioned resource when you use
         * self-managed provisioning.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
         * provisioning</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/NotifyResourceDeploymentStatusChange">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyResourceDeploymentStatusChangeOutcome NotifyResourceDeploymentStatusChange(const Model::NotifyResourceDeploymentStatusChangeRequest& request) const;

        /**
         * A Callable wrapper for NotifyResourceDeploymentStatusChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyResourceDeploymentStatusChangeOutcomeCallable NotifyResourceDeploymentStatusChangeCallable(const Model::NotifyResourceDeploymentStatusChangeRequest& request) const;

        /**
         * An Async wrapper for NotifyResourceDeploymentStatusChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyResourceDeploymentStatusChangeAsync(const Model::NotifyResourceDeploymentStatusChangeRequest& request, const NotifyResourceDeploymentStatusChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>In a management account, reject an environment account connection from
         * another environment account.</p> <p>After you reject an environment account
         * connection request, you <i>can't</i> accept or use the rejected environment
         * account connection.</p> <p>You <i>can’t</i> reject an environment account
         * connection that's connected to an environment.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RejectEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectEnvironmentAccountConnectionOutcome RejectEnvironmentAccountConnection(const Model::RejectEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectEnvironmentAccountConnectionOutcomeCallable RejectEnvironmentAccountConnectionCallable(const Model::RejectEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for RejectEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectEnvironmentAccountConnectionAsync(const Model::RejectEnvironmentAccountConnectionRequest& request, const RejectEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tag a resource. A tag is a key-value pair of metadata that you associate with
         * an Proton resource.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
         * resources and tagging</a> in the <i>Proton User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/TagResource">AWS
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
         * <p>Remove a customer tag from a resource. A tag is a key-value pair of metadata
         * associated with an Proton resource.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
         * resources and tagging</a> in the <i>Proton User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UntagResource">AWS
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
         * <p>Update Proton settings that are used for multiple services in the Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a component.</p> <p>There are a few modes for updating a component.
         * The <code>deploymentType</code> field defines the mode.</p>  <p>You can't
         * update a component while its deployment status, or the deployment status of a
         * service instance attached to it, is <code>IN_PROGRESS</code>.</p>  <p>For
         * more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const Model::UpdateComponentRequest& request) const;

        /**
         * An Async wrapper for UpdateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentAsync(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an environment.</p> <p>If the environment is associated with an
         * environment account connection, <i>don't</i> update or include the
         * <code>protonServiceRoleArn</code> and <code>provisioningRepository</code>
         * parameter to update or connect to an environment account connection.</p> <p>You
         * can only update to a new environment account connection if that connection was
         * created in the same environment account that the current environment account
         * connection was created in. The account connection must also be associated with
         * the current environment.</p> <p>If the environment <i>isn't</i> associated with
         * an environment account connection, <i>don't</i> update or include the
         * <code>environmentAccountConnectionId</code> parameter. You <i>can't</i> update
         * or connect the environment to an environment account connection if it
         * <i>isn't</i> already associated with an environment connection.</p> <p>You can
         * update either the <code>environmentAccountConnectionId</code> or
         * <code>protonServiceRoleArn</code> parameter and value. You can’t update
         * both.</p> <p>If the environment was configured for Amazon Web Services-managed
         * provisioning, omit the <code>provisioningRepository</code> parameter.</p> <p>If
         * the environment was configured for self-managed provisioning, specify the
         * <code>provisioningRepository</code> parameter and omit the
         * <code>protonServiceRoleArn</code> and
         * <code>environmentAccountConnectionId</code> parameters.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-environments.html">Environments</a>
         * and <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html">Provisioning
         * methods</a> in the <i>Proton User Guide</i>.</p> <p>There are four modes for
         * updating an environment. The <code>deploymentType</code> field defines the
         * mode.</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
         * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
         * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
         * mode, the environment is deployed and updated with the new spec that you
         * provide. Only requested parameters are updated. <i>Don’t</i> include minor or
         * major version parameters when you use this <code>deployment-type</code>.</p>
         * </dd> <dt/> <dd> <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the
         * environment is deployed and updated with the published, recommended (latest)
         * minor version of the current major version in use, by default. You can also
         * specify a different minor version of the current major version in use.</p> </dd>
         * <dt/> <dd> <p> <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment
         * is deployed and updated with the published, recommended (latest) major and minor
         * version of the current template, by default. You can also specify a different
         * major version that's higher than the major version in use and a minor
         * version.</p> </dd> </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>In an environment account, update an environment account connection to use a
         * new IAM role.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
         * account connections</a> in the <i>Proton User guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironmentAccountConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentAccountConnectionOutcome UpdateEnvironmentAccountConnection(const Model::UpdateEnvironmentAccountConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentAccountConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentAccountConnectionOutcomeCallable UpdateEnvironmentAccountConnectionCallable(const Model::UpdateEnvironmentAccountConnectionRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironmentAccountConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAccountConnectionAsync(const Model::UpdateEnvironmentAccountConnectionRequest& request, const UpdateEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentTemplateOutcome UpdateEnvironmentTemplate(const Model::UpdateEnvironmentTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentTemplateOutcomeCallable UpdateEnvironmentTemplateCallable(const Model::UpdateEnvironmentTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentTemplateAsync(const Model::UpdateEnvironmentTemplateRequest& request, const UpdateEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a major or minor version of an environment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentTemplateVersionOutcome UpdateEnvironmentTemplateVersion(const Model::UpdateEnvironmentTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentTemplateVersionOutcomeCallable UpdateEnvironmentTemplateVersionCallable(const Model::UpdateEnvironmentTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironmentTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentTemplateVersionAsync(const Model::UpdateEnvironmentTemplateVersionRequest& request, const UpdateEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Edit a service description or use a spec to add and delete service
         * instances.</p>  <p>Existing service instances and the service pipeline
         * <i>can't</i> be edited using this API. They can only be deleted.</p> 
         * <p>Use the <code>description</code> parameter to modify the description.</p>
         * <p>Edit the <code>spec</code> parameter to add or delete instances.</p> 
         * <p>You can't delete a service instance (remove it from the spec) if it has an
         * attached component.</p> <p>For more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a service instance.</p> <p>There are a few modes for updating a
         * service instance. The <code>deploymentType</code> field defines the mode.</p>
         *  <p>You can't update a service instance while its deployment status, or
         * the deployment status of a component attached to it, is
         * <code>IN_PROGRESS</code>.</p> <p>For more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServiceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceInstanceOutcome UpdateServiceInstance(const Model::UpdateServiceInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceInstanceOutcomeCallable UpdateServiceInstanceCallable(const Model::UpdateServiceInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceInstanceAsync(const Model::UpdateServiceInstanceRequest& request, const UpdateServiceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the service pipeline.</p> <p>There are four modes for updating a
         * service pipeline. The <code>deploymentType</code> field defines the mode.</p>
         * <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a deployment
         * <i>doesn't</i> occur. Only the requested metadata parameters are updated.</p>
         * </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this mode, the
         * service pipeline is deployed and updated with the new spec that you provide.
         * Only requested parameters are updated. <i>Don’t</i> include major or minor
         * version parameters when you use this <code>deployment-type</code>.</p> </dd>
         * <dt/> <dd> <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service
         * pipeline is deployed and updated with the published, recommended (latest) minor
         * version of the current major version in use, by default. You can specify a
         * different minor version of the current major version in use.</p> </dd> <dt/>
         * <dd> <p> <code>MAJOR_VERSION</code> </p> <p>In this mode, the service pipeline
         * is deployed and updated with the published, recommended (latest) major and minor
         * version of the current template by default. You can specify a different major
         * version that's higher than the major version in use and a minor version.</p>
         * </dd> </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServicePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServicePipelineOutcome UpdateServicePipeline(const Model::UpdateServicePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdateServicePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServicePipelineOutcomeCallable UpdateServicePipelineCallable(const Model::UpdateServicePipelineRequest& request) const;

        /**
         * An Async wrapper for UpdateServicePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServicePipelineAsync(const Model::UpdateServicePipelineRequest& request, const UpdateServicePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceTemplateOutcome UpdateServiceTemplate(const Model::UpdateServiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceTemplateOutcomeCallable UpdateServiceTemplateCallable(const Model::UpdateServiceTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceTemplateAsync(const Model::UpdateServiceTemplateRequest& request, const UpdateServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a major or minor version of a service template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceTemplateVersionOutcome UpdateServiceTemplateVersion(const Model::UpdateServiceTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceTemplateVersionOutcomeCallable UpdateServiceTemplateVersionCallable(const Model::UpdateServiceTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceTemplateVersionAsync(const Model::UpdateServiceTemplateVersionRequest& request, const UpdateServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update template sync configuration parameters, except for the
         * <code>templateName</code> and <code>templateType</code>. Repository details
         * (branch, name, and provider) should be of a linked repository. A linked
         * repository is a repository that has been registered with Proton. For more
         * information, see <a>CreateRepository</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateSyncConfigOutcome UpdateTemplateSyncConfig(const Model::UpdateTemplateSyncConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateSyncConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateSyncConfigOutcomeCallable UpdateTemplateSyncConfigCallable(const Model::UpdateTemplateSyncConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplateSyncConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateSyncConfigAsync(const Model::UpdateTemplateSyncConfigRequest& request, const UpdateTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ProtonEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ProtonClient>;
      void init(const ProtonClientConfiguration& clientConfiguration);

      ProtonClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ProtonEndpointProviderBase> m_endpointProvider;
  };

} // namespace Proton
} // namespace Aws
