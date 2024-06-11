/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ResetUserPasswordRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API ResetUserPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetUserPassword"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier of the Managed Microsoft AD or Simple AD directory in which the
     * user resides.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline ResetUserPasswordRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ResetUserPasswordRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ResetUserPasswordRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the user whose password will be reset.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline ResetUserPasswordRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline ResetUserPasswordRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline ResetUserPasswordRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new password that will be reset.</p>
     */
    inline const Aws::String& GetNewPassword() const{ return m_newPassword; }
    inline bool NewPasswordHasBeenSet() const { return m_newPasswordHasBeenSet; }
    inline void SetNewPassword(const Aws::String& value) { m_newPasswordHasBeenSet = true; m_newPassword = value; }
    inline void SetNewPassword(Aws::String&& value) { m_newPasswordHasBeenSet = true; m_newPassword = std::move(value); }
    inline void SetNewPassword(const char* value) { m_newPasswordHasBeenSet = true; m_newPassword.assign(value); }
    inline ResetUserPasswordRequest& WithNewPassword(const Aws::String& value) { SetNewPassword(value); return *this;}
    inline ResetUserPasswordRequest& WithNewPassword(Aws::String&& value) { SetNewPassword(std::move(value)); return *this;}
    inline ResetUserPasswordRequest& WithNewPassword(const char* value) { SetNewPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_newPassword;
    bool m_newPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
