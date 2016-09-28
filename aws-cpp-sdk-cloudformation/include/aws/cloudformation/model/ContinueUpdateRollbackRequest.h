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
     * back.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
     */
    inline ContinueUpdateRollbackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
     */
    inline ContinueUpdateRollbackRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack that you want to continue rolling
     * back.</p>
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

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
