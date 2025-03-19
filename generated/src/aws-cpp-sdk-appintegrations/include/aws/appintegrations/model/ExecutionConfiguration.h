/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ExecutionMode.h>
#include <aws/appintegrations/model/OnDemandConfiguration.h>
#include <aws/appintegrations/model/ScheduleConfiguration.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The configuration for how the files should be pulled from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ExecutionConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecutionConfiguration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration() = default;
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode for data import/export execution.</p>
     */
    inline ExecutionMode GetExecutionMode() const { return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(ExecutionMode value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline ExecutionConfiguration& WithExecutionMode(ExecutionMode value) { SetExecutionMode(value); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandConfiguration& GetOnDemandConfiguration() const { return m_onDemandConfiguration; }
    inline bool OnDemandConfigurationHasBeenSet() const { return m_onDemandConfigurationHasBeenSet; }
    template<typename OnDemandConfigurationT = OnDemandConfiguration>
    void SetOnDemandConfiguration(OnDemandConfigurationT&& value) { m_onDemandConfigurationHasBeenSet = true; m_onDemandConfiguration = std::forward<OnDemandConfigurationT>(value); }
    template<typename OnDemandConfigurationT = OnDemandConfiguration>
    ExecutionConfiguration& WithOnDemandConfiguration(OnDemandConfigurationT&& value) { SetOnDemandConfiguration(std::forward<OnDemandConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    ExecutionConfiguration& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}
  private:

    ExecutionMode m_executionMode{ExecutionMode::NOT_SET};
    bool m_executionModeHasBeenSet = false;

    OnDemandConfiguration m_onDemandConfiguration;
    bool m_onDemandConfigurationHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
