/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ScoringStrategy.h>

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
 * <p>The NodeResourcesFit plugin configuration for the Kubernetes
 * scheduler.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodeResourcesFitConfig">AWS
 * API Reference</a></p>
 */
class NodeResourcesFitConfig {
 public:
  AWS_EKS_API NodeResourcesFitConfig() = default;
  AWS_EKS_API NodeResourcesFitConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API NodeResourcesFitConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scoring strategy used to rank nodes during scheduling.</p>
   */
  inline const ScoringStrategy& GetScoringStrategy() const { return m_scoringStrategy; }
  inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
  template <typename ScoringStrategyT = ScoringStrategy>
  void SetScoringStrategy(ScoringStrategyT&& value) {
    m_scoringStrategyHasBeenSet = true;
    m_scoringStrategy = std::forward<ScoringStrategyT>(value);
  }
  template <typename ScoringStrategyT = ScoringStrategy>
  NodeResourcesFitConfig& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}
 private:
  ScoringStrategy m_scoringStrategy;
  bool m_scoringStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
