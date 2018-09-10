﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
namespace Pinpoint
{
namespace Model
{

  /**
   * GPS coordinates<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GPSCoordinates">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API GPSCoordinates
  {
  public:
    GPSCoordinates();
    GPSCoordinates(Aws::Utils::Json::JsonView jsonValue);
    GPSCoordinates& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Latitude
     */
    inline double GetLatitude() const{ return m_latitude; }

    /**
     * Latitude
     */
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * Latitude
     */
    inline GPSCoordinates& WithLatitude(double value) { SetLatitude(value); return *this;}


    /**
     * Longitude
     */
    inline double GetLongitude() const{ return m_longitude; }

    /**
     * Longitude
     */
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * Longitude
     */
    inline GPSCoordinates& WithLongitude(double value) { SetLongitude(value); return *this;}

  private:

    double m_latitude;
    bool m_latitudeHasBeenSet;

    double m_longitude;
    bool m_longitudeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
