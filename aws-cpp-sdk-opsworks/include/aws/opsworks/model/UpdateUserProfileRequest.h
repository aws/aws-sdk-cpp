﻿/*
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API UpdateUserProfileRequest : public OpsWorksRequest
  {
  public:
    UpdateUserProfileRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline UpdateUserProfileRequest& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline UpdateUserProfileRequest& WithIamUserArn(Aws::String&& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline UpdateUserProfileRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline const Aws::String& GetSshUsername() const{ return m_sshUsername; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(const Aws::String& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = value; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(Aws::String&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = value; }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline void SetSshUsername(const char* value) { m_sshUsernameHasBeenSet = true; m_sshUsername.assign(value); }

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline UpdateUserProfileRequest& WithSshUsername(const Aws::String& value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline UpdateUserProfileRequest& WithSshUsername(Aws::String&& value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, AWS
     * OpsWorks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, AWS OpsWorks
     * generates one from the IAM user name. </p>
     */
    inline UpdateUserProfileRequest& WithSshUsername(const char* value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline UpdateUserProfileRequest& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline UpdateUserProfileRequest& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The user's new SSH public key.</p>
     */
    inline UpdateUserProfileRequest& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline bool GetAllowSelfManagement() const{ return m_allowSelfManagement; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline void SetAllowSelfManagement(bool value) { m_allowSelfManagementHasBeenSet = true; m_allowSelfManagement = value; }

    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline UpdateUserProfileRequest& WithAllowSelfManagement(bool value) { SetAllowSelfManagement(value); return *this;}

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
