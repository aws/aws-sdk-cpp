/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class CreateUserProfileRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API CreateUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserProfile"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline CreateUserProfileRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline CreateUserProfileRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that will be displayed as the friendly name for the user in AWS
     * CodeStar. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateUserProfileRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateUserProfileRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that will be displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline CreateUserProfileRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline CreateUserProfileRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }
    inline CreateUserProfileRequest& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}
    inline CreateUserProfileRequest& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}
    ///@}
  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
