/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces/WorkSpacesServiceClientModel.h>
#include <aws/workspaces/WorkSpacesLegacyAsyncMacros.h>

namespace Aws
{
namespace WorkSpaces
{
  /**
   * <fullname>Amazon WorkSpaces Service</fullname> <p>Amazon WorkSpaces enables you
   * to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for
   * your users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to
   * procure and deploy hardware or install complex software. You can quickly add or
   * remove users as your needs change. Users can access their virtual desktops from
   * multiple devices or web browsers.</p> <p>This API Reference provides detailed
   * information about the actions, data types, parameters, and errors of the
   * WorkSpaces service. For more information about the supported Amazon Web Services
   * Regions, endpoints, and service quotas of the Amazon WorkSpaces service, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces
   * endpoints and quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p> <p>You can also manage your WorkSpaces resources using the
   * WorkSpaces console, Command Line Interface (CLI), and SDKs. For more information
   * about administering WorkSpaces, see the <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon
   * WorkSpaces Administration Guide</a>. For more information about using the Amazon
   * WorkSpaces client application or web browser to access provisioned WorkSpaces,
   * see the <a
   * href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon
   * WorkSpaces User Guide</a>. For more information about using the CLI to manage
   * your WorkSpaces resources, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces
   * section of the CLI Reference</a>.</p>
   */
  class AWS_WORKSPACES_API WorkSpacesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration(),
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG),
                         const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG),
                         const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkSpacesClient();


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
         * <p>Associates the specified connection alias with the specified directory to
         * enable cross-Region redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionAliasOutcome AssociateConnectionAlias(const Model::AssociateConnectionAliasRequest& request) const;


        /**
         * <p>Associates the specified IP access control group with the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIpGroupsOutcome AssociateIpGroups(const Model::AssociateIpGroupsRequest& request) const;


        /**
         * <p>Adds one or more rules to the specified IP access control group.</p> <p>This
         * action gives users permission to access their WorkSpaces from the CIDR address
         * ranges specified in the rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AuthorizeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeIpRulesOutcome AuthorizeIpRules(const Model::AuthorizeIpRulesRequest& request) const;


        /**
         * <p>Copies the specified image from the specified Region to the current Region.
         * For more information about copying images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html">
         * Copy a Custom WorkSpaces Image</a>.</p> <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In Amazon Web Services
         * GovCloud (US), to copy images to and from other Regions, contact Amazon Web
         * Services Support.</p>  <p>Before copying a shared image, be sure to
         * verify that it has been shared from the correct Amazon Web Services account. To
         * determine if an image has been shared and to see the ID of the Amazon Web
         * Services account that owns an image, use the <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
         * and <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
         * API operations. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyWorkspaceImageOutcome CopyWorkspaceImage(const Model::CopyWorkspaceImageRequest& request) const;


        /**
         * <p>Creates a client-add-in for Amazon Connect within a directory. You can create
         * only one Amazon Connect client add-in within a directory.</p> <p>This client
         * add-in allows WorkSpaces users to seamlessly connect to Amazon
         * Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectClientAddInOutcome CreateConnectClientAddIn(const Model::CreateConnectClientAddInRequest& request) const;


        /**
         * <p>Creates the specified connection alias for use with cross-Region redirection.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionAliasOutcome CreateConnectionAlias(const Model::CreateConnectionAliasRequest& request) const;


        /**
         * <p>Creates an IP access control group.</p> <p>An IP access control group
         * provides you with the ability to control the IP addresses from which users are
         * allowed to access their WorkSpaces. To specify the CIDR address ranges, add
         * rules to your IP access control group and then associate the group with your
         * directory. You can add rules when you create the group or at any time using
         * <a>AuthorizeIpRules</a>.</p> <p>There is a default IP access control group
         * associated with your directory. If you don't associate an IP access control
         * group with your directory, the default group is used. The default group includes
         * a default rule that allows users to access their WorkSpaces from anywhere. You
         * cannot modify the default IP access control group for your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpGroupOutcome CreateIpGroup(const Model::CreateIpGroupRequest& request) const;


        /**
         * <p>Creates a Standby WorkSpace in a secondary region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateStandbyWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStandbyWorkspacesOutcome CreateStandbyWorkspaces(const Model::CreateStandbyWorkspacesRequest& request) const;


        /**
         * <p>Creates the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;


        /**
         * <p>Creates a new updated WorkSpace image based on the specified source image.
         * The new updated WorkSpace image has the latest drivers and other updates
         * required by the Amazon WorkSpaces components.</p> <p>To determine which
         * WorkSpace images need to be updated with the latest Amazon WorkSpaces
         * requirements, use <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">
         * DescribeWorkspaceImages</a>.</p>  <ul> <li> <p>Only Windows 10, Windows
         * Sever 2016, and Windows Server 2019 WorkSpace images can be programmatically
         * updated at this time.</p> </li> <li> <p>Microsoft Windows updates and other
         * application updates are not included in the update process.</p> </li> <li>
         * <p>The source WorkSpace image is not deleted. You can delete the source image
         * after you've verified your new updated image and created a new bundle. </p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateUpdatedWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUpdatedWorkspaceImageOutcome CreateUpdatedWorkspaceImage(const Model::CreateUpdatedWorkspaceImageRequest& request) const;


        /**
         * <p>Creates the specified WorkSpace bundle. For more information about creating
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html">
         * Create a Custom WorkSpaces Image and Bundle</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceBundleOutcome CreateWorkspaceBundle(const Model::CreateWorkspaceBundleRequest& request) const;


        /**
         * <p>Creates a new WorkSpace image from an existing WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceImageOutcome CreateWorkspaceImage(const Model::CreateWorkspaceImageRequest& request) const;


        /**
         * <p>Creates one or more WorkSpaces.</p> <p>This operation is asynchronous and
         * returns before the WorkSpaces are created.</p>  <p>The <code>MANUAL</code>
         * running mode value is only supported by Amazon WorkSpaces Core. Contact your
         * account team to be allow-listed to use this value. For more information, see <a
         * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspacesOutcome CreateWorkspaces(const Model::CreateWorkspacesRequest& request) const;


        /**
         * <p>Deletes customized client branding. Client branding allows you to customize
         * your WorkSpace's client login portal. You can tailor your login portal company
         * logo, the support email address, support link, link to reset password, and a
         * custom message for users trying to sign in.</p> <p>After you delete your
         * customized client branding, your login portal reverts to the default client
         * branding.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientBrandingOutcome DeleteClientBranding(const Model::DeleteClientBrandingRequest& request) const;


        /**
         * <p>Deletes a client-add-in for Amazon Connect that is configured within a
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectClientAddInOutcome DeleteConnectClientAddIn(const Model::DeleteConnectClientAddInRequest& request) const;


        /**
         * <p>Deletes the specified connection alias. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p> <b>If
         * you will no longer be using a fully qualified domain name (FQDN) as the
         * registration code for your WorkSpaces users, you must take certain precautions
         * to prevent potential security issues.</b> For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
         * Security Considerations if You Stop Using Cross-Region Redirection</a>.</p>
         *   <p>To delete a connection alias that has been shared, the
         * shared account must first disassociate the connection alias from any directories
         * it has been associated with. Then you must unshare the connection alias from the
         * account it has been shared with. You can delete a connection alias only after it
         * is no longer shared with any accounts or associated with any directories.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionAliasOutcome DeleteConnectionAlias(const Model::DeleteConnectionAliasRequest& request) const;


        /**
         * <p>Deletes the specified IP access control group.</p> <p>You cannot delete an IP
         * access control group that is associated with a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpGroupOutcome DeleteIpGroup(const Model::DeleteIpGroupRequest& request) const;


        /**
         * <p>Deletes the specified tags from the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;


        /**
         * <p>Deletes the specified WorkSpace bundle. For more information about deleting
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html">
         * Delete a Custom WorkSpaces Bundle or Image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceBundleOutcome DeleteWorkspaceBundle(const Model::DeleteWorkspaceBundleRequest& request) const;


        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and unshare the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceImageOutcome DeleteWorkspaceImage(const Model::DeleteWorkspaceImageRequest& request) const;


        /**
         * <p>Deregisters the specified directory. This operation is asynchronous and
         * returns before the WorkSpace directory is deregistered. If any WorkSpaces are
         * registered to this directory, you must remove them before you can deregister the
         * directory.</p>  <p>Simple AD and AD Connector are made available to you
         * free of charge to use with WorkSpaces. If there are no WorkSpaces being used
         * with your Simple AD or AD Connector directory for 30 consecutive days, this
         * directory will be automatically deregistered for use with Amazon WorkSpaces, and
         * you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">Directory Service pricing
         * terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeregisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWorkspaceDirectoryOutcome DeregisterWorkspaceDirectory(const Model::DeregisterWorkspaceDirectoryRequest& request) const;


        /**
         * <p>Retrieves a list that describes the configuration of Bring Your Own License
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;


        /**
         * <p>Retrieves a list that describes modifications to the configuration of Bring
         * Your Own License (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountModificationsOutcome DescribeAccountModifications(const Model::DescribeAccountModificationsRequest& request) const;


        /**
         * <p>Describes the specified client branding. Client branding allows you to
         * customize the log in page of various device types for your users. You can add
         * your company logo, the support email address, support link, link to reset
         * password, and a custom message for users trying to sign in.</p>  <p>Only
         * device types that have branding information configured will be shown in the
         * response.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientBrandingOutcome DescribeClientBranding(const Model::DescribeClientBrandingRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientPropertiesOutcome DescribeClientProperties(const Model::DescribeClientPropertiesRequest& request) const;


        /**
         * <p>Retrieves a list of Amazon Connect client add-ins that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectClientAddIns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectClientAddInsOutcome DescribeConnectClientAddIns(const Model::DescribeConnectClientAddInsRequest& request) const;


        /**
         * <p>Describes the permissions that the owner of a connection alias has granted to
         * another Amazon Web Services account for the specified connection alias. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliasPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasPermissionsOutcome DescribeConnectionAliasPermissions(const Model::DescribeConnectionAliasPermissionsRequest& request) const;


        /**
         * <p>Retrieves a list that describes the connection aliases used for cross-Region
         * redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasesOutcome DescribeConnectionAliases(const Model::DescribeConnectionAliasesRequest& request) const;


        /**
         * <p>Describes one or more of your IP access control groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpGroupsOutcome DescribeIpGroups(const Model::DescribeIpGroupsRequest& request) const;


        /**
         * <p>Describes the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;


        /**
         * <p>Retrieves a list that describes the available WorkSpace bundles.</p> <p>You
         * can filter the results using either bundle ID or owner, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceBundlesOutcome DescribeWorkspaceBundles(const Model::DescribeWorkspaceBundlesRequest& request) const;


        /**
         * <p>Describes the available directories that are registered with Amazon
         * WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcome DescribeWorkspaceDirectories(const Model::DescribeWorkspaceDirectoriesRequest& request) const;


        /**
         * <p>Describes the permissions that the owner of an image has granted to other
         * Amazon Web Services accounts for an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagePermissionsOutcome DescribeWorkspaceImagePermissions(const Model::DescribeWorkspaceImagePermissionsRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * identifiers are provided. Otherwise, all images in the account are described.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagesOutcome DescribeWorkspaceImages(const Model::DescribeWorkspaceImagesRequest& request) const;


        /**
         * <p>Describes the snapshots for the specified WorkSpace.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceSnapshotsOutcome DescribeWorkspaceSnapshots(const Model::DescribeWorkspaceSnapshotsRequest& request) const;


        /**
         * <p>Describes the specified WorkSpaces.</p> <p>You can filter the results by
         * using the bundle identifier, directory identifier, or owner, but you can specify
         * only one filter at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest& request) const;


        /**
         * <p>Describes the connection status of the specified WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcome DescribeWorkspacesConnectionStatus(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;


        /**
         * <p>Disassociates a connection alias from a directory. Disassociating a
         * connection alias disables cross-Region redirection between two directories in
         * different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionAliasOutcome DisassociateConnectionAlias(const Model::DisassociateConnectionAliasRequest& request) const;


        /**
         * <p>Disassociates the specified IP access control group from the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIpGroupsOutcome DisassociateIpGroups(const Model::DisassociateIpGroupsRequest& request) const;


        /**
         * <p>Imports client branding. Client branding allows you to customize your
         * WorkSpace's client login portal. You can tailor your login portal company logo,
         * the support email address, support link, link to reset password, and a custom
         * message for users trying to sign in.</p> <p>After you import client branding,
         * the default branding experience for the specified platform type is replaced with
         * the imported experience</p>  <ul> <li> <p>You must specify at least one
         * platform type when importing client branding.</p> </li> <li> <p>You can import
         * up to 6 MB of data with each request. If your request exceeds this limit, you
         * can import client branding for different platform types using separate
         * requests.</p> </li> <li> <p>In each platform type, the <code>SupportEmail</code>
         * and <code>SupportLink</code> parameters are mutually exclusive. You can specify
         * only one parameter for each platform type, but not both.</p> </li> <li>
         * <p>Imported data can take up to a minute to appear in the WorkSpaces client.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportClientBrandingOutcome ImportClientBranding(const Model::ImportClientBrandingRequest& request) const;


        /**
         * <p>Imports the specified Windows 10 Bring Your Own License (BYOL) or Windows
         * Server 2016 BYOL image into Amazon WorkSpaces. The image must be an already
         * licensed Amazon EC2 image that is in your Amazon Web Services account, and you
         * must own the image. For more information about creating BYOL images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
         * Bring Your Own Windows Desktop Licenses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportWorkspaceImageOutcome ImportWorkspaceImage(const Model::ImportWorkspaceImageRequest& request) const;


        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable Bring Your Own
         * License (BYOL). </p> <p>This operation can be run only by Amazon Web Services
         * accounts that are enabled for BYOL. If your account isn't enabled for BYOL,
         * you'll receive an <code>AccessDeniedException</code> error.</p> <p>The
         * management network interface is connected to a secure Amazon WorkSpaces
         * management network. It is used for interactive streaming of the WorkSpace
         * desktop to Amazon WorkSpaces clients, and to allow Amazon WorkSpaces to manage
         * the WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagementCidrRangesOutcome ListAvailableManagementCidrRanges(const Model::ListAvailableManagementCidrRangesRequest& request) const;


        /**
         * <p>Migrates a WorkSpace from one operating system or bundle type to another,
         * while retaining the data on the user volume.</p> <p>The migration process
         * recreates the WorkSpace by using a new root volume from the target bundle image
         * and the user volume from the last available snapshot of the original WorkSpace.
         * During migration, the original <code>D:\Users\%USERNAME%</code> user profile
         * folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>.
         * A new <code>D:\Users\%USERNAME%\</code> folder is generated by the new OS.
         * Certain files in the old user profile are moved to the new user profile.</p>
         * <p>For available migration scenarios, details about what happens during
         * migration, and best practices, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate
         * a WorkSpace</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MigrateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::MigrateWorkspaceOutcome MigrateWorkspace(const Model::MigrateWorkspaceRequest& request) const;


        /**
         * <p>Modifies the configuration of Bring Your Own License (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAccountOutcome ModifyAccount(const Model::ModifyAccountRequest& request) const;


        /**
         * <p>Modifies the properties of the certificate-based authentication you want to
         * use with your WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyCertificateBasedAuthProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCertificateBasedAuthPropertiesOutcome ModifyCertificateBasedAuthProperties(const Model::ModifyCertificateBasedAuthPropertiesRequest& request) const;


        /**
         * <p>Modifies the properties of the specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClientPropertiesOutcome ModifyClientProperties(const Model::ModifyClientPropertiesRequest& request) const;


        /**
         * <p>Modifies multiple properties related to SAML 2.0 authentication, including
         * the enablement status, user access URL, and relay state parameter name that are
         * used for configuring federation with an SAML 2.0 identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySamlProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySamlPropertiesOutcome ModifySamlProperties(const Model::ModifySamlPropertiesRequest& request) const;


        /**
         * <p>Modifies the self-service WorkSpace management capabilities for your users.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
         * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySelfservicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySelfservicePermissionsOutcome ModifySelfservicePermissions(const Model::ModifySelfservicePermissionsRequest& request) const;


        /**
         * <p>Specifies which devices and operating systems users can use to access their
         * WorkSpaces. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
         * Control Device Access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceAccessProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceAccessPropertiesOutcome ModifyWorkspaceAccessProperties(const Model::ModifyWorkspaceAccessPropertiesRequest& request) const;


        /**
         * <p>Modify the default properties used to create WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceCreationProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceCreationPropertiesOutcome ModifyWorkspaceCreationProperties(const Model::ModifyWorkspaceCreationPropertiesRequest& request) const;


        /**
         * <p>Modifies the specified WorkSpace properties. For important information about
         * how to modify the size of the root and user volumes, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">
         * Modify a WorkSpace</a>. </p>  <p>The <code>MANUAL</code> running mode
         * value is only supported by Amazon WorkSpaces Core. Contact your account team to
         * be allow-listed to use this value. For more information, see <a
         * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspacePropertiesOutcome ModifyWorkspaceProperties(const Model::ModifyWorkspacePropertiesRequest& request) const;


        /**
         * <p>Sets the state of the specified WorkSpace.</p> <p>To maintain a WorkSpace
         * without being interrupted, set the WorkSpace state to
         * <code>ADMIN_MAINTENANCE</code>. WorkSpaces in this state do not respond to
         * requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in
         * this state is not stopped. Users cannot log into a WorkSpace in the
         * <code>ADMIN_MAINTENANCE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceState">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceStateOutcome ModifyWorkspaceState(const Model::ModifyWorkspaceStateRequest& request) const;


        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>You cannot reboot a WorkSpace unless
         * its state is <code>AVAILABLE</code> or <code>UNHEALTHY</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have
         * rebooted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebootWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootWorkspacesOutcome RebootWorkspaces(const Model::RebootWorkspacesRequest& request) const;


        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>,
         * <code>UNHEALTHY</code>, <code>STOPPED</code>, or <code>REBOOTING</code>.</p>
         * <p>Rebuilding a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildWorkspacesOutcome RebuildWorkspaces(const Model::RebuildWorkspacesRequest& request) const;


        /**
         * <p>Registers the specified directory. This operation is asynchronous and returns
         * before the WorkSpace directory is registered. If this is the first time you are
         * registering a directory, you will need to create the workspaces_DefaultRole role
         * before you can register a directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
         * Creating the workspaces_DefaultRole Role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RegisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWorkspaceDirectoryOutcome RegisterWorkspaceDirectory(const Model::RegisterWorkspaceDirectoryRequest& request) const;


        /**
         * <p>Restores the specified WorkSpace to its last known healthy state.</p> <p>You
         * cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>,
         * <code>ERROR</code>, <code>UNHEALTHY</code>, or <code>STOPPED</code>.</p>
         * <p>Restoring a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpace is completely restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RestoreWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreWorkspaceOutcome RestoreWorkspace(const Model::RestoreWorkspaceRequest& request) const;


        /**
         * <p>Removes one or more rules from the specified IP access control
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RevokeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeIpRulesOutcome RevokeIpRules(const Model::RevokeIpRulesRequest& request) const;


        /**
         * <p>Starts the specified WorkSpaces.</p> <p>You cannot start a WorkSpace unless
         * it has a running mode of <code>AutoStop</code> and a state of
         * <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkspacesOutcome StartWorkspaces(const Model::StartWorkspacesRequest& request) const;


        /**
         * <p> Stops the specified WorkSpaces.</p> <p>You cannot stop a WorkSpace unless it
         * has a running mode of <code>AutoStop</code> and a state of
         * <code>AVAILABLE</code>, <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
         * <code>ERROR</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StopWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkspacesOutcome StopWorkspaces(const Model::StopWorkspacesRequest& request) const;


        /**
         * <p>Terminates the specified WorkSpaces.</p>  <p>Terminating a
         * WorkSpace is a permanent action and cannot be undone. The user's data is
         * destroyed. If you need to archive any user data, contact Amazon Web Services
         * Support before terminating the WorkSpace.</p>  <p>You can terminate
         * a WorkSpace that is in any state except <code>SUSPENDED</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have been completely
         * terminated. After a WorkSpace is terminated, the <code>TERMINATED</code> state
         * is returned only briefly before the WorkSpace directory metadata is cleaned up,
         * so this state is rarely returned. To confirm that a WorkSpace is terminated,
         * check for the WorkSpace ID by using <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
         * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
         * has been successfully terminated.</p>  <p>Simple AD and AD Connector are
         * made available to you free of charge to use with WorkSpaces. If there are no
         * WorkSpaces being used with your Simple AD or AD Connector directory for 30
         * consecutive days, this directory will be automatically deregistered for use with
         * Amazon WorkSpaces, and you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">Directory Service pricing
         * terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest& request) const;


        /**
         * <p>Updates a Amazon Connect client add-in. Use this action to update the name
         * and endpoint URL of a Amazon Connect client add-in.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectClientAddInOutcome UpdateConnectClientAddIn(const Model::UpdateConnectClientAddInRequest& request) const;


        /**
         * <p>Shares or unshares a connection alias with one account by specifying whether
         * that account has permission to associate the connection alias with a directory.
         * If the association permission is granted, the connection alias is shared with
         * that account. If the association permission is revoked, the connection alias is
         * unshared with the account. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <ul> <li>
         * <p>Before performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> </li> <li> <p>To delete a
         * connection alias that has been shared, the shared account must first
         * disassociate the connection alias from any directories it has been associated
         * with. Then you must unshare the connection alias from the account it has been
         * shared with. You can delete a connection alias only after it is no longer shared
         * with any accounts or associated with any directories.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectionAliasPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionAliasPermissionOutcome UpdateConnectionAliasPermission(const Model::UpdateConnectionAliasPermissionRequest& request) const;


        /**
         * <p>Replaces the current rules of the specified IP access control group with the
         * specified rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateRulesOfIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesOfIpGroupOutcome UpdateRulesOfIpGroup(const Model::UpdateRulesOfIpGroupRequest& request) const;


        /**
         * <p>Updates a WorkSpace bundle with a new image. For more information about
         * updating WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html">
         * Update a Custom WorkSpaces Bundle</a>.</p>  <p>Existing WorkSpaces
         * aren't automatically updated when you update the bundle that they're based on.
         * To update existing WorkSpaces that are based on a bundle that you've updated,
         * you must either rebuild the WorkSpaces or delete and recreate them.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceBundleOutcome UpdateWorkspaceBundle(const Model::UpdateWorkspaceBundleRequest& request) const;


        /**
         * <p>Shares or unshares an image with one account in the same Amazon Web Services
         * Region by specifying whether that account has permission to copy the image. If
         * the copy image permission is granted, the image is shared with that account. If
         * the copy image permission is revoked, the image is unshared with the
         * account.</p> <p>After an image has been shared, the recipient account can copy
         * the image to other Regions as needed.</p> <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In Amazon Web Services
         * GovCloud (US), to copy images to and from other Regions, contact Amazon Web
         * Services Support.</p> <p>For more information about sharing images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
         * Share or Unshare a Custom WorkSpaces Image</a>.</p>  <ul> <li> <p>To
         * delete an image that has been shared, you must unshare the image before you
         * delete it.</p> </li> <li> <p>Sharing Bring Your Own License (BYOL) images across
         * Amazon Web Services accounts isn't supported at this time in Amazon Web Services
         * GovCloud (US). To share BYOL images across accounts in Amazon Web Services
         * GovCloud (US), contact Amazon Web Services Support.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceImagePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceImagePermissionOutcome UpdateWorkspaceImagePermission(const Model::UpdateWorkspaceImagePermissionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkSpacesEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WorkSpacesClientConfiguration& clientConfiguration);

      WorkSpacesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpaces
} // namespace Aws
