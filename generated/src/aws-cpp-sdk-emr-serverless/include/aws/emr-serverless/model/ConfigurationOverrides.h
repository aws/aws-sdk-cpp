/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/Configuration.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>A configuration specification to be used to override existing
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class ConfigurationOverrides
  {
  public:
    AWS_EMRSERVERLESS_API ConfigurationOverrides() = default;
    AWS_EMRSERVERLESS_API ConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The override configurations for the application.</p>
     */
    inline const Aws::Vector<Configuration>& GetApplicationConfiguration() const { return m_applicationConfiguration; }
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }
    template<typename ApplicationConfigurationT = Aws::Vector<Configuration>>
    void SetApplicationConfiguration(ApplicationConfigurationT&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::forward<ApplicationConfigurationT>(value); }
    template<typename ApplicationConfigurationT = Aws::Vector<Configuration>>
    ConfigurationOverrides& WithApplicationConfiguration(ApplicationConfigurationT&& value) { SetApplicationConfiguration(std::forward<ApplicationConfigurationT>(value)); return *this;}
    template<typename ApplicationConfigurationT = Configuration>
    ConfigurationOverrides& AddApplicationConfiguration(ApplicationConfigurationT&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration.emplace_back(std::forward<ApplicationConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The override configurations for monitoring.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    void SetMonitoringConfiguration(MonitoringConfigurationT&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value); }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    ConfigurationOverrides& WithMonitoringConfiguration(MonitoringConfigurationT&& value) { SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Configuration> m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
