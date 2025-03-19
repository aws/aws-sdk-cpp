/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationConfiguredAudienceModelAssociationSummary.h>
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
  class ListCollaborationConfiguredAudienceModelAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult() = default;
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>& GetCollaborationConfiguredAudienceModelAssociationSummaries() const { return m_collaborationConfiguredAudienceModelAssociationSummaries; }
    template<typename CollaborationConfiguredAudienceModelAssociationSummariesT = Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>>
    void SetCollaborationConfiguredAudienceModelAssociationSummaries(CollaborationConfiguredAudienceModelAssociationSummariesT&& value) { m_collaborationConfiguredAudienceModelAssociationSummariesHasBeenSet = true; m_collaborationConfiguredAudienceModelAssociationSummaries = std::forward<CollaborationConfiguredAudienceModelAssociationSummariesT>(value); }
    template<typename CollaborationConfiguredAudienceModelAssociationSummariesT = Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>>
    ListCollaborationConfiguredAudienceModelAssociationsResult& WithCollaborationConfiguredAudienceModelAssociationSummaries(CollaborationConfiguredAudienceModelAssociationSummariesT&& value) { SetCollaborationConfiguredAudienceModelAssociationSummaries(std::forward<CollaborationConfiguredAudienceModelAssociationSummariesT>(value)); return *this;}
    template<typename CollaborationConfiguredAudienceModelAssociationSummariesT = CollaborationConfiguredAudienceModelAssociationSummary>
    ListCollaborationConfiguredAudienceModelAssociationsResult& AddCollaborationConfiguredAudienceModelAssociationSummaries(CollaborationConfiguredAudienceModelAssociationSummariesT&& value) { m_collaborationConfiguredAudienceModelAssociationSummariesHasBeenSet = true; m_collaborationConfiguredAudienceModelAssociationSummaries.emplace_back(std::forward<CollaborationConfiguredAudienceModelAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationConfiguredAudienceModelAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationConfiguredAudienceModelAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary> m_collaborationConfiguredAudienceModelAssociationSummaries;
    bool m_collaborationConfiguredAudienceModelAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
