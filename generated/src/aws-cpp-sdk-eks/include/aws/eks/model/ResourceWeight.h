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
 * <p>A resource weight entry for the scheduler scoring strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ResourceWeight">AWS
 * API Reference</a></p>
 */
class ResourceWeight {
 public:
  AWS_EKS_API ResourceWeight() = default;
  AWS_EKS_API ResourceWeight(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ResourceWeight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the resource (for example, <code>cpu</code> or
   * <code>memory</code>).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ResourceWeight& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight assigned to the resource for scoring. Must be between 1 and
   * 100.</p>
   */
  inline int GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(int value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline ResourceWeight& WithWeight(int value) {
    SetWeight(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_weight{0};
  bool m_nameHasBeenSet = false;
  bool m_weightHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
