/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplateSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListCollaborationAnalysisTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult() = default;
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationAnalysisTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline const Aws::Vector<CollaborationAnalysisTemplateSummary>& GetCollaborationAnalysisTemplateSummaries() const { return m_collaborationAnalysisTemplateSummaries; }
    template<typename CollaborationAnalysisTemplateSummariesT = Aws::Vector<CollaborationAnalysisTemplateSummary>>
    void SetCollaborationAnalysisTemplateSummaries(CollaborationAnalysisTemplateSummariesT&& value) { m_collaborationAnalysisTemplateSummariesHasBeenSet = true; m_collaborationAnalysisTemplateSummaries = std::forward<CollaborationAnalysisTemplateSummariesT>(value); }
    template<typename CollaborationAnalysisTemplateSummariesT = Aws::Vector<CollaborationAnalysisTemplateSummary>>
    ListCollaborationAnalysisTemplatesResult& WithCollaborationAnalysisTemplateSummaries(CollaborationAnalysisTemplateSummariesT&& value) { SetCollaborationAnalysisTemplateSummaries(std::forward<CollaborationAnalysisTemplateSummariesT>(value)); return *this;}
    template<typename CollaborationAnalysisTemplateSummariesT = CollaborationAnalysisTemplateSummary>
    ListCollaborationAnalysisTemplatesResult& AddCollaborationAnalysisTemplateSummaries(CollaborationAnalysisTemplateSummariesT&& value) { m_collaborationAnalysisTemplateSummariesHasBeenSet = true; m_collaborationAnalysisTemplateSummaries.emplace_back(std::forward<CollaborationAnalysisTemplateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationAnalysisTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationAnalysisTemplateSummary> m_collaborationAnalysisTemplateSummaries;
    bool m_collaborationAnalysisTemplateSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
