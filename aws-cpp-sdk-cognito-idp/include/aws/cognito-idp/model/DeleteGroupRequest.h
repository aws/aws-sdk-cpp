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
  class AWS_COGNITOIDENTITYPROVIDER_API DeleteGroupRequest : public CognitoIdentityProviderRequest
  {
  public:
    DeleteGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

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
    inline DeleteGroupRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline DeleteGroupRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline DeleteGroupRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

  private:
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
