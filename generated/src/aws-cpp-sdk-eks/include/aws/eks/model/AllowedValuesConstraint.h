/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>A constraint specifying the allowed values for a parameter.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AllowedValuesConstraint">AWS
 * API Reference</a></p>
 */
class AllowedValuesConstraint {
 public:
  AWS_EKS_API AllowedValuesConstraint() = default;
  AWS_EKS_API AllowedValuesConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API AllowedValuesConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of allowed values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  AllowedValuesConstraint& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  template <typename AllowedValuesT = Aws::String>
  AllowedValuesConstraint& AddAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedValues;
  bool m_allowedValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
