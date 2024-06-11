/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeStar
{
namespace Model
{

  /**
   * <p>Information about a user's profile in AWS CodeStar.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UserProfileSummary">AWS
   * API Reference</a></p>
   */
  class UserProfileSummary
  {
  public:
    AWS_CODESTAR_API UserProfileSummary();
    AWS_CODESTAR_API UserProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API UserProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline UserProfileSummary& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline UserProfileSummary& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline UserProfileSummary& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a user in AWS CodeStar. For example, this could be set to
     * both first and last name ("Mary Major") or a single name ("Mary"). The display
     * name is also used to generate the initial icon associated with the user in AWS
     * CodeStar projects. If spaces are included in the display name, the first
     * character that appears after the space will be used as the second character in
     * the user initial icon. The initial icon displays a maximum of two characters, so
     * a display name with more than one space (for example "Mary Jane Major") would
     * generate an initial icon using the first character and the first character after
     * the space ("MJ", not "MM").</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UserProfileSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UserProfileSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UserProfileSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline UserProfileSummary& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline UserProfileSummary& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline UserProfileSummary& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
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
    inline UserProfileSummary& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}
    inline UserProfileSummary& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}
    inline UserProfileSummary& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}
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
