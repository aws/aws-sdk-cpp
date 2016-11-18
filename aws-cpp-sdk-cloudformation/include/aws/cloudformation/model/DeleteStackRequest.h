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
   * <p>The input for <a>DeleteStack</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DeleteStackRequest : public CloudFormationRequest
  {
  public:
    DeleteStackRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline DeleteStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline DeleteStackRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline DeleteStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRetainResources() const{ return m_retainResources; }

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline void SetRetainResources(const Aws::Vector<Aws::String>& value) { m_retainResourcesHasBeenSet = true; m_retainResources = value; }

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline void SetRetainResources(Aws::Vector<Aws::String>&& value) { m_retainResourcesHasBeenSet = true; m_retainResources = value; }

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline DeleteStackRequest& WithRetainResources(const Aws::Vector<Aws::String>& value) { SetRetainResources(value); return *this;}

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline DeleteStackRequest& WithRetainResources(Aws::Vector<Aws::String>&& value) { SetRetainResources(value); return *this;}

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline DeleteStackRequest& AddRetainResources(const Aws::String& value) { m_retainResourcesHasBeenSet = true; m_retainResources.push_back(value); return *this; }

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline DeleteStackRequest& AddRetainResources(Aws::String&& value) { m_retainResourcesHasBeenSet = true; m_retainResources.push_back(value); return *this; }

    /**
     * <p>For stacks in the <code>DELETE_FAILED</code> state, a list of resource
     * logical IDs that are associated with the resources you want to retain. During
     * deletion, AWS CloudFormation deletes the stack but does not delete the retained
     * resources.</p> <p>Retaining resources is useful when you cannot delete a
     * resource, such as a non-empty S3 bucket, but you want to delete the stack.</p>
     */
    inline DeleteStackRequest& AddRetainResources(const char* value) { m_retainResourcesHasBeenSet = true; m_retainResources.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline DeleteStackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline DeleteStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline DeleteStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::Vector<Aws::String> m_retainResources;
    bool m_retainResourcesHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
