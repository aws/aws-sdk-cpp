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
    AWS_CLOUDFORMATION_API CreateStackSetRequest();

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
     * <p>The name to associate with the stack set. The name must be unique in the
     * Region where you create your stack set.</p>  <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> 
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }
    inline CreateStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}
    inline CreateStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStackSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStackSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes.</p> <p>Conditional: You must specify
     * either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline CreateStackSetRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline CreateStackSetRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document.</p> <p>Conditional: You must specify
     * either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }
    inline CreateStackSetRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}
    inline CreateStackSetRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID you are importing into a new stack set. Specify the Amazon
     * Resource Name (ARN) of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline CreateStackSetRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateStackSetRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input parameters for the stack set template.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateStackSetRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}
    inline CreateStackSetRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateStackSetRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline CreateStackSetRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In some cases, you must explicitly acknowledge that your stack set template
     * contains certain capabilities in order for CloudFormation to create the stack
     * set and related stack instances.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code>
     * and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new IAM users. For those stack sets, you must explicitly
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
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-accesskey.html">AWS::IAM::AccessKey</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-group.html">AWS::IAM::Group</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-user.html">AWS::IAM::User</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-usertogroupaddition.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates reference macros. If
     * your stack set template references one or more macros, you must create the stack
     * set directly from the processed template, without first reviewing the resulting
     * changes in a change set. To create the stack set directly, you must acknowledge
     * this capability. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     *  <p>Stack sets with service-managed permissions don't currently
     * support the use of macros in templates. (This includes the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by CloudFormation.) Even if you specify this
     * capability for a stack set with service-managed permissions, if you reference a
     * macro in your template the stack set operation will fail.</p>  </li>
     * </ul>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline CreateStackSetRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}
    inline CreateStackSetRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CreateStackSetRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline CreateStackSetRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. CloudFormation also propagates these tags to supported resources that
     * are created in the stacks. A maximum number of 50 tags can be specified.</p>
     * <p>If you specify tags as part of a <code>CreateStackSet</code> action,
     * CloudFormation checks to see if you have the required IAM permission to tag
     * resources. If you don't, the entire <code>CreateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStackSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateStackSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStackSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateStackSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use to create this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const{ return m_administrationRoleARN; }
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }
    inline void SetAdministrationRoleARN(const Aws::String& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = value; }
    inline void SetAdministrationRoleARN(Aws::String&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::move(value); }
    inline void SetAdministrationRoleARN(const char* value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN.assign(value); }
    inline CreateStackSetRequest& WithAdministrationRoleARN(const Aws::String& value) { SetAdministrationRoleARN(value); return *this;}
    inline CreateStackSetRequest& WithAdministrationRoleARN(Aws::String&& value) { SetAdministrationRoleARN(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithAdministrationRoleARN(const char* value) { SetAdministrationRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }
    inline CreateStackSetRequest& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}
    inline CreateStackSetRequest& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the IAM roles required for stack set operations are created. By
     * default, <code>SELF-MANAGED</code> is specified.</p> <ul> <li> <p>With
     * <code>self-managed</code> permissions, you must create the administrator and
     * execution roles required to deploy to target accounts. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline const PermissionModels& GetPermissionModel() const{ return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    inline void SetPermissionModel(const PermissionModels& value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }
    inline void SetPermissionModel(PermissionModels&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::move(value); }
    inline CreateStackSetRequest& WithPermissionModel(const PermissionModels& value) { SetPermissionModel(value); return *this;}
    inline CreateStackSetRequest& WithPermissionModel(PermissionModels&& value) { SetPermissionModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets automatically deploys to Organizations accounts
     * that are added to the target organization or organizational unit (OU). Specify
     * only if <code>PermissionModel</code> is <code>SERVICE_MANAGED</code>.</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const{ return m_autoDeployment; }
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }
    inline void SetAutoDeployment(const AutoDeployment& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = value; }
    inline void SetAutoDeployment(AutoDeployment&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::move(value); }
    inline CreateStackSetRequest& WithAutoDeployment(const AutoDeployment& value) { SetAutoDeployment(value); return *this;}
    inline CreateStackSetRequest& WithAutoDeployment(AutoDeployment&& value) { SetAutoDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>To create a stack set with service-managed
     * permissions while signed in to the management account, specify
     * <code>SELF</code>.</p> </li> <li> <p>To create a stack set with service-managed
     * permissions while signed in to a delegated administrator account, specify
     * <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon Web Services account must be
     * registered as a delegated admin in the management account. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul> <p>Stack sets with service-managed permissions are created in the
     * management account, including stack sets that are created by delegated
     * administrators.</p>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }
    inline CreateStackSetRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}
    inline CreateStackSetRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateStackSetRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateStackSetRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateStackSetRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline const ManagedExecution& GetManagedExecution() const{ return m_managedExecution; }
    inline bool ManagedExecutionHasBeenSet() const { return m_managedExecutionHasBeenSet; }
    inline void SetManagedExecution(const ManagedExecution& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = value; }
    inline void SetManagedExecution(ManagedExecution&& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = std::move(value); }
    inline CreateStackSetRequest& WithManagedExecution(const ManagedExecution& value) { SetManagedExecution(value); return *this;}
    inline CreateStackSetRequest& WithManagedExecution(ManagedExecution&& value) { SetManagedExecution(std::move(value)); return *this;}
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

    PermissionModels m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    CallAs m_callAs;
    bool m_callAsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
