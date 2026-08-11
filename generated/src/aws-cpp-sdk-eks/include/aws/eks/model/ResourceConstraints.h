/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AllowedValuesConstraint.h>
#include <aws/eks/model/IntegerRangeConstraint.h>

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
 * <p>Constraints for resource weight entries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ResourceConstraints">AWS
 * API Reference</a></p>
 */
class ResourceConstraints {
 public:
  AWS_EKS_API ResourceConstraints() = default;
  AWS_EKS_API ResourceConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ResourceConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The allowed values for resource names.</p>
   */
  inline const AllowedValuesConstraint& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = AllowedValuesConstraint>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = AllowedValuesConstraint>
  ResourceConstraints& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allowed range for resource weight values.</p>
   */
  inline const IntegerRangeConstraint& GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  template <typename WeightT = IntegerRangeConstraint>
  void SetWeight(WeightT&& value) {
    m_weightHasBeenSet = true;
    m_weight = std::forward<WeightT>(value);
  }
  template <typename WeightT = IntegerRangeConstraint>
  ResourceConstraints& WithWeight(WeightT&& value) {
    SetWeight(std::forward<WeightT>(value));
    return *this;
  }
  ///@}
 private:
  AllowedValuesConstraint m_name;

  IntegerRangeConstraint m_weight;
  bool m_nameHasBeenSet = false;
  bool m_weightHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
