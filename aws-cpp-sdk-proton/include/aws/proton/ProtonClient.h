/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/proton/ProtonServiceClientModel.h>
#include <aws/proton/ProtonLegacyAsyncMacros.h>

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
  class AWS_PROTON_API ProtonClient : public Aws::Client::AWSJsonClient
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
         * <p>Create an Proton component. A component is an infrastructure extension for a
         * service instance.</p> <p>For more information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;


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
         * <p>Create a new major or minor version of an environment template. A major
         * version of an environment template is a version that <i>isn't</i> backwards
         * compatible. A minor version of an environment template is a version that's
         * backwards compatible within its major version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentTemplateVersionOutcome CreateEnvironmentTemplateVersion(const Model::CreateEnvironmentTemplateVersionRequest& request) const;


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
         * <p>Create a new major or minor version of a service template. A major version of
         * a service template is a version that <i>isn't</i> backward compatible. A minor
         * version of a service template is a version that's backward compatible within its
         * major version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CreateServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceTemplateVersionOutcome CreateServiceTemplateVersion(const Model::CreateServiceTemplateVersionRequest& request) const;


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
         * <p>Delete an Proton component resource.</p> <p>For more information about
         * components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;


        /**
         * <p>Delete an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;


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
         * <p>If no other major or minor versions of an environment template exist, delete
         * the environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentTemplateOutcome DeleteEnvironmentTemplate(const Model::DeleteEnvironmentTemplateRequest& request) const;


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
         * <p>De-register and unlink your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;


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
         * <p>If no other major or minor versions of the service template exist, delete the
         * service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceTemplateOutcome DeleteServiceTemplate(const Model::DeleteServiceTemplateRequest& request) const;


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
         * <p>Delete a template sync configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeleteTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateSyncConfigOutcome DeleteTemplateSyncConfig(const Model::DeleteTemplateSyncConfigRequest& request) const;


        /**
         * <p>Get detail data for Proton account-wide settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;


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
         * <p>Get detailed data for an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;


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
         * <p>Get detailed data for an environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentTemplateOutcome GetEnvironmentTemplate(const Model::GetEnvironmentTemplateRequest& request) const;


        /**
         * <p>Get detailed data for a major or minor version of an environment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentTemplateVersionOutcome GetEnvironmentTemplateVersion(const Model::GetEnvironmentTemplateVersionRequest& request) const;


        /**
         * <p>Get detail data for a linked repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryOutcome GetRepository(const Model::GetRepositoryRequest& request) const;


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
         * <p>Get detailed data for a service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;


        /**
         * <p>Get detailed data for a service instance. A service instance is an
         * instantiation of service template and it runs in a specific
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceInstanceOutcome GetServiceInstance(const Model::GetServiceInstanceRequest& request) const;


        /**
         * <p>Get detailed data for a service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceTemplateOutcome GetServiceTemplate(const Model::GetServiceTemplateRequest& request) const;


        /**
         * <p>Get detailed data for a major or minor version of a service
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceTemplateVersionOutcome GetServiceTemplateVersion(const Model::GetServiceTemplateVersionRequest& request) const;


        /**
         * <p>Get detail data for a template sync configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetTemplateSyncConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSyncConfigOutcome GetTemplateSyncConfig(const Model::GetTemplateSyncConfigRequest& request) const;


        /**
         * <p>Get the status of a template sync.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/GetTemplateSyncStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSyncStatusOutcome GetTemplateSyncStatus(const Model::GetTemplateSyncStatusRequest& request) const;


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
         * <p>List provisioned resources for a component with details.</p> <p>For more
         * information about components, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
         * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListComponentProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentProvisionedResourcesOutcome ListComponentProvisionedResources(const Model::ListComponentProvisionedResourcesRequest& request) const;


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
         * <p>List the infrastructure as code outputs for your environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentOutputsOutcome ListEnvironmentOutputs(const Model::ListEnvironmentOutputsRequest& request) const;


        /**
         * <p>List the provisioned resources for your environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentProvisionedResourcesOutcome ListEnvironmentProvisionedResources(const Model::ListEnvironmentProvisionedResourcesRequest& request) const;


        /**
         * <p>List major or minor versions of an environment template with detail
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentTemplateVersionsOutcome ListEnvironmentTemplateVersions(const Model::ListEnvironmentTemplateVersionsRequest& request) const;


        /**
         * <p>List environment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentTemplatesOutcome ListEnvironmentTemplates(const Model::ListEnvironmentTemplatesRequest& request) const;


        /**
         * <p>List environments with detail data summaries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;


        /**
         * <p>List linked repositories with detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;


        /**
         * <p>List repository sync definitions with detail data.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListRepositorySyncDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositorySyncDefinitionsOutcome ListRepositorySyncDefinitions(const Model::ListRepositorySyncDefinitionsRequest& request) const;


        /**
         * <p>Get a list service of instance Infrastructure as Code (IaC)
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstanceOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstanceOutputsOutcome ListServiceInstanceOutputs(const Model::ListServiceInstanceOutputsRequest& request) const;


        /**
         * <p>List provisioned resources for a service instance with details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstanceProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstanceProvisionedResourcesOutcome ListServiceInstanceProvisionedResources(const Model::ListServiceInstanceProvisionedResourcesRequest& request) const;


        /**
         * <p>List service instances with summary data. This action lists service instances
         * of all services in the Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceInstancesOutcome ListServiceInstances(const Model::ListServiceInstancesRequest& request) const;


        /**
         * <p>Get a list of service pipeline Infrastructure as Code (IaC)
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServicePipelineOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicePipelineOutputsOutcome ListServicePipelineOutputs(const Model::ListServicePipelineOutputsRequest& request) const;


        /**
         * <p>List provisioned resources for a service and pipeline with
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServicePipelineProvisionedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicePipelineProvisionedResourcesOutcome ListServicePipelineProvisionedResources(const Model::ListServicePipelineProvisionedResourcesRequest& request) const;


        /**
         * <p>List major or minor versions of a service template with detail
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceTemplateVersionsOutcome ListServiceTemplateVersions(const Model::ListServiceTemplateVersionsRequest& request) const;


        /**
         * <p>List service templates with detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceTemplatesOutcome ListServiceTemplates(const Model::ListServiceTemplatesRequest& request) const;


        /**
         * <p>List services with summaries of detail data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;


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
         * <p>Notify Proton of status changes to a provisioned resource when you use
         * self-managed provisioning.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
         * provisioning</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/NotifyResourceDeploymentStatusChange">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyResourceDeploymentStatusChangeOutcome NotifyResourceDeploymentStatusChange(const Model::NotifyResourceDeploymentStatusChangeRequest& request) const;


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
         * <p>Update Proton settings that are used for multiple services in the Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;


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
         * <p>Update an environment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentTemplateOutcome UpdateEnvironmentTemplate(const Model::UpdateEnvironmentTemplateRequest& request) const;


        /**
         * <p>Update a major or minor version of an environment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateEnvironmentTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentTemplateVersionOutcome UpdateEnvironmentTemplateVersion(const Model::UpdateEnvironmentTemplateVersionRequest& request) const;


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
         * <p>Update a service template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceTemplateOutcome UpdateServiceTemplate(const Model::UpdateServiceTemplateRequest& request) const;


        /**
         * <p>Update a major or minor version of a service template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/UpdateServiceTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceTemplateVersionOutcome UpdateServiceTemplateVersion(const Model::UpdateServiceTemplateVersionRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ProtonEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ProtonClientConfiguration& clientConfiguration);

      ProtonClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ProtonEndpointProviderBase> m_endpointProvider;
  };

} // namespace Proton
} // namespace Aws
