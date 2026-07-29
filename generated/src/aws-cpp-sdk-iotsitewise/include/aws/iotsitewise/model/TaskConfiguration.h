/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ContainerTaskConfiguration.h>

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
 * <p>The task execution configuration. Specify a <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ContainerTaskConfiguration.html">containerTaskConfiguration</a>
 * for a custom container workload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TaskConfiguration">AWS
 * API Reference</a></p>
 */
class TaskConfiguration {
 public:
  AWS_IOTSITEWISE_API TaskConfiguration() = default;
  AWS_IOTSITEWISE_API TaskConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API TaskConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for running a custom container image on managed compute.</p>
   */
  inline const ContainerTaskConfiguration& GetContainerTaskConfiguration() const { return m_containerTaskConfiguration; }
  inline bool ContainerTaskConfigurationHasBeenSet() const { return m_containerTaskConfigurationHasBeenSet; }
  template <typename ContainerTaskConfigurationT = ContainerTaskConfiguration>
  void SetContainerTaskConfiguration(ContainerTaskConfigurationT&& value) {
    m_containerTaskConfigurationHasBeenSet = true;
    m_containerTaskConfiguration = std::forward<ContainerTaskConfigurationT>(value);
  }
  template <typename ContainerTaskConfigurationT = ContainerTaskConfiguration>
  TaskConfiguration& WithContainerTaskConfiguration(ContainerTaskConfigurationT&& value) {
    SetContainerTaskConfiguration(std::forward<ContainerTaskConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ContainerTaskConfiguration m_containerTaskConfiguration;
  bool m_containerTaskConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
