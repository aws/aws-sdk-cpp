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
   * <p>Custom prioritization settings for use by a game session queue when placing
   * new game sessions with available game servers. When defined, this configuration
   * replaces the default FleetIQ prioritization process, which is as follows:</p>
   * <ul> <li> <p>If player latency data is included in a game session request,
   * destinations and locations are prioritized first based on lowest average latency
   * (1), then on lowest hosting cost (2), then on destination list order (3), and
   * finally on location (alphabetical) (4). This approach ensures that the queue's
   * top priority is to place game sessions where average player latency is lowest,
   * and--if latency is the same--where the hosting cost is less, etc.</p> </li> <li>
   * <p>If player latency data is not included, destinations and locations are
   * prioritized first on destination list order (1), and then on location
   * (alphabetical) (2). This approach ensures that the queue's top priority is to
   * place game sessions on the first destination fleet listed. If that fleet has
   * multiple locations, the game session is placed on the first location (when
   * listed alphabetically).</p> </li> </ul> <p>Changing the priority order will
   * affect how game sessions are placed.</p><p><h3>See Also:</h3>   <a
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
     * <p>The recommended sequence to use when prioritizing where to place new game
     * sessions. Each type can only be listed once.</p> <ul> <li> <p>
     * <code>LATENCY</code> -- FleetIQ prioritizes locations where the average player
     * latency (provided in each game session request) is lowest. </p> </li> <li> <p>
     * <code>COST</code> -- FleetIQ prioritizes destinations with the lowest current
     * hosting costs. Cost is evaluated based on the location, instance type, and fleet
     * type (Spot or On-Demand) for each destination in the queue.</p> </li> <li> <p>
     * <code>DESTINATION</code> -- FleetIQ prioritizes based on the order that
     * destinations are listed in the queue configuration.</p> </li> <li> <p>
     * <code>LOCATION</code> -- FleetIQ prioritizes based on the provided order of
     * locations, as defined in <code>LocationOrder</code>. </p> </li> </ul>
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
     * are identified by Amazon Web Services Region codes such as
     * <code>us-west-2</code>. Each location can only be listed once. </p>
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
