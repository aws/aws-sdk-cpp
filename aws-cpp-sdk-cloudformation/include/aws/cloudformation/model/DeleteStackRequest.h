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
   * <p>The input for <a>DeleteStack</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API DeleteStackRequest : public CloudFormationRequest
  {
  public:
    DeleteStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStack"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

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
    inline DeleteStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

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
    inline bool RetainResourcesHasBeenSet() const { return m_retainResourcesHasBeenSet; }

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
    inline void SetRetainResources(Aws::Vector<Aws::String>&& value) { m_retainResourcesHasBeenSet = true; m_retainResources = std::move(value); }

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
    inline DeleteStackRequest& WithRetainResources(Aws::Vector<Aws::String>&& value) { SetRetainResources(std::move(value)); return *this;}

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
    inline DeleteStackRequest& AddRetainResources(Aws::String&& value) { m_retainResourcesHasBeenSet = true; m_retainResources.push_back(std::move(value)); return *this; }

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
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

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
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

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
    inline DeleteStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to delete the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf.</p> <p>If you don't
     * specify a value, AWS CloudFormation uses the role that was previously associated
     * with the stack. If no role is available, AWS CloudFormation uses a temporary
     * session that is generated from your user credentials.</p>
     */
    inline DeleteStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline DeleteStackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline DeleteStackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>DeleteStack</code> request. Specify this
     * token if you plan to retry requests so that AWS CloudFormation knows that you're
     * not attempting to delete a stack with the same name. You might retry
     * <code>DeleteStack</code> requests to ensure that AWS CloudFormation successfully
     * received them.</p> <p>All events triggered by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format: <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.
     * </p>
     */
    inline DeleteStackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::Vector<Aws::String> m_retainResources;
    bool m_retainResourcesHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
