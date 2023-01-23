/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AutoTuneDesiredState.h>
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
   * <p>Specifies the Auto-Tune options: the Auto-Tune desired state for the domain
   * and list of maintenance schedules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneOptionsInput">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsInput
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsInput();
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline const AutoTuneDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline void SetDesiredState(const AutoTuneDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline void SetDesiredState(AutoTuneDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(const AutoTuneDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>Specifies the Auto-Tune desired state. Valid values are ENABLED, DISABLED.
     * </p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(AutoTuneDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const{ return m_maintenanceSchedules; }

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline void SetMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = value; }

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline void SetMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::move(value); }

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { SetMaintenanceSchedules(value); return *this;}

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { SetMaintenanceSchedules(std::move(value)); return *this;}

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(const AutoTuneMaintenanceSchedule& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(value); return *this; }

    /**
     * <p>Specifies list of maitenance schedules. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(AutoTuneMaintenanceSchedule&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(std::move(value)); return *this; }

  private:

    AutoTuneDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
