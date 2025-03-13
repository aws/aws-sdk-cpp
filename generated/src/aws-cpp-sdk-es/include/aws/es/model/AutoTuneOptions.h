/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AutoTuneDesiredState.h>
#include <aws/es/model/RollbackOnDisable.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/AutoTuneMaintenanceSchedule.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the Auto-Tune options: the Auto-Tune desired state for the domain,
   * rollback state when disabling Auto-Tune options and list of maintenance
   * schedules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneOptions">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptions() = default;
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline AutoTuneDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(AutoTuneDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline AutoTuneOptions& WithDesiredState(AutoTuneDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the rollback state while disabling Auto-Tune for the domain. Valid
     * values are NO_ROLLBACK, DEFAULT_ROLLBACK. </p>
     */
    inline RollbackOnDisable GetRollbackOnDisable() const { return m_rollbackOnDisable; }
    inline bool RollbackOnDisableHasBeenSet() const { return m_rollbackOnDisableHasBeenSet; }
    inline void SetRollbackOnDisable(RollbackOnDisable value) { m_rollbackOnDisableHasBeenSet = true; m_rollbackOnDisable = value; }
    inline AutoTuneOptions& WithRollbackOnDisable(RollbackOnDisable value) { SetRollbackOnDisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const { return m_maintenanceSchedules; }
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    void SetMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::forward<MaintenanceSchedulesT>(value); }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    AutoTuneOptions& WithMaintenanceSchedules(MaintenanceSchedulesT&& value) { SetMaintenanceSchedules(std::forward<MaintenanceSchedulesT>(value)); return *this;}
    template<typename MaintenanceSchedulesT = AutoTuneMaintenanceSchedule>
    AutoTuneOptions& AddMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.emplace_back(std::forward<MaintenanceSchedulesT>(value)); return *this; }
    ///@}
  private:

    AutoTuneDesiredState m_desiredState{AutoTuneDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    RollbackOnDisable m_rollbackOnDisable{RollbackOnDisable::NOT_SET};
    bool m_rollbackOnDisableHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
