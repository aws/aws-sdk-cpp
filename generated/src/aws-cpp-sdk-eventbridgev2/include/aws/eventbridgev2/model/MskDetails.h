/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ConnectivityState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Values EventBridge manages for a subscriber that targets an Amazon MSK
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/MskDetails">AWS
 * API Reference</a></p>
 */
class MskDetails {
 public:
  AWS_EVENTBRIDGEV2_API MskDetails() = default;
  AWS_EVENTBRIDGEV2_API MskDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API MskDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Provisioning state of the connectivity EventBridge sets up to the cluster.
   * Distinct from the subscriber's State, which the customer controls.</p>
   */
  inline ConnectivityState GetConnectivityState() const { return m_connectivityState; }
  inline bool ConnectivityStateHasBeenSet() const { return m_connectivityStateHasBeenSet; }
  inline void SetConnectivityState(ConnectivityState value) {
    m_connectivityStateHasBeenSet = true;
    m_connectivityState = value;
  }
  inline MskDetails& WithConnectivityState(ConnectivityState value) {
    SetConnectivityState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why provisioning failed. Present only when ConnectivityState is
   * PROVISION_FAILED.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  MskDetails& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the VPC connection EventBridge uses to reach the cluster. Present only
   * for PRIVATE connectivity, once the connection exists. It is the connection the
   * cluster owner sees through the MSK ListClientVpcConnections API.</p>
   */
  inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
  inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
  template <typename VpcConnectionArnT = Aws::String>
  void SetVpcConnectionArn(VpcConnectionArnT&& value) {
    m_vpcConnectionArnHasBeenSet = true;
    m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value);
  }
  template <typename VpcConnectionArnT = Aws::String>
  MskDetails& WithVpcConnectionArn(VpcConnectionArnT&& value) {
    SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectivityState m_connectivityState{ConnectivityState::NOT_SET};

  Aws::String m_stateReason;

  Aws::String m_vpcConnectionArn;
  bool m_connectivityStateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_vpcConnectionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
