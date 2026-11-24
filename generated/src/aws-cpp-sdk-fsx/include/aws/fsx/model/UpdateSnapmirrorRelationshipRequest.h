/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/UpdatableSnapmirrorRelationshipState.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class UpdateSnapmirrorRelationshipRequest : public FSxRequest {
 public:
  AWS_FSX_API UpdateSnapmirrorRelationshipRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSnapmirrorRelationship"; }

  AWS_FSX_API Aws::String SerializePayload() const override;

  AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  UpdateSnapmirrorRelationshipRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SnapMirror relationship that you want to update.</p>
   */
  inline const Aws::String& GetSnapmirrorRelationshipId() const { return m_snapmirrorRelationshipId; }
  inline bool SnapmirrorRelationshipIdHasBeenSet() const { return m_snapmirrorRelationshipIdHasBeenSet; }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  void SetSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    m_snapmirrorRelationshipIdHasBeenSet = true;
    m_snapmirrorRelationshipId = std::forward<SnapmirrorRelationshipIdT>(value);
  }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  UpdateSnapmirrorRelationshipRequest& WithSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    SetSnapmirrorRelationshipId(std::forward<SnapmirrorRelationshipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the SnapMirror policy that the SnapMirror relationship
   * uses.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  UpdateSnapmirrorRelationshipRequest& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the ONTAP schedule that determines when SnapMirror
   * transfers data for the relationship. This schedule overrides the transfer
   * schedule of the SnapMirror policy.</p>
   */
  inline const Aws::String& GetTransferSchedule() const { return m_transferSchedule; }
  inline bool TransferScheduleHasBeenSet() const { return m_transferScheduleHasBeenSet; }
  template <typename TransferScheduleT = Aws::String>
  void SetTransferSchedule(TransferScheduleT&& value) {
    m_transferScheduleHasBeenSet = true;
    m_transferSchedule = std::forward<TransferScheduleT>(value);
  }
  template <typename TransferScheduleT = Aws::String>
  UpdateSnapmirrorRelationshipRequest& WithTransferSchedule(TransferScheduleT&& value) {
    SetTransferSchedule(std::forward<TransferScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum bandwidth, in kilobytes per second (KBps), that
   * SnapMirror uses to transfer data for the relationship. A value of <code>0</code>
   * means that the bandwidth is unlimited. This value overrides the throttle of the
   * SnapMirror policy.</p>
   */
  inline long long GetThrottleInKbps() const { return m_throttleInKbps; }
  inline bool ThrottleInKbpsHasBeenSet() const { return m_throttleInKbpsHasBeenSet; }
  inline void SetThrottleInKbps(long long value) {
    m_throttleInKbpsHasBeenSet = true;
    m_throttleInKbps = value;
  }
  inline UpdateSnapmirrorRelationshipRequest& WithThrottleInKbps(long long value) {
    SetThrottleInKbps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the state to set for the SnapMirror relationship:</p> <ul> <li> <p>
   * <code>SNAPMIRRORED</code> – Resumes a paused SnapMirror relationship, or
   * resynchronizes a broken-off SnapMirror relationship.</p> </li> <li> <p>
   * <code>PAUSED</code> – Pauses SnapMirror transfers for the relationship.</p>
   * </li> <li> <p> <code>BROKEN_OFF</code> – Breaks off the SnapMirror relationship,
   * which makes the destination volume writable.</p> </li> </ul>
   * <p>Setting <code>State</code> to <code>SNAPMIRRORED</code> on a relationship
   * that is <code>BROKEN_OFF</code> might resynchronize the relationship. A resync
   * overwrites the destination volume with data from the source volume, and discards
   * any data written to the destination volume that isn't present on the source
   * volume. Use caution when you resynchronize a relationship.</p>
   */
  inline UpdatableSnapmirrorRelationshipState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(UpdatableSnapmirrorRelationshipState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateSnapmirrorRelationshipRequest& WithState(UpdatableSnapmirrorRelationshipState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_snapmirrorRelationshipId;

  Aws::String m_policyId;

  Aws::String m_transferSchedule;

  long long m_throttleInKbps{0};

  UpdatableSnapmirrorRelationshipState m_state{UpdatableSnapmirrorRelationshipState::NOT_SET};
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_snapmirrorRelationshipIdHasBeenSet = false;
  bool m_policyIdHasBeenSet = false;
  bool m_transferScheduleHasBeenSet = false;
  bool m_throttleInKbpsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
