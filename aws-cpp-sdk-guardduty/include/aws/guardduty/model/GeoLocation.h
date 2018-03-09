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
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * Location information of the remote IP address.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GeoLocation">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API GeoLocation
  {
  public:
    GeoLocation();
    GeoLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    GeoLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Latitude information of remote IP address.
     */
    inline double GetLat() const{ return m_lat; }

    /**
     * Latitude information of remote IP address.
     */
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }

    /**
     * Latitude information of remote IP address.
     */
    inline GeoLocation& WithLat(double value) { SetLat(value); return *this;}


    /**
     * Longitude information of remote IP address.
     */
    inline double GetLon() const{ return m_lon; }

    /**
     * Longitude information of remote IP address.
     */
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }

    /**
     * Longitude information of remote IP address.
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
