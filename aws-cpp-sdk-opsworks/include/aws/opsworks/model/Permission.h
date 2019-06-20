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
   * <p>Describes stack or user permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Permission">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API Permission
  {
  public:
    Permission();
    Permission(Aws::Utils::Json::JsonView jsonValue);
    Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>A stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>A stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>A stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>A stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>A stack ID.</p>
     */
    inline Permission& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>A stack ID.</p>
     */
    inline Permission& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>A stack ID.</p>
     */
    inline Permission& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Permission& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Permission& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for an AWS Identity and Access Management
     * (IAM) role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Permission& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>Whether the user can use SSH.</p>
     */
    inline bool GetAllowSsh() const{ return m_allowSsh; }

    /**
     * <p>Whether the user can use SSH.</p>
     */
    inline bool AllowSshHasBeenSet() const { return m_allowSshHasBeenSet; }

    /**
     * <p>Whether the user can use SSH.</p>
     */
    inline void SetAllowSsh(bool value) { m_allowSshHasBeenSet = true; m_allowSsh = value; }

    /**
     * <p>Whether the user can use SSH.</p>
     */
    inline Permission& WithAllowSsh(bool value) { SetAllowSsh(value); return *this;}


    /**
     * <p>Whether the user can use <b>sudo</b>.</p>
     */
    inline bool GetAllowSudo() const{ return m_allowSudo; }

    /**
     * <p>Whether the user can use <b>sudo</b>.</p>
     */
    inline bool AllowSudoHasBeenSet() const { return m_allowSudoHasBeenSet; }

    /**
     * <p>Whether the user can use <b>sudo</b>.</p>
     */
    inline void SetAllowSudo(bool value) { m_allowSudoHasBeenSet = true; m_allowSudo = value; }

    /**
     * <p>Whether the user can use <b>sudo</b>.</p>
     */
    inline Permission& WithAllowSudo(bool value) { SetAllowSudo(value); return *this;}


    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline const Aws::String& GetLevel() const{ return m_level; }

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline void SetLevel(const Aws::String& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline void SetLevel(Aws::String&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline void SetLevel(const char* value) { m_levelHasBeenSet = true; m_level.assign(value); }

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline Permission& WithLevel(const Aws::String& value) { SetLevel(value); return *this;}

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline Permission& WithLevel(Aws::String&& value) { SetLevel(std::move(value)); return *this;}

    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline Permission& WithLevel(const char* value) { SetLevel(value); return *this;}

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
