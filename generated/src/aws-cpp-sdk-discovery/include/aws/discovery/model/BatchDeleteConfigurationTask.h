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
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The deletion task's unique identifier. </p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    BatchDeleteConfigurationTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current execution status of the deletion task. Valid status are:
     * INITIALIZING | VALIDATING | DELETING | COMPLETED | FAILED. </p>
     */
    inline BatchDeleteConfigurationTaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BatchDeleteConfigurationTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchDeleteConfigurationTask& WithStatus(BatchDeleteConfigurationTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An epoch seconds timestamp (UTC) of when the deletion task was started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    BatchDeleteConfigurationTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An epoch seconds timestamp (UTC) of when the deletion task was completed or
     * failed. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    BatchDeleteConfigurationTask& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline DeletionConfigurationItemType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(DeletionConfigurationItemType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline BatchDeleteConfigurationTask& WithConfigurationType(DeletionConfigurationItemType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of configuration IDs that were originally requested to be deleted
     * by the deletion task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedConfigurations() const { return m_requestedConfigurations; }
    inline bool RequestedConfigurationsHasBeenSet() const { return m_requestedConfigurationsHasBeenSet; }
    template<typename RequestedConfigurationsT = Aws::Vector<Aws::String>>
    void SetRequestedConfigurations(RequestedConfigurationsT&& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations = std::forward<RequestedConfigurationsT>(value); }
    template<typename RequestedConfigurationsT = Aws::Vector<Aws::String>>
    BatchDeleteConfigurationTask& WithRequestedConfigurations(RequestedConfigurationsT&& value) { SetRequestedConfigurations(std::forward<RequestedConfigurationsT>(value)); return *this;}
    template<typename RequestedConfigurationsT = Aws::String>
    BatchDeleteConfigurationTask& AddRequestedConfigurations(RequestedConfigurationsT&& value) { m_requestedConfigurationsHasBeenSet = true; m_requestedConfigurations.emplace_back(std::forward<RequestedConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of configuration IDs that were successfully deleted by the deletion
     * task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedConfigurations() const { return m_deletedConfigurations; }
    inline bool DeletedConfigurationsHasBeenSet() const { return m_deletedConfigurationsHasBeenSet; }
    template<typename DeletedConfigurationsT = Aws::Vector<Aws::String>>
    void SetDeletedConfigurations(DeletedConfigurationsT&& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations = std::forward<DeletedConfigurationsT>(value); }
    template<typename DeletedConfigurationsT = Aws::Vector<Aws::String>>
    BatchDeleteConfigurationTask& WithDeletedConfigurations(DeletedConfigurationsT&& value) { SetDeletedConfigurations(std::forward<DeletedConfigurationsT>(value)); return *this;}
    template<typename DeletedConfigurationsT = Aws::String>
    BatchDeleteConfigurationTask& AddDeletedConfigurations(DeletedConfigurationsT&& value) { m_deletedConfigurationsHasBeenSet = true; m_deletedConfigurations.emplace_back(std::forward<DeletedConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of configuration IDs that failed to delete during the deletion task,
     * each paired with an error message. </p>
     */
    inline const Aws::Vector<FailedConfiguration>& GetFailedConfigurations() const { return m_failedConfigurations; }
    inline bool FailedConfigurationsHasBeenSet() const { return m_failedConfigurationsHasBeenSet; }
    template<typename FailedConfigurationsT = Aws::Vector<FailedConfiguration>>
    void SetFailedConfigurations(FailedConfigurationsT&& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations = std::forward<FailedConfigurationsT>(value); }
    template<typename FailedConfigurationsT = Aws::Vector<FailedConfiguration>>
    BatchDeleteConfigurationTask& WithFailedConfigurations(FailedConfigurationsT&& value) { SetFailedConfigurations(std::forward<FailedConfigurationsT>(value)); return *this;}
    template<typename FailedConfigurationsT = FailedConfiguration>
    BatchDeleteConfigurationTask& AddFailedConfigurations(FailedConfigurationsT&& value) { m_failedConfigurationsHasBeenSet = true; m_failedConfigurations.emplace_back(std::forward<FailedConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of configuration IDs that produced warnings regarding their deletion,
     * paired with a warning message. </p>
     */
    inline const Aws::Vector<DeletionWarning>& GetDeletionWarnings() const { return m_deletionWarnings; }
    inline bool DeletionWarningsHasBeenSet() const { return m_deletionWarningsHasBeenSet; }
    template<typename DeletionWarningsT = Aws::Vector<DeletionWarning>>
    void SetDeletionWarnings(DeletionWarningsT&& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings = std::forward<DeletionWarningsT>(value); }
    template<typename DeletionWarningsT = Aws::Vector<DeletionWarning>>
    BatchDeleteConfigurationTask& WithDeletionWarnings(DeletionWarningsT&& value) { SetDeletionWarnings(std::forward<DeletionWarningsT>(value)); return *this;}
    template<typename DeletionWarningsT = DeletionWarning>
    BatchDeleteConfigurationTask& AddDeletionWarnings(DeletionWarningsT&& value) { m_deletionWarningsHasBeenSet = true; m_deletionWarnings.emplace_back(std::forward<DeletionWarningsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    BatchDeleteConfigurationTaskStatus m_status{BatchDeleteConfigurationTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    DeletionConfigurationItemType m_configurationType{DeletionConfigurationItemType::NOT_SET};
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
