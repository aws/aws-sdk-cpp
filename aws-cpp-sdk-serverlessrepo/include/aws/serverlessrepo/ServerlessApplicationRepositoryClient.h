/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryLegacyAsyncMacros.h>

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
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;


        /**
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;


        /**
         * <p>Creates an AWS CloudFormation change set for the given
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationChangeSetOutcome CreateCloudFormationChangeSet(const Model::CreateCloudFormationChangeSetRequest& request) const;


        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationTemplateOutcome CreateCloudFormationTemplate(const Model::CreateCloudFormationTemplateRequest& request) const;


        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;


        /**
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationPolicyOutcome GetApplicationPolicy(const Model::GetApplicationPolicyRequest& request) const;


        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationTemplateOutcome GetCloudFormationTemplate(const Model::GetCloudFormationTemplateRequest& request) const;


        /**
         * <p>Retrieves the list of applications nested in the containing
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationDependenciesOutcome ListApplicationDependencies(const Model::ListApplicationDependenciesRequest& request) const;


        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;


        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;


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
         * <p>Unshares an application from an AWS Organization.</p><p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UnshareApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareApplicationOutcome UnshareApplication(const Model::UnshareApplicationRequest& request) const;


        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ServerlessApplicationRepositoryClientConfiguration& clientConfiguration);

      ServerlessApplicationRepositoryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServerlessApplicationRepository
} // namespace Aws
