/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies the GPS coordinates of a location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GPSCoordinates">AWS
   * API Reference</a></p>
   */
  class GPSCoordinates
  {
  public:
    AWS_PINPOINT_API GPSCoordinates();
    AWS_PINPOINT_API GPSCoordinates(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GPSCoordinates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latitude coordinate of the location.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }

    /**
     * <p>The latitude coordinate of the location.</p>
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * <p>The latitude coordinate of the location.</p>
     */
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * <p>The latitude coordinate of the location.</p>
     */
    inline GPSCoordinates& WithLatitude(double value) { SetLatitude(value); return *this;}


    /**
     * <p>The longitude coordinate of the location.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }

    /**
     * <p>The longitude coordinate of the location.</p>
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * <p>The longitude coordinate of the location.</p>
     */
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * <p>The longitude coordinate of the location.</p>
     */
    inline GPSCoordinates& WithLongitude(double value) { SetLongitude(value); return *this;}

  private:

    double m_latitude;
    bool m_latitudeHasBeenSet = false;

    double m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
