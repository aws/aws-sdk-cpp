/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>

namespace Aws
{
namespace ServerlessApplicationRepository
{
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
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServerlessApplicationRepositoryClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration(),
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Auth::AWSCredentials& credentials,
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG),
                                              const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServerlessApplicationRepositoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG),
                                              const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Auth::AWSCredentials& credentials,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServerlessApplicationRepositoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServerlessApplicationRepositoryClient();

        /**
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
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
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for CreateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateCloudFormationChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationChangeSetOutcomeCallable CreateCloudFormationChangeSetCallable(const Model::CreateCloudFormationChangeSetRequest& request) const;

        /**
         * An Async wrapper for CreateCloudFormationChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationChangeSetAsync(const Model::CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationTemplateOutcome CreateCloudFormationTemplate(const Model::CreateCloudFormationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudFormationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationTemplateOutcomeCallable CreateCloudFormationTemplateCallable(const Model::CreateCloudFormationTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateCloudFormationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationTemplateAsync(const Model::CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
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
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
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
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationPolicyOutcome GetApplicationPolicy(const Model::GetApplicationPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationPolicyOutcomeCallable GetApplicationPolicyCallable(const Model::GetApplicationPolicyRequest& request) const;

        /**
         * An Async wrapper for GetApplicationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationPolicyAsync(const Model::GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationTemplateOutcome GetCloudFormationTemplate(const Model::GetCloudFormationTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCloudFormationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFormationTemplateOutcomeCallable GetCloudFormationTemplateCallable(const Model::GetCloudFormationTemplateRequest& request) const;

        /**
         * An Async wrapper for GetCloudFormationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListApplicationDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationDependenciesOutcomeCallable ListApplicationDependenciesCallable(const Model::ListApplicationDependenciesRequest& request) const;

        /**
         * An Async wrapper for ListApplicationDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationDependenciesAsync(const Model::ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * An Async wrapper for ListApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationVersionsAsync(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
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
         * A Callable wrapper for PutApplicationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutApplicationPolicyOutcomeCallable PutApplicationPolicyCallable(const Model::PutApplicationPolicyRequest& request) const;

        /**
         * An Async wrapper for PutApplicationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutApplicationPolicyAsync(const Model::PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unshares an application from an AWS Organization.</p><p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UnshareApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareApplicationOutcome UnshareApplication(const Model::UnshareApplicationRequest& request) const;

        /**
         * A Callable wrapper for UnshareApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnshareApplicationOutcomeCallable UnshareApplicationCallable(const Model::UnshareApplicationRequest& request) const;

        /**
         * An Async wrapper for UnshareApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnshareApplicationAsync(const Model::UnshareApplicationRequest& request, const UnshareApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServerlessApplicationRepositoryClient>;
      void init(const ServerlessApplicationRepositoryClientConfiguration& clientConfiguration);

      ServerlessApplicationRepositoryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServerlessApplicationRepository
} // namespace Aws
