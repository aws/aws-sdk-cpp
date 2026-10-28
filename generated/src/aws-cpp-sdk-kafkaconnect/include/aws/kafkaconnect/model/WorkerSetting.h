/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CapacityDescription.h>
#include <aws/kafkaconnect/model/PluginDescription.h>
#include <aws/kafkaconnect/model/WorkerConfigurationDescription.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KafkaConnect {
namespace Model {

/**
 * <p>Details about worker setting of a connector</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerSetting">AWS
 * API Reference</a></p>
 */
class WorkerSetting {
 public:
  AWS_KAFKACONNECT_API WorkerSetting() = default;
  AWS_KAFKACONNECT_API WorkerSetting(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKACONNECT_API WorkerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the compute capacity settings of the connector.</p>
   */
  inline const CapacityDescription& GetCapacity() const { return m_capacity; }
  inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
  template <typename CapacityT = CapacityDescription>
  void SetCapacity(CapacityT&& value) {
    m_capacityHasBeenSet = true;
    m_capacity = std::forward<CapacityT>(value);
  }
  template <typename CapacityT = CapacityDescription>
  WorkerSetting& WithCapacity(CapacityT&& value) {
    SetCapacity(std::forward<CapacityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which plugins the connector uses.</p>
   */
  inline const Aws::Vector<PluginDescription>& GetPlugins() const { return m_plugins; }
  inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
  template <typename PluginsT = Aws::Vector<PluginDescription>>
  void SetPlugins(PluginsT&& value) {
    m_pluginsHasBeenSet = true;
    m_plugins = std::forward<PluginsT>(value);
  }
  template <typename PluginsT = Aws::Vector<PluginDescription>>
  WorkerSetting& WithPlugins(PluginsT&& value) {
    SetPlugins(std::forward<PluginsT>(value));
    return *this;
  }
  template <typename PluginsT = PluginDescription>
  WorkerSetting& AddPlugins(PluginsT&& value) {
    m_pluginsHasBeenSet = true;
    m_plugins.emplace_back(std::forward<PluginsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which worker configuration the connector uses.</p>
   */
  inline const WorkerConfigurationDescription& GetWorkerConfiguration() const { return m_workerConfiguration; }
  inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
  template <typename WorkerConfigurationT = WorkerConfigurationDescription>
  void SetWorkerConfiguration(WorkerConfigurationT&& value) {
    m_workerConfigurationHasBeenSet = true;
    m_workerConfiguration = std::forward<WorkerConfigurationT>(value);
  }
  template <typename WorkerConfigurationT = WorkerConfigurationDescription>
  WorkerSetting& WithWorkerConfiguration(WorkerConfigurationT&& value) {
    SetWorkerConfiguration(std::forward<WorkerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the connector uses the default worker configuration instead
   * of a custom worker configuration.</p>
   */
  inline bool GetUseDefaultWorkerConfiguration() const { return m_useDefaultWorkerConfiguration; }
  inline bool UseDefaultWorkerConfigurationHasBeenSet() const { return m_useDefaultWorkerConfigurationHasBeenSet; }
  inline void SetUseDefaultWorkerConfiguration(bool value) {
    m_useDefaultWorkerConfigurationHasBeenSet = true;
    m_useDefaultWorkerConfiguration = value;
  }
  inline WorkerSetting& WithUseDefaultWorkerConfiguration(bool value) {
    SetUseDefaultWorkerConfiguration(value);
    return *this;
  }
  ///@}
 private:
  CapacityDescription m_capacity;

  Aws::Vector<PluginDescription> m_plugins;

  WorkerConfigurationDescription m_workerConfiguration;

  bool m_useDefaultWorkerConfiguration{false};
  bool m_capacityHasBeenSet = false;
  bool m_pluginsHasBeenSet = false;
  bool m_workerConfigurationHasBeenSet = false;
  bool m_useDefaultWorkerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
