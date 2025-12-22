/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ChangeRequestAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class UpdateCollaborationChangeRequestRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API UpdateCollaborationChangeRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCollaborationChangeRequest"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the collaboration that contains the change request
   * to be updated.</p>
   */
  inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
  inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
  template <typename CollaborationIdentifierT = Aws::String>
  void SetCollaborationIdentifier(CollaborationIdentifierT&& value) {
    m_collaborationIdentifierHasBeenSet = true;
    m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value);
  }
  template <typename CollaborationIdentifierT = Aws::String>
  UpdateCollaborationChangeRequestRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) {
    SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the specific change request to be updated within the
   * collaboration.</p>
   */
  inline const Aws::String& GetChangeRequestIdentifier() const { return m_changeRequestIdentifier; }
  inline bool ChangeRequestIdentifierHasBeenSet() const { return m_changeRequestIdentifierHasBeenSet; }
  template <typename ChangeRequestIdentifierT = Aws::String>
  void SetChangeRequestIdentifier(ChangeRequestIdentifierT&& value) {
    m_changeRequestIdentifierHasBeenSet = true;
    m_changeRequestIdentifier = std::forward<ChangeRequestIdentifierT>(value);
  }
  template <typename ChangeRequestIdentifierT = Aws::String>
  UpdateCollaborationChangeRequestRequest& WithChangeRequestIdentifier(ChangeRequestIdentifierT&& value) {
    SetChangeRequestIdentifier(std::forward<ChangeRequestIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to perform on the change request. Valid values include APPROVE
   * (approve the change), DENY (reject the change), CANCEL (cancel the request), and
   * COMMIT (commit after the request is approved).</p> <p>For change requests
   * without automatic approval, a member in the collaboration can manually APPROVE
   * or DENY a change request. The collaboration owner can manually CANCEL or COMMIT
   * a change request.</p>
   */
  inline ChangeRequestAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ChangeRequestAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateCollaborationChangeRequestRequest& WithAction(ChangeRequestAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_collaborationIdentifier;

  Aws::String m_changeRequestIdentifier;

  ChangeRequestAction m_action{ChangeRequestAction::NOT_SET};
  bool m_collaborationIdentifierHasBeenSet = false;
  bool m_changeRequestIdentifierHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
