/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationConfiguredAudienceModelAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCollaborationConfiguredAudienceModelAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult() = default;
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata of the configured audience model association.</p>
     */
    inline const CollaborationConfiguredAudienceModelAssociation& GetCollaborationConfiguredAudienceModelAssociation() const { return m_collaborationConfiguredAudienceModelAssociation; }
    template<typename CollaborationConfiguredAudienceModelAssociationT = CollaborationConfiguredAudienceModelAssociation>
    void SetCollaborationConfiguredAudienceModelAssociation(CollaborationConfiguredAudienceModelAssociationT&& value) { m_collaborationConfiguredAudienceModelAssociationHasBeenSet = true; m_collaborationConfiguredAudienceModelAssociation = std::forward<CollaborationConfiguredAudienceModelAssociationT>(value); }
    template<typename CollaborationConfiguredAudienceModelAssociationT = CollaborationConfiguredAudienceModelAssociation>
    GetCollaborationConfiguredAudienceModelAssociationResult& WithCollaborationConfiguredAudienceModelAssociation(CollaborationConfiguredAudienceModelAssociationT&& value) { SetCollaborationConfiguredAudienceModelAssociation(std::forward<CollaborationConfiguredAudienceModelAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCollaborationConfiguredAudienceModelAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CollaborationConfiguredAudienceModelAssociation m_collaborationConfiguredAudienceModelAssociation;
    bool m_collaborationConfiguredAudienceModelAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
