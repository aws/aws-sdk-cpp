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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API ResetUserPasswordRequest : public DirectoryServiceRequest
  {
  public:
    ResetUserPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetUserPassword"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline ResetUserPasswordRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline ResetUserPasswordRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD or Simple AD directory in which
     * the user resides.</p>
     */
    inline ResetUserPasswordRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The new password that will be reset.</p>
     */
    inline const Aws::String& GetNewPassword() const{ return m_newPassword; }

    /**
     * <p>The new password that will be reset.</p>
     */
    inline bool NewPasswordHasBeenSet() const { return m_newPasswordHasBeenSet; }

    /**
     * <p>The new password that will be reset.</p>
     */
    inline void SetNewPassword(const Aws::String& value) { m_newPasswordHasBeenSet = true; m_newPassword = value; }

    /**
     * <p>The new password that will be reset.</p>
     */
    inline void SetNewPassword(Aws::String&& value) { m_newPasswordHasBeenSet = true; m_newPassword = std::move(value); }

    /**
     * <p>The new password that will be reset.</p>
     */
    inline void SetNewPassword(const char* value) { m_newPasswordHasBeenSet = true; m_newPassword.assign(value); }

    /**
     * <p>The new password that will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithNewPassword(const Aws::String& value) { SetNewPassword(value); return *this;}

    /**
     * <p>The new password that will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithNewPassword(Aws::String&& value) { SetNewPassword(std::move(value)); return *this;}

    /**
     * <p>The new password that will be reset.</p>
     */
    inline ResetUserPasswordRequest& WithNewPassword(const char* value) { SetNewPassword(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_newPassword;
    bool m_newPasswordHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
