/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/ModuleLoggingConfigurationInput.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>The Logging Configuration of your Amazon MWAA environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LoggingConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API LoggingConfigurationInput
  {
  public:
    LoggingConfigurationInput();
    LoggingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ModuleLoggingConfigurationInput& GetDagProcessingLogs() const{ return m_dagProcessingLogs; }

    
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }

    
    inline void SetDagProcessingLogs(const ModuleLoggingConfigurationInput& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = value; }

    
    inline void SetDagProcessingLogs(ModuleLoggingConfigurationInput&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::move(value); }

    
    inline LoggingConfigurationInput& WithDagProcessingLogs(const ModuleLoggingConfigurationInput& value) { SetDagProcessingLogs(value); return *this;}

    
    inline LoggingConfigurationInput& WithDagProcessingLogs(ModuleLoggingConfigurationInput&& value) { SetDagProcessingLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfigurationInput& GetSchedulerLogs() const{ return m_schedulerLogs; }

    
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }

    
    inline void SetSchedulerLogs(const ModuleLoggingConfigurationInput& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = value; }

    
    inline void SetSchedulerLogs(ModuleLoggingConfigurationInput&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::move(value); }

    
    inline LoggingConfigurationInput& WithSchedulerLogs(const ModuleLoggingConfigurationInput& value) { SetSchedulerLogs(value); return *this;}

    
    inline LoggingConfigurationInput& WithSchedulerLogs(ModuleLoggingConfigurationInput&& value) { SetSchedulerLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfigurationInput& GetTaskLogs() const{ return m_taskLogs; }

    
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }

    
    inline void SetTaskLogs(const ModuleLoggingConfigurationInput& value) { m_taskLogsHasBeenSet = true; m_taskLogs = value; }

    
    inline void SetTaskLogs(ModuleLoggingConfigurationInput&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::move(value); }

    
    inline LoggingConfigurationInput& WithTaskLogs(const ModuleLoggingConfigurationInput& value) { SetTaskLogs(value); return *this;}

    
    inline LoggingConfigurationInput& WithTaskLogs(ModuleLoggingConfigurationInput&& value) { SetTaskLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfigurationInput& GetWebserverLogs() const{ return m_webserverLogs; }

    
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }

    
    inline void SetWebserverLogs(const ModuleLoggingConfigurationInput& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = value; }

    
    inline void SetWebserverLogs(ModuleLoggingConfigurationInput&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::move(value); }

    
    inline LoggingConfigurationInput& WithWebserverLogs(const ModuleLoggingConfigurationInput& value) { SetWebserverLogs(value); return *this;}

    
    inline LoggingConfigurationInput& WithWebserverLogs(ModuleLoggingConfigurationInput&& value) { SetWebserverLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfigurationInput& GetWorkerLogs() const{ return m_workerLogs; }

    
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }

    
    inline void SetWorkerLogs(const ModuleLoggingConfigurationInput& value) { m_workerLogsHasBeenSet = true; m_workerLogs = value; }

    
    inline void SetWorkerLogs(ModuleLoggingConfigurationInput&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::move(value); }

    
    inline LoggingConfigurationInput& WithWorkerLogs(const ModuleLoggingConfigurationInput& value) { SetWorkerLogs(value); return *this;}

    
    inline LoggingConfigurationInput& WithWorkerLogs(ModuleLoggingConfigurationInput&& value) { SetWorkerLogs(std::move(value)); return *this;}

  private:

    ModuleLoggingConfigurationInput m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet;

    ModuleLoggingConfigurationInput m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet;

    ModuleLoggingConfigurationInput m_taskLogs;
    bool m_taskLogsHasBeenSet;

    ModuleLoggingConfigurationInput m_webserverLogs;
    bool m_webserverLogsHasBeenSet;

    ModuleLoggingConfigurationInput m_workerLogs;
    bool m_workerLogsHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
