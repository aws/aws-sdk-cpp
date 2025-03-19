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
    AWS_DEADLINE_API SessionsStatisticsResources() = default;
    AWS_DEADLINE_API SessionsStatisticsResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionsStatisticsResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One to 10 queue IDs that specify the queues to return statistics for. If you
     * specify the <code>queueIds</code> field, you can't specify the
     * <code>fleetIds</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const { return m_queueIds; }
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    void SetQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::forward<QueueIdsT>(value); }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    SessionsStatisticsResources& WithQueueIds(QueueIdsT&& value) { SetQueueIds(std::forward<QueueIdsT>(value)); return *this;}
    template<typename QueueIdsT = Aws::String>
    SessionsStatisticsResources& AddQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds.emplace_back(std::forward<QueueIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One to 10 fleet IDs that specify the fleets to return statistics for. If you
     * specify the <code>fleetIds</code> field, you can't specify the
     * <code>queueIds</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const { return m_fleetIds; }
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    void SetFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::forward<FleetIdsT>(value); }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    SessionsStatisticsResources& WithFleetIds(FleetIdsT&& value) { SetFleetIds(std::forward<FleetIdsT>(value)); return *this;}
    template<typename FleetIdsT = Aws::String>
    SessionsStatisticsResources& AddFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.emplace_back(std::forward<FleetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_queueIds;
    bool m_queueIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
