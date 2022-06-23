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
   * <p>The Auto-Tune options: the Auto-Tune desired state for the domain and list of
   * maintenance schedules. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput
  {
  public:
    AutoTuneOptionsInput();
    AutoTuneOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AutoTuneOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline const AutoTuneDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline void SetDesiredState(const AutoTuneDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline void SetDesiredState(AutoTuneDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(const AutoTuneDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The Auto-Tune desired state. Valid values are ENABLED and DISABLED.</p>
     */
    inline AutoTuneOptionsInput& WithDesiredState(AutoTuneDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const{ return m_maintenanceSchedules; }

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = value; }

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::move(value); }

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { SetMaintenanceSchedules(value); return *this;}

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneOptionsInput& WithMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { SetMaintenanceSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(const AutoTuneMaintenanceSchedule& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(value); return *this; }

    /**
     * <p>A list of maintenance schedules. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneOptionsInput& AddMaintenanceSchedules(AutoTuneMaintenanceSchedule&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(std::move(value)); return *this; }

  private:

    AutoTuneDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
