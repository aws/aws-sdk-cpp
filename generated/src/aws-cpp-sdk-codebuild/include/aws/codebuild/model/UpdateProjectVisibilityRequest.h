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
    AWS_CODEBUILD_API UpdateProjectVisibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProjectVisibility"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    
    inline const ProjectVisibilityType& GetProjectVisibility() const{ return m_projectVisibility; }

    
    inline bool ProjectVisibilityHasBeenSet() const { return m_projectVisibilityHasBeenSet; }

    
    inline void SetProjectVisibility(const ProjectVisibilityType& value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = value; }

    
    inline void SetProjectVisibility(ProjectVisibilityType&& value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = std::move(value); }

    
    inline UpdateProjectVisibilityRequest& WithProjectVisibility(const ProjectVisibilityType& value) { SetProjectVisibility(value); return *this;}

    
    inline UpdateProjectVisibilityRequest& WithProjectVisibility(ProjectVisibilityType&& value) { SetProjectVisibility(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline const Aws::String& GetResourceAccessRole() const{ return m_resourceAccessRole; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline bool ResourceAccessRoleHasBeenSet() const { return m_resourceAccessRoleHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline void SetResourceAccessRole(const Aws::String& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = value; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline void SetResourceAccessRole(Aws::String&& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = std::move(value); }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline void SetResourceAccessRole(const char* value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole.assign(value); }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline UpdateProjectVisibilityRequest& WithResourceAccessRole(const Aws::String& value) { SetResourceAccessRole(value); return *this;}

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline UpdateProjectVisibilityRequest& WithResourceAccessRole(Aws::String&& value) { SetResourceAccessRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline UpdateProjectVisibilityRequest& WithResourceAccessRole(const char* value) { SetResourceAccessRole(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    ProjectVisibilityType m_projectVisibility;
    bool m_projectVisibilityHasBeenSet = false;

    Aws::String m_resourceAccessRole;
    bool m_resourceAccessRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
