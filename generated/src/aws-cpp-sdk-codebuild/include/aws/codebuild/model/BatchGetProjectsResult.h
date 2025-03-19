/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Project.h>
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
  class BatchGetProjectsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetProjectsResult() = default;
    AWS_CODEBUILD_API BatchGetProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested build projects.</p>
     */
    inline const Aws::Vector<Project>& GetProjects() const { return m_projects; }
    template<typename ProjectsT = Aws::Vector<Project>>
    void SetProjects(ProjectsT&& value) { m_projectsHasBeenSet = true; m_projects = std::forward<ProjectsT>(value); }
    template<typename ProjectsT = Aws::Vector<Project>>
    BatchGetProjectsResult& WithProjects(ProjectsT&& value) { SetProjects(std::forward<ProjectsT>(value)); return *this;}
    template<typename ProjectsT = Project>
    BatchGetProjectsResult& AddProjects(ProjectsT&& value) { m_projectsHasBeenSet = true; m_projects.emplace_back(std::forward<ProjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectsNotFound() const { return m_projectsNotFound; }
    template<typename ProjectsNotFoundT = Aws::Vector<Aws::String>>
    void SetProjectsNotFound(ProjectsNotFoundT&& value) { m_projectsNotFoundHasBeenSet = true; m_projectsNotFound = std::forward<ProjectsNotFoundT>(value); }
    template<typename ProjectsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetProjectsResult& WithProjectsNotFound(ProjectsNotFoundT&& value) { SetProjectsNotFound(std::forward<ProjectsNotFoundT>(value)); return *this;}
    template<typename ProjectsNotFoundT = Aws::String>
    BatchGetProjectsResult& AddProjectsNotFound(ProjectsNotFoundT&& value) { m_projectsNotFoundHasBeenSet = true; m_projectsNotFound.emplace_back(std::forward<ProjectsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Project> m_projects;
    bool m_projectsHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectsNotFound;
    bool m_projectsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
