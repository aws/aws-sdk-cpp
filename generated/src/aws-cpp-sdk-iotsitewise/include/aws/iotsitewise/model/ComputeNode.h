/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>A single compute node in a pipeline DAG. Each compute node references a task
 * and can declare dependencies on other nodes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputeNode">AWS
 * API Reference</a></p>
 */
class ComputeNode {
 public:
  AWS_IOTSITEWISE_API ComputeNode() = default;
  AWS_IOTSITEWISE_API ComputeNode(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ComputeNode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name for this compute node within the pipeline.</p>
   */
  inline const Aws::String& GetComputeNodeName() const { return m_computeNodeName; }
  inline bool ComputeNodeNameHasBeenSet() const { return m_computeNodeNameHasBeenSet; }
  template <typename ComputeNodeNameT = Aws::String>
  void SetComputeNodeName(ComputeNodeNameT&& value) {
    m_computeNodeNameHasBeenSet = true;
    m_computeNodeName = std::forward<ComputeNodeNameT>(value);
  }
  template <typename ComputeNodeNameT = Aws::String>
  ComputeNode& WithComputeNodeName(ComputeNodeNameT&& value) {
    SetComputeNodeName(std::forward<ComputeNodeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the task to execute for this compute node.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  ComputeNode& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables specific to this compute node. These override
   * pipeline-level environment variables with the same key.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  ComputeNode& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  ComputeNode& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of compute node names that must complete successfully before this node
   * can start.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDependsOn() const { return m_dependsOn; }
  inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  void SetDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn = std::forward<DependsOnT>(value);
  }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  ComputeNode& WithDependsOn(DependsOnT&& value) {
    SetDependsOn(std::forward<DependsOnT>(value));
    return *this;
  }
  template <typename DependsOnT = Aws::String>
  ComputeNode& AddDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn.emplace_back(std::forward<DependsOnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_computeNodeName;

  Aws::String m_taskName;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  Aws::Vector<Aws::String> m_dependsOn;
  bool m_computeNodeNameHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_dependsOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
