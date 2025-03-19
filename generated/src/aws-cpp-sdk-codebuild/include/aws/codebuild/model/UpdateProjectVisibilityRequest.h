/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectVisibilityType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class UpdateProjectVisibilityRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateProjectVisibilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProjectVisibility"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    UpdateProjectVisibilityRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ProjectVisibilityType GetProjectVisibility() const { return m_projectVisibility; }
    inline bool ProjectVisibilityHasBeenSet() const { return m_projectVisibilityHasBeenSet; }
    inline void SetProjectVisibility(ProjectVisibilityType value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = value; }
    inline UpdateProjectVisibilityRequest& WithProjectVisibility(ProjectVisibilityType value) { SetProjectVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline const Aws::String& GetResourceAccessRole() const { return m_resourceAccessRole; }
    inline bool ResourceAccessRoleHasBeenSet() const { return m_resourceAccessRoleHasBeenSet; }
    template<typename ResourceAccessRoleT = Aws::String>
    void SetResourceAccessRole(ResourceAccessRoleT&& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = std::forward<ResourceAccessRoleT>(value); }
    template<typename ResourceAccessRoleT = Aws::String>
    UpdateProjectVisibilityRequest& WithResourceAccessRole(ResourceAccessRoleT&& value) { SetResourceAccessRole(std::forward<ResourceAccessRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    ProjectVisibilityType m_projectVisibility{ProjectVisibilityType::NOT_SET};
    bool m_projectVisibilityHasBeenSet = false;

    Aws::String m_resourceAccessRole;
    bool m_resourceAccessRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
