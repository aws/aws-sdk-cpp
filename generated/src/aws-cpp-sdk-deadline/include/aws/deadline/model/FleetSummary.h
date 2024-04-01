/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AutoScalingStatus.h>
#include <aws/deadline/model/FleetConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetStatus.h>
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
    AWS_DEADLINE_API FleetSummary();
    AWS_DEADLINE_API FleetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline const AutoScalingStatus& GetAutoScalingStatus() const{ return m_autoScalingStatus; }

    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline bool AutoScalingStatusHasBeenSet() const { return m_autoScalingStatusHasBeenSet; }

    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline void SetAutoScalingStatus(const AutoScalingStatus& value) { m_autoScalingStatusHasBeenSet = true; m_autoScalingStatus = value; }

    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline void SetAutoScalingStatus(AutoScalingStatus&& value) { m_autoScalingStatusHasBeenSet = true; m_autoScalingStatus = std::move(value); }

    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline FleetSummary& WithAutoScalingStatus(const AutoScalingStatus& value) { SetAutoScalingStatus(value); return *this;}

    /**
     * <p>The Auto Scaling status of a fleet.</p>
     */
    inline FleetSummary& WithAutoScalingStatus(AutoScalingStatus&& value) { SetAutoScalingStatus(std::move(value)); return *this;}


    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline void SetConfiguration(const FleetConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline void SetConfiguration(FleetConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline FleetSummary& WithConfiguration(const FleetConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration details for the fleet.</p>
     */
    inline FleetSummary& WithConfiguration(FleetConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline FleetSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline FleetSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline FleetSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline FleetSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline FleetSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline FleetSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline FleetSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the fleet summary to update.</p>
     */
    inline FleetSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline FleetSummary& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline FleetSummary& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline FleetSummary& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline FleetSummary& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline FleetSummary& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline FleetSummary& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }

    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }

    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }

    /**
     * <p>The maximum number of workers specified in the fleet.</p>
     */
    inline FleetSummary& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}


    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline FleetSummary& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}


    /**
     * <p>The status of the fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetSummary& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetSummary& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The target number of workers in a fleet.</p>
     */
    inline int GetTargetWorkerCount() const{ return m_targetWorkerCount; }

    /**
     * <p>The target number of workers in a fleet.</p>
     */
    inline bool TargetWorkerCountHasBeenSet() const { return m_targetWorkerCountHasBeenSet; }

    /**
     * <p>The target number of workers in a fleet.</p>
     */
    inline void SetTargetWorkerCount(int value) { m_targetWorkerCountHasBeenSet = true; m_targetWorkerCount = value; }

    /**
     * <p>The target number of workers in a fleet.</p>
     */
    inline FleetSummary& WithTargetWorkerCount(int value) { SetTargetWorkerCount(value); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline FleetSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline FleetSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline FleetSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline FleetSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline FleetSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The number of workers in the fleet summary.</p>
     */
    inline int GetWorkerCount() const{ return m_workerCount; }

    /**
     * <p>The number of workers in the fleet summary.</p>
     */
    inline bool WorkerCountHasBeenSet() const { return m_workerCountHasBeenSet; }

    /**
     * <p>The number of workers in the fleet summary.</p>
     */
    inline void SetWorkerCount(int value) { m_workerCountHasBeenSet = true; m_workerCount = value; }

    /**
     * <p>The number of workers in the fleet summary.</p>
     */
    inline FleetSummary& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}

  private:

    AutoScalingStatus m_autoScalingStatus;
    bool m_autoScalingStatusHasBeenSet = false;

    FleetConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    int m_maxWorkerCount;
    bool m_maxWorkerCountHasBeenSet = false;

    int m_minWorkerCount;
    bool m_minWorkerCountHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_targetWorkerCount;
    bool m_targetWorkerCountHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    int m_workerCount;
    bool m_workerCountHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
