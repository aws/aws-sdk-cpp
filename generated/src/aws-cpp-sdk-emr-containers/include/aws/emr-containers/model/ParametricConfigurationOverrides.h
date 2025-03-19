/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/model/ParametricMonitoringConfiguration.h>
#include <aws/emr-containers/model/Configuration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRContainers
{
namespace Model
{

  /**
   * <p> A configuration specification to be used to override existing
   * configurations. This data type allows job template parameters to be specified
   * within.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ParametricConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class ParametricConfigurationOverrides
  {
  public:
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides() = default;
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline const Aws::Vector<Configuration>& GetApplicationConfiguration() const { return m_applicationConfiguration; }
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }
    template<typename ApplicationConfigurationT = Aws::Vector<Configuration>>
    void SetApplicationConfiguration(ApplicationConfigurationT&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::forward<ApplicationConfigurationT>(value); }
    template<typename ApplicationConfigurationT = Aws::Vector<Configuration>>
    ParametricConfigurationOverrides& WithApplicationConfiguration(ApplicationConfigurationT&& value) { SetApplicationConfiguration(std::forward<ApplicationConfigurationT>(value)); return *this;}
    template<typename ApplicationConfigurationT = Configuration>
    ParametricConfigurationOverrides& AddApplicationConfiguration(ApplicationConfigurationT&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration.emplace_back(std::forward<ApplicationConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configurations for monitoring. </p>
     */
    inline const ParametricMonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    template<typename MonitoringConfigurationT = ParametricMonitoringConfiguration>
    void SetMonitoringConfiguration(MonitoringConfigurationT&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value); }
    template<typename MonitoringConfigurationT = ParametricMonitoringConfiguration>
    ParametricConfigurationOverrides& WithMonitoringConfiguration(MonitoringConfigurationT&& value) { SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Configuration> m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet = false;

    ParametricMonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
