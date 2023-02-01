/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AdminRemoveUserFromGroupRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminRemoveUserFromGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminRemoveUserFromGroup"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The username for the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username for the user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username for the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username for the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username for the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username for the user.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username for the user.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username for the user.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The group name.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The group name.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The group name.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The group name.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The group name.</p>
     */
    inline AdminRemoveUserFromGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
