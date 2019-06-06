/*
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
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  class AWS_GUARDDUTY_API GeoLocation
  {
  public:
    GeoLocation();
    GeoLocation(Aws::Utils::Json::JsonView jsonValue);
    GeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Latitude information of remote IP address.</p>
     */
    inline double GetLat() const{ return m_lat; }

    /**
     * <p>Latitude information of remote IP address.</p>
     */
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }

    /**
     * <p>Latitude information of remote IP address.</p>
     */
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }

    /**
     * <p>Latitude information of remote IP address.</p>
     */
    inline GeoLocation& WithLat(double value) { SetLat(value); return *this;}


    /**
     * <p>Longitude information of remote IP address.</p>
     */
    inline double GetLon() const{ return m_lon; }

    /**
     * <p>Longitude information of remote IP address.</p>
     */
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }

    /**
     * <p>Longitude information of remote IP address.</p>
     */
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }

    /**
     * <p>Longitude information of remote IP address.</p>
     */
    inline GeoLocation& WithLon(double value) { SetLon(value); return *this;}

  private:

    double m_lat;
    bool m_latHasBeenSet;

    double m_lon;
    bool m_lonHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
