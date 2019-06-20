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
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API CreateUserProfileRequest : public OpsWorksRequest
  {
  public:
    CreateUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline CreateUserProfileRequest& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline CreateUserProfileRequest& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN; this can also be a federated user's ARN.</p>
     */
    inline CreateUserProfileRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline const Aws::String& GetSshUsername() const{ return m_sshUsername; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline bool SshUsernameHasBeenSet() const { return m_sshUsernameHasBeenSet; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(const Aws::String& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = value; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(Aws::String&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = std::move(value); }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(const char* value) { m_sshUsernameHasBeenSet = true; m_sshUsername.assign(value); }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline CreateUserProfileRequest& WithSshUsername(const Aws::String& value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline CreateUserProfileRequest& WithSshUsername(Aws::String&& value) { SetSshUsername(std::move(value)); return *this;}

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks Stacks removes them. For example, <code>my.name</code> will be changed
     * to <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * Stacks generates one from the IAM user name. </p>
     */
    inline CreateUserProfileRequest& WithSshUsername(const char* value) { SetSshUsername(value); return *this;}


    /**
     * <p>The user's public SSH key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The user's public SSH key.</p>
     */
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }

    /**
     * <p>The user's public SSH key.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The user's public SSH key.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }

    /**
     * <p>The user's public SSH key.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The user's public SSH key.</p>
     */
    inline CreateUserProfileRequest& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The user's public SSH key.</p>
     */
    inline CreateUserProfileRequest& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The user's public SSH key.</p>
     */
    inline CreateUserProfileRequest& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}


    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Setting
     * an IAM User's Public SSH Key</a>.</p>
     */
    inline bool GetAllowSelfManagement() const{ return m_allowSelfManagement; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Setting
     * an IAM User's Public SSH Key</a>.</p>
     */
    inline bool AllowSelfManagementHasBeenSet() const { return m_allowSelfManagementHasBeenSet; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Setting
     * an IAM User's Public SSH Key</a>.</p>
     */
    inline void SetAllowSelfManagement(bool value) { m_allowSelfManagementHasBeenSet = true; m_allowSelfManagement = value; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Setting
     * an IAM User's Public SSH Key</a>.</p>
     */
    inline CreateUserProfileRequest& WithAllowSelfManagement(bool value) { SetAllowSelfManagement(value); return *this;}

  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;

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
