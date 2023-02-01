/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ProjectSummary.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListProjectsResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjects() const{ return m_projects; }

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline void SetProjects(const Aws::Vector<ProjectSummary>& value) { m_projects = value; }

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline void SetProjects(Aws::Vector<ProjectSummary>&& value) { m_projects = std::move(value); }

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline ListProjectsResult& WithProjects(const Aws::Vector<ProjectSummary>& value) { SetProjects(value); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline ListProjectsResult& WithProjects(Aws::Vector<ProjectSummary>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline ListProjectsResult& AddProjects(const ProjectSummary& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline ListProjectsResult& AddProjects(ProjectSummary&& value) { m_projects.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProjectSummary> m_projects;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
