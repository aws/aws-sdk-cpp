/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/InheritanceMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The per-scan-type inheritance reset settings for the
 * <code>UpdateConfiguration</code> operation. Each member is independently
 * optional. Including a member in this structure resets that scan type's
 * configuration to inherit from the delegated administrator.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateConfigurationInheritance">AWS
 * API Reference</a></p>
 */
class UpdateConfigurationInheritance {
 public:
  AWS_INSPECTOR2_API UpdateConfigurationInheritance() = default;
  AWS_INSPECTOR2_API UpdateConfigurationInheritance(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API UpdateConfigurationInheritance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The inheritance mode for Amazon EC2 scan configuration. Set to
   * <code>INHERIT_FROM_ADMIN</code> to reset the member account's Amazon EC2 scan
   * configuration to inherit from the delegated administrator. If omitted, the
   * member account's existing Amazon EC2 scan configuration is not changed.</p>
   */
  inline InheritanceMode GetEc2Configuration() const { return m_ec2Configuration; }
  inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }
  inline void SetEc2Configuration(InheritanceMode value) {
    m_ec2ConfigurationHasBeenSet = true;
    m_ec2Configuration = value;
  }
  inline UpdateConfigurationInheritance& WithEc2Configuration(InheritanceMode value) {
    SetEc2Configuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inheritance mode for Amazon ECR scan configuration. Set to
   * <code>INHERIT_FROM_ADMIN</code> to reset the member account's Amazon ECR scan
   * configuration to inherit from the delegated administrator. If omitted, the
   * member account's existing Amazon ECR scan configuration is not changed.</p>
   */
  inline InheritanceMode GetEcrConfiguration() const { return m_ecrConfiguration; }
  inline bool EcrConfigurationHasBeenSet() const { return m_ecrConfigurationHasBeenSet; }
  inline void SetEcrConfiguration(InheritanceMode value) {
    m_ecrConfigurationHasBeenSet = true;
    m_ecrConfiguration = value;
  }
  inline UpdateConfigurationInheritance& WithEcrConfiguration(InheritanceMode value) {
    SetEcrConfiguration(value);
    return *this;
  }
  ///@}
 private:
  InheritanceMode m_ec2Configuration{InheritanceMode::NOT_SET};

  InheritanceMode m_ecrConfiguration{InheritanceMode::NOT_SET};
  bool m_ec2ConfigurationHasBeenSet = false;
  bool m_ecrConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
