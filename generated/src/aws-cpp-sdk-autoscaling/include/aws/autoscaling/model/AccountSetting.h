/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p> Describes an account setting for Amazon EC2 Auto Scaling. Account settings
 * control how certain features behave for your account. Some settings can be
 * enforced after a specified date, meaning that after the enforcement date, you
 * can no longer modify the setting. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AccountSetting">AWS
 * API Reference</a></p>
 */
class AccountSetting {
 public:
  AWS_AUTOSCALING_API AccountSetting() = default;
  AWS_AUTOSCALING_API AccountSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API AccountSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The name of the account setting. Each account setting has a unique name that
   * identifies the specific feature it controls. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AccountSetting& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current value of the account setting. </p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  AccountSetting& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of enforcement for the account setting. Valid values include:
   * <code>hard</code> (the setting has a hard enforcement date after which the
   * setting will be enforced and cannot be modified), <code>flexible</code> (the
   * setting has a flexible enforcement where you can always modify the setting
   * value), and <code>none</code> (the setting has no enforcement and can always be
   * modified). </p>
   */
  inline const Aws::String& GetEnforcementType() const { return m_enforcementType; }
  inline bool EnforcementTypeHasBeenSet() const { return m_enforcementTypeHasBeenSet; }
  template <typename EnforcementTypeT = Aws::String>
  void SetEnforcementType(EnforcementTypeT&& value) {
    m_enforcementTypeHasBeenSet = true;
    m_enforcementType = std::forward<EnforcementTypeT>(value);
  }
  template <typename EnforcementTypeT = Aws::String>
  AccountSetting& WithEnforcementType(EnforcementTypeT&& value) {
    SetEnforcementType(std::forward<EnforcementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The date when the account setting will be enforced. After this date, for
   * settings with hard enforcement type, you can no longer modify the setting value.
   * This parameter is only returned for settings with hard or flexible enforcement
   * types. </p>
   */
  inline const Aws::Utils::DateTime& GetEnforcementDate() const { return m_enforcementDate; }
  inline bool EnforcementDateHasBeenSet() const { return m_enforcementDateHasBeenSet; }
  template <typename EnforcementDateT = Aws::Utils::DateTime>
  void SetEnforcementDate(EnforcementDateT&& value) {
    m_enforcementDateHasBeenSet = true;
    m_enforcementDate = std::forward<EnforcementDateT>(value);
  }
  template <typename EnforcementDateT = Aws::Utils::DateTime>
  AccountSetting& WithEnforcementDate(EnforcementDateT&& value) {
    SetEnforcementDate(std::forward<EnforcementDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The default value of the account setting before the enforcement date. Valid
   * values are enabled and disabled. This parameter is only returned for settings
   * with hard or flexible enforcement types. </p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  AccountSetting& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The value that will be enforced after the enforcement date. Valid values are
   * enabled and disabled. This parameter is only returned for settings with hard or
   * flexible enforcement types. </p>
   */
  inline const Aws::String& GetEnforcedValue() const { return m_enforcedValue; }
  inline bool EnforcedValueHasBeenSet() const { return m_enforcedValueHasBeenSet; }
  template <typename EnforcedValueT = Aws::String>
  void SetEnforcedValue(EnforcedValueT&& value) {
    m_enforcedValueHasBeenSet = true;
    m_enforcedValue = std::forward<EnforcedValueT>(value);
  }
  template <typename EnforcedValueT = Aws::String>
  AccountSetting& WithEnforcedValue(EnforcedValueT&& value) {
    SetEnforcedValue(std::forward<EnforcedValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_value;

  Aws::String m_enforcementType;

  Aws::Utils::DateTime m_enforcementDate{};

  Aws::String m_defaultValue;

  Aws::String m_enforcedValue;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_enforcementTypeHasBeenSet = false;
  bool m_enforcementDateHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_enforcedValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
