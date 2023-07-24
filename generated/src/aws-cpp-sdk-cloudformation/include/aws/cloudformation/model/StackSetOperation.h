/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/cloudformation/model/StackSetOperationStatus.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/cloudformation/model/StackSetDriftDetectionDetails.h>
#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The structure that contains information about a stack set
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperation">AWS
   * API Reference</a></p>
   */
  class StackSetOperation
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperation();
    AWS_CLOUDFORMATION_API StackSetOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline StackSetOperation& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline StackSetOperation& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of a stack set operation.</p>
     */
    inline StackSetOperation& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The ID of the stack set.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = value; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::move(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetIdHasBeenSet = true; m_stackSetId.assign(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetOperation& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetOperation& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetOperation& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline const StackSetOperationAction& GetAction() const{ return m_action; }

    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline void SetAction(const StackSetOperationAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline void SetAction(StackSetOperationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline StackSetOperation& WithAction(const StackSetOperationAction& value) { SetAction(value); return *this;}

    /**
     * <p>The type of stack set operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack set instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself, in addition to <i>all</i>
     * associated stack set instances.</p>
     */
    inline StackSetOperation& WithAction(StackSetOperationAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline const StackSetOperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline void SetStatus(const StackSetOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline void SetStatus(StackSetOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline StackSetOperation& WithStatus(const StackSetOperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">stack
     * set operation status codes</a> in the CloudFormation User Guide.</p> </li> <li>
     * <p> <code>RUNNING</code>: The operation is currently being performed.</p> </li>
     * <li> <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li>
     * <li> <p> <code>STOPPING</code>: The operation is in the process of stopping, at
     * user request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline StackSetOperation& WithStatus(StackSetOperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }

    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }

    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }

    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }

    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline StackSetOperation& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}

    /**
     * <p>The preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline StackSetOperation& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}


    /**
     * <p>For stack set operations of action type <code>DELETE</code>, specifies
     * whether to remove the stack instances from the specified stack set, but doesn't
     * delete the stacks. You can't re-associate a retained stack, or add an existing,
     * saved stack to a new stack set.</p>
     */
    inline bool GetRetainStacks() const{ return m_retainStacks; }

    /**
     * <p>For stack set operations of action type <code>DELETE</code>, specifies
     * whether to remove the stack instances from the specified stack set, but doesn't
     * delete the stacks. You can't re-associate a retained stack, or add an existing,
     * saved stack to a new stack set.</p>
     */
    inline bool RetainStacksHasBeenSet() const { return m_retainStacksHasBeenSet; }

    /**
     * <p>For stack set operations of action type <code>DELETE</code>, specifies
     * whether to remove the stack instances from the specified stack set, but doesn't
     * delete the stacks. You can't re-associate a retained stack, or add an existing,
     * saved stack to a new stack set.</p>
     */
    inline void SetRetainStacks(bool value) { m_retainStacksHasBeenSet = true; m_retainStacks = value; }

    /**
     * <p>For stack set operations of action type <code>DELETE</code>, specifies
     * whether to remove the stack instances from the specified stack set, but doesn't
     * delete the stacks. You can't re-associate a retained stack, or add an existing,
     * saved stack to a new stack set.</p>
     */
    inline StackSetOperation& WithRetainStacks(bool value) { SetRetainStacks(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const{ return m_administrationRoleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const Aws::String& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(Aws::String&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const char* value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline StackSetOperation& WithAdministrationRoleARN(const Aws::String& value) { SetAdministrationRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline StackSetOperation& WithAdministrationRoleARN(Aws::String&& value) { SetAdministrationRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this stack set
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline StackSetOperation& WithAdministrationRoleARN(const char* value) { SetAdministrationRoleARN(value); return *this;}


    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline StackSetOperation& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline StackSetOperation& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM execution role used to create or update the stack
     * set.</p> <p>Use customized execution roles to control which stack resources
     * users and groups can include in their stack sets.</p>
     */
    inline StackSetOperation& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}


    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline StackSetOperation& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline StackSetOperation& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline StackSetOperation& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline StackSetOperation& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}


    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline const DeploymentTargets& GetDeploymentTargets() const{ return m_deploymentTargets; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline bool DeploymentTargetsHasBeenSet() const { return m_deploymentTargetsHasBeenSet; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline void SetDeploymentTargets(const DeploymentTargets& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = value; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline void SetDeploymentTargets(DeploymentTargets&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::move(value); }

    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline StackSetOperation& WithDeploymentTargets(const DeploymentTargets& value) { SetDeploymentTargets(value); return *this;}

    /**
     * <p>[Service-managed permissions] The Organizations accounts affected by the
     * stack operation.</p>
     */
    inline StackSetOperation& WithDeploymentTargets(DeploymentTargets&& value) { SetDeploymentTargets(std::move(value)); return *this;}


    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline const StackSetDriftDetectionDetails& GetStackSetDriftDetectionDetails() const{ return m_stackSetDriftDetectionDetails; }

    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline bool StackSetDriftDetectionDetailsHasBeenSet() const { return m_stackSetDriftDetectionDetailsHasBeenSet; }

    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline void SetStackSetDriftDetectionDetails(const StackSetDriftDetectionDetails& value) { m_stackSetDriftDetectionDetailsHasBeenSet = true; m_stackSetDriftDetectionDetails = value; }

    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline void SetStackSetDriftDetectionDetails(StackSetDriftDetectionDetails&& value) { m_stackSetDriftDetectionDetailsHasBeenSet = true; m_stackSetDriftDetectionDetails = std::move(value); }

    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline StackSetOperation& WithStackSetDriftDetectionDetails(const StackSetDriftDetectionDetails& value) { SetStackSetDriftDetectionDetails(value); return *this;}

    /**
     * <p>Detailed information about the drift status of the stack set. This includes
     * information about drift operations currently being performed on the stack
     * set.</p> <p>This information will only be present for stack set operations whose
     * <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
     * Unmanaged Changes in Stack Sets</a> in the CloudFormation User Guide.</p>
     */
    inline StackSetOperation& WithStackSetDriftDetectionDetails(StackSetDriftDetectionDetails&& value) { SetStackSetDriftDetectionDetails(std::move(value)); return *this;}


    /**
     * <p>The status of the operation in details.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The status of the operation in details.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The status of the operation in details.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The status of the operation in details.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The status of the operation in details.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The status of the operation in details.</p>
     */
    inline StackSetOperation& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The status of the operation in details.</p>
     */
    inline StackSetOperation& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The status of the operation in details.</p>
     */
    inline StackSetOperation& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline const StackSetOperationStatusDetails& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline void SetStatusDetails(const StackSetOperationStatusDetails& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline void SetStatusDetails(StackSetOperationStatusDetails&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline StackSetOperation& WithStatusDetails(const StackSetOperationStatusDetails& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline StackSetOperation& WithStatusDetails(StackSetOperationStatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    StackSetOperationAction m_action;
    bool m_actionHasBeenSet = false;

    StackSetOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;

    bool m_retainStacks;
    bool m_retainStacksHasBeenSet = false;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;

    DeploymentTargets m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet = false;

    StackSetDriftDetectionDetails m_stackSetDriftDetectionDetails;
    bool m_stackSetDriftDetectionDetailsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    StackSetOperationStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
