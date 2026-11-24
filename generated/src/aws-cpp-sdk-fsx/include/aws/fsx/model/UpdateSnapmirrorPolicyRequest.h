/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicyRetentionRule.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class UpdateSnapmirrorPolicyRequest : public FSxRequest {
 public:
  AWS_FSX_API UpdateSnapmirrorPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSnapmirrorPolicy"; }

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
  UpdateSnapmirrorPolicyRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SnapMirror policy that you want to update.</p>
   */
  inline const Aws::String& GetSnapmirrorPolicyId() const { return m_snapmirrorPolicyId; }
  inline bool SnapmirrorPolicyIdHasBeenSet() const { return m_snapmirrorPolicyIdHasBeenSet; }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  void SetSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    m_snapmirrorPolicyIdHasBeenSet = true;
    m_snapmirrorPolicyId = std::forward<SnapmirrorPolicyIdT>(value);
  }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  UpdateSnapmirrorPolicyRequest& WithSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    SetSnapmirrorPolicyId(std::forward<SnapmirrorPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the rules that determine which snapshots SnapMirror retains on the
   * destination volume, based on their SnapMirror labels. The rules that you specify
   * replace all the SnapMirror policy's existing retention rules. To keep an
   * existing rule, include it in the list. To remove all retention rules, specify an
   * empty list.</p>
   */
  inline const Aws::Vector<SnapmirrorPolicyRetentionRule>& GetRetentionRules() const { return m_retentionRules; }
  inline bool RetentionRulesHasBeenSet() const { return m_retentionRulesHasBeenSet; }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  void SetRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules = std::forward<RetentionRulesT>(value);
  }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  UpdateSnapmirrorPolicyRequest& WithRetentionRules(RetentionRulesT&& value) {
    SetRetentionRules(std::forward<RetentionRulesT>(value));
    return *this;
  }
  template <typename RetentionRulesT = SnapmirrorPolicyRetentionRule>
  UpdateSnapmirrorPolicyRequest& AddRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules.emplace_back(std::forward<RetentionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the ONTAP schedule that determines when SnapMirror
   * transfers data. To remove the transfer schedule, specify an empty string.</p>
   */
  inline const Aws::String& GetTransferSchedule() const { return m_transferSchedule; }
  inline bool TransferScheduleHasBeenSet() const { return m_transferScheduleHasBeenSet; }
  template <typename TransferScheduleT = Aws::String>
  void SetTransferSchedule(TransferScheduleT&& value) {
    m_transferScheduleHasBeenSet = true;
    m_transferSchedule = std::forward<TransferScheduleT>(value);
  }
  template <typename TransferScheduleT = Aws::String>
  UpdateSnapmirrorPolicyRequest& WithTransferSchedule(TransferScheduleT&& value) {
    SetTransferSchedule(std::forward<TransferScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether SnapMirror compresses data when it transfers the data over
   * the network.</p>
   */
  inline bool GetNetworkCompressionEnabled() const { return m_networkCompressionEnabled; }
  inline bool NetworkCompressionEnabledHasBeenSet() const { return m_networkCompressionEnabledHasBeenSet; }
  inline void SetNetworkCompressionEnabled(bool value) {
    m_networkCompressionEnabledHasBeenSet = true;
    m_networkCompressionEnabled = value;
  }
  inline UpdateSnapmirrorPolicyRequest& WithNetworkCompressionEnabled(bool value) {
    SetNetworkCompressionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum bandwidth, in kilobytes per second (KBps), that
   * SnapMirror uses to transfer data. A value of <code>0</code> means that the
   * bandwidth is unlimited.</p>
   */
  inline long long GetThrottleInKbps() const { return m_throttleInKbps; }
  inline bool ThrottleInKbpsHasBeenSet() const { return m_throttleInKbpsHasBeenSet; }
  inline void SetThrottleInKbps(long long value) {
    m_throttleInKbpsHasBeenSet = true;
    m_throttleInKbps = value;
  }
  inline UpdateSnapmirrorPolicyRequest& WithThrottleInKbps(long long value) {
    SetThrottleInKbps(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_snapmirrorPolicyId;

  Aws::Vector<SnapmirrorPolicyRetentionRule> m_retentionRules;

  Aws::String m_transferSchedule;

  bool m_networkCompressionEnabled{false};

  long long m_throttleInKbps{0};
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_snapmirrorPolicyIdHasBeenSet = false;
  bool m_retentionRulesHasBeenSet = false;
  bool m_transferScheduleHasBeenSet = false;
  bool m_networkCompressionEnabledHasBeenSet = false;
  bool m_throttleInKbpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
