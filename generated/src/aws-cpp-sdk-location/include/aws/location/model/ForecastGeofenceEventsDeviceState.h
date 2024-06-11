﻿/**
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
   * <p>The device's position, IP address, and WiFi access points.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ForecastGeofenceEventsDeviceState">AWS
   * API Reference</a></p>
   */
  class ForecastGeofenceEventsDeviceState
  {
  public:
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState();
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsDeviceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline ForecastGeofenceEventsDeviceState& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline ForecastGeofenceEventsDeviceState& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline ForecastGeofenceEventsDeviceState& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device's speed.</p>
     */
    inline double GetSpeed() const{ return m_speed; }
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
    inline void SetSpeed(double value) { m_speedHasBeenSet = true; m_speed = value; }
    inline ForecastGeofenceEventsDeviceState& WithSpeed(double value) { SetSpeed(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    double m_speed;
    bool m_speedHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
