/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionState.h>

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
 * <p>Describes an exclusion configuration for VPC Encryption Control.</p> <p>For
 * more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEncryptionControlExclusion">AWS
 * API Reference</a></p>
 */
class VpcEncryptionControlExclusion {
 public:
  AWS_EC2_API VpcEncryptionControlExclusion() = default;
  AWS_EC2_API VpcEncryptionControlExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcEncryptionControlExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current state of the exclusion configuration.</p>
   */
  inline VpcEncryptionControlExclusionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(VpcEncryptionControlExclusionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline VpcEncryptionControlExclusion& WithState(VpcEncryptionControlExclusionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional information about the exclusion state.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  VpcEncryptionControlExclusion& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}
 private:
  VpcEncryptionControlExclusionState m_state{VpcEncryptionControlExclusionState::NOT_SET};

  Aws::String m_stateMessage;
  bool m_stateHasBeenSet = false;
  bool m_stateMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
