/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneDesiredState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AutoTuneMaintenanceSchedule.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Options for configuring Auto-Tune. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsInput">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput();
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline const AutoTuneDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline void SetDesiredState(const AutoTuneDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline void SetDesiredState(AutoTuneDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(const AutoTuneDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(AutoTuneDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const{ return m_maintenanceSchedules; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline void SetMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = value; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline void SetMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::move(value); }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { SetMaintenanceSchedules(value); return *this;}

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { SetMaintenanceSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(const AutoTuneMaintenanceSchedule& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(value); return *this; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance schedules are overwrite, not append. If your request includes no
     * schedules, the request deletes all existing schedules. To preserve existing
     * schedules, make a call to <code>DescribeDomainConfig</code> first and use the
     * <code>MaintenanceSchedules</code> portion of the response as the basis for this
     * section.</p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(AutoTuneMaintenanceSchedule&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(std::move(value)); return *this; }

  private:

    AutoTuneDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
