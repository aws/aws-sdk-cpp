/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ThresholdType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Defines the failure threshold that the deployment circuit breaker uses to
 * monitor a deployment. The <code>type</code> and <code>value</code> together
 * determine the number of task failures that are tolerated before the circuit
 * breaker triggers.</p> <p>By default, the threshold configuration uses a
 * <code>type</code> of <code>BOUNDED_PERCENT</code> with a <code>value</code> of
 * <code>50</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ThresholdConfiguration">AWS
 * API Reference</a></p>
 */
class ThresholdConfiguration {
 public:
  AWS_ECS_API ThresholdConfiguration() = default;
  AWS_ECS_API ThresholdConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ThresholdConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines how <code>value</code> is used to calculate the failure threshold.
   * For the percentage types (<code>BOUNDED_PERCENT</code> and
   * <code>UNBOUNDED_PERCENT</code>), <code>value</code> is multiplied by the latest
   * service desired count; for <code>COUNT</code>, <code>value</code> is used
   * directly. The default is <code>BOUNDED_PERCENT</code>.</p>
   */
  inline ThresholdType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ThresholdType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ThresholdConfiguration& WithType(ThresholdType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The integer used to calculate the failure threshold. When <code>type</code>
   * is <code>COUNT</code>, this is the failure threshold itself. When
   * <code>type</code> is a percentage type, this is the percentage that Amazon ECS
   * multiplies by the latest service desired count to calculate the failure
   * threshold.</p>
   */
  inline int GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline ThresholdConfiguration& WithValue(int value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  ThresholdType m_type{ThresholdType::NOT_SET};

  int m_value{0};
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
