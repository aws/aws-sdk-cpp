/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Constraints for a duration parameter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DurationConstraints">AWS
 * API Reference</a></p>
 */
class DurationConstraints {
 public:
  AWS_EKS_API DurationConstraints() = default;
  AWS_EKS_API DurationConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API DurationConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum allowed duration value.</p>
   */
  inline const Aws::String& GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  template <typename MinT = Aws::String>
  void SetMin(MinT&& value) {
    m_minHasBeenSet = true;
    m_min = std::forward<MinT>(value);
  }
  template <typename MinT = Aws::String>
  DurationConstraints& WithMin(MinT&& value) {
    SetMin(std::forward<MinT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed duration value.</p>
   */
  inline const Aws::String& GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  template <typename MaxT = Aws::String>
  void SetMax(MaxT&& value) {
    m_maxHasBeenSet = true;
    m_max = std::forward<MaxT>(value);
  }
  template <typename MaxT = Aws::String>
  DurationConstraints& WithMax(MaxT&& value) {
    SetMax(std::forward<MaxT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_min;

  Aws::String m_max;
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
