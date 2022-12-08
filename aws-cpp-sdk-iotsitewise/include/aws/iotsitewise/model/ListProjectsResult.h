/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ProjectSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListProjectsResult
  {
  public:
    AWS_IOTSITEWISE_API ListProjectsResult();
    AWS_IOTSITEWISE_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjectSummaries() const{ return m_projectSummaries; }

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline void SetProjectSummaries(const Aws::Vector<ProjectSummary>& value) { m_projectSummaries = value; }

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline void SetProjectSummaries(Aws::Vector<ProjectSummary>&& value) { m_projectSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline ListProjectsResult& WithProjectSummaries(const Aws::Vector<ProjectSummary>& value) { SetProjectSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline ListProjectsResult& WithProjectSummaries(Aws::Vector<ProjectSummary>&& value) { SetProjectSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline ListProjectsResult& AddProjectSummaries(const ProjectSummary& value) { m_projectSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline ListProjectsResult& AddProjectSummaries(ProjectSummary&& value) { m_projectSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectSummary> m_projectSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
