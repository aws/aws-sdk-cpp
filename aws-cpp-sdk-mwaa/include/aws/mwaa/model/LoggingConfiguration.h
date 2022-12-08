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
   * <p>Describes the Apache Airflow log types that are published to CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_MWAA_API LoggingConfiguration();
    AWS_MWAA_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetDagProcessingLogs() const{ return m_dagProcessingLogs; }

    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline bool DagProcessingLogsHasBeenSet() const { return m_dagProcessingLogsHasBeenSet; }

    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetDagProcessingLogs(const ModuleLoggingConfiguration& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = value; }

    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetDagProcessingLogs(ModuleLoggingConfiguration&& value) { m_dagProcessingLogsHasBeenSet = true; m_dagProcessingLogs = std::move(value); }

    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithDagProcessingLogs(const ModuleLoggingConfiguration& value) { SetDagProcessingLogs(value); return *this;}

    /**
     * <p>The Airflow DAG processing logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithDagProcessingLogs(ModuleLoggingConfiguration&& value) { SetDagProcessingLogs(std::move(value)); return *this;}


    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetSchedulerLogs() const{ return m_schedulerLogs; }

    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline bool SchedulerLogsHasBeenSet() const { return m_schedulerLogsHasBeenSet; }

    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetSchedulerLogs(const ModuleLoggingConfiguration& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = value; }

    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetSchedulerLogs(ModuleLoggingConfiguration&& value) { m_schedulerLogsHasBeenSet = true; m_schedulerLogs = std::move(value); }

    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithSchedulerLogs(const ModuleLoggingConfiguration& value) { SetSchedulerLogs(value); return *this;}

    /**
     * <p>The Airflow scheduler logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithSchedulerLogs(ModuleLoggingConfiguration&& value) { SetSchedulerLogs(std::move(value)); return *this;}


    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline const ModuleLoggingConfiguration& GetTaskLogs() const{ return m_taskLogs; }

    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline bool TaskLogsHasBeenSet() const { return m_taskLogsHasBeenSet; }

    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline void SetTaskLogs(const ModuleLoggingConfiguration& value) { m_taskLogsHasBeenSet = true; m_taskLogs = value; }

    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline void SetTaskLogs(ModuleLoggingConfiguration&& value) { m_taskLogsHasBeenSet = true; m_taskLogs = std::move(value); }

    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline LoggingConfiguration& WithTaskLogs(const ModuleLoggingConfiguration& value) { SetTaskLogs(value); return *this;}

    /**
     * <p>The Airflow task logs published to CloudWatch Logs and the log level.</p>
     */
    inline LoggingConfiguration& WithTaskLogs(ModuleLoggingConfiguration&& value) { SetTaskLogs(std::move(value)); return *this;}


    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline const ModuleLoggingConfiguration& GetWebserverLogs() const{ return m_webserverLogs; }

    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline bool WebserverLogsHasBeenSet() const { return m_webserverLogsHasBeenSet; }

    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetWebserverLogs(const ModuleLoggingConfiguration& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = value; }

    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline void SetWebserverLogs(ModuleLoggingConfiguration&& value) { m_webserverLogsHasBeenSet = true; m_webserverLogs = std::move(value); }

    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithWebserverLogs(const ModuleLoggingConfiguration& value) { SetWebserverLogs(value); return *this;}

    /**
     * <p>The Airflow web server logs published to CloudWatch Logs and the log
     * level.</p>
     */
    inline LoggingConfiguration& WithWebserverLogs(ModuleLoggingConfiguration&& value) { SetWebserverLogs(std::move(value)); return *this;}


    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline const ModuleLoggingConfiguration& GetWorkerLogs() const{ return m_workerLogs; }

    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline bool WorkerLogsHasBeenSet() const { return m_workerLogsHasBeenSet; }

    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline void SetWorkerLogs(const ModuleLoggingConfiguration& value) { m_workerLogsHasBeenSet = true; m_workerLogs = value; }

    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline void SetWorkerLogs(ModuleLoggingConfiguration&& value) { m_workerLogsHasBeenSet = true; m_workerLogs = std::move(value); }

    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline LoggingConfiguration& WithWorkerLogs(const ModuleLoggingConfiguration& value) { SetWorkerLogs(value); return *this;}

    /**
     * <p>The Airflow worker logs published to CloudWatch Logs and the log level.</p>
     */
    inline LoggingConfiguration& WithWorkerLogs(ModuleLoggingConfiguration&& value) { SetWorkerLogs(std::move(value)); return *this;}

  private:

    ModuleLoggingConfiguration m_dagProcessingLogs;
    bool m_dagProcessingLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_schedulerLogs;
    bool m_schedulerLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_taskLogs;
    bool m_taskLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_webserverLogs;
    bool m_webserverLogsHasBeenSet = false;

    ModuleLoggingConfiguration m_workerLogs;
    bool m_workerLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
