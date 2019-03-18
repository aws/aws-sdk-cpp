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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a latitude and longitude pair, expressed in geographic coordinate
   * system degrees (for example 47.6204, -122.3491).</p> <p>Elevation is currently
   * not supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Location">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API Location
  {
  public:
    Location();
    Location(Aws::Utils::Json::JsonView jsonValue);
    Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latitude.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }

    /**
     * <p>The latitude.</p>
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * <p>The latitude.</p>
     */
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * <p>The latitude.</p>
     */
    inline Location& WithLatitude(double value) { SetLatitude(value); return *this;}


    /**
     * <p>The longitude.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }

    /**
     * <p>The longitude.</p>
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * <p>The longitude.</p>
     */
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * <p>The longitude.</p>
     */
    inline Location& WithLongitude(double value) { SetLongitude(value); return *this;}

  private:

    double m_latitude;
    bool m_latitudeHasBeenSet;

    double m_longitude;
    bool m_longitudeHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
