/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationSummary.h>
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
  class ListCollaborationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationsResult() = default;
    AWS_CLEANROOMS_API ListCollaborationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of collaborations.</p>
     */
    inline const Aws::Vector<CollaborationSummary>& GetCollaborationList() const { return m_collaborationList; }
    template<typename CollaborationListT = Aws::Vector<CollaborationSummary>>
    void SetCollaborationList(CollaborationListT&& value) { m_collaborationListHasBeenSet = true; m_collaborationList = std::forward<CollaborationListT>(value); }
    template<typename CollaborationListT = Aws::Vector<CollaborationSummary>>
    ListCollaborationsResult& WithCollaborationList(CollaborationListT&& value) { SetCollaborationList(std::forward<CollaborationListT>(value)); return *this;}
    template<typename CollaborationListT = CollaborationSummary>
    ListCollaborationsResult& AddCollaborationList(CollaborationListT&& value) { m_collaborationListHasBeenSet = true; m_collaborationList.emplace_back(std::forward<CollaborationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationSummary> m_collaborationList;
    bool m_collaborationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
