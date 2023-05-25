/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Provides geographic coordinates that indicate where a specified IP address
   * originated from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpGeoLocation">AWS
   * API Reference</a></p>
   */
  class IpGeoLocation
  {
  public:
    AWS_MACIE2_API IpGeoLocation();
    AWS_MACIE2_API IpGeoLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API IpGeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline double GetLat() const{ return m_lat; }

    /**
     * <p>The latitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }

    /**
     * <p>The latitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }

    /**
     * <p>The latitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline IpGeoLocation& WithLat(double value) { SetLat(value); return *this;}


    /**
     * <p>The longitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline double GetLon() const{ return m_lon; }

    /**
     * <p>The longitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }

    /**
     * <p>The longitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }

    /**
     * <p>The longitude coordinate of the location, rounded to four decimal places.</p>
     */
    inline IpGeoLocation& WithLon(double value) { SetLon(value); return *this;}

  private:

    double m_lat;
    bool m_latHasBeenSet = false;

    double m_lon;
    bool m_lonHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
