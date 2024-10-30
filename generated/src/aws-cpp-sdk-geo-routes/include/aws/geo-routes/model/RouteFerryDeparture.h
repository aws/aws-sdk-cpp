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
   * <p>Details corresponding to the departure for the leg.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryDeparture">AWS
   * API Reference</a></p>
   */
  class RouteFerryDeparture
  {
  public:
    AWS_GEOROUTES_API RouteFerryDeparture();
    AWS_GEOROUTES_API RouteFerryDeparture(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryDeparture& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The place details.</p>
     */
    inline const RouteFerryPlace& GetPlace() const{ return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    inline void SetPlace(const RouteFerryPlace& value) { m_placeHasBeenSet = true; m_place = value; }
    inline void SetPlace(RouteFerryPlace&& value) { m_placeHasBeenSet = true; m_place = std::move(value); }
    inline RouteFerryDeparture& WithPlace(const RouteFerryPlace& value) { SetPlace(value); return *this;}
    inline RouteFerryDeparture& WithPlace(RouteFerryPlace&& value) { SetPlace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time.</p>
     */
    inline const Aws::String& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }
    inline RouteFerryDeparture& WithTime(const Aws::String& value) { SetTime(value); return *this;}
    inline RouteFerryDeparture& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}
    inline RouteFerryDeparture& WithTime(const char* value) { SetTime(value); return *this;}
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
