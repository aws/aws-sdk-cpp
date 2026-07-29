/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Environment variables provided as input for a pipeline
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExecutionEnvironmentVariables">AWS
 * API Reference</a></p>
 */
class ExecutionEnvironmentVariables {
 public:
  AWS_IOTSITEWISE_API ExecutionEnvironmentVariables() = default;
  AWS_IOTSITEWISE_API ExecutionEnvironmentVariables(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ExecutionEnvironmentVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Global environment variables that apply to all compute nodes in the pipeline
   * execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetGlobal() const { return m_global; }
  inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }
  template <typename GlobalT = Aws::Map<Aws::String, Aws::String>>
  void SetGlobal(GlobalT&& value) {
    m_globalHasBeenSet = true;
    m_global = std::forward<GlobalT>(value);
  }
  template <typename GlobalT = Aws::Map<Aws::String, Aws::String>>
  ExecutionEnvironmentVariables& WithGlobal(GlobalT&& value) {
    SetGlobal(std::forward<GlobalT>(value));
    return *this;
  }
  template <typename GlobalKeyT = Aws::String, typename GlobalValueT = Aws::String>
  ExecutionEnvironmentVariables& AddGlobal(GlobalKeyT&& key, GlobalValueT&& value) {
    m_globalHasBeenSet = true;
    m_global.emplace(std::forward<GlobalKeyT>(key), std::forward<GlobalValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-compute-node environment variable overrides. Each entry maps a compute
   * node name to its environment variable overrides.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetComputeNodes() const { return m_computeNodes; }
  inline bool ComputeNodesHasBeenSet() const { return m_computeNodesHasBeenSet; }
  template <typename ComputeNodesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  void SetComputeNodes(ComputeNodesT&& value) {
    m_computeNodesHasBeenSet = true;
    m_computeNodes = std::forward<ComputeNodesT>(value);
  }
  template <typename ComputeNodesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  ExecutionEnvironmentVariables& WithComputeNodes(ComputeNodesT&& value) {
    SetComputeNodes(std::forward<ComputeNodesT>(value));
    return *this;
  }
  template <typename ComputeNodesKeyT = Aws::String, typename ComputeNodesValueT = Aws::Map<Aws::String, Aws::String>>
  ExecutionEnvironmentVariables& AddComputeNodes(ComputeNodesKeyT&& key, ComputeNodesValueT&& value) {
    m_computeNodesHasBeenSet = true;
    m_computeNodes.emplace(std::forward<ComputeNodesKeyT>(key), std::forward<ComputeNodesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_global;

  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_computeNodes;
  bool m_globalHasBeenSet = false;
  bool m_computeNodesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
