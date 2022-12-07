/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-sap/SsmSapServiceClientModel.h>

namespace Aws
{
namespace SsmSap
{
  /**
   * <p>This API reference provides descriptions, syntax, and other details about
   * each of the actions and data types for AWS Systems Manager for SAP. The topic
   * for each action shows the API request parameters and responses. </p>
   */
  class AWS_SSMSAP_API SsmSapClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SsmSapClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration(),
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = Aws::MakeShared<SsmSapEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = Aws::MakeShared<SsmSapEndpointProvider>(ALLOCATION_TAG),
                     const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SsmSapClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = Aws::MakeShared<SsmSapEndpointProvider>(ALLOCATION_TAG),
                     const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SsmSapClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SsmSapClient();

        /**
         * <p>Removes permissions associated with the target database.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/DeleteResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePermissionOutcome DeleteResourcePermission(const Model::DeleteResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePermissionOutcomeCallable DeleteResourcePermissionCallable(const Model::DeleteResourcePermissionRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePermissionAsync(const Model::DeleteResourcePermissionRequest& request, const DeleteResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregister an SAP application with AWS Systems Manager for SAP. This action
         * does not aﬀect the existing setup of your SAP workloads on Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/DeregisterApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterApplicationOutcome DeregisterApplication(const Model::DeregisterApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeregisterApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterApplicationOutcomeCallable DeregisterApplicationCallable(const Model::DeregisterApplicationRequest& request) const;

        /**
         * An Async wrapper for DeregisterApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterApplicationAsync(const Model::DeregisterApplicationRequest& request, const DeregisterApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an application registered with AWS Systems Manager for SAP. It also
         * returns the components of the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetApplication">AWS
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
         * <p>Gets the component of an application registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetComponent">AWS
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
         * <p>Gets the SAP HANA database of an application registered with AWS Systems
         * Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const Model::GetDatabaseRequest& request) const;

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of an operation by specifying the operation
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationOutcome GetOperation(const Model::GetOperationRequest& request) const;

        /**
         * A Callable wrapper for GetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationOutcomeCallable GetOperationCallable(const Model::GetOperationRequest& request) const;

        /**
         * An Async wrapper for GetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationAsync(const Model::GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets permissions associated with the target database.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePermissionOutcome GetResourcePermission(const Model::GetResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePermissionOutcomeCallable GetResourcePermissionCallable(const Model::GetResourcePermissionRequest& request) const;

        /**
         * An Async wrapper for GetResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePermissionAsync(const Model::GetResourcePermissionRequest& request, const GetResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the applications registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListApplications">AWS
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
         * <p>Lists all the components registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListComponents">AWS
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
         * <p>Lists the SAP HANA databases of an application registered with AWS Systems
         * Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const Model::ListDatabasesRequest& request) const;

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an SAP HANA application and/or database registered with AWS
         * Systems Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListTagsForResource">AWS
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
         * <p>Adds permissions to the target database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/PutResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePermissionOutcome PutResourcePermission(const Model::PutResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePermissionOutcomeCallable PutResourcePermissionCallable(const Model::PutResourcePermissionRequest& request) const;

        /**
         * An Async wrapper for PutResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePermissionAsync(const Model::PutResourcePermissionRequest& request, const PutResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Register an SAP application with AWS Systems Manager for SAP. You must meet
         * the following requirements before registering. </p> <p>The SAP application you
         * want to register with AWS Systems Manager for SAP is running on Amazon EC2.</p>
         * <p>AWS Systems Manager Agent must be setup on an Amazon EC2 instance along with
         * the required IAM permissions.</p> <p>Amazon EC2 instance(s) must have access to
         * the secrets created in AWS Secrets Manager to manage SAP applications and
         * components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/RegisterApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterApplicationOutcome RegisterApplication(const Model::RegisterApplicationRequest& request) const;

        /**
         * A Callable wrapper for RegisterApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterApplicationOutcomeCallable RegisterApplicationCallable(const Model::RegisterApplicationRequest& request) const;

        /**
         * An Async wrapper for RegisterApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterApplicationAsync(const Model::RegisterApplicationRequest& request, const RegisterApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates tag for a resource by specifying the ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/TagResource">AWS
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
         * <p>Delete the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/UntagResource">AWS
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
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationSettingsAsync(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SsmSapEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SsmSapClient>;
      void init(const SsmSapClientConfiguration& clientConfiguration);

      SsmSapClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SsmSapEndpointProviderBase> m_endpointProvider;
  };

} // namespace SsmSap
} // namespace Aws
