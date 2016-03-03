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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateLoginProfileRequest : public IAMRequest
  {
  public:
    UpdateLoginProfileRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose password you want to update.</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The new password for the specified user.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The new password for the specified user.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The new password for the specified user.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The new password for the specified user.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The new password for the specified user.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The new password for the specified user.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The new password for the specified user.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>Require the specified user to set a new password on next sign-in.</p>
     */
    inline bool GetPasswordResetRequired() const{ return m_passwordResetRequired; }

    /**
     * <p>Require the specified user to set a new password on next sign-in.</p>
     */
    inline void SetPasswordResetRequired(bool value) { m_passwordResetRequiredHasBeenSet = true; m_passwordResetRequired = value; }

    /**
     * <p>Require the specified user to set a new password on next sign-in.</p>
     */
    inline UpdateLoginProfileRequest& WithPasswordResetRequired(bool value) { SetPasswordResetRequired(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    bool m_passwordResetRequired;
    bool m_passwordResetRequiredHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
