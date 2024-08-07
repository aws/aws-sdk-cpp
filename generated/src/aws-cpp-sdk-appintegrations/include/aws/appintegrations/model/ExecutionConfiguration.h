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
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration();
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode for data import/export execution.</p>
     */
    inline const ExecutionMode& GetExecutionMode() const{ return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(const ExecutionMode& value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline void SetExecutionMode(ExecutionMode&& value) { m_executionModeHasBeenSet = true; m_executionMode = std::move(value); }
    inline ExecutionConfiguration& WithExecutionMode(const ExecutionMode& value) { SetExecutionMode(value); return *this;}
    inline ExecutionConfiguration& WithExecutionMode(ExecutionMode&& value) { SetExecutionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandConfiguration& GetOnDemandConfiguration() const{ return m_onDemandConfiguration; }
    inline bool OnDemandConfigurationHasBeenSet() const { return m_onDemandConfigurationHasBeenSet; }
    inline void SetOnDemandConfiguration(const OnDemandConfiguration& value) { m_onDemandConfigurationHasBeenSet = true; m_onDemandConfiguration = value; }
    inline void SetOnDemandConfiguration(OnDemandConfiguration&& value) { m_onDemandConfigurationHasBeenSet = true; m_onDemandConfiguration = std::move(value); }
    inline ExecutionConfiguration& WithOnDemandConfiguration(const OnDemandConfiguration& value) { SetOnDemandConfiguration(value); return *this;}
    inline ExecutionConfiguration& WithOnDemandConfiguration(OnDemandConfiguration&& value) { SetOnDemandConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline ExecutionConfiguration& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline ExecutionConfiguration& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ExecutionMode m_executionMode;
    bool m_executionModeHasBeenSet = false;

    OnDemandConfiguration m_onDemandConfiguration;
    bool m_onDemandConfigurationHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
