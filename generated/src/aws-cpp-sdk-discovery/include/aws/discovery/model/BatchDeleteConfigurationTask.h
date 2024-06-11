/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/BatchDeleteConfigurationTaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/DeletionConfigurationItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/FailedConfiguration.h>
#include <aws/discovery/model/DeletionWarning.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> A metadata object that represents the deletion task being executed.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteConfigurationTask">AWS
   * API Reference</a></p>
   */
  class BatchDeleteConfigurationTask
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask();
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The deletion task's unique identifier. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline BatchDeleteConfigurationTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline BatchDeleteConfigurationTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline BatchDeleteConfigurationTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current execution status of the deletion task. Valid status are:
     * INITIALIZING | VALIDATING | DELETING | COMPLETED | FAILED. </p>
     */
    inline const BatchDeleteConfigurationTaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BatchDeleteConfigurationTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BatchDeleteConfigurationTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BatchDeleteConfigurationTask& WithStatus(const BatchDeleteConfigurationTaskStatus& value) { SetStatus(value); return *this;}
    inline BatchDeleteConfigurationTask& WithStatus(BatchDeleteConfigurationTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An epoch seconds timestamp (UTC) of when the deletion task was started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline BatchDeleteConfigurationTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline BatchDeleteConfigurationTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An epoch seconds timestamp (UTC) of when the deletion task was completed or
     * failed. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline BatchDeleteConfigurationTask& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline BatchDeleteConfigurationTask& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline const DeletionConfigurationItemType& GetConfigurationType() const{ return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(const DeletionConfigurationItemType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline void SetConfigurationType(DeletionConfigurationItemType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }
    inline BatchDeleteConfigurationTask& WithConfigurationType(const DeletionConfigurationItemType& value) { SetConfigurationType(value); return *this;}
    inline BatchDeleteConfigurationTask& WithConfigurationType(DeletionConfigurationItemType&& value) { SetConfigurationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of configuration IDs that were originally requested to be deleted
     * by the deletion task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedConfigurations() const{ return m_requestedConfigurations; }
    inline bool RequestedConfigurationsHasBeenSet() const { return m_requestedConfigurationsHasBeenSet; }
    inline void SetRequestedConfigurations(const Aws::Vector<Aws::String>& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations = value; }
    inline void SetRequestedConfigurations(Aws::Vector<Aws::String>&& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations = std::move(value); }
    inline BatchDeleteConfigurationTask& WithRequestedConfigurations(const Aws::Vector<Aws::String>& value) { SetRequestedConfigurations(value); return *this;}
    inline BatchDeleteConfigurationTask& WithRequestedConfigurations(Aws::Vector<Aws::String>&& value) { SetRequestedConfigurations(std::move(value)); return *this;}
    inline BatchDeleteConfigurationTask& AddRequestedConfigurations(const Aws::String& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations.push_back(value); return *this; }
    inline BatchDeleteConfigurationTask& AddRequestedConfigurations(Aws::String&& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations.push_back(std::move(value)); return *this; }
    inline BatchDeleteConfigurationTask& AddRequestedConfigurations(const char* value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of configuration IDs that were successfully deleted by the deletion
     * task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedConfigurations() const{ return m_deletedConfigurations; }
    inline bool DeletedConfigurationsHasBeenSet() const { return m_deletedConfigurationsHasBeenSet; }
    inline void SetDeletedConfigurations(const Aws::Vector<Aws::String>& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations = value; }
    inline void SetDeletedConfigurations(Aws::Vector<Aws::String>&& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations = std::move(value); }
    inline BatchDeleteConfigurationTask& WithDeletedConfigurations(const Aws::Vector<Aws::String>& value) { SetDeletedConfigurations(value); return *this;}
    inline BatchDeleteConfigurationTask& WithDeletedConfigurations(Aws::Vector<Aws::String>&& value) { SetDeletedConfigurations(std::move(value)); return *this;}
    inline BatchDeleteConfigurationTask& AddDeletedConfigurations(const Aws::String& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations.push_back(value); return *this; }
    inline BatchDeleteConfigurationTask& AddDeletedConfigurations(Aws::String&& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations.push_back(std::move(value)); return *this; }
    inline BatchDeleteConfigurationTask& AddDeletedConfigurations(const char* value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of configuration IDs that failed to delete during the deletion task,
     * each paired with an error message. </p>
     */
    inline const Aws::Vector<FailedConfiguration>& GetFailedConfigurations() const{ return m_failedConfigurations; }
    inline bool FailedConfigurationsHasBeenSet() const { return m_failedConfigurationsHasBeenSet; }
    inline void SetFailedConfigurations(const Aws::Vector<FailedConfiguration>& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations = value; }
    inline void SetFailedConfigurations(Aws::Vector<FailedConfiguration>&& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations = std::move(value); }
    inline BatchDeleteConfigurationTask& WithFailedConfigurations(const Aws::Vector<FailedConfiguration>& value) { SetFailedConfigurations(value); return *this;}
    inline BatchDeleteConfigurationTask& WithFailedConfigurations(Aws::Vector<FailedConfiguration>&& value) { SetFailedConfigurations(std::move(value)); return *this;}
    inline BatchDeleteConfigurationTask& AddFailedConfigurations(const FailedConfiguration& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations.push_back(value); return *this; }
    inline BatchDeleteConfigurationTask& AddFailedConfigurations(FailedConfiguration&& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of configuration IDs that produced warnings regarding their deletion,
     * paired with a warning message. </p>
     */
    inline const Aws::Vector<DeletionWarning>& GetDeletionWarnings() const{ return m_deletionWarnings; }
    inline bool DeletionWarningsHasBeenSet() const { return m_deletionWarningsHasBeenSet; }
    inline void SetDeletionWarnings(const Aws::Vector<DeletionWarning>& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings = value; }
    inline void SetDeletionWarnings(Aws::Vector<DeletionWarning>&& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings = std::move(value); }
    inline BatchDeleteConfigurationTask& WithDeletionWarnings(const Aws::Vector<DeletionWarning>& value) { SetDeletionWarnings(value); return *this;}
    inline BatchDeleteConfigurationTask& WithDeletionWarnings(Aws::Vector<DeletionWarning>&& value) { SetDeletionWarnings(std::move(value)); return *this;}
    inline BatchDeleteConfigurationTask& AddDeletionWarnings(const DeletionWarning& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings.push_back(value); return *this; }
    inline BatchDeleteConfigurationTask& AddDeletionWarnings(DeletionWarning&& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    BatchDeleteConfigurationTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    DeletionConfigurationItemType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedConfigurations;
    bool m_requestedConfigurationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_deletedConfigurations;
    bool m_deletedConfigurationsHasBeenSet = false;

    Aws::Vector<FailedConfiguration> m_failedConfigurations;
    bool m_failedConfigurationsHasBeenSet = false;

    Aws::Vector<DeletionWarning> m_deletionWarnings;
    bool m_deletionWarningsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
