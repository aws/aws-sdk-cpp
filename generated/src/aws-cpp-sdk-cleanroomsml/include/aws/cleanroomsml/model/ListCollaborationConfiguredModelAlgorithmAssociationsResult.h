/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationConfiguredModelAlgorithmAssociationSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListCollaborationConfiguredModelAlgorithmAssociationsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult() = default;
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured model algorithm associations that belong to this
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>& GetCollaborationConfiguredModelAlgorithmAssociations() const { return m_collaborationConfiguredModelAlgorithmAssociations; }
    template<typename CollaborationConfiguredModelAlgorithmAssociationsT = Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>>
    void SetCollaborationConfiguredModelAlgorithmAssociations(CollaborationConfiguredModelAlgorithmAssociationsT&& value) { m_collaborationConfiguredModelAlgorithmAssociationsHasBeenSet = true; m_collaborationConfiguredModelAlgorithmAssociations = std::forward<CollaborationConfiguredModelAlgorithmAssociationsT>(value); }
    template<typename CollaborationConfiguredModelAlgorithmAssociationsT = Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>>
    ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithCollaborationConfiguredModelAlgorithmAssociations(CollaborationConfiguredModelAlgorithmAssociationsT&& value) { SetCollaborationConfiguredModelAlgorithmAssociations(std::forward<CollaborationConfiguredModelAlgorithmAssociationsT>(value)); return *this;}
    template<typename CollaborationConfiguredModelAlgorithmAssociationsT = CollaborationConfiguredModelAlgorithmAssociationSummary>
    ListCollaborationConfiguredModelAlgorithmAssociationsResult& AddCollaborationConfiguredModelAlgorithmAssociations(CollaborationConfiguredModelAlgorithmAssociationsT&& value) { m_collaborationConfiguredModelAlgorithmAssociationsHasBeenSet = true; m_collaborationConfiguredModelAlgorithmAssociations.emplace_back(std::forward<CollaborationConfiguredModelAlgorithmAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary> m_collaborationConfiguredModelAlgorithmAssociations;
    bool m_collaborationConfiguredModelAlgorithmAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
