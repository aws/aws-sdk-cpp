/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>Contains information about the location of the remote IP address. By default,
   * GuardDuty returns <code>Geolocation</code> with <code>Lat</code> and
   * <code>Lon</code> as <code>0.0</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GeoLocation">AWS
   * API Reference</a></p>
   */
  class GeoLocation
  {
  public:
    AWS_GUARDDUTY_API GeoLocation() = default;
    AWS_GUARDDUTY_API GeoLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API GeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latitude information of the remote IP address.</p>
     */
    inline double GetLat() const { return m_lat; }
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }
    inline GeoLocation& WithLat(double value) { SetLat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude information of the remote IP address.</p>
     */
    inline double GetLon() const { return m_lon; }
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }
    inline GeoLocation& WithLon(double value) { SetLon(value); return *this;}
    ///@}
  private:

    double m_lat{0.0};
    bool m_latHasBeenSet = false;

    double m_lon{0.0};
    bool m_lonHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
