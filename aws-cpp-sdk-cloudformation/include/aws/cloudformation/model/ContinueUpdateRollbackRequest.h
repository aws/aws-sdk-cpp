/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>ContinueUpdateRollback</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ContinueUpdateRollbackRequest : public CloudFormationRequest
  {
  public:
    ContinueUpdateRollbackRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p> <note> <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> </note>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

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
    inline ContinueUpdateRollbackRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

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
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

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
    inline ContinueUpdateRollbackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

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
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourcesToSkip() const{ return m_resourcesToSkip; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline void SetResourcesToSkip(const Aws::Vector<Aws::String>& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip = value; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline void SetResourcesToSkip(Aws::Vector<Aws::String>&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip = value; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline ContinueUpdateRollbackRequest& WithResourcesToSkip(const Aws::Vector<Aws::String>& value) { SetResourcesToSkip(value); return *this;}

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline ContinueUpdateRollbackRequest& WithResourcesToSkip(Aws::Vector<Aws::String>&& value) { SetResourcesToSkip(value); return *this;}

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(const Aws::String& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(value); return *this; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(Aws::String&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(value); return *this; }

    /**
     * <p>A list of the logical IDs of the resources that AWS CloudFormation skips
     * during the continue update rollback operation. You can specify only resources
     * that are in the <code>UPDATE_FAILED</code> state because a rollback failed. You
     * can't specify resources that are in the <code>UPDATE_FAILED</code> state for
     * other reasons, for example, because an update was canceled. To check why a
     * resource update failed, use the <a>DescribeStackResources</a> action, and view
     * the resource status reason. </p> <important> <p>Specify this property to skip
     * rolling back resources that AWS CloudFormation can't successfully roll back. We
     * recommend that you <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
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
     * resources. </p> <p>To specify resources in a nested stack, use the following
     * format: <code>NestedStackName.ResourceLogicalID</code>. You can specify a nested
     * stack resource (the logical ID of an <code>AWS::CloudFormation::Stack</code>
     * resource) only if it's in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>. </p>
     */
    inline ContinueUpdateRollbackRequest& AddResourcesToSkip(const char* value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.push_back(value); return *this; }

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::Vector<Aws::String> m_resourcesToSkip;
    bool m_resourcesToSkipHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
