/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetCollaborationIdNamespaceAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationIdNamespaceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationIdNamespaceAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains the ID namespace
     * association that you want to retrieve.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetCollaborationIdNamespaceAssociationRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the ID namespace association that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetIdNamespaceAssociationIdentifier() const { return m_idNamespaceAssociationIdentifier; }
    inline bool IdNamespaceAssociationIdentifierHasBeenSet() const { return m_idNamespaceAssociationIdentifierHasBeenSet; }
    template<typename IdNamespaceAssociationIdentifierT = Aws::String>
    void SetIdNamespaceAssociationIdentifier(IdNamespaceAssociationIdentifierT&& value) { m_idNamespaceAssociationIdentifierHasBeenSet = true; m_idNamespaceAssociationIdentifier = std::forward<IdNamespaceAssociationIdentifierT>(value); }
    template<typename IdNamespaceAssociationIdentifierT = Aws::String>
    GetCollaborationIdNamespaceAssociationRequest& WithIdNamespaceAssociationIdentifier(IdNamespaceAssociationIdentifierT&& value) { SetIdNamespaceAssociationIdentifier(std::forward<IdNamespaceAssociationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_idNamespaceAssociationIdentifier;
    bool m_idNamespaceAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
