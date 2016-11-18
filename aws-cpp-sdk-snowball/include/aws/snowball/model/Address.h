/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The address that you want the Snowball or Snowballs associated with a
   * specific job to be shipped to. Addresses are validated at the time of creation.
   * The address you provide must be located within the serviceable area of your
   * region. Although no individual elements of the <code>Address</code> are
   * required, if the address is invalid or unsupported, then an exception is
   * thrown.</p>
   */
  class AWS_SNOWBALL_API Address
  {
  public:
    Address();
    Address(const Aws::Utils::Json::JsonValue& jsonValue);
    Address& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique ID for an address.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The unique ID for an address.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The unique ID for an address.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The unique ID for an address.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The unique ID for an address.</p>
     */
    inline Address& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The unique ID for an address.</p>
     */
    inline Address& WithAddressId(Aws::String&& value) { SetAddressId(value); return *this;}

    /**
     * <p>The unique ID for an address.</p>
     */
    inline Address& WithAddressId(const char* value) { SetAddressId(value); return *this;}

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline Address& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline Address& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of a person to receive a Snowball at an address.</p>
     */
    inline Address& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = value; }

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline Address& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline Address& WithCompany(Aws::String&& value) { SetCompany(value); return *this;}

    /**
     * <p>The name of the company to receive a Snowball at an address.</p>
     */
    inline Address& WithCompany(const char* value) { SetCompany(value); return *this;}

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetStreet1() const{ return m_street1; }

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet1(const Aws::String& value) { m_street1HasBeenSet = true; m_street1 = value; }

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet1(Aws::String&& value) { m_street1HasBeenSet = true; m_street1 = value; }

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet1(const char* value) { m_street1HasBeenSet = true; m_street1.assign(value); }

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet1(const Aws::String& value) { SetStreet1(value); return *this;}

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet1(Aws::String&& value) { SetStreet1(value); return *this;}

    /**
     * <p>The first line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet1(const char* value) { SetStreet1(value); return *this;}

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStreet2() const{ return m_street2; }

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStreet2(const Aws::String& value) { m_street2HasBeenSet = true; m_street2 = value; }

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStreet2(Aws::String&& value) { m_street2HasBeenSet = true; m_street2 = value; }

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStreet2(const char* value) { m_street2HasBeenSet = true; m_street2.assign(value); }

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStreet2(const Aws::String& value) { SetStreet2(value); return *this;}

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStreet2(Aws::String&& value) { SetStreet2(value); return *this;}

    /**
     * <p>The second line in a street address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStreet2(const char* value) { SetStreet2(value); return *this;}

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetStreet3() const{ return m_street3; }

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet3(const Aws::String& value) { m_street3HasBeenSet = true; m_street3 = value; }

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet3(Aws::String&& value) { m_street3HasBeenSet = true; m_street3 = value; }

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline void SetStreet3(const char* value) { m_street3HasBeenSet = true; m_street3.assign(value); }

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet3(const Aws::String& value) { SetStreet3(value); return *this;}

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet3(Aws::String&& value) { SetStreet3(value); return *this;}

    /**
     * <p>The third line in a street address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithStreet3(const char* value) { SetStreet3(value); return *this;}

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCity(Aws::String&& value) { SetCity(value); return *this;}

    /**
     * <p>The city in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStateOrProvince() const{ return m_stateOrProvince; }

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStateOrProvince(const Aws::String& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = value; }

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStateOrProvince(Aws::String&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = value; }

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetStateOrProvince(const char* value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince.assign(value); }

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStateOrProvince(const Aws::String& value) { SetStateOrProvince(value); return *this;}

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStateOrProvince(Aws::String&& value) { SetStateOrProvince(value); return *this;}

    /**
     * <p>The state or province in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithStateOrProvince(const char* value) { SetStateOrProvince(value); return *this;}

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetPrefectureOrDistrict() const{ return m_prefectureOrDistrict; }

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetPrefectureOrDistrict(const Aws::String& value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict = value; }

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetPrefectureOrDistrict(Aws::String&& value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict = value; }

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline void SetPrefectureOrDistrict(const char* value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict.assign(value); }

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithPrefectureOrDistrict(const Aws::String& value) { SetPrefectureOrDistrict(value); return *this;}

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithPrefectureOrDistrict(Aws::String&& value) { SetPrefectureOrDistrict(value); return *this;}

    /**
     * <p>The prefecture or district in an address that a Snowball is to be delivered
     * to.</p>
     */
    inline Address& WithPrefectureOrDistrict(const char* value) { SetPrefectureOrDistrict(value); return *this;}

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetLandmark() const{ return m_landmark; }

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetLandmark(const Aws::String& value) { m_landmarkHasBeenSet = true; m_landmark = value; }

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetLandmark(Aws::String&& value) { m_landmarkHasBeenSet = true; m_landmark = value; }

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetLandmark(const char* value) { m_landmarkHasBeenSet = true; m_landmark.assign(value); }

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithLandmark(const Aws::String& value) { SetLandmark(value); return *this;}

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithLandmark(Aws::String&& value) { SetLandmark(value); return *this;}

    /**
     * <p>A landmark listed in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithLandmark(const char* value) { SetLandmark(value); return *this;}

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCountry(Aws::String&& value) { SetCountry(value); return *this;}

    /**
     * <p>The country in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code in an address that a Snowball is to be delivered to.</p>
     */
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline Address& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline Address& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number associated with an address that a Snowball is to be
     * delivered to.</p>
     */
    inline Address& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:
    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_company;
    bool m_companyHasBeenSet;
    Aws::String m_street1;
    bool m_street1HasBeenSet;
    Aws::String m_street2;
    bool m_street2HasBeenSet;
    Aws::String m_street3;
    bool m_street3HasBeenSet;
    Aws::String m_city;
    bool m_cityHasBeenSet;
    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet;
    Aws::String m_prefectureOrDistrict;
    bool m_prefectureOrDistrictHasBeenSet;
    Aws::String m_landmark;
    bool m_landmarkHasBeenSet;
    Aws::String m_country;
    bool m_countryHasBeenSet;
    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet;
    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
