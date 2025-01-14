/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlacementFallbackStrategy.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>An alternate list of prioritized locations for use with a game session queue.
   * When this property is included in a <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
   * request, this list overrides the queue's default location prioritization, as
   * defined in the queue's <a
   * href="gamelift/latest/apireference/API_PriorityConfiguration.html">PriorityConfiguration</a>
   * setting (<i>LocationOrder</i>). This property overrides the queue's default
   * priority list for individual placement requests only. Use this property only
   * with queues that have a <code>PriorityConfiguration</code> setting that
   * prioritizes first. </p>  <p>A priority configuration override list does
   * not override a queue's FilterConfiguration setting, if the queue has one. Filter
   * configurations are used to limit placements to a subset of the locations in a
   * queue's destinations. If the override list includes a location that's not
   * included in the FilterConfiguration allowed list, Amazon GameLift won't attempt
   * to place a game session there.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PriorityConfigurationOverride">AWS
   * API Reference</a></p>
   */
  class PriorityConfigurationOverride
  {
  public:
    AWS_GAMELIFT_API PriorityConfigurationOverride();
    AWS_GAMELIFT_API PriorityConfigurationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PriorityConfigurationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Instructions for how to use the override list if the first round of placement
     * attempts fails. The first round is a failure if Amazon GameLift searches all
     * listed locations, in all of the queue's destinations, without finding an
     * available hosting resource for a new game session. Valid strategies include:
     * </p> <ul> <li> <p> <code>DEFAULT_AFTER_SINGLE_PASS</code> -- After the first
     * round of placement attempts, discard the override list and use the queue's
     * default location priority list. Continue to use the queue's default list until
     * the placement request times out.</p> </li> <li> <p> <code>NONE</code> --
     * Continue to use the override list for all rounds of placement attempts until the
     * placement request times out.</p> </li> </ul>
     */
    inline const PlacementFallbackStrategy& GetPlacementFallbackStrategy() const{ return m_placementFallbackStrategy; }
    inline bool PlacementFallbackStrategyHasBeenSet() const { return m_placementFallbackStrategyHasBeenSet; }
    inline void SetPlacementFallbackStrategy(const PlacementFallbackStrategy& value) { m_placementFallbackStrategyHasBeenSet = true; m_placementFallbackStrategy = value; }
    inline void SetPlacementFallbackStrategy(PlacementFallbackStrategy&& value) { m_placementFallbackStrategyHasBeenSet = true; m_placementFallbackStrategy = std::move(value); }
    inline PriorityConfigurationOverride& WithPlacementFallbackStrategy(const PlacementFallbackStrategy& value) { SetPlacementFallbackStrategy(value); return *this;}
    inline PriorityConfigurationOverride& WithPlacementFallbackStrategy(PlacementFallbackStrategy&& value) { SetPlacementFallbackStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prioritized list of hosting locations. The list can include Amazon Web
     * Services Regions (such as <code>us-west-2</code>), local zones, and custom
     * locations (for Anywhere fleets). Each location must be listed only once. For
     * details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">Amazon
     * GameLift service locations.</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocationOrder() const{ return m_locationOrder; }
    inline bool LocationOrderHasBeenSet() const { return m_locationOrderHasBeenSet; }
    inline void SetLocationOrder(const Aws::Vector<Aws::String>& value) { m_locationOrderHasBeenSet = true; m_locationOrder = value; }
    inline void SetLocationOrder(Aws::Vector<Aws::String>&& value) { m_locationOrderHasBeenSet = true; m_locationOrder = std::move(value); }
    inline PriorityConfigurationOverride& WithLocationOrder(const Aws::Vector<Aws::String>& value) { SetLocationOrder(value); return *this;}
    inline PriorityConfigurationOverride& WithLocationOrder(Aws::Vector<Aws::String>&& value) { SetLocationOrder(std::move(value)); return *this;}
    inline PriorityConfigurationOverride& AddLocationOrder(const Aws::String& value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(value); return *this; }
    inline PriorityConfigurationOverride& AddLocationOrder(Aws::String&& value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(std::move(value)); return *this; }
    inline PriorityConfigurationOverride& AddLocationOrder(const char* value) { m_locationOrderHasBeenSet = true; m_locationOrder.push_back(value); return *this; }
    ///@}
  private:

    PlacementFallbackStrategy m_placementFallbackStrategy;
    bool m_placementFallbackStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_locationOrder;
    bool m_locationOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
