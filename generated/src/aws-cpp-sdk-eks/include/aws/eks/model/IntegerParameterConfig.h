/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/IntegerConstraints.h>

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
 * <p>An integer parameter configuration with default value and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/IntegerParameterConfig">AWS
 * API Reference</a></p>
 */
class IntegerParameterConfig {
 public:
  AWS_EKS_API IntegerParameterConfig() = default;
  AWS_EKS_API IntegerParameterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API IntegerParameterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default value for the integer parameter.</p>
   */
  inline int GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  inline void SetDefaultValue(int value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = value;
  }
  inline IntegerParameterConfig& WithDefaultValue(int value) {
    SetDefaultValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constraints for the integer parameter.</p>
   */
  inline const IntegerConstraints& GetConstraints() const { return m_constraints; }
  inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
  template <typename ConstraintsT = IntegerConstraints>
  void SetConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints = std::forward<ConstraintsT>(value);
  }
  template <typename ConstraintsT = IntegerConstraints>
  IntegerParameterConfig& WithConstraints(ConstraintsT&& value) {
    SetConstraints(std::forward<ConstraintsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_defaultValue{0};

  IntegerConstraints m_constraints;
  bool m_defaultValueHasBeenSet = false;
  bool m_constraintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
