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
  class GetCollaborationChangeRequestRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationChangeRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationChangeRequest"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the collaboration that the change request is made
     * against.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetCollaborationChangeRequestRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the change request to retrieve.</p>
     */
    inline const Aws::String& GetChangeRequestIdentifier() const { return m_changeRequestIdentifier; }
    inline bool ChangeRequestIdentifierHasBeenSet() const { return m_changeRequestIdentifierHasBeenSet; }
    template<typename ChangeRequestIdentifierT = Aws::String>
    void SetChangeRequestIdentifier(ChangeRequestIdentifierT&& value) { m_changeRequestIdentifierHasBeenSet = true; m_changeRequestIdentifier = std::forward<ChangeRequestIdentifierT>(value); }
    template<typename ChangeRequestIdentifierT = Aws::String>
    GetCollaborationChangeRequestRequest& WithChangeRequestIdentifier(ChangeRequestIdentifierT&& value) { SetChangeRequestIdentifier(std::forward<ChangeRequestIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_changeRequestIdentifier;
    bool m_changeRequestIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
