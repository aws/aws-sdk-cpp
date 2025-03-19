/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoadSnapTruckOptions.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Travel mode related options for the provided travel mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoadSnapTravelModeOptions">AWS
   * API Reference</a></p>
   */
  class RoadSnapTravelModeOptions
  {
  public:
    AWS_GEOROUTES_API RoadSnapTravelModeOptions() = default;
    AWS_GEOROUTES_API RoadSnapTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoadSnapTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck".</p>
     */
    inline const RoadSnapTruckOptions& GetTruck() const { return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    template<typename TruckT = RoadSnapTruckOptions>
    void SetTruck(TruckT&& value) { m_truckHasBeenSet = true; m_truck = std::forward<TruckT>(value); }
    template<typename TruckT = RoadSnapTruckOptions>
    RoadSnapTravelModeOptions& WithTruck(TruckT&& value) { SetTruck(std::forward<TruckT>(value)); return *this;}
    ///@}
  private:

    RoadSnapTruckOptions m_truck;
    bool m_truckHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
