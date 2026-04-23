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
  class AWS_CODESTAR_API UserProfileSummary
  {
  public:
    UserProfileSummary();
    UserProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    UserProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UserProfileSummary& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UserProfileSummary& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UserProfileSummary& WithUserArn(const char* value) { SetUserArn(value); return *this;}


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
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

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
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

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
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

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
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

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
    inline UserProfileSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

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
    inline UserProfileSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

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
    inline UserProfileSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The email address associated with the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address associated with the user.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address associated with the user.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address associated with the user.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address associated with the user.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address associated with the user.</p>
     */
    inline UserProfileSummary& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address associated with the user.</p>
     */
    inline UserProfileSummary& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address associated with the user.</p>
     */
    inline UserProfileSummary& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline UserProfileSummary& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline UserProfileSummary& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. If a project
     * owner allows the user remote access to project resources, this public key will
     * be used along with the user's private key for SSH access.</p>
     */
    inline UserProfileSummary& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
