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
  class DisassociateTeamMemberRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API DisassociateTeamMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTeamMember"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline DisassociateTeamMemberRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline DisassociateTeamMemberRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS CodeStar project from which you want to remove a team
     * member.</p>
     */
    inline DisassociateTeamMemberRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline DisassociateTeamMemberRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline DisassociateTeamMemberRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or group whom you want to
     * remove from the project.</p>
     */
    inline DisassociateTeamMemberRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
