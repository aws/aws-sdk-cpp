﻿/*
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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateGroupRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group. Must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline CreateGroupRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline CreateGroupRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline CreateGroupRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A string containing the description of the group.</p>
     */
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The role ARN for the group.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The role ARN for the group.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role ARN for the group.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role ARN for the group.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The role ARN for the group.</p>
     */
    inline CreateGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role ARN for the group.</p>
     */
    inline CreateGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role ARN for the group.</p>
     */
    inline CreateGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>A nonnegative integer value that specifies the precedence of this group
     * relative to the other groups that a user can belong to in the user pool. Zero is
     * the highest precedence value. Groups with lower <code>Precedence</code> values
     * take precedence over groups with higher or null <code>Precedence</code> values.
     * If a user belongs to two or more groups, it is the group with the lowest
     * precedence value whose role ARN will be used in the <code>cognito:roles</code>
     * and <code>cognito:preferred_role</code> claims in the user's tokens.</p> <p>Two
     * groups can have the same <code>Precedence</code> value. If this happens, neither
     * group takes precedence over the other. If two groups with the same
     * <code>Precedence</code> have the same role ARN, that role is used in the
     * <code>cognito:preferred_role</code> claim in tokens for users in each group. If
     * the two groups have different role ARNs, the <code>cognito:preferred_role</code>
     * claim is not set in users' tokens.</p> <p>The default <code>Precedence</code>
     * value is null.</p>
     */
    inline int GetPrecedence() const{ return m_precedence; }

    /**
     * <p>A nonnegative integer value that specifies the precedence of this group
     * relative to the other groups that a user can belong to in the user pool. Zero is
     * the highest precedence value. Groups with lower <code>Precedence</code> values
     * take precedence over groups with higher or null <code>Precedence</code> values.
     * If a user belongs to two or more groups, it is the group with the lowest
     * precedence value whose role ARN will be used in the <code>cognito:roles</code>
     * and <code>cognito:preferred_role</code> claims in the user's tokens.</p> <p>Two
     * groups can have the same <code>Precedence</code> value. If this happens, neither
     * group takes precedence over the other. If two groups with the same
     * <code>Precedence</code> have the same role ARN, that role is used in the
     * <code>cognito:preferred_role</code> claim in tokens for users in each group. If
     * the two groups have different role ARNs, the <code>cognito:preferred_role</code>
     * claim is not set in users' tokens.</p> <p>The default <code>Precedence</code>
     * value is null.</p>
     */
    inline void SetPrecedence(int value) { m_precedenceHasBeenSet = true; m_precedence = value; }

    /**
     * <p>A nonnegative integer value that specifies the precedence of this group
     * relative to the other groups that a user can belong to in the user pool. Zero is
     * the highest precedence value. Groups with lower <code>Precedence</code> values
     * take precedence over groups with higher or null <code>Precedence</code> values.
     * If a user belongs to two or more groups, it is the group with the lowest
     * precedence value whose role ARN will be used in the <code>cognito:roles</code>
     * and <code>cognito:preferred_role</code> claims in the user's tokens.</p> <p>Two
     * groups can have the same <code>Precedence</code> value. If this happens, neither
     * group takes precedence over the other. If two groups with the same
     * <code>Precedence</code> have the same role ARN, that role is used in the
     * <code>cognito:preferred_role</code> claim in tokens for users in each group. If
     * the two groups have different role ARNs, the <code>cognito:preferred_role</code>
     * claim is not set in users' tokens.</p> <p>The default <code>Precedence</code>
     * value is null.</p>
     */
    inline CreateGroupRequest& WithPrecedence(int value) { SetPrecedence(value); return *this;}

  private:
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    int m_precedence;
    bool m_precedenceHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
