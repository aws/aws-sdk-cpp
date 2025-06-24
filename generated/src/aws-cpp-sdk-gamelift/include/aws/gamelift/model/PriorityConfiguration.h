/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/PriorityType.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Custom prioritization settings to use with a game session queue.
   * Prioritization settings determine how the queue selects a game hosting resource
   * to start a new game session. This configuration replaces the default
   * prioritization process for queues.</p> <p>By default, a queue makes game session
   * placements based on the following criteria:</p> <ul> <li> <p>When a game session
   * request does not include player latency data, Amazon GameLift Servers places
   * game sessions based on the following priorities: (1) the queue's default
   * destination order, and (2) for multi-location fleets, an alphabetic list of
   * locations.</p> </li> <li> <p>When a game session request includes player latency
   * data, Amazon GameLift Servers re-orders the queue's destinations to make
   * placements where the average player latency is lowest. It reorders based the
   * following priorities: (1) the lowest average latency across all players, (2) the
   * lowest hosting cost, (3) the queue's default destination order, and (4) for
   * multi-location fleets, an alphabetic list of locations.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PriorityConfiguration">AWS
   * API Reference</a></p>
   */
  class PriorityConfiguration
  {
  public:
    AWS_GAMELIFT_API PriorityConfiguration() = default;
    AWS_GAMELIFT_API PriorityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PriorityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A custom sequence to use when prioritizing where to place new game sessions.
     * Each priority type is listed once.</p> <ul> <li> <p> <code>LATENCY</code> --
     * Amazon GameLift Servers prioritizes locations where the average player latency
     * is lowest. Player latency data is provided in each game session placement
     * request.</p> </li> <li> <p> <code>COST</code> -- Amazon GameLift Servers
     * prioritizes queue destinations with the lowest current hosting costs. Cost is
     * evaluated based on the destination's location, instance type, and fleet type
     * (Spot or On-Demand).</p> </li> <li> <p> <code>DESTINATION</code> -- Amazon
     * GameLift Servers prioritizes based on the list order of destinations in the
     * queue configuration.</p> </li> <li> <p> <code>LOCATION</code> -- Amazon GameLift
     * Servers prioritizes based on the provided order of locations, as defined in
     * <code>LocationOrder</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<PriorityType>& GetPriorityOrder() const { return m_priorityOrder; }
    inline bool PriorityOrderHasBeenSet() const { return m_priorityOrderHasBeenSet; }
    template<typename PriorityOrderT = Aws::Vector<PriorityType>>
    void SetPriorityOrder(PriorityOrderT&& value) { m_priorityOrderHasBeenSet = true; m_priorityOrder = std::forward<PriorityOrderT>(value); }
    template<typename PriorityOrderT = Aws::Vector<PriorityType>>
    PriorityConfiguration& WithPriorityOrder(PriorityOrderT&& value) { SetPriorityOrder(std::forward<PriorityOrderT>(value)); return *this;}
    inline PriorityConfiguration& AddPriorityOrder(PriorityType value) { m_priorityOrderHasBeenSet = true; m_priorityOrder.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prioritization order to use for fleet locations, when the
     * <code>PriorityOrder</code> property includes <code>LOCATION</code>. Locations
     * can include Amazon Web Services Region codes (such as <code>us-west-2</code>),
     * local zones, and custom locations (for Anywhere fleets). Each location must be
     * listed only once. For details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">Amazon
     * GameLift Servers service locations.</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocationOrder() const { return m_locationOrder; }
    inline bool LocationOrderHasBeenSet() const { return m_locationOrderHasBeenSet; }
    template<typename LocationOrderT = Aws::Vector<Aws::String>>
    void SetLocationOrder(LocationOrderT&& value) { m_locationOrderHasBeenSet = true; m_locationOrder = std::forward<LocationOrderT>(value); }
    template<typename LocationOrderT = Aws::Vector<Aws::String>>
    PriorityConfiguration& WithLocationOrder(LocationOrderT&& value) { SetLocationOrder(std::forward<LocationOrderT>(value)); return *this;}
    template<typename LocationOrderT = Aws::String>
    PriorityConfiguration& AddLocationOrder(LocationOrderT&& value) { m_locationOrderHasBeenSet = true; m_locationOrder.emplace_back(std::forward<LocationOrderT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PriorityType> m_priorityOrder;
    bool m_priorityOrderHasBeenSet = false;

    Aws::Vector<Aws::String> m_locationOrder;
    bool m_locationOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
