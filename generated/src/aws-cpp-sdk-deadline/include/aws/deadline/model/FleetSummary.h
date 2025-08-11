/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetStatus.h>
#include <aws/deadline/model/AutoScalingStatus.h>
#include <aws/deadline/model/FleetConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetSummary">AWS
   * API Reference</a></p>
   */
  class FleetSummary
  {
  public:
    AWS_DEADLINE_API FleetSummary() = default;
    AWS_DEADLINE_API FleetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    FleetSummary& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    FleetSummary& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the fleet summary to update.</p>  <p>This
     * field can store any content. Escape or encode this content before displaying it
     * on a webpage or any other system that might interpret the content of this
     * field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    FleetSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FleetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FleetSummary& WithStatus(FleetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates a suspended status of the fleet.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    FleetSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline AutoScalingStatus GetAutoScalingStatus() const { return m_autoScalingStatus; }
    inline bool AutoScalingStatusHasBeenSet() const { return m_autoScalingStatusHasBeenSet; }
    inline void SetAutoScalingStatus(AutoScalingStatus value) { m_autoScalingStatusHasBeenSet = true; m_autoScalingStatus = value; }
    inline FleetSummary& WithAutoScalingStatus(AutoScalingStatus value) { SetAutoScalingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target number of workers in a fleet.</p>
     */
    inline int GetTargetWorkerCount() const { return m_targetWorkerCount; }
    inline bool TargetWorkerCountHasBeenSet() const { return m_targetWorkerCountHasBeenSet; }
    inline void SetTargetWorkerCount(int value) { m_targetWorkerCountHasBeenSet = true; m_targetWorkerCount = value; }
    inline FleetSummary& WithTargetWorkerCount(int value) { SetTargetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers in the fleet summary.</p>
     */
    inline int GetWorkerCount() const { return m_workerCount; }
    inline bool WorkerCountHasBeenSet() const { return m_workerCountHasBeenSet; }
    inline void SetWorkerCount(int value) { m_workerCountHasBeenSet = true; m_workerCount = value; }
    inline FleetSummary& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline int GetMinWorkerCount() const { return m_minWorkerCount; }
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }
    inline FleetSummary& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline FleetSummary& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = FleetConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = FleetConfiguration>
    FleetSummary& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FleetSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    FleetSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    FleetSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    FleetSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    FleetStatus m_status{FleetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AutoScalingStatus m_autoScalingStatus{AutoScalingStatus::NOT_SET};
    bool m_autoScalingStatusHasBeenSet = false;

    int m_targetWorkerCount{0};
    bool m_targetWorkerCountHasBeenSet = false;

    int m_workerCount{0};
    bool m_workerCountHasBeenSet = false;

    int m_minWorkerCount{0};
    bool m_minWorkerCountHasBeenSet = false;

    int m_maxWorkerCount{0};
    bool m_maxWorkerCountHasBeenSet = false;

    FleetConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
