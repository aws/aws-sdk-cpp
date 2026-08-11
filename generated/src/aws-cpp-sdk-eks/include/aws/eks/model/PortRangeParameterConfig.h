/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/PortRangeConstraints.h>
#include <aws/eks/model/ServiceNodePortRange.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>A port range parameter configuration with default value and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PortRangeParameterConfig">AWS
 * API Reference</a></p>
 */
class PortRangeParameterConfig {
 public:
  AWS_EKS_API PortRangeParameterConfig() = default;
  AWS_EKS_API PortRangeParameterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API PortRangeParameterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default port range value.</p>
   */
  inline const ServiceNodePortRange& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = ServiceNodePortRange>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = ServiceNodePortRange>
  PortRangeParameterConfig& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constraints for the port range parameter.</p>
   */
  inline const PortRangeConstraints& GetConstraints() const { return m_constraints; }
  inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
  template <typename ConstraintsT = PortRangeConstraints>
  void SetConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints = std::forward<ConstraintsT>(value);
  }
  template <typename ConstraintsT = PortRangeConstraints>
  PortRangeParameterConfig& WithConstraints(ConstraintsT&& value) {
    SetConstraints(std::forward<ConstraintsT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceNodePortRange m_defaultValue;

  PortRangeConstraints m_constraints;
  bool m_defaultValueHasBeenSet = false;
  bool m_constraintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
