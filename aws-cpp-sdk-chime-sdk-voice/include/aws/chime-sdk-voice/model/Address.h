/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class Address
  {
  public:
    AWS_CHIMESDKVOICE_API Address();
    AWS_CHIMESDKVOICE_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetStreetName() const{ return m_streetName; }

    
    inline bool StreetNameHasBeenSet() const { return m_streetNameHasBeenSet; }

    
    inline void SetStreetName(const Aws::String& value) { m_streetNameHasBeenSet = true; m_streetName = value; }

    
    inline void SetStreetName(Aws::String&& value) { m_streetNameHasBeenSet = true; m_streetName = std::move(value); }

    
    inline void SetStreetName(const char* value) { m_streetNameHasBeenSet = true; m_streetName.assign(value); }

    
    inline Address& WithStreetName(const Aws::String& value) { SetStreetName(value); return *this;}

    
    inline Address& WithStreetName(Aws::String&& value) { SetStreetName(std::move(value)); return *this;}

    
    inline Address& WithStreetName(const char* value) { SetStreetName(value); return *this;}


    
    inline const Aws::String& GetStreetSuffix() const{ return m_streetSuffix; }

    
    inline bool StreetSuffixHasBeenSet() const { return m_streetSuffixHasBeenSet; }

    
    inline void SetStreetSuffix(const Aws::String& value) { m_streetSuffixHasBeenSet = true; m_streetSuffix = value; }

    
    inline void SetStreetSuffix(Aws::String&& value) { m_streetSuffixHasBeenSet = true; m_streetSuffix = std::move(value); }

    
    inline void SetStreetSuffix(const char* value) { m_streetSuffixHasBeenSet = true; m_streetSuffix.assign(value); }

    
    inline Address& WithStreetSuffix(const Aws::String& value) { SetStreetSuffix(value); return *this;}

    
    inline Address& WithStreetSuffix(Aws::String&& value) { SetStreetSuffix(std::move(value)); return *this;}

    
    inline Address& WithStreetSuffix(const char* value) { SetStreetSuffix(value); return *this;}


    
    inline const Aws::String& GetPostDirectional() const{ return m_postDirectional; }

    
    inline bool PostDirectionalHasBeenSet() const { return m_postDirectionalHasBeenSet; }

    
    inline void SetPostDirectional(const Aws::String& value) { m_postDirectionalHasBeenSet = true; m_postDirectional = value; }

    
    inline void SetPostDirectional(Aws::String&& value) { m_postDirectionalHasBeenSet = true; m_postDirectional = std::move(value); }

    
    inline void SetPostDirectional(const char* value) { m_postDirectionalHasBeenSet = true; m_postDirectional.assign(value); }

    
    inline Address& WithPostDirectional(const Aws::String& value) { SetPostDirectional(value); return *this;}

    
    inline Address& WithPostDirectional(Aws::String&& value) { SetPostDirectional(std::move(value)); return *this;}

    
    inline Address& WithPostDirectional(const char* value) { SetPostDirectional(value); return *this;}


    
    inline const Aws::String& GetPreDirectional() const{ return m_preDirectional; }

    
    inline bool PreDirectionalHasBeenSet() const { return m_preDirectionalHasBeenSet; }

    
    inline void SetPreDirectional(const Aws::String& value) { m_preDirectionalHasBeenSet = true; m_preDirectional = value; }

    
    inline void SetPreDirectional(Aws::String&& value) { m_preDirectionalHasBeenSet = true; m_preDirectional = std::move(value); }

    
    inline void SetPreDirectional(const char* value) { m_preDirectionalHasBeenSet = true; m_preDirectional.assign(value); }

    
    inline Address& WithPreDirectional(const Aws::String& value) { SetPreDirectional(value); return *this;}

    
    inline Address& WithPreDirectional(Aws::String&& value) { SetPreDirectional(std::move(value)); return *this;}

    
    inline Address& WithPreDirectional(const char* value) { SetPreDirectional(value); return *this;}


    
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    
    inline Address& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    
    inline Address& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    
    inline Address& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}


    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline Address& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline Address& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    
    inline Address& WithState(const char* value) { SetState(value); return *this;}


    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    
    inline const Aws::String& GetPostalCodePlus4() const{ return m_postalCodePlus4; }

    
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }

    
    inline void SetPostalCodePlus4(const Aws::String& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = value; }

    
    inline void SetPostalCodePlus4(Aws::String&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::move(value); }

    
    inline void SetPostalCodePlus4(const char* value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4.assign(value); }

    
    inline Address& WithPostalCodePlus4(const Aws::String& value) { SetPostalCodePlus4(value); return *this;}

    
    inline Address& WithPostalCodePlus4(Aws::String&& value) { SetPostalCodePlus4(std::move(value)); return *this;}

    
    inline Address& WithPostalCodePlus4(const char* value) { SetPostalCodePlus4(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
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
} // namespace ChimeSDKVoice
} // namespace Aws
