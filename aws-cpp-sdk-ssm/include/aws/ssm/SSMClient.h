/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/SSMServiceClientModel.h>
#include <aws/ssm/SSMLegacyAsyncMacros.h>

namespace Aws
{
namespace SSM
{
  /**
   * <p>Amazon Web Services Systems Manager is a collection of capabilities to help
   * you manage your applications and infrastructure running in the Amazon Web
   * Services Cloud;. Systems Manager simplifies application and resource management,
   * shortens the time to detect and resolve operational problems, and helps you
   * manage your Amazon Web Services resources securely at scale.</p> <p>This
   * reference is intended to be used with the <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web
   * Services Systems Manager User Guide</a>.</p> <p>To get started, verify
   * prerequisites. For more information, see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting
   * up Amazon Web Services Systems Manager</a>.</p> <p class="title"> <b>Related
   * resources</b> </p> <ul> <li> <p>For information about how to use a Query API,
   * see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making
   * API requests</a>. </p> </li> <li> <p>For information about other API operations
   * you can perform on EC2 instances, see the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
   * Reference</a>.</p> </li> <li> <p>For information about AppConfig, a capability
   * of Systems Manager, see the <a
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User
   * Guide</a> and the <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig
   * API Reference</a>.</p> </li> <li> <p>For information about Incident Manager, a
   * capability of Systems Manager, see the <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident
   * Manager User Guide</a> and the <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident
   * Manager API Reference</a>.</p> </li> </ul>
   */
  class AWS_SSM_API SSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration(),
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SSMEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSM::SSMClientConfiguration& clientConfiguration = Aws::SSM::SSMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMClient();


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
         * <p>Adds or overwrites one or more tags for the specified resource. <i>Tags</i>
         * are metadata that you can assign to your automations, documents, managed nodes,
         * maintenance windows, Parameter Store parameters, and patch baselines. Tags
         * enable you to categorize your resources in different ways, for example, by
         * purpose, owner, or environment. Each tag consists of a key and an optional
         * value, both of which you define. For example, you could define a set of tags for
         * your account's managed nodes that helps you track each node's owner and stack
         * level. For example:</p> <ul> <li> <p> <code>Key=Owner,Value=DbAdmin</code> </p>
         * </li> <li> <p> <code>Key=Owner,Value=SysAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=Dev</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Pre-Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Test</code> </p> </li> </ul> <p>Most resources can have a
         * maximum of 50 tags. Automations can have a maximum of 5 tags.</p> <p>We
         * recommend that you devise a set of tag keys that meets your needs for each
         * resource type. Using a consistent set of tag keys makes it easier for you to
         * manage your resources. You can search and filter the resources based on the tags
         * you add. Tags don't have any semantic meaning to and are interpreted strictly as
         * a string of characters.</p> <p>For more information about using tags with Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;


        /**
         * <p>Associates a related item to a Systems Manager OpsCenter OpsItem. For
         * example, you can associate an Incident Manager incident or analysis with an
         * OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services
         * Systems Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOpsItemRelatedItemOutcome AssociateOpsItemRelatedItem(const Model::AssociateOpsItemRelatedItemRequest& request) const;


        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCommandOutcome CancelCommand(const Model::CancelCommandRequest& request) const;


        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that haven't already starting running. Tasks already in
         * progress will continue to completion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcome CancelMaintenanceWindowExecution(const Model::CancelMaintenanceWindowExecutionRequest& request) const;


        /**
         * <p>Generates an activation code and activation ID you can use to register your
         * on-premises servers, edge devices, or virtual machine (VM) with Amazon Web
         * Services Systems Manager. Registering these machines with Systems Manager makes
         * it possible to manage them using Systems Manager capabilities. You use the
         * activation code and ID when installing SSM Agent on machines in your hybrid
         * environment. For more information about requirements for managing on-premises
         * machines using Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * up Amazon Web Services Systems Manager for hybrid environments</a> in the
         * <i>Amazon Web Services Systems Manager User Guide</i>. </p>  <p>Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises
         * servers and VMs that are configured for Systems Manager are all called
         * <i>managed nodes</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;


        /**
         * <p>A State Manager association defines the state that you want to maintain on
         * your managed nodes. For example, an association can specify that anti-virus
         * software must be installed and running on your managed nodes, or that certain
         * ports must be closed. For static targets, the association specifies a schedule
         * for when the configuration is reapplied. For dynamic targets, such as an Amazon
         * Web Services resource group or an Amazon Web Services autoscaling group, State
         * Manager, a capability of Amazon Web Services Systems Manager applies the
         * configuration when new managed nodes are added to the group. The association
         * also specifies actions to take when applying the configuration. For example, an
         * association for anti-virus software might run once a day. If the software isn't
         * installed, then State Manager installs it. If the software is installed, but the
         * service isn't running, then the association might instruct State Manager to
         * start the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;


        /**
         * <p>Associates the specified Amazon Web Services Systems Manager document (SSM
         * document) with the specified managed nodes or targets.</p> <p>When you associate
         * a document with one or more managed nodes using IDs or tags, Amazon Web Services
         * Systems Manager Agent (SSM Agent) running on the managed node processes the
         * document and configures the node as specified.</p> <p>If you associate a
         * document with a managed node that already has an associated document, the system
         * returns the AssociationAlreadyExists exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;


        /**
         * <p>Creates a Amazon Web Services Systems Manager (SSM document). An SSM document
         * defines the actions that Systems Manager performs on your managed nodes. For
         * more information about SSM documents, including information about supported
         * schemas, features, and syntax, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon
         * Web Services Systems Manager Documents</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;


        /**
         * <p>Creates a new maintenance window.</p>  <p>The value you specify for
         * <code>Duration</code> determines the specific end time for the maintenance
         * window based on the time it begins. No maintenance window tasks are permitted to
         * start after the resulting endtime minus the number of hours you specify for
         * <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the
         * duration is three hours, and the value you specify for <code>Cutoff</code> is
         * one hour, no maintenance window tasks can start after 5 PM.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMaintenanceWindowOutcome CreateMaintenanceWindow(const Model::CreateMaintenanceWindowRequest& request) const;


        /**
         * <p>Creates a new OpsItem. You must have permission in Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
         * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsItemOutcome CreateOpsItem(const Model::CreateOpsItemRequest& request) const;


        /**
         * <p>If you create a new application in Application Manager, Amazon Web Services
         * Systems Manager calls this API operation to specify information about the new
         * application, including the application type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsMetadataOutcome CreateOpsMetadata(const Model::CreateOpsMetadataRequest& request) const;


        /**
         * <p>Creates a patch baseline.</p>  <p>For information about valid key-value
         * pairs in <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePatchBaselineOutcome CreatePatchBaseline(const Model::CreatePatchBaselineRequest& request) const;


        /**
         * <p>A resource data sync helps you view data from multiple sources in a single
         * location. Amazon Web Services Systems Manager offers two types of resource data
         * sync: <code>SyncToDestination</code> and <code>SyncFromSource</code>.</p> <p>You
         * can configure Systems Manager Inventory to use the
         * <code>SyncToDestination</code> type to synchronize Inventory data from multiple
         * Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon
         * S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * resource data sync for Inventory</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p> <p>You can configure Systems Manager Explorer to use
         * the <code>SyncFromSource</code> type to synchronize operational work items
         * (OpsItems) and operational data (OpsData) from multiple Amazon Web Services
         * Regions to a single Amazon S3 bucket. This type can synchronize OpsItems and
         * OpsData from multiple Amazon Web Services accounts and Amazon Web Services
         * Regions or <code>EntireOrganization</code> by using Organizations. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
         * up Systems Manager Explorer to display data from multiple accounts and
         * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
         * <p>A resource data sync is an asynchronous operation that returns immediately.
         * After a successful initial sync is completed, the system continuously syncs
         * data. To check the status of a sync, use the <a>ListResourceDataSync</a>.</p>
         *  <p>By default, data isn't encrypted in Amazon S3. We strongly recommend
         * that you enable encryption in Amazon S3 to ensure secure data storage. We also
         * recommend that you secure access to the Amazon S3 bucket by creating a
         * restrictive bucket policy. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDataSyncOutcome CreateResourceDataSync(const Model::CreateResourceDataSyncRequest& request) const;


        /**
         * <p>Deletes an activation. You aren't required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * nodes. Deleting an activation doesn't de-register managed nodes. You must
         * manually de-register managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;


        /**
         * <p>Disassociates the specified Amazon Web Services Systems Manager document (SSM
         * document) from the specified managed node. If you created the association by
         * using the <code>Targets</code> parameter, then you must delete the association
         * by using the association ID.</p> <p>When you disassociate a document from a
         * managed node, it doesn't change the configuration of the node. To change the
         * configuration state of a managed node after you disassociate a document, you
         * must create a new document with the desired configuration and associate it with
         * the node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;


        /**
         * <p>Deletes the Amazon Web Services Systems Manager document (SSM document) and
         * all managed node associations to the document.</p> <p>Before you delete the
         * document, we recommend that you use <a>DeleteAssociation</a> to disassociate all
         * managed nodes that are associated with the document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;


        /**
         * <p>Delete a custom inventory type or the data associated with a custom Inventory
         * type. Deleting a custom inventory type is also referred to as deleting a custom
         * inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInventoryOutcome DeleteInventory(const Model::DeleteInventoryRequest& request) const;


        /**
         * <p>Deletes a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMaintenanceWindowOutcome DeleteMaintenanceWindow(const Model::DeleteMaintenanceWindowRequest& request) const;


        /**
         * <p>Delete OpsMetadata related to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOpsMetadataOutcome DeleteOpsMetadata(const Model::DeleteOpsMetadataRequest& request) const;


        /**
         * <p>Delete a parameter from the system. After deleting a parameter, wait for at
         * least 30 seconds to create a parameter with the same name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterOutcome DeleteParameter(const Model::DeleteParameterRequest& request) const;


        /**
         * <p>Delete a list of parameters. After deleting a parameter, wait for at least 30
         * seconds to create a parameter with the same name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParametersOutcome DeleteParameters(const Model::DeleteParametersRequest& request) const;


        /**
         * <p>Deletes a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeletePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePatchBaselineOutcome DeletePatchBaseline(const Model::DeletePatchBaselineRequest& request) const;


        /**
         * <p>Deletes a resource data sync configuration. After the configuration is
         * deleted, changes to data on managed nodes are no longer synced to or from the
         * target. Deleting a sync configuration doesn't delete data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDataSyncOutcome DeleteResourceDataSync(const Model::DeleteResourceDataSyncRequest& request) const;


        /**
         * <p>Deletes a Systems Manager resource policy. A resource policy helps you to
         * define the IAM entity (for example, an Amazon Web Services account) that can
         * manage your Systems Manager resources. Currently, <code>OpsItemGroup</code> is
         * the only resource that supports Systems Manager resource policies. The resource
         * policy for <code>OpsItemGroup</code> enables Amazon Web Services accounts to
         * view and interact with OpsCenter operational work items
         * (OpsItems).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the node again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;


        /**
         * <p>Removes a patch group from a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPatchBaselineForPatchGroupOutcome DeregisterPatchBaselineForPatchGroup(const Model::DeregisterPatchBaselineForPatchGroupRequest& request) const;


        /**
         * <p>Removes a target from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTargetFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcome DeregisterTargetFromMaintenanceWindow(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;


        /**
         * <p>Removes a task from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTaskFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcome DeregisterTaskFromMaintenanceWindow(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;


        /**
         * <p>Describes details about the activation, such as the date and time the
         * activation was created, its expiration date, the Identity and Access Management
         * (IAM) role assigned to the managed nodes in the activation, and the number of
         * nodes registered by using this activation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;


        /**
         * <p>Describes the association for the specified target or managed node. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;


        /**
         * <p>Views information about a specific execution of a specific
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcome DescribeAssociationExecutionTargets(const Model::DescribeAssociationExecutionTargetsRequest& request) const;


        /**
         * <p>Views all executions for a specific association ID. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionsOutcome DescribeAssociationExecutions(const Model::DescribeAssociationExecutionsRequest& request) const;


        /**
         * <p>Provides details about all active and terminated Automation
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationExecutionsOutcome DescribeAutomationExecutions(const Model::DescribeAutomationExecutionsRequest& request) const;


        /**
         * <p>Information about all active and terminated step executions in an Automation
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationStepExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationStepExecutionsOutcome DescribeAutomationStepExecutions(const Model::DescribeAutomationStepExecutionsRequest& request) const;


        /**
         * <p>Lists all patches eligible to be included in a patch baseline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailablePatchesOutcome DescribeAvailablePatches(const Model::DescribeAvailablePatchesRequest& request) const;


        /**
         * <p>Describes the specified Amazon Web Services Systems Manager document (SSM
         * document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;


        /**
         * <p>Describes the permissions for a Amazon Web Services Systems Manager document
         * (SSM document). If you created the document, you are the owner. If a document is
         * shared, it can either be shared privately (by specifying a user's Amazon Web
         * Services account ID) or publicly (<i>All</i>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;


        /**
         * <p>All associations for the managed node(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcome DescribeEffectiveInstanceAssociations(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;


        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Applies to patch baselines for Windows
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcome DescribeEffectivePatchesForPatchBaseline(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;


        /**
         * <p>The status of the associations for the managed node(s).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcome DescribeInstanceAssociationsStatus(const Model::DescribeInstanceAssociationsStatusRequest& request) const;


        /**
         * <p>Describes one or more of your managed nodes, including information about the
         * operating system platform, the version of SSM Agent installed on the managed
         * node, node status, and so on.</p> <p>If you specify one or more managed node
         * IDs, it returns information for those managed nodes. If you don't specify node
         * IDs, it returns information for all your managed nodes. If you specify a node ID
         * that isn't valid or a node that you don't own, you receive an error.</p> 
         * <p>The <code>IamRole</code> field for this API operation is the Identity and
         * Access Management (IAM) role assigned to on-premises managed nodes. This call
         * doesn't return the IAM role for EC2 instances.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;


        /**
         * <p>Retrieves the high-level patch state of one or more managed
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesOutcome DescribeInstancePatchStates(const Model::DescribeInstancePatchStatesRequest& request) const;


        /**
         * <p>Retrieves the high-level patch state for the managed nodes in the specified
         * patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcome DescribeInstancePatchStatesForPatchGroup(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;


        /**
         * <p>Retrieves information about the patches on the specified managed node and
         * their state relative to the patch baseline being used for the
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchesOutcome DescribeInstancePatches(const Model::DescribeInstancePatchesRequest& request) const;


        /**
         * <p>Describes a specific delete inventory operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInventoryDeletions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInventoryDeletionsOutcome DescribeInventoryDeletions(const Model::DescribeInventoryDeletionsRequest& request) const;


        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task run as part of a maintenance window execution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTaskInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome DescribeMaintenanceWindowExecutionTaskInvocations(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;


        /**
         * <p>For a given maintenance window execution, lists the tasks that were
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcome DescribeMaintenanceWindowExecutionTasks(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;


        /**
         * <p>Lists the executions of a maintenance window. This includes information about
         * when the maintenance window was scheduled to be active, and information about
         * tasks registered and run with the maintenance window.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcome DescribeMaintenanceWindowExecutions(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;


        /**
         * <p>Retrieves information about upcoming executions of a maintenance
         * window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowScheduleOutcome DescribeMaintenanceWindowSchedule(const Model::DescribeMaintenanceWindowScheduleRequest& request) const;


        /**
         * <p>Lists the targets registered with the maintenance window.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcome DescribeMaintenanceWindowTargets(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;


        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcome DescribeMaintenanceWindowTasks(const Model::DescribeMaintenanceWindowTasksRequest& request) const;


        /**
         * <p>Retrieves the maintenance windows in an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsOutcome DescribeMaintenanceWindows(const Model::DescribeMaintenanceWindowsRequest& request) const;


        /**
         * <p>Retrieves information about the maintenance window targets or tasks that a
         * managed node is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcome DescribeMaintenanceWindowsForTarget(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;


        /**
         * <p>Query a set of OpsItems. You must have permission in Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOpsItemsOutcome DescribeOpsItems(const Model::DescribeOpsItemsRequest& request) const;


        /**
         * <p>Get information about a parameter.</p> <p>Request results are returned on a
         * best-effort basis. If you specify <code>MaxResults</code> in the request, the
         * response includes information up to the limit specified. The number of items
         * returned, however, can be between zero and the value of <code>MaxResults</code>.
         * If the service reaches an internal limit while processing the results, it stops
         * the operation and returns the matching values up to that point and a
         * <code>NextToken</code>. You can specify the <code>NextToken</code> in a
         * subsequent call to get the next set of results.</p>  <p>If you change
         * the KMS key alias for the KMS key used to encrypt a parameter, then you must
         * also update the key alias the parameter uses to reference KMS. Otherwise,
         * <code>DescribeParameters</code> retrieves whatever the original key alias was
         * referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;


        /**
         * <p>Lists the patch baselines in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchBaselinesOutcome DescribePatchBaselines(const Model::DescribePatchBaselinesRequest& request) const;


        /**
         * <p>Returns high-level aggregated patch compliance state information for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupStateOutcome DescribePatchGroupState(const Model::DescribePatchGroupStateRequest& request) const;


        /**
         * <p>Lists all patch groups that have been registered with patch
         * baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupsOutcome DescribePatchGroups(const Model::DescribePatchGroupsRequest& request) const;


        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>AMAZON_LINUX</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>CENTOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p>
         * </dd> <dt>DEBIAN</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>PRIORITY</code> </p> </dd> <dt>MACOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> </p> </dd>
         * <dt>ORACLE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd>
         * <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code>
         * | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd> <dt>SUSE</dt>
         * <dd> <p>Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>UBUNTU</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>PRIORITY</code> </p> </dd> <dt>WINDOWS</dt> <dd>
         * <p>Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> |
         * <code>CLASSIFICATION</code> | <code>MSRC_SEVERITY</code> </p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchPropertiesOutcome DescribePatchProperties(const Model::DescribePatchPropertiesRequest& request) const;


        /**
         * <p>Retrieves a list of all active sessions (both connected and disconnected) or
         * terminated sessions from the past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest& request) const;


        /**
         * <p>Deletes the association between an OpsItem and a related item. For example,
         * this API operation can delete an Incident Manager incident from an OpsItem.
         * Incident Manager is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DisassociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOpsItemRelatedItemOutcome DisassociateOpsItemRelatedItem(const Model::DisassociateOpsItemRelatedItemRequest& request) const;


        /**
         * <p>Get detailed information about a particular Automation
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomationExecutionOutcome GetAutomationExecution(const Model::GetAutomationExecutionRequest& request) const;


        /**
         * <p>Gets the state of a Amazon Web Services Systems Manager change calendar at
         * the current time or a specified time. If you specify a time,
         * <code>GetCalendarState</code> returns the state of the calendar at that specific
         * time, and returns the next time that the change calendar state will transition.
         * If you don't specify a time, <code>GetCalendarState</code> uses the current
         * time. Change Calendar entries have two possible states: <code>OPEN</code> or
         * <code>CLOSED</code>.</p> <p>If you specify more than one calendar in a request,
         * the command returns the status of <code>OPEN</code> only if all calendars in the
         * request are open. If one or more calendars in the request are closed, the status
         * returned is <code>CLOSED</code>.</p> <p>For more information about Change
         * Calendar, a capability of Amazon Web Services Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon
         * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCalendarState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalendarStateOutcome GetCalendarState(const Model::GetCalendarStateRequest& request) const;


        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin.</p> <p> <code>GetCommandInvocation</code> only gives the execution
         * status of a plugin in a document. To get the command execution status on a
         * specific managed node, use <a>ListCommandInvocations</a>. To get the command
         * execution status across managed nodes, use <a>ListCommands</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommandInvocationOutcome GetCommandInvocation(const Model::GetCommandInvocationRequest& request) const;


        /**
         * <p>Retrieves the Session Manager connection status for a managed node to
         * determine whether it is running and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionStatusOutcome GetConnectionStatus(const Model::GetConnectionStatusRequest& request) const;


        /**
         * <p>Retrieves the default patch baseline. Amazon Web Services Systems Manager
         * supports creating multiple default patch baselines. For example, you can create
         * a default patch baseline for each operating system.</p> <p>If you don't specify
         * an operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultPatchBaselineOutcome GetDefaultPatchBaseline(const Model::GetDefaultPatchBaselineRequest& request) const;


        /**
         * <p>Retrieves the current snapshot for the patch baseline the managed node uses.
         * This API is primarily used by the <code>AWS-RunPatchBaseline</code> Systems
         * Manager document (SSM document).</p>  <p>If you run the command locally,
         * such as with the Command Line Interface (CLI), the system attempts to use your
         * local Amazon Web Services credentials and the operation fails. To avoid this,
         * you can run the command in the Amazon Web Services Systems Manager console. Use
         * Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
         * document that enables you to target a managed node with a script or command. For
         * example, run the command using the <code>AWS-RunShellScript</code> document or
         * the <code>AWS-RunPowerShellScript</code> document.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcome GetDeployablePatchSnapshotForInstance(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;


        /**
         * <p>Gets the contents of the specified Amazon Web Services Systems Manager
         * document (SSM document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;


        /**
         * <p>Query inventory information. This includes managed node status, such as
         * <code>Stopped</code> or <code>Terminated</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventoryOutcome GetInventory(const Model::GetInventoryRequest& request) const;


        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventorySchemaOutcome GetInventorySchema(const Model::GetInventorySchemaRequest& request) const;


        /**
         * <p>Retrieves a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowOutcome GetMaintenanceWindow(const Model::GetMaintenanceWindowRequest& request) const;


        /**
         * <p>Retrieves details about a specific a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionOutcome GetMaintenanceWindowExecution(const Model::GetMaintenanceWindowExecutionRequest& request) const;


        /**
         * <p>Retrieves the details about a specific task run as part of a maintenance
         * window execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcome GetMaintenanceWindowExecutionTask(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;


        /**
         * <p>Retrieves information about a specific task running on a specific
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcome GetMaintenanceWindowExecutionTaskInvocation(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;


        /**
         * <p>Retrieves the details of a maintenance window task.</p>  <p>For
         * maintenance window tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p>  <p>To retrieve a list of tasks in a maintenance
         * window, instead use the <a>DescribeMaintenanceWindowTasks</a>
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowTaskOutcome GetMaintenanceWindowTask(const Model::GetMaintenanceWindowTaskRequest& request) const;


        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * Identity and Access Management (IAM) to view information about an OpsItem. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         */
        virtual Model::GetOpsItemOutcome GetOpsItem(const Model::GetOpsItemRequest& request) const;


        /**
         * <p>View operational metadata related to an application in Application
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsMetadataOutcome GetOpsMetadata(const Model::GetOpsMetadataRequest& request) const;


        /**
         * <p>View a summary of operations metadata (OpsData) based on specified filters
         * and aggregators. OpsData can include information about Amazon Web Services
         * Systems Manager OpsCenter operational workitems (OpsItems) as well as
         * information about any Amazon Web Services resource or service configured to
         * report OpsData to Amazon Web Services Systems Manager Explorer. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsSummaryOutcome GetOpsSummary(const Model::GetOpsSummaryRequest& request) const;


        /**
         * <p>Get information about a single parameter by specifying the parameter
         * name.</p>  <p>To get information about more than one parameter at a time,
         * use the <a>GetParameters</a> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterOutcome GetParameter(const Model::GetParameterRequest& request) const;


        /**
         * <p>Retrieves the history of all changes to a parameter.</p>  <p>If
         * you change the KMS key alias for the KMS key used to encrypt a parameter, then
         * you must also update the key alias the parameter uses to reference KMS.
         * Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key
         * alias was referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterHistoryOutcome GetParameterHistory(const Model::GetParameterHistoryRequest& request) const;


        /**
         * <p>Get information about one or more parameters by specifying multiple parameter
         * names.</p>  <p>To get information about a single parameter, you can use
         * the <a>GetParameter</a> operation instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersOutcome GetParameters(const Model::GetParametersRequest& request) const;


        /**
         * <p>Retrieve information about one or more parameters in a specific hierarchy.
         * </p> <p>Request results are returned on a best-effort basis. If you specify
         * <code>MaxResults</code> in the request, the response includes information up to
         * the limit specified. The number of items returned, however, can be between zero
         * and the value of <code>MaxResults</code>. If the service reaches an internal
         * limit while processing the results, it stops the operation and returns the
         * matching values up to that point and a <code>NextToken</code>. You can specify
         * the <code>NextToken</code> in a subsequent call to get the next set of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersByPathOutcome GetParametersByPath(const Model::GetParametersByPathRequest& request) const;


        /**
         * <p>Retrieves information about a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineOutcome GetPatchBaseline(const Model::GetPatchBaselineRequest& request) const;


        /**
         * <p>Retrieves the patch baseline that should be used for the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineForPatchGroupOutcome GetPatchBaselineForPatchGroup(const Model::GetPatchBaselineForPatchGroupRequest& request) const;


        /**
         * <p>Returns an array of the <code>Policy</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;


        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of
         * <code>false</code>. This means the user can't use this feature unless they
         * change the setting to <code>true</code> and intentionally opt in for a paid
         * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
         * Amazon Web Services services teams define the default value for a
         * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
         * can overwrite the default value if you have the
         * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use
         * the <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Query the current
         * service setting for the Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingOutcome GetServiceSetting(const Model::GetServiceSettingRequest& request) const;


        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Amazon Web Services
         * Systems Manager automatically saves a new version and increments the version
         * number by one. A label can help you remember the purpose of a parameter when
         * there are multiple versions. </p> <p>Parameter labels have the following
         * requirements and restrictions.</p> <ul> <li> <p>A version of a parameter can
         * have a maximum of 10 labels.</p> </li> <li> <p>You can't attach the same label
         * to different versions of the same parameter. For example, if version 1 has the
         * label Production, then you can't attach Production to version 2.</p> </li> <li>
         * <p>You can move a label from one version of a parameter to another.</p> </li>
         * <li> <p>You can't create a label when you create a new parameter. You must
         * attach a label to a specific version of a parameter.</p> </li> <li> <p>If you no
         * longer want to use a parameter label, then you can either delete it or move it
         * to a different version of a parameter.</p> </li> <li> <p>A label can have a
         * maximum of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "<code>aws</code>" or
         * "<code>ssm</code>" (not case sensitive). If a label fails to meet these
         * requirements, then the label isn't associated with a parameter and the system
         * displays it in the list of InvalidLabels.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::LabelParameterVersionOutcome LabelParameterVersion(const Model::LabelParameterVersionRequest& request) const;


        /**
         * <p>Retrieves all versions of an association for a specific association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationVersionsOutcome ListAssociationVersions(const Model::ListAssociationVersionsRequest& request) const;


        /**
         * <p>Returns all State Manager associations in the current Amazon Web Services
         * account and Amazon Web Services Region. You can limit the results to a specific
         * State Manager association document or managed node by specifying a filter. State
         * Manager is a capability of Amazon Web Services Systems Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;


        /**
         * <p>An invocation is copy of a command sent to a specific managed node. A command
         * can apply to one or more managed nodes. A command invocation applies to one
         * managed node. For example, if a user runs <code>SendCommand</code> against three
         * managed nodes, then a command invocation is created for each requested managed
         * node ID. <code>ListCommandInvocations</code> provide status about command
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;


        /**
         * <p>Lists the commands requested by users of the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;


        /**
         * <p>For a specified resource ID, this API operation returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceItemsOutcome ListComplianceItems(const Model::ListComplianceItemsRequest& request) const;


        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceSummariesOutcome ListComplianceSummaries(const Model::ListComplianceSummariesRequest& request) const;


        /**
         * <p>Information about approval reviews for a version of a change template in
         * Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentMetadataHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentMetadataHistoryOutcome ListDocumentMetadataHistory(const Model::ListDocumentMetadataHistoryRequest& request) const;


        /**
         * <p>List all versions for a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentVersionsOutcome ListDocumentVersions(const Model::ListDocumentVersionsRequest& request) const;


        /**
         * <p>Returns all Systems Manager (SSM) documents in the current Amazon Web
         * Services account and Amazon Web Services Region. You can limit the results of
         * this request by using a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;


        /**
         * <p>A list of inventory items returned by the request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListInventoryEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInventoryEntriesOutcome ListInventoryEntries(const Model::ListInventoryEntriesRequest& request) const;


        /**
         * <p>Returns a list of all OpsItem events in the current Amazon Web Services
         * Region and Amazon Web Services account. You can limit the results to events
         * associated with specific OpsItems by specifying a filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemEventsOutcome ListOpsItemEvents(const Model::ListOpsItemEventsRequest& request) const;


        /**
         * <p>Lists all related-item resources associated with a Systems Manager OpsCenter
         * OpsItem. OpsCenter is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemRelatedItemsOutcome ListOpsItemRelatedItems(const Model::ListOpsItemRelatedItemsRequest& request) const;


        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when displaying
         * all Application Manager OpsMetadata objects or blobs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsMetadataOutcome ListOpsMetadata(const Model::ListOpsMetadataRequest& request) const;


        /**
         * <p>Returns a resource-level summary count. The summary includes information
         * about compliant and non-compliant statuses and detailed compliance-item severity
         * counts, according to the filter criteria you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceComplianceSummariesOutcome ListResourceComplianceSummaries(const Model::ListResourceComplianceSummariesRequest& request) const;


        /**
         * <p>Lists your resource data sync configurations. Includes information about the
         * last time a sync attempted to start, the last sync status, and the last time a
         * sync successfully completed.</p> <p>The number of sync configurations might be
         * too large to return using a single call to <code>ListResourceDataSync</code>.
         * You can limit the number of sync configurations returned by using the
         * <code>MaxResults</code> parameter. To determine whether there are more sync
         * configurations to list, check the value of <code>NextToken</code> in the output.
         * If there are more sync configurations to list, you can request them by
         * specifying the <code>NextToken</code> returned in the call to the parameter of a
         * subsequent call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDataSyncOutcome ListResourceDataSync(const Model::ListResourceDataSyncRequest& request) const;


        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p> <p>For
         * information about the ID format for each supported resource type, see
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Shares a Amazon Web Services Systems Manager document (SSM document)publicly
         * or privately. If you share a document privately, you must specify the Amazon Web
         * Services user account IDs for those people who can use the document. If you
         * share a document publicly, you must specify <i>All</i> as the account
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;


        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This operation lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * managed node.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>Critical</code>.</p> </li> <li> <p>DocumentName: An
         * SSM document name. For example, <code>AWS-RunPatchBaseline</code>.</p> </li>
         * <li> <p>DocumentVersion: An SSM document version number. For example, 4.</p>
         * </li> <li> <p>Classification: A patch classification. For example,
         * <code>security updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch
         * baseline ID.</p> </li> <li> <p>PatchSeverity: A patch severity. For example,
         * <code>Critical</code>.</p> </li> <li> <p>PatchState: A patch state. For example,
         * <code>InstancesWithFailedPatches</code>.</p> </li> <li> <p>PatchGroup: The name
         * of a patch group.</p> </li> <li> <p>InstalledTime: The time the association,
         * patch, or custom compliance item was applied to the resource. Specify the time
         * by using the following format: yyyy-MM-dd'T'HH:mm:ss'Z'</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutComplianceItemsOutcome PutComplianceItems(const Model::PutComplianceItemsRequest& request) const;


        /**
         * <p>Bulk update custom inventory items on one or more managed nodes. The request
         * adds an inventory item, if it doesn't already exist, or updates an inventory
         * item, if it does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInventoryOutcome PutInventory(const Model::PutInventoryRequest& request) const;


        /**
         * <p>Add a parameter to the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutParameterOutcome PutParameter(const Model::PutParameterRequest& request) const;


        /**
         * <p>Creates or updates a Systems Manager resource policy. A resource policy helps
         * you to define the IAM entity (for example, an Amazon Web Services account) that
         * can manage your Systems Manager resources. Currently, <code>OpsItemGroup</code>
         * is the only resource that supports Systems Manager resource policies. The
         * resource policy for <code>OpsItemGroup</code> enables Amazon Web Services
         * accounts to view and interact with OpsCenter operational work items
         * (OpsItems).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Defines the default patch baseline for the relevant operating system.</p>
         * <p>To reset the Amazon Web Services-predefined patch baseline as the default,
         * specify the full patch baseline Amazon Resource Name (ARN) as the baseline ID
         * value. For example, for CentOS, specify
         * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code>
         * instead of <code>pb-0574b43a65ea646ed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDefaultPatchBaselineOutcome RegisterDefaultPatchBaseline(const Model::RegisterDefaultPatchBaselineRequest& request) const;


        /**
         * <p>Registers a patch baseline for a patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPatchBaselineForPatchGroupOutcome RegisterPatchBaselineForPatchGroup(const Model::RegisterPatchBaselineForPatchGroupRequest& request) const;


        /**
         * <p>Registers a target with a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTargetWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcome RegisterTargetWithMaintenanceWindow(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;


        /**
         * <p>Adds a new task to a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTaskWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcome RegisterTaskWithMaintenanceWindow(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;


        /**
         * <p>Removes tag keys from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;


        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the Amazon Web Services service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSettingOutcome ResetServiceSetting(const Model::ResetServiceSettingRequest& request) const;


        /**
         * <p>Reconnects a session to a managed node after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p>  <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It isn't intended
         * for any other use.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeSessionOutcome ResumeSession(const Model::ResumeSessionRequest& request) const;


        /**
         * <p>Sends a signal to an Automation execution to change the current behavior or
         * status of the execution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendAutomationSignal">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAutomationSignalOutcome SendAutomationSignal(const Model::SendAutomationSignalRequest& request) const;


        /**
         * <p>Runs commands on one or more managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;


        /**
         * <p>Runs an association immediately and only one time. This operation can be
         * helpful when troubleshooting associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssociationsOnceOutcome StartAssociationsOnce(const Model::StartAssociationsOnceRequest& request) const;


        /**
         * <p>Initiates execution of an Automation runbook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomationExecutionOutcome StartAutomationExecution(const Model::StartAutomationExecutionRequest& request) const;


        /**
         * <p>Creates a change request for Change Manager. The Automation runbooks
         * specified in the change request run only after all required approvals for the
         * change request have been received.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartChangeRequestExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeRequestExecutionOutcome StartChangeRequestExecution(const Model::StartChangeRequestExecutionRequest& request) const;


        /**
         * <p>Initiates a connection to a target (for example, a managed node) for a
         * Session Manager session. Returns a URL and token that can be used to open a
         * WebSocket connection for sending input and receiving outputs.</p> 
         * <p>Amazon Web Services CLI usage: <code>start-session</code> is an interactive
         * command that requires the Session Manager plugin to be installed on the client
         * machine making the call. For information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
         * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon
         * Web Services Systems Manager User Guide</i>.</p> <p>Amazon Web Services Tools
         * for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web
         * Services Tools for PowerShell on Windows local machines.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionOutcome StartSession(const Model::StartSessionRequest& request) const;


        /**
         * <p>Stop an Automation that is currently running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StopAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutomationExecutionOutcome StopAutomationExecution(const Model::StopAutomationExecutionRequest& request) const;


        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the managed node. A terminated session can't be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSessionOutcome TerminateSession(const Model::TerminateSessionRequest& request) const;


        /**
         * <p>Remove a label or labels from a parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnlabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlabelParameterVersionOutcome UnlabelParameterVersion(const Model::UnlabelParameterVersionRequest& request) const;


        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon Simple Storage Service
         * (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system
         * removes all optional parameters from the request and overwrites the association
         * with null values for those parameters. This is by design. You must specify all
         * optional parameters in the call, even if you are not changing the parameters.
         * This includes the <code>Name</code> parameter. Before calling this API action,
         * we recommend that you call the <a>DescribeAssociation</a> API operation and make
         * a note of all optional parameters required for your
         * <code>UpdateAssociation</code> call.</p> <p>In order to call this API operation,
         * your Identity and Access Management (IAM) user account, group, or role must be
         * configured with permission to call the <a>DescribeAssociation</a> API operation.
         * If you don't have permission to call <code>DescribeAssociation</code>, then you
         * receive the following error: <code>An error occurred (AccessDeniedException)
         * when calling the UpdateAssociation operation: User: &lt;user_arn&gt; isn't
         * authorized to perform: ssm:DescribeAssociation on resource:
         * &lt;resource_arn&gt;</code> </p>  <p>When you update an association,
         * the association immediately runs against the specified targets. You can add the
         * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the
         * next schedule run.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;


        /**
         * <p>Updates the status of the Amazon Web Services Systems Manager document (SSM
         * document) associated with the specified managed node.</p> <p>
         * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web
         * Services Systems Manager Agent (SSM Agent) to report status updates about your
         * associations and is only used for associations created with the
         * <code>InstanceId</code> legacy parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;


        /**
         * <p>Updates one or more values for an SSM document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;


        /**
         * <p>Set the default version of a document. </p>  <p>If you change a
         * document version for a State Manager association, Systems Manager immediately
         * runs the association unless you previously specifed the
         * <code>apply-only-at-cron-interval</code> parameter.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentDefaultVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentDefaultVersionOutcome UpdateDocumentDefaultVersion(const Model::UpdateDocumentDefaultVersionRequest& request) const;


        /**
         * <p>Updates information related to approval reviews for a specific version of a
         * change template in Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentMetadataOutcome UpdateDocumentMetadata(const Model::UpdateDocumentMetadataRequest& request) const;


        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p>  <p>The value you specify for <code>Duration</code>
         * determines the specific end time for the maintenance window based on the time it
         * begins. No maintenance window tasks are permitted to start after the resulting
         * endtime minus the number of hours you specify for <code>Cutoff</code>. For
         * example, if the maintenance window starts at 3 PM, the duration is three hours,
         * and the value you specify for <code>Cutoff</code> is one hour, no maintenance
         * window tasks can start after 5 PM.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowOutcome UpdateMaintenanceWindow(const Model::UpdateMaintenanceWindowRequest& request) const;


        /**
         * <p>Modifies the target of an existing maintenance window. You can change the
         * following:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p> </li> <li>
         * <p>Owner</p> </li> <li> <p>IDs for an ID target</p> </li> <li> <p>Tags for a Tag
         * target</p> </li> <li> <p>From any supported tag type to another. The three
         * supported tag types are ID target, Tag target, and resource group. For more
         * information, see <a>Target</a>.</p> </li> </ul>  <p>If a parameter is
         * null, then the corresponding field isn't modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcome UpdateMaintenanceWindowTarget(const Model::UpdateMaintenanceWindowTargetRequest& request) const;


        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>
         * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code>
         * task from <code>AWS-RunPowerShellScript</code> to
         * <code>AWS-RunShellScript</code>.</p> </li> <li> <p> <code>ServiceRoleArn</code>
         * </p> </li> <li> <p> <code>TaskInvocationParameters</code> </p> </li> <li> <p>
         * <code>Priority</code> </p> </li> <li> <p> <code>MaxConcurrency</code> </p> </li>
         * <li> <p> <code>MaxErrors</code> </p> </li> </ul>  <p>One or more targets
         * must be specified for maintenance window Run Command-type tasks. Depending on
         * the task, targets are optional for other maintenance window task types
         * (Automation, Lambda, and Step Functions). For more information about running
         * tasks that don't specify targets, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
         * maintenance window tasks without targets</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p>  <p>If the value for a parameter in
         * <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field
         * isn't modified. If you set <code>Replace</code> to true, then all fields
         * required by the <a>RegisterTaskWithMaintenanceWindow</a> operation are required
         * for this request. Optional fields that aren't specified are set to null.</p>
         *  <p>When you update a maintenance window task that has options
         * specified in <code>TaskInvocationParameters</code>, you must provide again all
         * the <code>TaskInvocationParameters</code> values that you want to retain. The
         * values you don't specify again are removed. For example, suppose that when you
         * registered a Run Command task, you specified
         * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
         * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
         * update the maintenance window task and specify only a different
         * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
         * <code>NotificationConfig</code> are removed.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcome UpdateMaintenanceWindowTask(const Model::UpdateMaintenanceWindowTaskRequest& request) const;


        /**
         * <p>Changes the Identity and Access Management (IAM) role that is assigned to the
         * on-premises server, edge device, or virtual machines (VM). IAM roles are first
         * assigned to these hybrid nodes during the activation process. For more
         * information, see <a>CreateActivation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;


        /**
         * <p>Edit or change an OpsItem. You must have permission in Identity and Access
         * Management (IAM) to update an OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsItemOutcome UpdateOpsItem(const Model::UpdateOpsItemRequest& request) const;


        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when you edit
         * OpsMetadata in Application Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsMetadataOutcome UpdateOpsMetadata(const Model::UpdateOpsMetadataRequest& request) const;


        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p>  <p>For information about valid key-value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePatchBaselineOutcome UpdatePatchBaseline(const Model::UpdatePatchBaselineRequest& request) const;


        /**
         * <p>Update a resource data sync. After you create a resource data sync for a
         * Region, you can't change the account options for that sync. For example, if you
         * create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include
         * only the current account</code> option, you can't edit that sync later and
         * choose the <code>Include all accounts from my Organizations configuration</code>
         * option. Instead, you must delete the first resource data sync, and create a new
         * one.</p>  <p>This API operation only supports a resource data sync that
         * was created with a SyncFromSource <code>SyncType</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDataSyncOutcome UpdateResourceDataSync(const Model::UpdateResourceDataSyncRequest& request) const;


        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Update the service
         * setting for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingOutcome UpdateServiceSetting(const Model::UpdateServiceSettingRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SSMClientConfiguration& clientConfiguration);

      SSMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSM
} // namespace Aws
