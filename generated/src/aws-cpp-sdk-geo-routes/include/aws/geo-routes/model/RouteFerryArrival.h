/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteFerryPlace.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Details corresponding to the arrival for the leg.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryArrival">AWS
   * API Reference</a></p>
   */
  class RouteFerryArrival
  {
  public:
    AWS_GEOROUTES_API RouteFerryArrival() = default;
    AWS_GEOROUTES_API RouteFerryArrival(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryArrival& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The place details.</p>
     */
    inline const RouteFerryPlace& GetPlace() const { return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    template<typename PlaceT = RouteFerryPlace>
    void SetPlace(PlaceT&& value) { m_placeHasBeenSet = true; m_place = std::forward<PlaceT>(value); }
    template<typename PlaceT = RouteFerryPlace>
    RouteFerryArrival& WithPlace(PlaceT&& value) { SetPlace(std::forward<PlaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time.</p>
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    RouteFerryArrival& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    RouteFerryPlace m_place;
    bool m_placeHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
