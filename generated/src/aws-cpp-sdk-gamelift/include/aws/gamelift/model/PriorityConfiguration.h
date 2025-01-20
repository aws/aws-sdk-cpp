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
   * <p>Custom prioritization settings for a game session queue to use when searching
   * for available game servers to place new game sessions. This configuration
   * replaces the default FleetIQ prioritization process. </p> <p>By default, a queue
   * makes placements based on the following default prioritizations:</p> <ul> <li>
   * <p>If player latency data is included in a game session request, Amazon GameLift
   * prioritizes placing game sessions where the average player latency is lowest.
   * Amazon GameLift re-orders the queue's destinations and locations (for
   * multi-location fleets) based on the following priorities: (1) the lowest average
   * latency across all players, (2) the lowest hosting cost, (3) the queue's default
   * destination order, and then (4), an alphabetic list of locations.</p> </li> <li>
   * <p>If player latency data is not included, Amazon GameLift prioritizes placing
   * game sessions in the queue's first destination. If that fleet has multiple
   * locations, the game session is placed on the first location (when listed
   * alphabetically). Amazon GameLift re-orders the queue's destinations and
   * locations (for multi-location fleets) based on the following priorities: (1) the
   * queue's default destination order, and then (2) an alphabetic list of
   * locations.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PriorityConfiguration">AWS
   * API Reference</a></p>
   */
  class PriorityConfiguration
  {
  public:
    AWS_GAMELIFT_API PriorityConfiguration();
    AWS_GAMELIFT_API PriorityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PriorityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A custom sequence to use when prioritizing where to place new game sessions.
     * Each priority type is listed once.</p> <ul> <li> <p> <code>LATENCY</code> --
     * Amazon GameLift prioritizes locations where the average player latency is
     * lowest. Player latency data is provided in each game session placement
     * request.</p> </li> <li> <p> <code>COST</code> -- Amazon GameLift prioritizes
     * destinations with the lowest current hosting costs. Cost is evaluated based on
     * the location, instance type, and fleet type (Spot or On-Demand) of each
     * destination in the queue.</p> </li> <li> <p> <code>DESTINATION</code> -- Amazon
     * GameLift prioritizes based on the list order of destinations in the queue
     * configuration.</p> </li> <li> <p> <code>LOCATION</code> -- Amazon GameLift
     * prioritizes based on the provided order of locations, as defined in
     * <code>LocationOrder</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<PriorityType>& GetPriorityOrder() const{ return m_priorityOrder; }
    inline bool PriorityOrderHasBeenSet() const { return m_priorityOrderHasBeenSet; }
    inline void SetPriorityOrder(const Aws::Vector<PriorityType>& value) { m_priorityOrderHasBeenSet = true; m_priorityOrder = value; }
    inline void SetPriorityOrder(Aws::Vector<PriorityType>&& value) { m_priorityOrderHasBeenSet = true; m_priorityOrder = std::move(value); }
    inline PriorityConfiguration& WithPriorityOrder(const Aws::Vector<PriorityType>& value) { SetPriorityOrder(value); return *this;}
    inline PriorityConfiguration& WithPriorityOrder(Aws::Vector<PriorityType>&& value) { SetPriorityOrder(std::move(value)); return *this;}
    inline PriorityConfiguration& AddPriorityOrder(const PriorityType& value) { m_priorityOrderHasBeenSet = true; m_priorityOrder.push_back(value); return *this; }
    inline PriorityConfiguration& AddPriorityOrder(PriorityType&& value) { m_priorityOrderHasBeenSet = true; m_priorityOrder.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prioritization order to use for fleet locations, when the
     * <code>PriorityOrder</code> property includes <code>LOCATION</code>. Locations
     * can include Amazon Web Services Region codes (such as <code>us-west-2</code>),
     * local zones, and custom locations (for Anywhere fleets). Each location must be
     * listed only once. For details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">Amazon
     * GameLift service locations.</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocationOrder() const{ return m_locationOrder; }
    inline bool LocationOrderHasBeenSet() const { return m_locationOrderHasBeenSet; }
    inline void SetLocationOrder(const Aws::Vector<Aws::String>& value) { m_locationOrderHasBeenSet = true; m_locationOrder = value; }
    inline void SetLocationOrder(Aws::Vector<Aws::String>&& value) { m_locationOrderHasBeenSet = true; m_locationOrder = std::move(value); }
    inline PriorityConfiguration& WithLocationOrder(const Aws::Vector<Aws::String>& value) { SetLocationOrder(value); return *this;}
    inline PriorityConfiguration& WithLocationOrder(Aws::Vector<Aws::String>&& value) { SetLocationOrder(std::move(value)); return *this;}
    inline PriorityConfiguration& AddLocationOrder(const Aws::String& value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(value); return *this; }
    inline PriorityConfiguration& AddLocationOrder(Aws::String&& value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(std::move(value)); return *this; }
    inline PriorityConfiguration& AddLocationOrder(const char* value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(value); return *this; }
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
