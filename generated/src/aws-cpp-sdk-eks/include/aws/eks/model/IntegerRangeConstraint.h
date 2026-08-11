/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>An integer range constraint specifying minimum and maximum allowed
 * values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/IntegerRangeConstraint">AWS
 * API Reference</a></p>
 */
class IntegerRangeConstraint {
 public:
  AWS_EKS_API IntegerRangeConstraint() = default;
  AWS_EKS_API IntegerRangeConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API IntegerRangeConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum allowed value.</p>
   */
  inline int GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  inline void SetMin(int value) {
    m_minHasBeenSet = true;
    m_min = value;
  }
  inline IntegerRangeConstraint& WithMin(int value) {
    SetMin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed value.</p>
   */
  inline int GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(int value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline IntegerRangeConstraint& WithMax(int value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  int m_min{0};

  int m_max{0};
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
