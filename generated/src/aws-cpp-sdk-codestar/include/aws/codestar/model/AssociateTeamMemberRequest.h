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
  class AssociateTeamMemberRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API AssociateTeamMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTeamMember"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the project to which you will add the IAM user.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline AssociateTeamMemberRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline AssociateTeamMemberRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline AssociateTeamMemberRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * the team member association to the project. This token can be used to repeat the
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline AssociateTeamMemberRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline AssociateTeamMemberRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline AssociateTeamMemberRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM user you want to add to the AWS
     * CodeStar project.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline AssociateTeamMemberRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline AssociateTeamMemberRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline AssociateTeamMemberRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS CodeStar project role that will apply to this user. This role
     * determines what actions a user can take in an AWS CodeStar project.</p>
     */
    inline const Aws::String& GetProjectRole() const{ return m_projectRole; }
    inline bool ProjectRoleHasBeenSet() const { return m_projectRoleHasBeenSet; }
    inline void SetProjectRole(const Aws::String& value) { m_projectRoleHasBeenSet = true; m_projectRole = value; }
    inline void SetProjectRole(Aws::String&& value) { m_projectRoleHasBeenSet = true; m_projectRole = std::move(value); }
    inline void SetProjectRole(const char* value) { m_projectRoleHasBeenSet = true; m_projectRole.assign(value); }
    inline AssociateTeamMemberRequest& WithProjectRole(const Aws::String& value) { SetProjectRole(value); return *this;}
    inline AssociateTeamMemberRequest& WithProjectRole(Aws::String&& value) { SetProjectRole(std::move(value)); return *this;}
    inline AssociateTeamMemberRequest& WithProjectRole(const char* value) { SetProjectRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the team member is allowed to use an SSH public/private key pair to
     * remotely access project resources, for example Amazon EC2 instances.</p>
     */
    inline bool GetRemoteAccessAllowed() const{ return m_remoteAccessAllowed; }
    inline bool RemoteAccessAllowedHasBeenSet() const { return m_remoteAccessAllowedHasBeenSet; }
    inline void SetRemoteAccessAllowed(bool value) { m_remoteAccessAllowedHasBeenSet = true; m_remoteAccessAllowed = value; }
    inline AssociateTeamMemberRequest& WithRemoteAccessAllowed(bool value) { SetRemoteAccessAllowed(value); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

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
