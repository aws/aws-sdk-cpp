﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ContinueUpdateRollbackRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ContinueUpdateRollbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ContinueUpdateRollback"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>  <p>Don't specify the name of a nested stack (a stack that was
     * created by using the <code>AWS::CloudFormation::Stack</code> resource). Instead,
     * use this operation on the parent stack (the stack that contains the
     * <code>AWS::CloudFormation::Stack</code> resource).</p> 
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    ContinueUpdateRollbackRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that CloudFormation assumes to
     * roll back the stack. CloudFormation uses the role's credentials to make calls on
     * your behalf. CloudFormation always uses this role for all future operations on
     * the stack. Provided that users have permission to operate on the stack,
     * CloudFormation uses this role even if the users don't have permission to pass
     * it. Ensure that the role grants least permission.</p> <p>If you don't specify a
     * value, CloudFormation uses the role that was previously associated with the
     * stack. If no role is available, CloudFormation uses a temporary session that's
     * generated from your user credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    ContinueUpdateRollbackRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the logical IDs of the resources that CloudFormation skips during
     * the continue update rollback operation. You can specify only resources that are
     * in the <code>UPDATE_FAILED</code> state because a rollback failed. You can't
     * specify resources that are in the <code>UPDATE_FAILED</code> state for other
     * reasons, for example, because an update was canceled. To check why a resource
     * update failed, use the <a>DescribeStackResources</a> action, and view the
     * resource status reason.</p>  <p>Specify this property to skip rolling
     * back resources that CloudFormation can't successfully roll back. We recommend
     * that you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
     * troubleshoot</a> resources before skipping them. CloudFormation sets the status
     * of the specified resources to <code>UPDATE_COMPLETE</code> and continues to roll
     * back the stack. After the rollback is complete, the state of the skipped
     * resources will be inconsistent with the state of the resources in the stack
     * template. Before performing another stack update, you must update the stack or
     * resources to be consistent with each other. If you don't, subsequent stack
     * updates might fail, and the stack will become unrecoverable.</p> 
     * <p>Specify the minimum number of resources required to successfully roll back
     * your stack. For example, a failed resource update might cause dependent
     * resources to fail. In this case, it might not be necessary to skip the dependent
     * resources.</p> <p>To skip resources that are part of nested stacks, use the
     * following format: <code>NestedStackName.ResourceLogicalID</code>. If you want to
     * specify the logical ID of a stack resource (<code>Type:
     * AWS::CloudFormation::Stack</code>) in the <code>ResourcesToSkip</code> list,
     * then its corresponding embedded stack must be in one of the following states:
     * <code>DELETE_IN_PROGRESS</code>, <code>DELETE_COMPLETE</code>, or
     * <code>DELETE_FAILED</code>.</p>  <p>Don't confuse a child stack's name
     * with its corresponding logical ID defined in the parent stack. For an example of
     * a continue update rollback operation with nested stacks, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html#nested-stacks">Continue
     * rolling back from failed nested stack updates</a>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourcesToSkip() const { return m_resourcesToSkip; }
    inline bool ResourcesToSkipHasBeenSet() const { return m_resourcesToSkipHasBeenSet; }
    template<typename ResourcesToSkipT = Aws::Vector<Aws::String>>
    void SetResourcesToSkip(ResourcesToSkipT&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip = std::forward<ResourcesToSkipT>(value); }
    template<typename ResourcesToSkipT = Aws::Vector<Aws::String>>
    ContinueUpdateRollbackRequest& WithResourcesToSkip(ResourcesToSkipT&& value) { SetResourcesToSkip(std::forward<ResourcesToSkipT>(value)); return *this;}
    template<typename ResourcesToSkipT = Aws::String>
    ContinueUpdateRollbackRequest& AddResourcesToSkip(ResourcesToSkipT&& value) { m_resourcesToSkipHasBeenSet = true; m_resourcesToSkip.emplace_back(std::forward<ResourcesToSkipT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>ContinueUpdateRollback</code> request.
     * Specify this token if you plan to retry requests so that CloudFormation knows
     * that you're not attempting to continue the rollback to a stack with the same
     * name. You might retry <code>ContinueUpdateRollback</code> requests to ensure
     * that CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    ContinueUpdateRollbackRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourcesToSkip;
    bool m_resourcesToSkipHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
