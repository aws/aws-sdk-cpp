/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateStackSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStackSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name to associate with the StackSet. The name must be unique in the
     * Region where you create your StackSet.</p>  <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> 
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    CreateStackSetRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the StackSet. You can use the description to identify the
     * StackSet's purpose or other important information.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStackSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes.</p> <p>Conditional: You must specify
     * either the <code>TemplateBody</code> or the <code>TemplateURL</code> parameter,
     * but not both.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    CreateStackSetRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a file that contains the template body. The URL must point to a
     * template (maximum size: 1 MB) that's located in an Amazon S3 bucket or a Systems
     * Manager document. The location for an Amazon S3 bucket must start with
     * <code>https://</code>. S3 static website URLs are not supported.</p>
     * <p>Conditional: You must specify either the <code>TemplateBody</code> or the
     * <code>TemplateURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateURL() const { return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    template<typename TemplateURLT = Aws::String>
    void SetTemplateURL(TemplateURLT&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::forward<TemplateURLT>(value); }
    template<typename TemplateURLT = Aws::String>
    CreateStackSetRequest& WithTemplateURL(TemplateURLT&& value) { SetTemplateURL(std::forward<TemplateURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID you are importing into a new StackSet. Specify the Amazon
     * Resource Name (ARN) of the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateStackSetRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input parameters for the StackSet template.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    CreateStackSetRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    CreateStackSetRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In some cases, you must explicitly acknowledge that your StackSet template
     * contains certain capabilities in order for CloudFormation to create the StackSet
     * and related stack instances.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new IAM users. For those StackSets, you must explicitly
     * acknowledge this by specifying one of these capabilities.</p> <p>The following
     * IAM resources require you to specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability.</p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you don't specify either
     * of these capabilities, CloudFormation returns an
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
     * your StackSet template references one or more macros, you must create the
     * StackSet directly from the processed template, without first reviewing the
     * resulting changes in a change set. To create the StackSet directly, you must
     * acknowledge this capability. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Perform
     * custom processing on CloudFormation templates with template macros</a>.</p>
     *  <p>StackSets with service-managed permissions don't currently
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
    CreateStackSetRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline CreateStackSetRequest& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value pairs to associate with this StackSet and the stacks created
     * from it. CloudFormation also propagates these tags to supported resources that
     * are created in the stacks. A maximum number of 50 tags can be specified.</p>
     * <p>If you specify tags as part of a <code>CreateStackSet</code> action,
     * CloudFormation checks to see if you have the required IAM permission to tag
     * resources. If you don't, the entire <code>CreateStackSet</code> action fails
     * with an <code>access denied</code> error, and the StackSet is not created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStackSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStackSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use to create this
     * StackSet.</p> <p>Specify an IAM role only if you are using customized
     * administrator roles to control which users or groups can manage specific
     * StackSets within the same administrator account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a> in the <i>CloudFormation User Guide</i>.</p>
     * <p>Valid only if the permissions model is <code>SELF_MANAGED</code>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const { return m_administrationRoleARN; }
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }
    template<typename AdministrationRoleARNT = Aws::String>
    void SetAdministrationRoleARN(AdministrationRoleARNT&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::forward<AdministrationRoleARNT>(value); }
    template<typename AdministrationRoleARNT = Aws::String>
    CreateStackSetRequest& WithAdministrationRoleARN(AdministrationRoleARNT&& value) { SetAdministrationRoleARN(std::forward<AdministrationRoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM execution role to use to create the StackSet. If you do
     * not specify an execution role, CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the StackSet
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * StackSets.</p> <p>Valid only if the permissions model is
     * <code>SELF_MANAGED</code>.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const { return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    template<typename ExecutionRoleNameT = Aws::String>
    void SetExecutionRoleName(ExecutionRoleNameT&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::forward<ExecutionRoleNameT>(value); }
    template<typename ExecutionRoleNameT = Aws::String>
    CreateStackSetRequest& WithExecutionRoleName(ExecutionRoleNameT&& value) { SetExecutionRoleName(std::forward<ExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the IAM roles required for StackSet operations are created. By
     * default, <code>SELF-MANAGED</code> is specified.</p> <ul> <li> <p>With
     * <code>self-managed</code> permissions, you must create the administrator and
     * execution roles required to deploy to target accounts. For more information, see
     * <a
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
    inline CreateStackSetRequest& WithPermissionModel(PermissionModels value) { SetPermissionModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets automatically deploys to Organizations accounts
     * that are added to the target organization or organizational unit (OU). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-manage-auto-deployment.html">Enable
     * or disable automatic deployments for StackSets in Organizations</a> in the
     * <i>CloudFormation User Guide</i>.</p> <p>Required if the permissions model is
     * <code>SERVICE_MANAGED</code>. (Not used with self-managed permissions.)</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const { return m_autoDeployment; }
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }
    template<typename AutoDeploymentT = AutoDeployment>
    void SetAutoDeployment(AutoDeploymentT&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::forward<AutoDeploymentT>(value); }
    template<typename AutoDeploymentT = AutoDeployment>
    CreateStackSetRequest& WithAutoDeployment(AutoDeploymentT&& value) { SetAutoDeployment(std::forward<AutoDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you are acting as an account administrator in the
     * organization's management account or as a delegated administrator in a member
     * account.</p> <p>By default, <code>SELF</code> is specified. Use
     * <code>SELF</code> for StackSets with self-managed permissions.</p> <ul> <li>
     * <p>To create a StackSet with service-managed permissions while signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>To create a
     * StackSet with service-managed permissions while signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated admin in the management
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul> <p>StackSets with service-managed permissions are created in the
     * management account, including StackSets that are created by delegated
     * administrators.</p> <p>Valid only if the permissions model is
     * <code>SERVICE_MANAGED</code>.</p>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline CreateStackSetRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another StackSet with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateStackSetRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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
    CreateStackSetRequest& WithManagedExecution(ManagedExecutionT&& value) { SetManagedExecution(std::forward<ManagedExecutionT>(value)); return *this;}
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

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    PermissionModels m_permissionModel{PermissionModels::NOT_SET};
    bool m_permissionModelHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
