/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/cloudformation/model/PermissionModels.h>
#include <aws/cloudformation/model/AutoDeployment.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/ManagedExecution.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class UpdateStackSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API UpdateStackSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStackSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique ID of the StackSet that you want to update.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    UpdateStackSetRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStackSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes.</p> <p>Conditional: You must specify
     * only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    UpdateStackSetRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a file that contains the template body. The URL must point to a
     * template (maximum size: 1 MB) that is located in an Amazon S3 bucket or a
     * Systems Manager document. The location for an Amazon S3 bucket must start with
     * <code>https://</code>. S3 static website URLs are not supported.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>TemplateBody</code> or <code>TemplateURL</code>—or set
     * <code>UsePreviousTemplate</code> to true.</p>
     */
    inline const Aws::String& GetTemplateURL() const { return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    template<typename TemplateURLT = Aws::String>
    void SetTemplateURL(TemplateURLT&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::forward<TemplateURLT>(value); }
    template<typename TemplateURLT = Aws::String>
    UpdateStackSetRequest& WithTemplateURL(TemplateURLT&& value) { SetTemplateURL(std::forward<TemplateURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the existing template that's associated with the StackSet that you're
     * updating.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>TemplateBody</code> or <code>TemplateURL</code>—or set
     * <code>UsePreviousTemplate</code> to true.</p>
     */
    inline bool GetUsePreviousTemplate() const { return m_usePreviousTemplate; }
    inline bool UsePreviousTemplateHasBeenSet() const { return m_usePreviousTemplateHasBeenSet; }
    inline void SetUsePreviousTemplate(bool value) { m_usePreviousTemplateHasBeenSet = true; m_usePreviousTemplate = value; }
    inline UpdateStackSetRequest& WithUsePreviousTemplate(bool value) { SetUsePreviousTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of input parameters for the StackSet template.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    UpdateStackSetRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    UpdateStackSetRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to update the StackSet
     * and its associated stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your
     * Amazon Web Services account, for example, by creating new IAM users. For those
     * stacks sets, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-accesskey.html">AWS::IAM::AccessKey</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-group.html">AWS::IAM::Group</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-policy.html">AWS::IAM::Policy</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-role.html">AWS::IAM::Role</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-user.html">AWS::IAM::User</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-resource-iam-usertogroupaddition.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/control-access-with-iam.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates reference macros. If
     * your StackSet template references one or more macros, you must update the
     * StackSet directly from the processed template, without first reviewing the
     * resulting changes in a change set. To update the StackSet directly, you must
     * acknowledge this capability. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Perform
     * custom processing on CloudFormation templates with template macros</a>.</p>
     *  <p>StackSets with service-managed permissions do not currently
     * support the use of macros in templates. (This includes the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-include.html">AWS::Include</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by CloudFormation.) Even if you specify this
     * capability for a StackSet with service-managed permissions, if you reference a
     * macro in your template the StackSet operation will fail.</p>  </li>
     * </ul>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    UpdateStackSetRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline UpdateStackSetRequest& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value pairs to associate with this StackSet and the stacks created
     * from it. CloudFormation also propagates these tags to supported resources that
     * are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this StackSet. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, CloudFormation doesn't modify the
     * stack's tags.</p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this StackSet, even tags you've specified before (for example, when creating the
     * StackSet or during a previous update of the StackSet.). Any tags that you don't
     * include in the updated list of tags are removed from the StackSet, and therefore
     * from the stacks and resources as well.</p> </li> <li> <p>If you specify an empty
     * value, CloudFormation removes all currently associated tags.</p> </li> </ul>
     * <p>If you specify new tags as part of an <code>UpdateStackSet</code> action,
     * CloudFormation checks to see if you have the required IAM permission to tag
     * resources. If you omit tags that are currently associated with the StackSet from
     * the list of tags you specify, CloudFormation assumes that you want to remove
     * those tags from the StackSet, and checks to see if you have permission to untag
     * resources. If you don't have the necessary permission(s), the entire
     * <code>UpdateStackSet</code> action fails with an <code>access denied</code>
     * error, and the StackSet is not updated.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateStackSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateStackSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Preferences for how CloudFormation performs this StackSet operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const { return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    void SetOperationPreferences(OperationPreferencesT&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::forward<OperationPreferencesT>(value); }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    UpdateStackSetRequest& WithOperationPreferences(OperationPreferencesT&& value) { SetOperationPreferences(std::forward<OperationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Self-managed permissions] The Amazon Resource Name (ARN) of the IAM role to
     * use to update this StackSet.</p> <p>Specify an IAM role only if you are using
     * customized administrator roles to control which users or groups can manage
     * specific StackSets within the same administrator account. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a> in the <i>CloudFormation User Guide</i>.</p> <p>If
     * you specified a customized administrator role when you created the StackSet, you
     * must specify a customized administrator role, even if it is the same customized
     * administrator role used with this StackSet previously.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const { return m_administrationRoleARN; }
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }
    template<typename AdministrationRoleARNT = Aws::String>
    void SetAdministrationRoleARN(AdministrationRoleARNT&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::forward<AdministrationRoleARNT>(value); }
    template<typename AdministrationRoleARNT = Aws::String>
    UpdateStackSetRequest& WithAdministrationRoleARN(AdministrationRoleARNT&& value) { SetAdministrationRoleARN(std::forward<AdministrationRoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Self-managed permissions] The name of the IAM execution role to use to
     * update the stack set. If you do not specify an execution role, CloudFormation
     * uses the <code>AWSCloudFormationStackSetExecutionRole</code> role for the
     * StackSet operation.</p> <p>Specify an IAM role only if you are using customized
     * execution roles to control which stack resources users and groups can include in
     * their StackSets.</p> <p>If you specify a customized execution role,
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, CloudFormation performs the update using the role
     * previously associated with the StackSet, so long as you have permissions to
     * perform operations on the StackSet.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const { return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    template<typename ExecutionRoleNameT = Aws::String>
    void SetExecutionRoleName(ExecutionRoleNameT&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::forward<ExecutionRoleNameT>(value); }
    template<typename ExecutionRoleNameT = Aws::String>
    UpdateStackSetRequest& WithExecutionRoleName(ExecutionRoleNameT&& value) { SetExecutionRoleName(std::forward<ExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] The Organizations accounts in which to update
     * associated stack instances.</p> <p>To update all the stack instances associated
     * with this StackSet, do not specify <code>DeploymentTargets</code> or
     * <code>Regions</code>.</p> <p>If the StackSet update includes changes to the
     * template (that is, if <code>TemplateBody</code> or <code>TemplateURL</code> is
     * specified), or the <code>Parameters</code>, CloudFormation marks all stack
     * instances with a status of <code>OUTDATED</code> prior to updating the stack
     * instances in the specified accounts and Amazon Web Services Regions. If the
     * StackSet update doesn't include changes to the template or parameters,
     * CloudFormation updates the stack instances in the specified accounts and
     * Regions, while leaving all other stack instances with their existing stack
     * instance status.</p>
     */
    inline const DeploymentTargets& GetDeploymentTargets() const { return m_deploymentTargets; }
    inline bool DeploymentTargetsHasBeenSet() const { return m_deploymentTargetsHasBeenSet; }
    template<typename DeploymentTargetsT = DeploymentTargets>
    void SetDeploymentTargets(DeploymentTargetsT&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::forward<DeploymentTargetsT>(value); }
    template<typename DeploymentTargetsT = DeploymentTargets>
    UpdateStackSetRequest& WithDeploymentTargets(DeploymentTargetsT&& value) { SetDeploymentTargets(std::forward<DeploymentTargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the IAM roles required for StackSet operations are created. You
     * cannot modify <code>PermissionModel</code> if there are stack instances
     * associated with your stack set.</p> <ul> <li> <p>With <code>self-managed</code>
     * permissions, you must create the administrator and execution roles required to
     * deploy to target accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-activate-trusted-access.html">Activate
     * trusted access for StackSets with Organizations</a>.</p> </li> </ul>
     */
    inline PermissionModels GetPermissionModel() const { return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    inline void SetPermissionModel(PermissionModels value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }
    inline UpdateStackSetRequest& WithPermissionModel(PermissionModels value) { SetPermissionModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organization or
     * organizational unit (OU). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-manage-auto-deployment.html">Enable
     * or disable automatic deployments for StackSets in Organizations</a> in the
     * <i>CloudFormation User Guide</i>.</p> <p>If you specify
     * <code>AutoDeployment</code>, don't specify <code>DeploymentTargets</code> or
     * <code>Regions</code>.</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const { return m_autoDeployment; }
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }
    template<typename AutoDeploymentT = AutoDeployment>
    void SetAutoDeployment(AutoDeploymentT&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::forward<AutoDeploymentT>(value); }
    template<typename AutoDeploymentT = AutoDeployment>
    UpdateStackSetRequest& WithAutoDeployment(AutoDeploymentT&& value) { SetAutoDeployment(std::forward<AutoDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for this StackSet operation.</p> <p>The operation ID also
     * functions as an idempotency token, to ensure that CloudFormation performs the
     * StackSet operation only once, even if you retry the request multiple times. You
     * might retry StackSet operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID,
     * CloudFormation generates one automatically.</p> <p>Repeating this StackSet
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    UpdateStackSetRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Self-managed permissions] The accounts in which to update associated stack
     * instances. If you specify accounts, you must also specify the Amazon Web
     * Services Regions in which to update StackSet instances.</p> <p>To update
     * <i>all</i> the stack instances associated with this StackSet, don't specify the
     * <code>Accounts</code> or <code>Regions</code> properties.</p> <p>If the StackSet
     * update includes changes to the template (that is, if the
     * <code>TemplateBody</code> or <code>TemplateURL</code> properties are specified),
     * or the <code>Parameters</code> property, CloudFormation marks all stack
     * instances with a status of <code>OUTDATED</code> prior to updating the stack
     * instances in the specified accounts and Amazon Web Services Regions. If the
     * StackSet update does not include changes to the template or parameters,
     * CloudFormation updates the stack instances in the specified accounts and Amazon
     * Web Services Regions, while leaving all other stack instances with their
     * existing stack instance status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    UpdateStackSetRequest& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    UpdateStackSetRequest& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions in which to update associated stack
     * instances. If you specify Regions, you must also specify accounts in which to
     * update StackSet instances.</p> <p>To update <i>all</i> the stack instances
     * associated with this StackSet, do not specify the <code>Accounts</code> or
     * <code>Regions</code> properties.</p> <p>If the StackSet update includes changes
     * to the template (that is, if the <code>TemplateBody</code> or
     * <code>TemplateURL</code> properties are specified), or the
     * <code>Parameters</code> property, CloudFormation marks all stack instances with
     * a status of <code>OUTDATED</code> prior to updating the stack instances in the
     * specified accounts and Regions. If the StackSet update does not include changes
     * to the template or parameters, CloudFormation updates the stack instances in the
     * specified accounts and Regions, while leaving all other stack instances with
     * their existing stack instance status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    UpdateStackSetRequest& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    UpdateStackSetRequest& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for StackSets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline UpdateStackSetRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether CloudFormation performs non-conflicting operations
     * concurrently and queues conflicting operations.</p>
     */
    inline const ManagedExecution& GetManagedExecution() const { return m_managedExecution; }
    inline bool ManagedExecutionHasBeenSet() const { return m_managedExecutionHasBeenSet; }
    template<typename ManagedExecutionT = ManagedExecution>
    void SetManagedExecution(ManagedExecutionT&& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = std::forward<ManagedExecutionT>(value); }
    template<typename ManagedExecutionT = ManagedExecution>
    UpdateStackSetRequest& WithManagedExecution(ManagedExecutionT&& value) { SetManagedExecution(std::forward<ManagedExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    bool m_usePreviousTemplate{false};
    bool m_usePreviousTemplateHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    DeploymentTargets m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet = false;

    PermissionModels m_permissionModel{PermissionModels::NOT_SET};
    bool m_permissionModelHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    Aws::String m_operationId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_operationIdHasBeenSet = true;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
