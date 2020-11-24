/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/ModuleLoggingConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API LoggingConfiguration
  {
  public:
    LoggingConfiguration();
    LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ModuleLoggingConfiguration& GetDagProcessingLogs() const{ return m_dagProcessingLogs; }

    
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }

    
    inline void SetDagProcessingLogs(const ModuleLoggingConfiguration& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = value; }

    
    inline void SetDagProcessingLogs(ModuleLoggingConfiguration&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::move(value); }

    
    inline LoggingConfiguration& WithDagProcessingLogs(const ModuleLoggingConfiguration& value) { SetDagProcessingLogs(value); return *this;}

    
    inline LoggingConfiguration& WithDagProcessingLogs(ModuleLoggingConfiguration&& value) { SetDagProcessingLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfiguration& GetSchedulerLogs() const{ return m_schedulerLogs; }

    
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }

    
    inline void SetSchedulerLogs(const ModuleLoggingConfiguration& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = value; }

    
    inline void SetSchedulerLogs(ModuleLoggingConfiguration&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::move(value); }

    
    inline LoggingConfiguration& WithSchedulerLogs(const ModuleLoggingConfiguration& value) { SetSchedulerLogs(value); return *this;}

    
    inline LoggingConfiguration& WithSchedulerLogs(ModuleLoggingConfiguration&& value) { SetSchedulerLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfiguration& GetTaskLogs() const{ return m_taskLogs; }

    
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }

    
    inline void SetTaskLogs(const ModuleLoggingConfiguration& value) { m_taskLogsHasBeenSet = true; m_taskLogs = value; }

    
    inline void SetTaskLogs(ModuleLoggingConfiguration&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::move(value); }

    
    inline LoggingConfiguration& WithTaskLogs(const ModuleLoggingConfiguration& value) { SetTaskLogs(value); return *this;}

    
    inline LoggingConfiguration& WithTaskLogs(ModuleLoggingConfiguration&& value) { SetTaskLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfiguration& GetWebserverLogs() const{ return m_webserverLogs; }

    
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }

    
    inline void SetWebserverLogs(const ModuleLoggingConfiguration& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = value; }

    
    inline void SetWebserverLogs(ModuleLoggingConfiguration&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::move(value); }

    
    inline LoggingConfiguration& WithWebserverLogs(const ModuleLoggingConfiguration& value) { SetWebserverLogs(value); return *this;}

    
    inline LoggingConfiguration& WithWebserverLogs(ModuleLoggingConfiguration&& value) { SetWebserverLogs(std::move(value)); return *this;}


    
    inline const ModuleLoggingConfiguration& GetWorkerLogs() const{ return m_workerLogs; }

    
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }

    
    inline void SetWorkerLogs(const ModuleLoggingConfiguration& value) { m_workerLogsHasBeenSet = true; m_workerLogs = value; }

    
    inline void SetWorkerLogs(ModuleLoggingConfiguration&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::move(value); }

    
    inline LoggingConfiguration& WithWorkerLogs(const ModuleLoggingConfiguration& value) { SetWorkerLogs(value); return *this;}

    
    inline LoggingConfiguration& WithWorkerLogs(ModuleLoggingConfiguration&& value) { SetWorkerLogs(std::move(value)); return *this;}

  private:

    ModuleLoggingConfiguration m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet;

    ModuleLoggingConfiguration m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet;

    ModuleLoggingConfiguration m_taskLogs;
    bool m_taskLogsHasBeenSet;

    ModuleLoggingConfiguration m_webserverLogs;
    bool m_webserverLogsHasBeenSet;

    ModuleLoggingConfiguration m_workerLogs;
    bool m_workerLogsHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
