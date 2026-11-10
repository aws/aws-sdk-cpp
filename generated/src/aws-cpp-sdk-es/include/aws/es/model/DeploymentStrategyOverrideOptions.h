/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ClonedBlueGreenOptions.h>
#include <aws/es/model/DeploymentStrategyOverride.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>Overrides the deployment strategy for a single operation, such as a version
 * upgrade.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeploymentStrategyOverrideOptions">AWS
 * API Reference</a></p>
 */
class DeploymentStrategyOverrideOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOverrideOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOverrideOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOverrideOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deployment strategy to use for this operation. The only valid value is
   * <code>ClonedBlueGreen</code>, which creates a cloned cluster on the target
   * version next to the primary cluster so that you can validate it and shift
   * traffic to it before you cut over.</p>
   */
  inline DeploymentStrategyOverride GetDeploymentStrategy() const { return m_deploymentStrategy; }
  inline bool DeploymentStrategyHasBeenSet() const { return m_deploymentStrategyHasBeenSet; }
  inline void SetDeploymentStrategy(DeploymentStrategyOverride value) {
    m_deploymentStrategyHasBeenSet = true;
    m_deploymentStrategy = value;
  }
  inline DeploymentStrategyOverrideOptions& WithDeploymentStrategy(DeploymentStrategyOverride value) {
    SetDeploymentStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options that apply when <code>DeploymentStrategy</code> is
   * <code>ClonedBlueGreen</code>.</p>
   */
  inline const ClonedBlueGreenOptions& GetClonedBlueGreenOptions() const { return m_clonedBlueGreenOptions; }
  inline bool ClonedBlueGreenOptionsHasBeenSet() const { return m_clonedBlueGreenOptionsHasBeenSet; }
  template <typename ClonedBlueGreenOptionsT = ClonedBlueGreenOptions>
  void SetClonedBlueGreenOptions(ClonedBlueGreenOptionsT&& value) {
    m_clonedBlueGreenOptionsHasBeenSet = true;
    m_clonedBlueGreenOptions = std::forward<ClonedBlueGreenOptionsT>(value);
  }
  template <typename ClonedBlueGreenOptionsT = ClonedBlueGreenOptions>
  DeploymentStrategyOverrideOptions& WithClonedBlueGreenOptions(ClonedBlueGreenOptionsT&& value) {
    SetClonedBlueGreenOptions(std::forward<ClonedBlueGreenOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  DeploymentStrategyOverride m_deploymentStrategy{DeploymentStrategyOverride::NOT_SET};

  ClonedBlueGreenOptions m_clonedBlueGreenOptions;
  bool m_deploymentStrategyHasBeenSet = false;
  bool m_clonedBlueGreenOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
