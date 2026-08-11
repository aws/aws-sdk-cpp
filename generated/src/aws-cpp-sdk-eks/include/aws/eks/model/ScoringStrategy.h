/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ResourceWeight.h>
#include <aws/eks/model/ScoringStrategyType.h>

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
 * <p>The scoring strategy configuration for the NodeResourcesFit scheduler
 * plugin.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ScoringStrategy">AWS
 * API Reference</a></p>
 */
class ScoringStrategy {
 public:
  AWS_EKS_API ScoringStrategy() = default;
  AWS_EKS_API ScoringStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ScoringStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scoring strategy type. Valid values are <code>LeastAllocated</code> or
   * <code>MostAllocated</code>.</p>
   */
  inline ScoringStrategyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ScoringStrategyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ScoringStrategy& WithType(ScoringStrategyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource weights used for scoring nodes.</p>
   */
  inline const Aws::Vector<ResourceWeight>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<ResourceWeight>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<ResourceWeight>>
  ScoringStrategy& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = ResourceWeight>
  ScoringStrategy& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  ScoringStrategyType m_type{ScoringStrategyType::NOT_SET};

  Aws::Vector<ResourceWeight> m_resources;
  bool m_typeHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
