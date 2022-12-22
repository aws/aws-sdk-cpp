/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Project.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetProjectsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetProjectsResult();
    AWS_CODEBUILD_API BatchGetProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the requested build projects.</p>
     */
    inline const Aws::Vector<Project>& GetProjects() const{ return m_projects; }

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline void SetProjects(const Aws::Vector<Project>& value) { m_projects = value; }

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline void SetProjects(Aws::Vector<Project>&& value) { m_projects = std::move(value); }

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline BatchGetProjectsResult& WithProjects(const Aws::Vector<Project>& value) { SetProjects(value); return *this;}

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline BatchGetProjectsResult& WithProjects(Aws::Vector<Project>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline BatchGetProjectsResult& AddProjects(const Project& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>Information about the requested build projects.</p>
     */
    inline BatchGetProjectsResult& AddProjects(Project&& value) { m_projects.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectsNotFound() const{ return m_projectsNotFound; }

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline void SetProjectsNotFound(const Aws::Vector<Aws::String>& value) { m_projectsNotFound = value; }

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline void SetProjectsNotFound(Aws::Vector<Aws::String>&& value) { m_projectsNotFound = std::move(value); }

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline BatchGetProjectsResult& WithProjectsNotFound(const Aws::Vector<Aws::String>& value) { SetProjectsNotFound(value); return *this;}

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline BatchGetProjectsResult& WithProjectsNotFound(Aws::Vector<Aws::String>&& value) { SetProjectsNotFound(std::move(value)); return *this;}

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline BatchGetProjectsResult& AddProjectsNotFound(const Aws::String& value) { m_projectsNotFound.push_back(value); return *this; }

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline BatchGetProjectsResult& AddProjectsNotFound(Aws::String&& value) { m_projectsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of build projects for which information could not be found.</p>
     */
    inline BatchGetProjectsResult& AddProjectsNotFound(const char* value) { m_projectsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Project> m_projects;

    Aws::Vector<Aws::String> m_projectsNotFound;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
