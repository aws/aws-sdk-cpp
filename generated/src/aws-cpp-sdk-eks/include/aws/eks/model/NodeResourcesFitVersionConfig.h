/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ScoringStrategyConfig.h>

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
 * <p>The NodeResourcesFit version configuration with default value and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodeResourcesFitVersionConfig">AWS
 * API Reference</a></p>
 */
class NodeResourcesFitVersionConfig {
 public:
  AWS_EKS_API NodeResourcesFitVersionConfig() = default;
  AWS_EKS_API NodeResourcesFitVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API NodeResourcesFitVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scoring strategy configuration with default value and constraints.</p>
   */
  inline const ScoringStrategyConfig& GetScoringStrategy() const { return m_scoringStrategy; }
  inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
  template <typename ScoringStrategyT = ScoringStrategyConfig>
  void SetScoringStrategy(ScoringStrategyT&& value) {
    m_scoringStrategyHasBeenSet = true;
    m_scoringStrategy = std::forward<ScoringStrategyT>(value);
  }
  template <typename ScoringStrategyT = ScoringStrategyConfig>
  NodeResourcesFitVersionConfig& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}
 private:
  ScoringStrategyConfig m_scoringStrategy;
  bool m_scoringStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
