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
   * <p>The IP address of the device that the entity used to perform the action on
   * the affected resource. This object also provides information such as the owner
   * and geographical location for the IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/IpAddressDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API IpAddressDetails
  {
  public:
    IpAddressDetails();
    IpAddressDetails(Aws::Utils::Json::JsonView jsonValue);
    IpAddressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const IpCity& GetIpCity() const{ return m_ipCity; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IpCityHasBeenSet() const { return m_ipCityHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpCity(const IpCity& value) { m_ipCityHasBeenSet = true; m_ipCity = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpCity(IpCity&& value) { m_ipCityHasBeenSet = true; m_ipCity = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpCity(const IpCity& value) { SetIpCity(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpCity(IpCity&& value) { SetIpCity(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const IpCountry& GetIpCountry() const{ return m_ipCountry; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IpCountryHasBeenSet() const { return m_ipCountryHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpCountry(const IpCountry& value) { m_ipCountryHasBeenSet = true; m_ipCountry = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpCountry(IpCountry&& value) { m_ipCountryHasBeenSet = true; m_ipCountry = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpCountry(const IpCountry& value) { SetIpCountry(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpCountry(IpCountry&& value) { SetIpCountry(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const IpGeoLocation& GetIpGeoLocation() const{ return m_ipGeoLocation; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IpGeoLocationHasBeenSet() const { return m_ipGeoLocationHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpGeoLocation(const IpGeoLocation& value) { m_ipGeoLocationHasBeenSet = true; m_ipGeoLocation = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpGeoLocation(IpGeoLocation&& value) { m_ipGeoLocationHasBeenSet = true; m_ipGeoLocation = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpGeoLocation(const IpGeoLocation& value) { SetIpGeoLocation(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpGeoLocation(IpGeoLocation&& value) { SetIpGeoLocation(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const IpOwner& GetIpOwner() const{ return m_ipOwner; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IpOwnerHasBeenSet() const { return m_ipOwnerHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpOwner(const IpOwner& value) { m_ipOwnerHasBeenSet = true; m_ipOwner = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIpOwner(IpOwner&& value) { m_ipOwnerHasBeenSet = true; m_ipOwner = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpOwner(const IpOwner& value) { SetIpOwner(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpAddressDetails& WithIpOwner(IpOwner&& value) { SetIpOwner(std::move(value)); return *this;}

  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet;

    IpCity m_ipCity;
    bool m_ipCityHasBeenSet;

    IpCountry m_ipCountry;
    bool m_ipCountryHasBeenSet;

    IpGeoLocation m_ipGeoLocation;
    bool m_ipGeoLocationHasBeenSet;

    IpOwner m_ipOwner;
    bool m_ipOwnerHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
