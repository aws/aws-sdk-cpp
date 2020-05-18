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
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpGeoLocation">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API IpGeoLocation
  {
  public:
    IpGeoLocation();
    IpGeoLocation(Aws::Utils::Json::JsonView jsonValue);
    IpGeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline double GetLat() const{ return m_lat; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpGeoLocation& WithLat(double value) { SetLat(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline double GetLon() const{ return m_lon; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpGeoLocation& WithLon(double value) { SetLon(value); return *this;}

  private:

    double m_lat;
    bool m_latHasBeenSet;

    double m_lon;
    bool m_lonHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
