/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AccountVpcEncryptionControlExclusions.h>
#include <aws/ec2/model/AccountVpcEncryptionControlMode.h>
#include <aws/ec2/model/AccountVpcEncryptionControlState.h>
#include <aws/ec2/model/ManagedBy.h>

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
 * <p>Describes the account-level VPC Encryption Control configuration, including
 * its mode, state, and exclusions.</p> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccountVpcEncryptionControl">AWS
 * API Reference</a></p>
 */
class AccountVpcEncryptionControl {
 public:
  AWS_EC2_API AccountVpcEncryptionControl() = default;
  AWS_EC2_API AccountVpcEncryptionControl(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API AccountVpcEncryptionControl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current state of the account-level VPC Encryption Control
   * configuration.</p>
   */
  inline AccountVpcEncryptionControlState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(AccountVpcEncryptionControlState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline AccountVpcEncryptionControl& WithState(AccountVpcEncryptionControlState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption mode for the account-level VPC Encryption Control
   * configuration.</p>
   */
  inline AccountVpcEncryptionControlMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AccountVpcEncryptionControlMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline AccountVpcEncryptionControl& WithMode(AccountVpcEncryptionControlMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the traffic exclusions for the account-level VPC Encryption
   * Control configuration.</p>
   */
  inline const AccountVpcEncryptionControlExclusions& GetExclusions() const { return m_exclusions; }
  inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
  template <typename ExclusionsT = AccountVpcEncryptionControlExclusions>
  void SetExclusions(ExclusionsT&& value) {
    m_exclusionsHasBeenSet = true;
    m_exclusions = std::forward<ExclusionsT>(value);
  }
  template <typename ExclusionsT = AccountVpcEncryptionControlExclusions>
  AccountVpcEncryptionControl& WithExclusions(ExclusionsT&& value) {
    SetExclusions(std::forward<ExclusionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the account-level VPC Encryption Control
   * configuration.</p>
   */
  inline ManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(ManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline AccountVpcEncryptionControl& WithManagedBy(ManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the account-level VPC Encryption Control configuration
   * was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
  inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
  template <typename LastUpdateTimestampT = Aws::Utils::DateTime>
  void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) {
    m_lastUpdateTimestampHasBeenSet = true;
    m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value);
  }
  template <typename LastUpdateTimestampT = Aws::Utils::DateTime>
  AccountVpcEncryptionControl& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) {
    SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  AccountVpcEncryptionControlState m_state{AccountVpcEncryptionControlState::NOT_SET};

  AccountVpcEncryptionControlMode m_mode{AccountVpcEncryptionControlMode::NOT_SET};

  AccountVpcEncryptionControlExclusions m_exclusions;

  ManagedBy m_managedBy{ManagedBy::NOT_SET};

  Aws::Utils::DateTime m_lastUpdateTimestamp{};
  bool m_stateHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_exclusionsHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_lastUpdateTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
