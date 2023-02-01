/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar/model/ProjectSummary.h>
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
  class ListProjectsResult
  {
  public:
    AWS_CODESTAR_API ListProjectsResult();
    AWS_CODESTAR_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of projects.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjects() const{ return m_projects; }

    /**
     * <p>A list of projects.</p>
     */
    inline void SetProjects(const Aws::Vector<ProjectSummary>& value) { m_projects = value; }

    /**
     * <p>A list of projects.</p>
     */
    inline void SetProjects(Aws::Vector<ProjectSummary>&& value) { m_projects = std::move(value); }

    /**
     * <p>A list of projects.</p>
     */
    inline ListProjectsResult& WithProjects(const Aws::Vector<ProjectSummary>& value) { SetProjects(value); return *this;}

    /**
     * <p>A list of projects.</p>
     */
    inline ListProjectsResult& WithProjects(Aws::Vector<ProjectSummary>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>A list of projects.</p>
     */
    inline ListProjectsResult& AddProjects(const ProjectSummary& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>A list of projects.</p>
     */
    inline ListProjectsResult& AddProjects(ProjectSummary&& value) { m_projects.push_back(std::move(value)); return *this; }


    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectSummary> m_projects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
