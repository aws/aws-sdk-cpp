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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeStar
{
namespace Model
{
  class UpdateTeamMemberResult
  {
  public:
    AWS_CODESTAR_API UpdateTeamMemberResult();
    AWS_CODESTAR_API UpdateTeamMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API UpdateTeamMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline UpdateTeamMemberResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline UpdateTeamMemberResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose team membership attributes
     * were updated.</p>
     */
    inline UpdateTeamMemberResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The project role granted to the user.</p>
     */
    inline const Aws::String& GetProjectRole() const{ return m_projectRole; }

    /**
     * <p>The project role granted to the user.</p>
     */
    inline void SetProjectRole(const Aws::String& value) { m_projectRole = value; }

    /**
     * <p>The project role granted to the user.</p>
     */
    inline void SetProjectRole(Aws::String&& value) { m_projectRole = std::move(value); }

    /**
     * <p>The project role granted to the user.</p>
     */
    inline void SetProjectRole(const char* value) { m_projectRole.assign(value); }

    /**
     * <p>The project role granted to the user.</p>
     */
    inline UpdateTeamMemberResult& WithProjectRole(const Aws::String& value) { SetProjectRole(value); return *this;}

    /**
     * <p>The project role granted to the user.</p>
     */
    inline UpdateTeamMemberResult& WithProjectRole(Aws::String&& value) { SetProjectRole(std::move(value)); return *this;}

    /**
     * <p>The project role granted to the user.</p>
     */
    inline UpdateTeamMemberResult& WithProjectRole(const char* value) { SetProjectRole(value); return *this;}


    /**
     * <p>Whether a team member is allowed to remotely access project resources using
     * the SSH public key associated with the user's profile.</p>
     */
    inline bool GetRemoteAccessAllowed() const{ return m_remoteAccessAllowed; }

    /**
     * <p>Whether a team member is allowed to remotely access project resources using
     * the SSH public key associated with the user's profile.</p>
     */
    inline void SetRemoteAccessAllowed(bool value) { m_remoteAccessAllowed = value; }

    /**
     * <p>Whether a team member is allowed to remotely access project resources using
     * the SSH public key associated with the user's profile.</p>
     */
    inline UpdateTeamMemberResult& WithRemoteAccessAllowed(bool value) { SetRemoteAccessAllowed(value); return *this;}

  private:

    Aws::String m_userArn;

    Aws::String m_projectRole;

    bool m_remoteAccessAllowed;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
