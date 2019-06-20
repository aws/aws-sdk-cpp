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
  class AWS_OPSWORKS_API SetPermissionRequest : public OpsWorksRequest
  {
  public:
    SetPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetPermission"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline SetPermissionRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline SetPermissionRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline SetPermissionRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline SetPermissionRequest& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline SetPermissionRequest& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline SetPermissionRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>The user is allowed to use SSH to communicate with the instance.</p>
     */
    inline bool GetAllowSsh() const{ return m_allowSsh; }

    /**
     * <p>The user is allowed to use SSH to communicate with the instance.</p>
     */
    inline bool AllowSshHasBeenSet() const { return m_allowSshHasBeenSet; }

    /**
     * <p>The user is allowed to use SSH to communicate with the instance.</p>
     */
    inline void SetAllowSsh(bool value) { m_allowSshHasBeenSet = true; m_allowSsh = value; }

    /**
     * <p>The user is allowed to use SSH to communicate with the instance.</p>
     */
    inline SetPermissionRequest& WithAllowSsh(bool value) { SetAllowSsh(value); return *this;}


    /**
     * <p>The user is allowed to use <b>sudo</b> to elevate privileges.</p>
     */
    inline bool GetAllowSudo() const{ return m_allowSudo; }

    /**
     * <p>The user is allowed to use <b>sudo</b> to elevate privileges.</p>
     */
    inline bool AllowSudoHasBeenSet() const { return m_allowSudoHasBeenSet; }

    /**
     * <p>The user is allowed to use <b>sudo</b> to elevate privileges.</p>
     */
    inline void SetAllowSudo(bool value) { m_allowSudoHasBeenSet = true; m_allowSudo = value; }

    /**
     * <p>The user is allowed to use <b>sudo</b> to elevate privileges.</p>
     */
    inline SetPermissionRequest& WithAllowSudo(bool value) { SetAllowSudo(value); return *this;}


    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline const Aws::String& GetLevel() const{ return m_level; }

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline void SetLevel(const Aws::String& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline void SetLevel(Aws::String&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline void SetLevel(const char* value) { m_levelHasBeenSet = true; m_level.assign(value); }

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline SetPermissionRequest& WithLevel(const Aws::String& value) { SetLevel(value); return *this;}

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline SetPermissionRequest& WithLevel(Aws::String&& value) { SetLevel(std::move(value)); return *this;}

    /**
     * <p>The user's permission level, which must be set to one of the following
     * strings. You cannot set your own permissions level.</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information about the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a>.</p>
     */
    inline SetPermissionRequest& WithLevel(const char* value) { SetLevel(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;

    bool m_allowSsh;
    bool m_allowSshHasBeenSet;

    bool m_allowSudo;
    bool m_allowSudoHasBeenSet;

    Aws::String m_level;
    bool m_levelHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
