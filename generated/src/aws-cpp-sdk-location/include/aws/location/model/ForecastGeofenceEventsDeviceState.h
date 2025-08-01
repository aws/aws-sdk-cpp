/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>The device's position and speed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ForecastGeofenceEventsDeviceState">AWS
   * API Reference</a></p>
   */
  class ForecastGeofenceEventsDeviceState
  {
  public:
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState() = default;
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    ForecastGeofenceEventsDeviceState& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline ForecastGeofenceEventsDeviceState& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device's speed.</p>
     */
    inline double GetSpeed() const { return m_speed; }
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
    inline void SetSpeed(double value) { m_speedHasBeenSet = true; m_speed = value; }
    inline ForecastGeofenceEventsDeviceState& WithSpeed(double value) { SetSpeed(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    double m_speed{0.0};
    bool m_speedHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
