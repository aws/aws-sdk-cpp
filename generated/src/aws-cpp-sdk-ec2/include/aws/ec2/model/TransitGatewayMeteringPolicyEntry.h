/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMeteringPayerType.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyEntryState.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyRule.h>

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
 * <p>Describes an entry in a transit gateway metering policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMeteringPolicyEntry">AWS
 * API Reference</a></p>
 */
class TransitGatewayMeteringPolicyEntry {
 public:
  AWS_EC2_API TransitGatewayMeteringPolicyEntry() = default;
  AWS_EC2_API TransitGatewayMeteringPolicyEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayMeteringPolicyEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The rule number of the metering policy entry.</p>
   */
  inline const Aws::String& GetPolicyRuleNumber() const { return m_policyRuleNumber; }
  inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
  template <typename PolicyRuleNumberT = Aws::String>
  void SetPolicyRuleNumber(PolicyRuleNumberT&& value) {
    m_policyRuleNumberHasBeenSet = true;
    m_policyRuleNumber = std::forward<PolicyRuleNumberT>(value);
  }
  template <typename PolicyRuleNumberT = Aws::String>
  TransitGatewayMeteringPolicyEntry& WithPolicyRuleNumber(PolicyRuleNumberT&& value) {
    SetPolicyRuleNumber(std::forward<PolicyRuleNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID to which the metered traffic is
   * attributed.</p>
   */
  inline TransitGatewayMeteringPayerType GetMeteredAccount() const { return m_meteredAccount; }
  inline bool MeteredAccountHasBeenSet() const { return m_meteredAccountHasBeenSet; }
  inline void SetMeteredAccount(TransitGatewayMeteringPayerType value) {
    m_meteredAccountHasBeenSet = true;
    m_meteredAccount = value;
  }
  inline TransitGatewayMeteringPolicyEntry& WithMeteredAccount(TransitGatewayMeteringPayerType value) {
    SetMeteredAccount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the metering policy entry.</p>
   */
  inline TransitGatewayMeteringPolicyEntryState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayMeteringPolicyEntryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayMeteringPolicyEntry& WithState(TransitGatewayMeteringPolicyEntryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the metering policy entry was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  TransitGatewayMeteringPolicyEntry& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the metering policy entry update becomes
   * effective.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateEffectiveAt() const { return m_updateEffectiveAt; }
  inline bool UpdateEffectiveAtHasBeenSet() const { return m_updateEffectiveAtHasBeenSet; }
  template <typename UpdateEffectiveAtT = Aws::Utils::DateTime>
  void SetUpdateEffectiveAt(UpdateEffectiveAtT&& value) {
    m_updateEffectiveAtHasBeenSet = true;
    m_updateEffectiveAt = std::forward<UpdateEffectiveAtT>(value);
  }
  template <typename UpdateEffectiveAtT = Aws::Utils::DateTime>
  TransitGatewayMeteringPolicyEntry& WithUpdateEffectiveAt(UpdateEffectiveAtT&& value) {
    SetUpdateEffectiveAt(std::forward<UpdateEffectiveAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metering policy rule that defines traffic matching criteria.</p>
   */
  inline const TransitGatewayMeteringPolicyRule& GetMeteringPolicyRule() const { return m_meteringPolicyRule; }
  inline bool MeteringPolicyRuleHasBeenSet() const { return m_meteringPolicyRuleHasBeenSet; }
  template <typename MeteringPolicyRuleT = TransitGatewayMeteringPolicyRule>
  void SetMeteringPolicyRule(MeteringPolicyRuleT&& value) {
    m_meteringPolicyRuleHasBeenSet = true;
    m_meteringPolicyRule = std::forward<MeteringPolicyRuleT>(value);
  }
  template <typename MeteringPolicyRuleT = TransitGatewayMeteringPolicyRule>
  TransitGatewayMeteringPolicyEntry& WithMeteringPolicyRule(MeteringPolicyRuleT&& value) {
    SetMeteringPolicyRule(std::forward<MeteringPolicyRuleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyRuleNumber;
  bool m_policyRuleNumberHasBeenSet = false;

  TransitGatewayMeteringPayerType m_meteredAccount{TransitGatewayMeteringPayerType::NOT_SET};
  bool m_meteredAccountHasBeenSet = false;

  TransitGatewayMeteringPolicyEntryState m_state{TransitGatewayMeteringPolicyEntryState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Utils::DateTime m_updateEffectiveAt{};
  bool m_updateEffectiveAtHasBeenSet = false;

  TransitGatewayMeteringPolicyRule m_meteringPolicyRule;
  bool m_meteringPolicyRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
