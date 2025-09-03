/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationChangeRequestSummary.h>
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
  class ListCollaborationChangeRequestsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationChangeRequestsResult() = default;
    AWS_CLEANROOMS_API ListCollaborationChangeRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationChangeRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of collaboration change request summaries.</p>
     */
    inline const Aws::Vector<CollaborationChangeRequestSummary>& GetCollaborationChangeRequestSummaries() const { return m_collaborationChangeRequestSummaries; }
    template<typename CollaborationChangeRequestSummariesT = Aws::Vector<CollaborationChangeRequestSummary>>
    void SetCollaborationChangeRequestSummaries(CollaborationChangeRequestSummariesT&& value) { m_collaborationChangeRequestSummariesHasBeenSet = true; m_collaborationChangeRequestSummaries = std::forward<CollaborationChangeRequestSummariesT>(value); }
    template<typename CollaborationChangeRequestSummariesT = Aws::Vector<CollaborationChangeRequestSummary>>
    ListCollaborationChangeRequestsResult& WithCollaborationChangeRequestSummaries(CollaborationChangeRequestSummariesT&& value) { SetCollaborationChangeRequestSummaries(std::forward<CollaborationChangeRequestSummariesT>(value)); return *this;}
    template<typename CollaborationChangeRequestSummariesT = CollaborationChangeRequestSummary>
    ListCollaborationChangeRequestsResult& AddCollaborationChangeRequestSummaries(CollaborationChangeRequestSummariesT&& value) { m_collaborationChangeRequestSummariesHasBeenSet = true; m_collaborationChangeRequestSummaries.emplace_back(std::forward<CollaborationChangeRequestSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationChangeRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationChangeRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollaborationChangeRequestSummary> m_collaborationChangeRequestSummaries;
    bool m_collaborationChangeRequestSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
