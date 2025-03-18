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
    AWS_IOTSITEWISE_API ListProjectsResult() = default;
    AWS_IOTSITEWISE_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each project in the portal.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjectSummaries() const { return m_projectSummaries; }
    template<typename ProjectSummariesT = Aws::Vector<ProjectSummary>>
    void SetProjectSummaries(ProjectSummariesT&& value) { m_projectSummariesHasBeenSet = true; m_projectSummaries = std::forward<ProjectSummariesT>(value); }
    template<typename ProjectSummariesT = Aws::Vector<ProjectSummary>>
    ListProjectsResult& WithProjectSummaries(ProjectSummariesT&& value) { SetProjectSummaries(std::forward<ProjectSummariesT>(value)); return *this;}
    template<typename ProjectSummariesT = ProjectSummary>
    ListProjectsResult& AddProjectSummaries(ProjectSummariesT&& value) { m_projectSummariesHasBeenSet = true; m_projectSummaries.emplace_back(std::forward<ProjectSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectSummary> m_projectSummaries;
    bool m_projectSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
