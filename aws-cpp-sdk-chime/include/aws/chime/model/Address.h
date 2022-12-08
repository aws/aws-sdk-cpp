/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>A validated address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Address">AWS API
   * Reference</a></p>
   */
  class Address
  {
  public:
    AWS_CHIME_API Address();
    AWS_CHIME_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline const Aws::String& GetStreetName() const{ return m_streetName; }

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline bool StreetNameHasBeenSet() const { return m_streetNameHasBeenSet; }

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetName(const Aws::String& value) { m_streetNameHasBeenSet = true; m_streetName = value; }

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetName(Aws::String&& value) { m_streetNameHasBeenSet = true; m_streetName = std::move(value); }

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetName(const char* value) { m_streetNameHasBeenSet = true; m_streetName.assign(value); }

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline Address& WithStreetName(const Aws::String& value) { SetStreetName(value); return *this;}

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline Address& WithStreetName(Aws::String&& value) { SetStreetName(std::move(value)); return *this;}

    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline Address& WithStreetName(const char* value) { SetStreetName(value); return *this;}


    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline const Aws::String& GetStreetSuffix() const{ return m_streetSuffix; }

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline bool StreetSuffixHasBeenSet() const { return m_streetSuffixHasBeenSet; }

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline void SetStreetSuffix(const Aws::String& value) { m_streetSuffixHasBeenSet = true; m_streetSuffix = value; }

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline void SetStreetSuffix(Aws::String&& value) { m_streetSuffixHasBeenSet = true; m_streetSuffix = std::move(value); }

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline void SetStreetSuffix(const char* value) { m_streetSuffixHasBeenSet = true; m_streetSuffix.assign(value); }

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline Address& WithStreetSuffix(const Aws::String& value) { SetStreetSuffix(value); return *this;}

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline Address& WithStreetSuffix(Aws::String&& value) { SetStreetSuffix(std::move(value)); return *this;}

    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline Address& WithStreetSuffix(const char* value) { SetStreetSuffix(value); return *this;}


    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline const Aws::String& GetPostDirectional() const{ return m_postDirectional; }

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline bool PostDirectionalHasBeenSet() const { return m_postDirectionalHasBeenSet; }

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline void SetPostDirectional(const Aws::String& value) { m_postDirectionalHasBeenSet = true; m_postDirectional = value; }

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline void SetPostDirectional(Aws::String&& value) { m_postDirectionalHasBeenSet = true; m_postDirectional = std::move(value); }

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline void SetPostDirectional(const char* value) { m_postDirectionalHasBeenSet = true; m_postDirectional.assign(value); }

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline Address& WithPostDirectional(const Aws::String& value) { SetPostDirectional(value); return *this;}

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline Address& WithPostDirectional(Aws::String&& value) { SetPostDirectional(std::move(value)); return *this;}

    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline Address& WithPostDirectional(const char* value) { SetPostDirectional(value); return *this;}


    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline const Aws::String& GetPreDirectional() const{ return m_preDirectional; }

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline bool PreDirectionalHasBeenSet() const { return m_preDirectionalHasBeenSet; }

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline void SetPreDirectional(const Aws::String& value) { m_preDirectionalHasBeenSet = true; m_preDirectional = value; }

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline void SetPreDirectional(Aws::String&& value) { m_preDirectionalHasBeenSet = true; m_preDirectional = std::move(value); }

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline void SetPreDirectional(const char* value) { m_preDirectionalHasBeenSet = true; m_preDirectional.assign(value); }

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline Address& WithPreDirectional(const Aws::String& value) { SetPreDirectional(value); return *this;}

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline Address& WithPreDirectional(Aws::String&& value) { SetPreDirectional(std::move(value)); return *this;}

    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code>.</p>
     */
    inline Address& WithPreDirectional(const char* value) { SetPreDirectional(value); return *this;}


    /**
     * <p>The numeric portion of an address.</p>
     */
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline Address& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline Address& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    /**
     * <p>The numeric portion of an address.</p>
     */
    inline Address& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    /**
     * <p>The city of an address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city of an address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city of an address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city of an address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city of an address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city of an address.</p>
     */
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city of an address.</p>
     */
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city of an address.</p>
     */
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The state of an address.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of an address.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of an address.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of an address.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of an address.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of an address.</p>
     */
    inline Address& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of an address.</p>
     */
    inline Address& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of an address.</p>
     */
    inline Address& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The postal code of an address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code of an address.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal code of an address.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code of an address.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal code of an address.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code of an address.</p>
     */
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code of an address.</p>
     */
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal code of an address.</p>
     */
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline const Aws::String& GetPostalCodePlus4() const{ return m_postalCodePlus4; }

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline void SetPostalCodePlus4(const Aws::String& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = value; }

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline void SetPostalCodePlus4(Aws::String&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::move(value); }

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline void SetPostalCodePlus4(const char* value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4.assign(value); }

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline Address& WithPostalCodePlus4(const Aws::String& value) { SetPostalCodePlus4(value); return *this;}

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline Address& WithPostalCodePlus4(Aws::String&& value) { SetPostalCodePlus4(std::move(value)); return *this;}

    /**
     * <p>The Zip + 4 or postal code + 4 of an address.</p>
     */
    inline Address& WithPostalCodePlus4(const char* value) { SetPostalCodePlus4(value); return *this;}


    /**
     * <p>The country of an address. </p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country of an address. </p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country of an address. </p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country of an address. </p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country of an address. </p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country of an address. </p>
     */
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country of an address. </p>
     */
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The country of an address. </p>
     */
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}

  private:

    Aws::String m_streetName;
    bool m_streetNameHasBeenSet = false;

    Aws::String m_streetSuffix;
    bool m_streetSuffixHasBeenSet = false;

    Aws::String m_postDirectional;
    bool m_postDirectionalHasBeenSet = false;

    Aws::String m_preDirectional;
    bool m_preDirectionalHasBeenSet = false;

    Aws::String m_streetNumber;
    bool m_streetNumberHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_postalCodePlus4;
    bool m_postalCodePlus4HasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
