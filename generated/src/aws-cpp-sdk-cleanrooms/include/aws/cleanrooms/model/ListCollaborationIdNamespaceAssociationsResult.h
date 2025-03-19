/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationIdNamespaceAssociationSummary.h>
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
  class ListCollaborationIdNamespaceAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult() = default;
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationIdNamespaceAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of the collaboration ID namespace associations that
     * you requested.</p>
     */
    inline const Aws::Vector<CollaborationIdNamespaceAssociationSummary>& GetCollaborationIdNamespaceAssociationSummaries() const { return m_collaborationIdNamespaceAssociationSummaries; }
    template<typename CollaborationIdNamespaceAssociationSummariesT = Aws::Vector<CollaborationIdNamespaceAssociationSummary>>
    void SetCollaborationIdNamespaceAssociationSummaries(CollaborationIdNamespaceAssociationSummariesT&& value) { m_collaborationIdNamespaceAssociationSummariesHasBeenSet = true; m_collaborationIdNamespaceAssociationSummaries = std::forward<CollaborationIdNamespaceAssociationSummariesT>(value); }
    template<typename CollaborationIdNamespaceAssociationSummariesT = Aws::Vector<CollaborationIdNamespaceAssociationSummary>>
    ListCollaborationIdNamespaceAssociationsResult& WithCollaborationIdNamespaceAssociationSummaries(CollaborationIdNamespaceAssociationSummariesT&& value) { SetCollaborationIdNamespaceAssociationSummaries(std::forward<CollaborationIdNamespaceAssociationSummariesT>(value)); return *this;}
    template<typename CollaborationIdNamespaceAssociationSummariesT = CollaborationIdNamespaceAssociationSummary>
    ListCollaborationIdNamespaceAssociationsResult& AddCollaborationIdNamespaceAssociationSummaries(CollaborationIdNamespaceAssociationSummariesT&& value) { m_collaborationIdNamespaceAssociationSummariesHasBeenSet = true; m_collaborationIdNamespaceAssociationSummaries.emplace_back(std::forward<CollaborationIdNamespaceAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationIdNamespaceAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationIdNamespaceAssociationSummary> m_collaborationIdNamespaceAssociationSummaries;
    bool m_collaborationIdNamespaceAssociationSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
