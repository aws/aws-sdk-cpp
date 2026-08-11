/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/DurationConstraints.h>

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
 * <p>A duration parameter configuration with default value and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DurationParameterConfig">AWS
 * API Reference</a></p>
 */
class DurationParameterConfig {
 public:
  AWS_EKS_API DurationParameterConfig() = default;
  AWS_EKS_API DurationParameterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API DurationParameterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default value for the duration parameter.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  DurationParameterConfig& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constraints for the duration parameter.</p>
   */
  inline const DurationConstraints& GetConstraints() const { return m_constraints; }
  inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
  template <typename ConstraintsT = DurationConstraints>
  void SetConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints = std::forward<ConstraintsT>(value);
  }
  template <typename ConstraintsT = DurationConstraints>
  DurationParameterConfig& WithConstraints(ConstraintsT&& value) {
    SetConstraints(std::forward<ConstraintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_defaultValue;

  DurationConstraints m_constraints;
  bool m_defaultValueHasBeenSet = false;
  bool m_constraintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
