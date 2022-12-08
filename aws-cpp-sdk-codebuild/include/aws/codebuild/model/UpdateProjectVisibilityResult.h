/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectVisibilityType.h>
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
namespace CodeBuild
{
namespace Model
{
  class UpdateProjectVisibilityResult
  {
  public:
    AWS_CODEBUILD_API UpdateProjectVisibilityResult();
    AWS_CODEBUILD_API UpdateProjectVisibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API UpdateProjectVisibilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline UpdateProjectVisibilityResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline const Aws::String& GetPublicProjectAlias() const{ return m_publicProjectAlias; }

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline void SetPublicProjectAlias(const Aws::String& value) { m_publicProjectAlias = value; }

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline void SetPublicProjectAlias(Aws::String&& value) { m_publicProjectAlias = std::move(value); }

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline void SetPublicProjectAlias(const char* value) { m_publicProjectAlias.assign(value); }

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline UpdateProjectVisibilityResult& WithPublicProjectAlias(const Aws::String& value) { SetPublicProjectAlias(value); return *this;}

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline UpdateProjectVisibilityResult& WithPublicProjectAlias(Aws::String&& value) { SetPublicProjectAlias(std::move(value)); return *this;}

    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline UpdateProjectVisibilityResult& WithPublicProjectAlias(const char* value) { SetPublicProjectAlias(value); return *this;}


    
    inline const ProjectVisibilityType& GetProjectVisibility() const{ return m_projectVisibility; }

    
    inline void SetProjectVisibility(const ProjectVisibilityType& value) { m_projectVisibility = value; }

    
    inline void SetProjectVisibility(ProjectVisibilityType&& value) { m_projectVisibility = std::move(value); }

    
    inline UpdateProjectVisibilityResult& WithProjectVisibility(const ProjectVisibilityType& value) { SetProjectVisibility(value); return *this;}

    
    inline UpdateProjectVisibilityResult& WithProjectVisibility(ProjectVisibilityType&& value) { SetProjectVisibility(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;

    Aws::String m_publicProjectAlias;

    ProjectVisibilityType m_projectVisibility;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
