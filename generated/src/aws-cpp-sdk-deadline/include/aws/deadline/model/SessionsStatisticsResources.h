/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the fleet IDs or queue IDs to return statistics. You can specify
   * only fleet IDs or queue IDS, not both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SessionsStatisticsResources">AWS
   * API Reference</a></p>
   */
  class SessionsStatisticsResources
  {
  public:
    AWS_DEADLINE_API SessionsStatisticsResources();
    AWS_DEADLINE_API SessionsStatisticsResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionsStatisticsResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = value; }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::move(value); }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline SessionsStatisticsResources& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline SessionsStatisticsResources& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(std::move(value)); return *this;}

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddFleetIds(const Aws::String& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddFleetIds(Aws::String&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddFleetIds(const char* value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }


    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const{ return m_queueIds; }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline void SetQueueIds(const Aws::Vector<Aws::String>& value) { m_queueIdsHasBeenSet = true; m_queueIds = value; }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline void SetQueueIds(Aws::Vector<Aws::String>&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::move(value); }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline SessionsStatisticsResources& WithQueueIds(const Aws::Vector<Aws::String>& value) { SetQueueIds(value); return *this;}

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline SessionsStatisticsResources& WithQueueIds(Aws::Vector<Aws::String>&& value) { SetQueueIds(std::move(value)); return *this;}

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddQueueIds(const Aws::String& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddQueueIds(Aws::String&& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline SessionsStatisticsResources& AddQueueIds(const char* value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_queueIds;
    bool m_queueIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
