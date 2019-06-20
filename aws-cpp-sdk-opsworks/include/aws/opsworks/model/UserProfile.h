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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a user's SSH information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UserProfile">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API UserProfile
  {
  public:
    UserProfile();
    UserProfile(Aws::Utils::Json::JsonView jsonValue);
    UserProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline UserProfile& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline UserProfile& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline UserProfile& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>The user's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user's name.</p>
     */
    inline UserProfile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline UserProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline UserProfile& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user's SSH user name.</p>
     */
    inline const Aws::String& GetSshUsername() const{ return m_sshUsername; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline bool SshUsernameHasBeenSet() const { return m_sshUsernameHasBeenSet; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(const Aws::String& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = value; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(Aws::String&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = std::move(value); }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(const char* value) { m_sshUsernameHasBeenSet = true; m_sshUsername.assign(value); }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline UserProfile& WithSshUsername(const Aws::String& value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's SSH user name.</p>
     */
    inline UserProfile& WithSshUsername(Aws::String&& value) { SetSshUsername(std::move(value)); return *this;}

    /**
     * <p>The user's SSH user name.</p>
     */
    inline UserProfile& WithSshUsername(const char* value) { SetSshUsername(value); return *this;}


    /**
     * <p>The user's SSH public key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline UserProfile& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The user's SSH public key.</p>
     */
    inline UserProfile& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The user's SSH public key.</p>
     */
    inline UserProfile& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}


    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline bool GetAllowSelfManagement() const{ return m_allowSelfManagement; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline bool AllowSelfManagementHasBeenSet() const { return m_allowSelfManagementHasBeenSet; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline void SetAllowSelfManagement(bool value) { m_allowSelfManagementHasBeenSet = true; m_allowSelfManagement = value; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline UserProfile& WithAllowSelfManagement(bool value) { SetAllowSelfManagement(value); return *this;}

  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_sshUsername;
    bool m_sshUsernameHasBeenSet;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet;

    bool m_allowSelfManagement;
    bool m_allowSelfManagementHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
