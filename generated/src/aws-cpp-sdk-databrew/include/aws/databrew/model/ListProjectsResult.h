/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Project.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListProjectsResult
  {
  public:
    AWS_GLUEDATABREW_API ListProjectsResult();
    AWS_GLUEDATABREW_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of projects that are defined .</p>
     */
    inline const Aws::Vector<Project>& GetProjects() const{ return m_projects; }

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline void SetProjects(const Aws::Vector<Project>& value) { m_projects = value; }

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline void SetProjects(Aws::Vector<Project>&& value) { m_projects = std::move(value); }

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline ListProjectsResult& WithProjects(const Aws::Vector<Project>& value) { SetProjects(value); return *this;}

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline ListProjectsResult& WithProjects(Aws::Vector<Project>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline ListProjectsResult& AddProjects(const Project& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>A list of projects that are defined .</p>
     */
    inline ListProjectsResult& AddProjects(Project&& value) { m_projects.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Project> m_projects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
