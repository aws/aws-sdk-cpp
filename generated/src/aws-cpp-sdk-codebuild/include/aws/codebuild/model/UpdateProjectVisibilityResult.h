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
    AWS_CODEBUILD_API UpdateProjectVisibilityResult() = default;
    AWS_CODEBUILD_API UpdateProjectVisibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API UpdateProjectVisibilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    UpdateProjectVisibilityResult& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline const Aws::String& GetPublicProjectAlias() const { return m_publicProjectAlias; }
    template<typename PublicProjectAliasT = Aws::String>
    void SetPublicProjectAlias(PublicProjectAliasT&& value) { m_publicProjectAliasHasBeenSet = true; m_publicProjectAlias = std::forward<PublicProjectAliasT>(value); }
    template<typename PublicProjectAliasT = Aws::String>
    UpdateProjectVisibilityResult& WithPublicProjectAlias(PublicProjectAliasT&& value) { SetPublicProjectAlias(std::forward<PublicProjectAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ProjectVisibilityType GetProjectVisibility() const { return m_projectVisibility; }
    inline void SetProjectVisibility(ProjectVisibilityType value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = value; }
    inline UpdateProjectVisibilityResult& WithProjectVisibility(ProjectVisibilityType value) { SetProjectVisibility(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProjectVisibilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_publicProjectAlias;
    bool m_publicProjectAliasHasBeenSet = false;

    ProjectVisibilityType m_projectVisibility{ProjectVisibilityType::NOT_SET};
    bool m_projectVisibilityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
