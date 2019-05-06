/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>ContinueUpdateRollback</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ContinueUpdateRollbackInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API ContinueUpdateRollbackRequest : public CloudFormationRequest
  {
  public:
    ContinueUpdateRollbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ContinueUpdateRollback"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline ContinueUpdateRollbackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline ContinueUpdateRollbackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline ContinueUpdateRollbackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline ContinueUpdateRollbackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline ContinueUpdateRollbackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to roll back the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline ContinueUpdateRollbackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetResourcesToSkip() const{ return m_resourcesToSkip; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline bool ResourcesToSkipHasBeenSet() const { return m_resourcesToSkipHasBeenSet; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline void SetResourcesToSkip(const Aws::Vector<Aws::String>& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip = value; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline void SetResourcesToSkip(Aws::Vector<Aws::String>&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip = std::move(value); }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline ContinueUpdateRollbackRequest& WithResourcesToSkip(const Aws::Vector<Aws::String>& value) { SetResourcesToSkip(value); return *this;}

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline ContinueUpdateRollbackRequest& WithResourcesToSkip(Aws::Vector<Aws::String>&& value) { SetResourcesToSkip(std::move(value)); return *this;}

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(const Aws::String& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(value); return *this; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(Aws::String&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was cancelled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. AWS CloudFormation sets the
     * status of the specified resources to <code>UPDATE_COMPLETE</code> and continues
     * to roll back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable. </p> </important>
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources. </p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p> <note> <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Using
     * ResourcesToSkip to recover a nested stacks hierarchy</a>. </p> </note>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(const char* value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(value); return *this; }


    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline ContinueUpdateRollbackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline ContinueUpdateRollbackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that AWS CloudFormation
     * knows that you're not attempting to continue the rollback to a stack with the
     * same name. You might retry <code>ContinueUpdateRollback</code> requests to
     * ensure that AWS CloudFormation successfully received them.</p>
     */
    inline ContinueUpdateRollbackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::Vector<Aws::String> m_resourcesToSkip;
    bool m_resourcesToSkipHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
