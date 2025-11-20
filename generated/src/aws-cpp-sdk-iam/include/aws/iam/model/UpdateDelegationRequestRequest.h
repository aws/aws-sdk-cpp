/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class UpdateDelegationRequestRequest : public IAMRequest {
 public:
  AWS_IAM_API UpdateDelegationRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDelegationRequest"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The unique identifier of the delegation request to update.</p>
   */
  inline const Aws::String& GetDelegationRequestId() const { return m_delegationRequestId; }
  inline bool DelegationRequestIdHasBeenSet() const { return m_delegationRequestIdHasBeenSet; }
  template <typename DelegationRequestIdT = Aws::String>
  void SetDelegationRequestId(DelegationRequestIdT&& value) {
    m_delegationRequestIdHasBeenSet = true;
    m_delegationRequestId = std::forward<DelegationRequestIdT>(value);
  }
  template <typename DelegationRequestIdT = Aws::String>
  UpdateDelegationRequestRequest& WithDelegationRequestId(DelegationRequestIdT&& value) {
    SetDelegationRequestId(std::forward<DelegationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional notes or comments to add to the delegation request.</p>
   */
  inline const Aws::String& GetNotes() const { return m_notes; }
  inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
  template <typename NotesT = Aws::String>
  void SetNotes(NotesT&& value) {
    m_notesHasBeenSet = true;
    m_notes = std::forward<NotesT>(value);
  }
  template <typename NotesT = Aws::String>
  UpdateDelegationRequestRequest& WithNotes(NotesT&& value) {
    SetNotes(std::forward<NotesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_delegationRequestId;
  bool m_delegationRequestIdHasBeenSet = false;

  Aws::String m_notes;
  bool m_notesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
