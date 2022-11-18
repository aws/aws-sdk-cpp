/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/QuickSightServiceClientModel.h>
#include <aws/quicksight/QuickSightLegacyAsyncMacros.h>

namespace Aws
{
namespace QuickSight
{
  /**
   * <fullname>Amazon QuickSight API Reference</fullname> <p>Amazon QuickSight is a
   * fully managed, serverless business intelligence service for the Amazon Web
   * Services Cloud that makes it easy to extend data and insights to every user in
   * your organization. This API reference contains documentation for a programming
   * interface that you can use to manage Amazon QuickSight. </p>
   */
  class AWS_QUICKSIGHT_API QuickSightClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration(),
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG),
                         const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG),
                         const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QuickSightClient();


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
         * <p>Cancels an ongoing ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelIngestionOutcome CancelIngestion(const Model::CancelIngestionRequest& request) const;


        /**
         * <p>Creates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, you can add a custom default theme by using the
         * <code>CreateAccountCustomization</code> or
         * <code>UpdateAccountCustomization</code> API operation. To further customize
         * Amazon QuickSight by removing Amazon QuickSight sample assets and videos for all
         * new users, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-quicksight.html">Customizing
         * Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide.</i> </p> <p>You
         * can create customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a QuickSight namespace instead. Customizations that
         * apply to a namespace always override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation.</p> <p>Before you use
         * the <code>CreateAccountCustomization</code> API operation to add a theme as the
         * namespace default, make sure that you first share the theme with the namespace.
         * If you don't share it with the namespace, the theme isn't visible to your users
         * even if you make it the default theme. To check if the theme is shared, view the
         * current permissions by using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeThemePermissions.html">DescribeThemePermissions</a>
         * </code> API operation. To share the theme, grant permissions by using the <code>
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateThemePermissions.html">UpdateThemePermissions</a>
         * </code> API operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountCustomizationOutcome CreateAccountCustomization(const Model::CreateAccountCustomizationRequest& request) const;


        /**
         * <p>Creates an Amazon QuickSight account, or subscribes to Amazon QuickSight
         * Q.</p> <p>The Amazon Web Services Region for the account is derived from what is
         * configured in the CLI or SDK. This operation isn't supported in the US East
         * (Ohio) Region, South America (Sao Paulo) Region, or Asia Pacific (Singapore)
         * Region. </p> <p>Before you use this operation, make sure that you can connect to
         * an existing Amazon Web Services account. If you don't have an Amazon Web
         * Services account, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/setting-up-aws-sign-up.html">Sign
         * up for Amazon Web Services</a> in the <i>Amazon QuickSight User Guide</i>. The
         * person who signs up for Amazon QuickSight needs to have the correct Identity and
         * Access Management (IAM) permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/iam-policy-examples.html">IAM
         * Policy Examples for Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>If your IAM policy includes both the <code>Subscribe</code>
         * and <code>CreateAccountSubscription</code> actions, make sure that both actions
         * are set to <code>Allow</code>. If either action is set to <code>Deny</code>, the
         * <code>Deny</code> action prevails and your API call fails.</p> <p>You can't pass
         * an existing IAM role to access other Amazon Web Services services using this API
         * operation. To pass your existing IAM role to Amazon QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html#security-create-iam-role">Passing
         * IAM roles to Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>You can't set default resource access on the new account from
         * the Amazon QuickSight API. Instead, add default resource access from the Amazon
         * QuickSight console. For more information about setting default resource access
         * to Amazon Web Services services, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/scoping-policies-defaults.html">Setting
         * default resource access to Amazon Web Services services</a> in the <i>Amazon
         * QuickSight User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountSubscriptionOutcome CreateAccountSubscription(const Model::CreateAccountSubscriptionRequest& request) const;


        /**
         * <p>Creates an analysis in Amazon QuickSight.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalysisOutcome CreateAnalysis(const Model::CreateAnalysisRequest& request) const;


        /**
         * <p>Creates a dashboard from a template. To first create a template, see the
         * <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
         * </code> API operation.</p> <p>A dashboard is an entity in Amazon QuickSight that
         * identifies Amazon QuickSight reports, created from analyses. You can share
         * Amazon QuickSight dashboards. With the right permissions, you can create
         * scheduled email reports from them. If you have the correct permissions, you can
         * create a dashboard from a template that exists in a different Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;


        /**
         * <p>Creates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;


        /**
         * <p>Creates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;


        /**
         * <p>Creates an empty shared folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;


        /**
         * <p>Adds an asset, such as a dashboard, analysis, or dataset into a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderMembershipOutcome CreateFolderMembership(const Model::CreateFolderMembershipRequest& request) const;


        /**
         * <p>Use the <code>CreateGroup</code> operation to create a group in Amazon
         * QuickSight. You can create up to 10,000 groups in a namespace. If you want to
         * create more than 10,000 groups in a namespace, contact AWS Support.</p> <p>The
         * permissions resource is
         * <code>arn:aws:quicksight:&lt;your-region&gt;:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;


        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupMembershipOutcome CreateGroupMembership(const Model::CreateGroupMembershipRequest& request) const;


        /**
         * <p>Creates an assignment with one specified IAM policy, identified by its Amazon
         * Resource Name (ARN). This policy assignment is attached to the specified groups
         * or users of Amazon QuickSight. Assignment names are unique per Amazon Web
         * Services account. To avoid overwriting rules in other namespaces, use assignment
         * names that are unique.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIAMPolicyAssignmentOutcome CreateIAMPolicyAssignment(const Model::CreateIAMPolicyAssignmentRequest& request) const;


        /**
         * <p>Creates and starts a new SPICE ingestion for a dataset. You can manually
         * refresh datasets in an Enterprise edition account 32 times in a 24-hour period.
         * You can manually refresh datasets in a Standard edition account 8 times in a
         * 24-hour period. Each 24-hour period is measured starting 24 hours before the
         * current date and time.</p> <p>Any ingestions operating on tagged datasets
         * inherit the same tags automatically for use in access control. For an example,
         * see <a
         * href="http://aws.amazon.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a> in the Amazon Web Services Knowledge Center. Tags are visible on the
         * tagged dataset, but not on the ingestion resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionOutcome CreateIngestion(const Model::CreateIngestionRequest& request) const;


        /**
         * <p>(Enterprise edition only) Creates a new namespace for you to use with Amazon
         * QuickSight.</p> <p>A namespace allows you to isolate the Amazon QuickSight users
         * and groups that are registered for that namespace. Users that access the
         * namespace can share assets only with other users or groups in the same
         * namespace. They can't see users and groups in other namespaces. You can create a
         * namespace after your Amazon Web Services account is subscribed to Amazon
         * QuickSight. The namespace must be unique within the Amazon Web Services account.
         * By default, there is a limit of 100 namespaces per Amazon Web Services account.
         * To increase your limit, create a ticket with Amazon Web Services Support.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;


        /**
         * <p>Creates a template from an existing Amazon QuickSight analysis or template.
         * You can use the resulting template to create a dashboard.</p> <p>A
         * <i>template</i> is an entity in Amazon QuickSight that encapsulates the metadata
         * required to create an analysis and that you can use to create s dashboard. A
         * template adds a layer of abstraction by using placeholders to replace the
         * dataset associated with the analysis. You can use templates to create dashboards
         * by replacing dataset placeholders with datasets that follow the same schema that
         * was used to create the source analysis and template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;


        /**
         * <p>Creates a template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateAliasOutcome CreateTemplateAlias(const Model::CreateTemplateAliasRequest& request) const;


        /**
         * <p>Creates a theme.</p> <p>A <i>theme</i> is set of configuration options for
         * color and layout. Themes apply to analyses and dashboards. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/themes-in-quicksight.html">Using
         * Themes in Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeOutcome CreateTheme(const Model::CreateThemeRequest& request) const;


        /**
         * <p>Creates a theme alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeAliasOutcome CreateThemeAlias(const Model::CreateThemeAliasRequest& request) const;


        /**
         * <p>Deletes all Amazon QuickSight customizations in this Amazon Web Services
         * Region for the specified Amazon Web Services account and Amazon QuickSight
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountCustomizationOutcome DeleteAccountCustomization(const Model::DeleteAccountCustomizationRequest& request) const;


        /**
         * <p>Deletes an analysis from Amazon QuickSight. You can optionally include a
         * recovery window during which you can restore the analysis. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Amazon QuickSight
         * attaches a <code>DeletionTime</code> stamp to the response that specifies the
         * end of the recovery window. At the end of the recovery window, Amazon QuickSight
         * deletes the analysis permanently.</p> <p>At any time before recovery window
         * ends, you can use the <code>RestoreAnalysis</code> API operation to remove the
         * <code>DeletionTime</code> stamp and cancel the deletion of the analysis. The
         * analysis remains visible in the API until it's deleted, so you can describe it
         * but you can't make a template from it.</p> <p>An analysis that's scheduled for
         * deletion isn't accessible in the Amazon QuickSight console. To access it in the
         * console, restore it. Deleting an analysis doesn't delete the dashboards that you
         * publish from it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalysisOutcome DeleteAnalysis(const Model::DeleteAnalysisRequest& request) const;


        /**
         * <p>Deletes a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;


        /**
         * <p>Deletes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;


        /**
         * <p>Deletes the data source permanently. This operation breaks all the datasets
         * that reference the deleted data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;


        /**
         * <p>Deletes an empty folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;


        /**
         * <p>Removes an asset, such as a dashboard, analysis, or dataset, from a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderMembershipOutcome DeleteFolderMembership(const Model::DeleteFolderMembershipRequest& request) const;


        /**
         * <p>Removes a user group from Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;


        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupMembershipOutcome DeleteGroupMembership(const Model::DeleteGroupMembershipRequest& request) const;


        /**
         * <p>Deletes an existing IAM policy assignment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcome DeleteIAMPolicyAssignment(const Model::DeleteIAMPolicyAssignmentRequest& request) const;


        /**
         * <p>Deletes a namespace and the users and groups that are associated with the
         * namespace. This is an asynchronous process. Assets including dashboards,
         * analyses, datasets and data sources are not deleted. To delete these assets, you
         * use the API operations for the relevant asset. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;


        /**
         * <p>Deletes a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;


        /**
         * <p>Deletes the item that the specified template alias points to. If you provide
         * a specific alias, you delete the version of the template that the alias points
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateAliasOutcome DeleteTemplateAlias(const Model::DeleteTemplateAliasRequest& request) const;


        /**
         * <p>Deletes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;


        /**
         * <p>Deletes the version of the theme that the specified theme alias points to. If
         * you provide a specific alias, you delete the version of the theme that the alias
         * points to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeAliasOutcome DeleteThemeAlias(const Model::DeleteThemeAliasRequest& request) const;


        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the Identity and Access Management (IAM) user or role that's making the call.
         * The IAM user isn't deleted as a result of this call. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Deletes a user identified by its principal ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserByPrincipalIdOutcome DeleteUserByPrincipalId(const Model::DeleteUserByPrincipalIdRequest& request) const;


        /**
         * <p>Describes the customizations associated with the provided Amazon Web Services
         * account and Amazon Amazon QuickSight namespace in an Amazon Web Services Region.
         * The Amazon QuickSight console evaluates which customizations to apply by running
         * this API operation with the <code>Resolved</code> flag included. </p> <p>To
         * determine what customizations display when you run this command, it can help to
         * visualize the relationship of the entities involved. </p> <ul> <li> <p>
         * <code>Amazon Web Services account</code> - The Amazon Web Services account
         * exists at the top of the hierarchy. It has the potential to use all of the
         * Amazon Web Services Regions and Amazon Web Services Services. When you subscribe
         * to Amazon QuickSight, you choose one Amazon Web Services Region to use as your
         * home Region. That's where your free SPICE capacity is located. You can use
         * Amazon QuickSight in any supported Amazon Web Services Region. </p> </li> <li>
         * <p> <code>Amazon Web Services Region</code> - In each Amazon Web Services Region
         * where you sign in to Amazon QuickSight at least once, Amazon QuickSight acts as
         * a separate instance of the same service. If you have a user directory, it
         * resides in us-east-1, which is the US East (N. Virginia). Generally speaking,
         * these users have access to Amazon QuickSight in any Amazon Web Services Region,
         * unless they are constrained to a namespace. </p> <p>To run the command in a
         * different Amazon Web Services Region, you change your Region settings. If you're
         * using the CLI, you can use one of the following options:</p> <ul> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-options.html">command
         * line options</a>. </p> </li> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-profiles.html">named
         * profiles</a>. </p> </li> <li> <p>Run <code>aws configure</code> to change your
         * default Amazon Web Services Region. Use Enter to key the same settings for your
         * keys. For more information, see <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-configure.html">Configuring
         * the CLI</a>.</p> </li> </ul> </li> <li> <p> <code>Namespace</code> - A
         * QuickSight namespace is a partition that contains users and assets (data
         * sources, datasets, dashboards, and so on). To access assets that are in a
         * specific namespace, users and groups must also be part of the same namespace.
         * People who share a namespace are completely isolated from users and assets in
         * other namespaces, even if they are in the same Amazon Web Services account and
         * Amazon Web Services Region.</p> </li> <li> <p> <code>Applied
         * customizations</code> - Within an Amazon Web Services Region, a set of Amazon
         * QuickSight customizations can apply to an Amazon Web Services account or to a
         * namespace. Settings that you apply to a namespace override settings that you
         * apply to an Amazon Web Services account. All settings are isolated to a single
         * Amazon Web Services Region. To apply them in other Amazon Web Services Regions,
         * run the <code>CreateAccountCustomization</code> command in each Amazon Web
         * Services Region where you want to apply the same customizations. </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountCustomizationOutcome DescribeAccountCustomization(const Model::DescribeAccountCustomizationRequest& request) const;


        /**
         * <p>Describes the settings that were used when your Amazon QuickSight
         * subscription was first created in this Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSettingsOutcome DescribeAccountSettings(const Model::DescribeAccountSettingsRequest& request) const;


        /**
         * <p>Use the DescribeAccountSubscription operation to receive a description of a
         * Amazon QuickSight account's subscription. A successful API call returns an
         * <code>AccountInfo</code> object that includes an account's name, subscription
         * status, authentication type, edition, and notification email
         * address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSubscriptionOutcome DescribeAccountSubscription(const Model::DescribeAccountSubscriptionRequest& request) const;


        /**
         * <p>Provides a summary of the metadata for an analysis.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisOutcome DescribeAnalysis(const Model::DescribeAnalysisRequest& request) const;


        /**
         * <p>Provides the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisPermissionsOutcome DescribeAnalysisPermissions(const Model::DescribeAnalysisPermissionsRequest& request) const;


        /**
         * <p>Provides a summary for a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;


        /**
         * <p>Describes read and write permissions for a dashboard.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardPermissionsOutcome DescribeDashboardPermissions(const Model::DescribeDashboardPermissionsRequest& request) const;


        /**
         * <p>Describes a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetOutcome DescribeDataSet(const Model::DescribeDataSetRequest& request) const;


        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetPermissionsOutcome DescribeDataSetPermissions(const Model::DescribeDataSetPermissionsRequest& request) const;


        /**
         * <p>Describes a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;


        /**
         * <p>Describes the resource permissions for a data source.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourcePermissionsOutcome DescribeDataSourcePermissions(const Model::DescribeDataSourcePermissionsRequest& request) const;


        /**
         * <p>Describes a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderOutcome DescribeFolder(const Model::DescribeFolderRequest& request) const;


        /**
         * <p>Describes permissions for a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderPermissionsOutcome DescribeFolderPermissions(const Model::DescribeFolderPermissionsRequest& request) const;


        /**
         * <p>Describes the folder resolved permissions. Permissions consists of both
         * folder direct permissions and the inherited permissions from the ancestor
         * folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderResolvedPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderResolvedPermissionsOutcome DescribeFolderResolvedPermissions(const Model::DescribeFolderResolvedPermissionsRequest& request) const;


        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;


        /**
         * <p>Use the <code>DescribeGroupMembership</code> operation to determine if a user
         * is a member of the specified group. If the user exists and is a member of the
         * specified group, an associated <code>GroupMember</code> object is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupMembershipOutcome DescribeGroupMembership(const Model::DescribeGroupMembershipRequest& request) const;


        /**
         * <p>Describes an existing IAM policy assignment, as specified by the assignment
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcome DescribeIAMPolicyAssignment(const Model::DescribeIAMPolicyAssignmentRequest& request) const;


        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIngestionOutcome DescribeIngestion(const Model::DescribeIngestionRequest& request) const;


        /**
         * <p>Provides a summary and status of IP rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpRestrictionOutcome DescribeIpRestriction(const Model::DescribeIpRestrictionRequest& request) const;


        /**
         * <p>Describes the current namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNamespaceOutcome DescribeNamespace(const Model::DescribeNamespaceRequest& request) const;


        /**
         * <p>Describes a template's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest& request) const;


        /**
         * <p>Describes the template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateAliasOutcome DescribeTemplateAlias(const Model::DescribeTemplateAliasRequest& request) const;


        /**
         * <p>Describes read and write permissions on a template.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplatePermissionsOutcome DescribeTemplatePermissions(const Model::DescribeTemplatePermissionsRequest& request) const;


        /**
         * <p>Describes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeOutcome DescribeTheme(const Model::DescribeThemeRequest& request) const;


        /**
         * <p>Describes the alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeAliasOutcome DescribeThemeAlias(const Model::DescribeThemeAliasRequest& request) const;


        /**
         * <p>Describes the read and write permissions for a theme.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemePermissionsOutcome DescribeThemePermissions(const Model::DescribeThemePermissionsRequest& request) const;


        /**
         * <p>Returns information about a user, given the user name. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * dashboard or visual in your website, without having to register any reader
         * users. Before you use this action, make sure that you have configured the
         * dashboards and permissions.</p> <p>The following rules apply to the generated
         * URL:</p> <ul> <li> <p>It contains a temporary bearer token. It is valid for 5
         * minutes after it is generated. Once redeemed within this period, it cannot be
         * re-used again.</p> </li> <li> <p>The URL validity period should not be confused
         * with the actual session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForAnonymousUser.html#QS-GenerateEmbedUrlForAnonymousUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter. The resulting user session is valid for 15 minutes (minimum)
         * to 10 hours (maximum). The default session duration is 10 hours.</p> </li> <li>
         * <p>You are charged only when the URL is used or there is interaction with Amazon
         * QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForAnonymousUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForAnonymousUserOutcome GenerateEmbedUrlForAnonymousUser(const Model::GenerateEmbedUrlForAnonymousUserRequest& request) const;


        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * experience in your website. This action can be used for any type of user
         * registered in an Amazon QuickSight account. Before you use this action, make
         * sure that you have configured the relevant Amazon QuickSight resource and
         * permissions.</p> <p>The following rules apply to the generated URL:</p> <ul>
         * <li> <p>It contains a temporary bearer token. It is valid for 5 minutes after it
         * is generated. Once redeemed within this period, it cannot be re-used again.</p>
         * </li> <li> <p>The URL validity period should not be confused with the actual
         * session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html#QS-GenerateEmbedUrlForRegisteredUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter.</p> <p>The resulting user session is valid for 15 minutes
         * (minimum) to 10 hours (maximum). The default session duration is 10 hours.</p>
         * </li> <li> <p>You are charged only when the URL is used or there is interaction
         * with Amazon QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForRegisteredUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForRegisteredUserOutcome GenerateEmbedUrlForRegisteredUser(const Model::GenerateEmbedUrlForRegisteredUserRequest& request) const;


        /**
         * <p>Generates a temporary session URL and authorization code(bearer token) that
         * you can use to embed an Amazon QuickSight read-only dashboard in your website or
         * application. Before you use this command, make sure that you have configured the
         * dashboards and permissions. </p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user's
         * browser. The following rules apply to the generated URL:</p> <ul> <li> <p>They
         * must be used together.</p> </li> <li> <p>They can be used one time only.</p>
         * </li> <li> <p>They are valid for 5 minutes after you run this command.</p> </li>
         * <li> <p>You are charged only when the URL is used or there is interaction with
         * Amazon QuickSight.</p> </li> <li> <p>The resulting user session is valid for 15
         * minutes (default) up to 10 hours (maximum). You can use the optional
         * <code>SessionLifetimeInMinutes</code> parameter to customize session
         * duration.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-deprecated.html">Embedding
         * Analytics Using GetDashboardEmbedUrl</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>For more information about the high-level steps for embedding
         * and for an interactive demo of the ways you can customize embedding, visit the
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardEmbedUrlOutcome GetDashboardEmbedUrl(const Model::GetDashboardEmbedUrlRequest& request) const;


        /**
         * <p>Generates a session URL and authorization code that you can use to embed the
         * Amazon Amazon QuickSight console in your web server code. Use
         * <code>GetSessionEmbedUrl</code> where you want to provide an authoring portal
         * that allows users to create data sources, datasets, analyses, and dashboards.
         * The users who access an embedded Amazon QuickSight console need belong to the
         * author or admin security cohort. If you want to restrict permissions to some of
         * these features, add a custom permissions profile to the user with the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
         * </code> API operation. Use <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
         * </code> API operation to add a new user with a custom permission profile
         * attached. For more information, see the following sections in the <i>Amazon
         * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedding
         * Analytics</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
         * Access to the Amazon QuickSight Console</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetSessionEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionEmbedUrlOutcome GetSessionEmbedUrl(const Model::GetSessionEmbedUrlRequest& request) const;


        /**
         * <p>Lists Amazon QuickSight analyses that exist in the specified Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalysesOutcome ListAnalyses(const Model::ListAnalysesRequest& request) const;


        /**
         * <p>Lists all the versions of the dashboards in the Amazon QuickSight
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardVersionsOutcome ListDashboardVersions(const Model::ListDashboardVersionsRequest& request) const;


        /**
         * <p>Lists dashboards in an Amazon Web Services account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;


        /**
         * <p>Lists all of the datasets belonging to the current Amazon Web Services
         * account in an Amazon Web Services Region.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;


        /**
         * <p>Lists data sources in current Amazon Web Services Region that belong to this
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;


        /**
         * <p>List all assets (<code>DASHBOARD</code>, <code>ANALYSIS</code>, and
         * <code>DATASET</code>) in a folder. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolderMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFolderMembersOutcome ListFolderMembers(const Model::ListFolderMembersRequest& request) const;


        /**
         * <p>Lists all folders in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFoldersOutcome ListFolders(const Model::ListFoldersRequest& request) const;


        /**
         * <p>Lists member users in a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;


        /**
         * <p>Lists all user groups in Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;


        /**
         * <p>Lists IAM policy assignments in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsOutcome ListIAMPolicyAssignments(const Model::ListIAMPolicyAssignmentsRequest& request) const;


        /**
         * <p>Lists all the IAM policy assignments, including the Amazon Resource Names
         * (ARNs) for the IAM policies assigned to the specified user and group or groups
         * that the user belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcome ListIAMPolicyAssignmentsForUser(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;


        /**
         * <p>Lists the history of SPICE ingestions for a dataset.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIngestions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionsOutcome ListIngestions(const Model::ListIngestionsRequest& request) const;


        /**
         * <p>Lists the namespaces for the specified Amazon Web Services account. This
         * operation doesn't list deleted namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;


        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists all the aliases of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateAliasesOutcome ListTemplateAliases(const Model::ListTemplateAliasesRequest& request) const;


        /**
         * <p>Lists all the versions of the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;


        /**
         * <p>Lists all the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;


        /**
         * <p>Lists all the aliases of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeAliasesOutcome ListThemeAliases(const Model::ListThemeAliasesRequest& request) const;


        /**
         * <p>Lists all the versions of the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeVersionsOutcome ListThemeVersions(const Model::ListThemeVersionsRequest& request) const;


        /**
         * <p>Lists all the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemesOutcome ListThemes(const Model::ListThemesRequest& request) const;


        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest& request) const;


        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>Creates an Amazon QuickSight user, whose identity is associated with the
         * Identity and Access Management (IAM) identity or role specified in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest& request) const;


        /**
         * <p>Restores an analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RestoreAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreAnalysisOutcome RestoreAnalysis(const Model::RestoreAnalysisRequest& request) const;


        /**
         * <p>Searches for analyses that belong to the user specified in the filter.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAnalysesOutcome SearchAnalyses(const Model::SearchAnalysesRequest& request) const;


        /**
         * <p>Searches for dashboards that belong to a user. </p>  <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDashboardsOutcome SearchDashboards(const Model::SearchDashboardsRequest& request) const;


        /**
         * <p>Searches the subfolders in a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFoldersOutcome SearchFolders(const Model::SearchFoldersRequest& request) const;


        /**
         * <p>Use the <code>SearchGroups</code> operation to search groups in a specified
         * Amazon QuickSight namespace using the supplied filters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGroupsOutcome SearchGroups(const Model::SearchGroupsRequest& request) const;


        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon QuickSight
         * resource. </p> <p>Tags can help you organize and categorize your resources. You
         * can also use them to scope user permissions, by granting a user permission to
         * access or change only resources with certain tag values. You can use the
         * <code>TagResource</code> operation with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource. Amazon QuickSight supports tagging on data set, data source,
         * dashboard, and template. </p> <p>Tagging for Amazon QuickSight works in a
         * similar way to tagging for other Amazon Web Services services, except for the
         * following:</p> <ul> <li> <p>You can't use tags to track costs for Amazon
         * QuickSight. This isn't possible because you can't tag the resources that Amazon
         * QuickSight costs are based on, for example Amazon QuickSight storage capacity
         * (SPICE), number of users, type of users, and usage metrics.</p> </li> <li>
         * <p>Amazon QuickSight doesn't currently support the tag editor for Resource
         * Groups.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, the only customization that you can use is a theme.</p>
         * <p>You can use customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a Amazon QuickSight namespace instead. Customizations
         * that apply to a namespace override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountCustomizationOutcome UpdateAccountCustomization(const Model::UpdateAccountCustomizationRequest& request) const;


        /**
         * <p>Updates the Amazon QuickSight settings in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;


        /**
         * <p>Updates an analysis in Amazon QuickSight</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisOutcome UpdateAnalysis(const Model::UpdateAnalysisRequest& request) const;


        /**
         * <p>Updates the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisPermissionsOutcome UpdateAnalysisPermissions(const Model::UpdateAnalysisPermissionsRequest& request) const;


        /**
         * <p>Updates a dashboard in an Amazon Web Services account.</p>  <p>Updating
         * a Dashboard creates a new dashboard version but does not immediately publish the
         * new version. You can update the published version of a dashboard by using the
         * <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateDashboardPublishedVersion.html">UpdateDashboardPublishedVersion</a>
         * </code> API operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;


        /**
         * <p>Updates read and write permissions on a dashboard.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPermissionsOutcome UpdateDashboardPermissions(const Model::UpdateDashboardPermissionsRequest& request) const;


        /**
         * <p>Updates the published version of a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPublishedVersionOutcome UpdateDashboardPublishedVersion(const Model::UpdateDashboardPublishedVersionRequest& request) const;


        /**
         * <p>Updates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source. Partial updates are not supported by this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;


        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetPermissionsOutcome UpdateDataSetPermissions(const Model::UpdateDataSetPermissionsRequest& request) const;


        /**
         * <p>Updates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;


        /**
         * <p>Updates the permissions to a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourcePermissionsOutcome UpdateDataSourcePermissions(const Model::UpdateDataSourcePermissionsRequest& request) const;


        /**
         * <p>Updates the name of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;


        /**
         * <p>Updates permissions of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderPermissionsOutcome UpdateFolderPermissions(const Model::UpdateFolderPermissionsRequest& request) const;


        /**
         * <p>Changes a group description. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;


        /**
         * <p>Updates an existing IAM policy assignment. This operation updates only the
         * optional parameter or parameters that are specified in the request. This
         * overwrites all of the users included in <code>Identities</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcome UpdateIAMPolicyAssignment(const Model::UpdateIAMPolicyAssignmentRequest& request) const;


        /**
         * <p>Updates the content and status of IP rules. To use this operation, you need
         * to provide the entire map of rules. You can use the
         * <code>DescribeIpRestriction</code> operation to get the current rule
         * map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIpRestrictionOutcome UpdateIpRestriction(const Model::UpdateIpRestrictionRequest& request) const;


        /**
         * <p>Use the <code>UpdatePublicSharingSettings</code> operation to turn on or turn
         * off the public sharing settings of an Amazon QuickSight dashboard.</p> <p>To use
         * this operation, turn on session capacity pricing for your Amazon QuickSight
         * account.</p> <p>Before you can turn on public sharing on your account, make sure
         * to give public sharing permissions to an administrative user in the Identity and
         * Access Management (IAM) console. For more information on using IAM with Amazon
         * QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html">Using
         * Amazon QuickSight with IAM</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdatePublicSharingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicSharingSettingsOutcome UpdatePublicSharingSettings(const Model::UpdatePublicSharingSettingsRequest& request) const;


        /**
         * <p>Updates a template from an existing Amazon QuickSight analysis or another
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;


        /**
         * <p>Updates the template alias of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateAliasOutcome UpdateTemplateAlias(const Model::UpdateTemplateAliasRequest& request) const;


        /**
         * <p>Updates the resource permissions for a template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplatePermissionsOutcome UpdateTemplatePermissions(const Model::UpdateTemplatePermissionsRequest& request) const;


        /**
         * <p>Updates a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;


        /**
         * <p>Updates an alias of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeAliasOutcome UpdateThemeAlias(const Model::UpdateThemeAliasRequest& request) const;


        /**
         * <p>Updates the resource permissions for a theme. Permissions apply to the action
         * to grant or revoke permissions on, for example
         * <code>"quicksight:DescribeTheme"</code>.</p> <p>Theme permissions apply in
         * groupings. Valid groupings include the following for the three levels of
         * permissions, which are user, owner, or no permissions: </p> <ul> <li>
         * <p>User</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> </ul> </li> <li>
         * <p>Owner</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:CreateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemePermissions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DescribeThemePermissions"</code> </p> </li> </ul> </li> <li>
         * <p>To specify no permissions, omit the permissions list.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemePermissionsOutcome UpdateThemePermissions(const Model::UpdateThemePermissionsRequest& request) const;


        /**
         * <p>Updates an Amazon QuickSight user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QuickSightEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const QuickSightClientConfiguration& clientConfiguration);

      QuickSightClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<QuickSightEndpointProviderBase> m_endpointProvider;
  };

} // namespace QuickSight
} // namespace Aws
