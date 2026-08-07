/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistrationDeltaState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Contains information about a routing policy registration change, including
 * the changes applied and their publication state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRoutingPolicyRegistrationDelta">AWS
 * API Reference</a></p>
 */
class IpamRoutingPolicyRegistrationDelta {
 public:
  AWS_EC2_API IpamRoutingPolicyRegistrationDelta() = default;
  AWS_EC2_API IpamRoutingPolicyRegistrationDelta(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRoutingPolicyRegistrationDelta& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The unique identifier of the delta.</p>
   */
  inline const Aws::String& GetDeltaId() const { return m_deltaId; }
  inline bool DeltaIdHasBeenSet() const { return m_deltaIdHasBeenSet; }
  template <typename DeltaIdT = Aws::String>
  void SetDeltaId(DeltaIdT&& value) {
    m_deltaIdHasBeenSet = true;
    m_deltaId = std::forward<DeltaIdT>(value);
  }
  template <typename DeltaIdT = Aws::String>
  IpamRoutingPolicyRegistrationDelta& WithDeltaId(DeltaIdT&& value) {
    SetDeltaId(std::forward<DeltaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON specification describing the changes applied in this delta.</p>
   */
  inline const Aws::String& GetDeltaJson() const { return m_deltaJson; }
  inline bool DeltaJsonHasBeenSet() const { return m_deltaJsonHasBeenSet; }
  template <typename DeltaJsonT = Aws::String>
  void SetDeltaJson(DeltaJsonT&& value) {
    m_deltaJsonHasBeenSet = true;
    m_deltaJson = std::forward<DeltaJsonT>(value);
  }
  template <typename DeltaJsonT = Aws::String>
  IpamRoutingPolicyRegistrationDelta& WithDeltaJson(DeltaJsonT&& value) {
    SetDeltaJson(std::forward<DeltaJsonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the delta. Valid values: <code>pending</code> |
   * <code>published</code> | <code>failed</code>.</p>
   */
  inline IpamRoutingPolicyRegistrationDeltaState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamRoutingPolicyRegistrationDeltaState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamRoutingPolicyRegistrationDelta& WithState(IpamRoutingPolicyRegistrationDeltaState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the current state, including error information if the
   * delta failed.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  IpamRoutingPolicyRegistrationDelta& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deltaId;

  Aws::String m_deltaJson;

  IpamRoutingPolicyRegistrationDeltaState m_state{IpamRoutingPolicyRegistrationDeltaState::NOT_SET};

  Aws::String m_stateMessage;
  bool m_deltaIdHasBeenSet = false;
  bool m_deltaJsonHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
