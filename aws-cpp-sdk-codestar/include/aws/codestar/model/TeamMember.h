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
   * <p>Information about a team member in a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/TeamMember">AWS
   * API Reference</a></p>
   */
  class TeamMember
  {
  public:
    AWS_CODESTAR_API TeamMember();
    AWS_CODESTAR_API TeamMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API TeamMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TeamMember& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline TeamMember& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline TeamMember& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline const Aws::String& GetProjectRole() const{ return m_projectRole; }

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline bool ProjectRoleHasBeenSet() const { return m_projectRoleHasBeenSet; }

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline void SetProjectRole(const Aws::String& value) { m_projectRoleHasBeenSet = true; m_projectRole = value; }

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline void SetProjectRole(Aws::String&& value) { m_projectRoleHasBeenSet = true; m_projectRole = std::move(value); }

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline void SetProjectRole(const char* value) { m_projectRoleHasBeenSet = true; m_projectRole.assign(value); }

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline TeamMember& WithProjectRole(const Aws::String& value) { SetProjectRole(value); return *this;}

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline TeamMember& WithProjectRole(Aws::String&& value) { SetProjectRole(std::move(value)); return *this;}

    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>. </p>
     */
    inline TeamMember& WithProjectRole(const char* value) { SetProjectRole(value); return *this;}


    /**
     * <p>Whether the user is allowed to remotely access project resources using an SSH
     * public/private key pair.</p>
     */
    inline bool GetRemoteAccessAllowed() const{ return m_remoteAccessAllowed; }

    /**
     * <p>Whether the user is allowed to remotely access project resources using an SSH
     * public/private key pair.</p>
     */
    inline bool RemoteAccessAllowedHasBeenSet() const { return m_remoteAccessAllowedHasBeenSet; }

    /**
     * <p>Whether the user is allowed to remotely access project resources using an SSH
     * public/private key pair.</p>
     */
    inline void SetRemoteAccessAllowed(bool value) { m_remoteAccessAllowedHasBeenSet = true; m_remoteAccessAllowed = value; }

    /**
     * <p>Whether the user is allowed to remotely access project resources using an SSH
     * public/private key pair.</p>
     */
    inline TeamMember& WithRemoteAccessAllowed(bool value) { SetRemoteAccessAllowed(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_projectRole;
    bool m_projectRoleHasBeenSet = false;

    bool m_remoteAccessAllowed;
    bool m_remoteAccessAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
