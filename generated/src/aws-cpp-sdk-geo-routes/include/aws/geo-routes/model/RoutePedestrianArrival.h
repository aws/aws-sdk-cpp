/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoutePedestrianPlace.h>
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
   * <p>Details corresponding to the arrival for a leg.</p> <p>Time
   * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
   * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
   * <code>2020-04-22T17:57:24+02:00</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianArrival">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianArrival
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianArrival() = default;
    AWS_GEOROUTES_API RoutePedestrianArrival(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianArrival& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The place details.</p>
     */
    inline const RoutePedestrianPlace& GetPlace() const { return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    template<typename PlaceT = RoutePedestrianPlace>
    void SetPlace(PlaceT&& value) { m_placeHasBeenSet = true; m_place = std::forward<PlaceT>(value); }
    template<typename PlaceT = RoutePedestrianPlace>
    RoutePedestrianArrival& WithPlace(PlaceT&& value) { SetPlace(std::forward<PlaceT>(value)); return *this;}
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
    RoutePedestrianArrival& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    RoutePedestrianPlace m_place;
    bool m_placeHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
