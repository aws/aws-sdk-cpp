/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/IpCity.h>
#include <aws/macie2/model/IpCountry.h>
#include <aws/macie2/model/IpGeoLocation.h>
#include <aws/macie2/model/IpOwner.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the IP address of the device that an entity used
   * to perform an action on an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpAddressDetails">AWS
   * API Reference</a></p>
   */
  class IpAddressDetails
  {
  public:
    AWS_MACIE2_API IpAddressDetails() = default;
    AWS_MACIE2_API IpAddressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API IpAddressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the device.</p>
     */
    inline const Aws::String& GetIpAddressV4() const { return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    template<typename IpAddressV4T = Aws::String>
    void SetIpAddressV4(IpAddressV4T&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::forward<IpAddressV4T>(value); }
    template<typename IpAddressV4T = Aws::String>
    IpAddressDetails& WithIpAddressV4(IpAddressV4T&& value) { SetIpAddressV4(std::forward<IpAddressV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city that the IP address originated from.</p>
     */
    inline const IpCity& GetIpCity() const { return m_ipCity; }
    inline bool IpCityHasBeenSet() const { return m_ipCityHasBeenSet; }
    template<typename IpCityT = IpCity>
    void SetIpCity(IpCityT&& value) { m_ipCityHasBeenSet = true; m_ipCity = std::forward<IpCityT>(value); }
    template<typename IpCityT = IpCity>
    IpAddressDetails& WithIpCity(IpCityT&& value) { SetIpCity(std::forward<IpCityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country that the IP address originated from.</p>
     */
    inline const IpCountry& GetIpCountry() const { return m_ipCountry; }
    inline bool IpCountryHasBeenSet() const { return m_ipCountryHasBeenSet; }
    template<typename IpCountryT = IpCountry>
    void SetIpCountry(IpCountryT&& value) { m_ipCountryHasBeenSet = true; m_ipCountry = std::forward<IpCountryT>(value); }
    template<typename IpCountryT = IpCountry>
    IpAddressDetails& WithIpCountry(IpCountryT&& value) { SetIpCountry(std::forward<IpCountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic coordinates of the location that the IP address originated
     * from.</p>
     */
    inline const IpGeoLocation& GetIpGeoLocation() const { return m_ipGeoLocation; }
    inline bool IpGeoLocationHasBeenSet() const { return m_ipGeoLocationHasBeenSet; }
    template<typename IpGeoLocationT = IpGeoLocation>
    void SetIpGeoLocation(IpGeoLocationT&& value) { m_ipGeoLocationHasBeenSet = true; m_ipGeoLocation = std::forward<IpGeoLocationT>(value); }
    template<typename IpGeoLocationT = IpGeoLocation>
    IpAddressDetails& WithIpGeoLocation(IpGeoLocationT&& value) { SetIpGeoLocation(std::forward<IpGeoLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registered owner of the IP address.</p>
     */
    inline const IpOwner& GetIpOwner() const { return m_ipOwner; }
    inline bool IpOwnerHasBeenSet() const { return m_ipOwnerHasBeenSet; }
    template<typename IpOwnerT = IpOwner>
    void SetIpOwner(IpOwnerT&& value) { m_ipOwnerHasBeenSet = true; m_ipOwner = std::forward<IpOwnerT>(value); }
    template<typename IpOwnerT = IpOwner>
    IpAddressDetails& WithIpOwner(IpOwnerT&& value) { SetIpOwner(std::forward<IpOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;

    IpCity m_ipCity;
    bool m_ipCityHasBeenSet = false;

    IpCountry m_ipCountry;
    bool m_ipCountryHasBeenSet = false;

    IpGeoLocation m_ipGeoLocation;
    bool m_ipGeoLocationHasBeenSet = false;

    IpOwner m_ipOwner;
    bool m_ipOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
