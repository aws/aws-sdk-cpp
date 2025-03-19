/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationIdNamespaceAssociation.h>
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
  class GetCollaborationIdNamespaceAssociationResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult() = default;
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID namespace association that you requested.</p>
     */
    inline const CollaborationIdNamespaceAssociation& GetCollaborationIdNamespaceAssociation() const { return m_collaborationIdNamespaceAssociation; }
    template<typename CollaborationIdNamespaceAssociationT = CollaborationIdNamespaceAssociation>
    void SetCollaborationIdNamespaceAssociation(CollaborationIdNamespaceAssociationT&& value) { m_collaborationIdNamespaceAssociationHasBeenSet = true; m_collaborationIdNamespaceAssociation = std::forward<CollaborationIdNamespaceAssociationT>(value); }
    template<typename CollaborationIdNamespaceAssociationT = CollaborationIdNamespaceAssociation>
    GetCollaborationIdNamespaceAssociationResult& WithCollaborationIdNamespaceAssociation(CollaborationIdNamespaceAssociationT&& value) { SetCollaborationIdNamespaceAssociation(std::forward<CollaborationIdNamespaceAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCollaborationIdNamespaceAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CollaborationIdNamespaceAssociation m_collaborationIdNamespaceAssociation;
    bool m_collaborationIdNamespaceAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
