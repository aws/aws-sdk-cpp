/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AllowedValuesConstraint.h>
#include <aws/eks/model/ResourceConstraints.h>

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
 * <p>Constraints for the scoring strategy configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ScoringStrategyConstraints">AWS
 * API Reference</a></p>
 */
class ScoringStrategyConstraints {
 public:
  AWS_EKS_API ScoringStrategyConstraints() = default;
  AWS_EKS_API ScoringStrategyConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ScoringStrategyConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The allowed values for the scoring strategy type.</p>
   */
  inline const AllowedValuesConstraint& GetScoringStrategy() const { return m_scoringStrategy; }
  inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
  template <typename ScoringStrategyT = AllowedValuesConstraint>
  void SetScoringStrategy(ScoringStrategyT&& value) {
    m_scoringStrategyHasBeenSet = true;
    m_scoringStrategy = std::forward<ScoringStrategyT>(value);
  }
  template <typename ScoringStrategyT = AllowedValuesConstraint>
  ScoringStrategyConstraints& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constraints for resource weights.</p>
   */
  inline const ResourceConstraints& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = ResourceConstraints>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = ResourceConstraints>
  ScoringStrategyConstraints& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  AllowedValuesConstraint m_scoringStrategy;

  ResourceConstraints m_resources;
  bool m_scoringStrategyHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
