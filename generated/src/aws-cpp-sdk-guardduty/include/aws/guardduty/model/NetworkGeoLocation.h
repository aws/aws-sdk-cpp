/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about network endpoint location.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkGeoLocation">AWS
   * API Reference</a></p>
   */
  class NetworkGeoLocation
  {
  public:
    AWS_GUARDDUTY_API NetworkGeoLocation();
    AWS_GUARDDUTY_API NetworkGeoLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API NetworkGeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline NetworkGeoLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline NetworkGeoLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline NetworkGeoLocation& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline NetworkGeoLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline NetworkGeoLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline NetworkGeoLocation& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude information of the endpoint location.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline NetworkGeoLocation& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude information of the endpoint location.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline NetworkGeoLocation& WithLongitude(double value) { SetLongitude(value); return *this;}
    ///@}
  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    double m_latitude;
    bool m_latitudeHasBeenSet = false;

    double m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
