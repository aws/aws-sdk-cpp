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
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListProjects</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the projects
     * in the Region.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjects() const { return m_projects; }
    template<typename ProjectsT = Aws::Vector<ProjectSummary>>
    void SetProjects(ProjectsT&& value) { m_projectsHasBeenSet = true; m_projects = std::forward<ProjectsT>(value); }
    template<typename ProjectsT = Aws::Vector<ProjectSummary>>
    ListProjectsResult& WithProjects(ProjectsT&& value) { SetProjects(std::forward<ProjectsT>(value)); return *this;}
    template<typename ProjectsT = ProjectSummary>
    ListProjectsResult& AddProjects(ProjectsT&& value) { m_projectsHasBeenSet = true; m_projects.emplace_back(std::forward<ProjectsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProjectSummary> m_projects;
    bool m_projectsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
