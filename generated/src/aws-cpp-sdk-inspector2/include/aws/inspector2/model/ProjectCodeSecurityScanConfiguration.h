/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ProjectPeriodicScanConfiguration.h>
#include <aws/inspector2/model/ProjectContinuousIntegrationScanConfiguration.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains the scan configuration settings applied to a specific project in a
   * code repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProjectCodeSecurityScanConfiguration">AWS
   * API Reference</a></p>
   */
  class ProjectCodeSecurityScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API ProjectCodeSecurityScanConfiguration() = default;
    AWS_INSPECTOR2_API ProjectCodeSecurityScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ProjectCodeSecurityScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The periodic scan configurations applied to the project.</p>
     */
    inline const Aws::Vector<ProjectPeriodicScanConfiguration>& GetPeriodicScanConfigurations() const { return m_periodicScanConfigurations; }
    inline bool PeriodicScanConfigurationsHasBeenSet() const { return m_periodicScanConfigurationsHasBeenSet; }
    template<typename PeriodicScanConfigurationsT = Aws::Vector<ProjectPeriodicScanConfiguration>>
    void SetPeriodicScanConfigurations(PeriodicScanConfigurationsT&& value) { m_periodicScanConfigurationsHasBeenSet = true; m_periodicScanConfigurations = std::forward<PeriodicScanConfigurationsT>(value); }
    template<typename PeriodicScanConfigurationsT = Aws::Vector<ProjectPeriodicScanConfiguration>>
    ProjectCodeSecurityScanConfiguration& WithPeriodicScanConfigurations(PeriodicScanConfigurationsT&& value) { SetPeriodicScanConfigurations(std::forward<PeriodicScanConfigurationsT>(value)); return *this;}
    template<typename PeriodicScanConfigurationsT = ProjectPeriodicScanConfiguration>
    ProjectCodeSecurityScanConfiguration& AddPeriodicScanConfigurations(PeriodicScanConfigurationsT&& value) { m_periodicScanConfigurationsHasBeenSet = true; m_periodicScanConfigurations.emplace_back(std::forward<PeriodicScanConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuous integration scan configurations applied to the project.</p>
     */
    inline const Aws::Vector<ProjectContinuousIntegrationScanConfiguration>& GetContinuousIntegrationScanConfigurations() const { return m_continuousIntegrationScanConfigurations; }
    inline bool ContinuousIntegrationScanConfigurationsHasBeenSet() const { return m_continuousIntegrationScanConfigurationsHasBeenSet; }
    template<typename ContinuousIntegrationScanConfigurationsT = Aws::Vector<ProjectContinuousIntegrationScanConfiguration>>
    void SetContinuousIntegrationScanConfigurations(ContinuousIntegrationScanConfigurationsT&& value) { m_continuousIntegrationScanConfigurationsHasBeenSet = true; m_continuousIntegrationScanConfigurations = std::forward<ContinuousIntegrationScanConfigurationsT>(value); }
    template<typename ContinuousIntegrationScanConfigurationsT = Aws::Vector<ProjectContinuousIntegrationScanConfiguration>>
    ProjectCodeSecurityScanConfiguration& WithContinuousIntegrationScanConfigurations(ContinuousIntegrationScanConfigurationsT&& value) { SetContinuousIntegrationScanConfigurations(std::forward<ContinuousIntegrationScanConfigurationsT>(value)); return *this;}
    template<typename ContinuousIntegrationScanConfigurationsT = ProjectContinuousIntegrationScanConfiguration>
    ProjectCodeSecurityScanConfiguration& AddContinuousIntegrationScanConfigurations(ContinuousIntegrationScanConfigurationsT&& value) { m_continuousIntegrationScanConfigurationsHasBeenSet = true; m_continuousIntegrationScanConfigurations.emplace_back(std::forward<ContinuousIntegrationScanConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProjectPeriodicScanConfiguration> m_periodicScanConfigurations;
    bool m_periodicScanConfigurationsHasBeenSet = false;

    Aws::Vector<ProjectContinuousIntegrationScanConfiguration> m_continuousIntegrationScanConfigurations;
    bool m_continuousIntegrationScanConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
