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

  class CandidateAddress
  {
  public:
    AWS_CHIMESDKVOICE_API CandidateAddress();
    AWS_CHIMESDKVOICE_API CandidateAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API CandidateAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetStreetInfo() const{ return m_streetInfo; }

    
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }

    
    inline void SetStreetInfo(const Aws::String& value) { m_streetInfoHasBeenSet = true; m_streetInfo = value; }

    
    inline void SetStreetInfo(Aws::String&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::move(value); }

    
    inline void SetStreetInfo(const char* value) { m_streetInfoHasBeenSet = true; m_streetInfo.assign(value); }

    
    inline CandidateAddress& WithStreetInfo(const Aws::String& value) { SetStreetInfo(value); return *this;}

    
    inline CandidateAddress& WithStreetInfo(Aws::String&& value) { SetStreetInfo(std::move(value)); return *this;}

    
    inline CandidateAddress& WithStreetInfo(const char* value) { SetStreetInfo(value); return *this;}


    
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    
    inline CandidateAddress& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    
    inline CandidateAddress& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    
    inline CandidateAddress& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline CandidateAddress& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline CandidateAddress& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    
    inline CandidateAddress& WithCity(const char* value) { SetCity(value); return *this;}


    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline CandidateAddress& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline CandidateAddress& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    
    inline CandidateAddress& WithState(const char* value) { SetState(value); return *this;}


    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline CandidateAddress& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline CandidateAddress& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    
    inline CandidateAddress& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    
    inline const Aws::String& GetPostalCodePlus4() const{ return m_postalCodePlus4; }

    
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }

    
    inline void SetPostalCodePlus4(const Aws::String& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = value; }

    
    inline void SetPostalCodePlus4(Aws::String&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::move(value); }

    
    inline void SetPostalCodePlus4(const char* value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4.assign(value); }

    
    inline CandidateAddress& WithPostalCodePlus4(const Aws::String& value) { SetPostalCodePlus4(value); return *this;}

    
    inline CandidateAddress& WithPostalCodePlus4(Aws::String&& value) { SetPostalCodePlus4(std::move(value)); return *this;}

    
    inline CandidateAddress& WithPostalCodePlus4(const char* value) { SetPostalCodePlus4(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline CandidateAddress& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline CandidateAddress& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline CandidateAddress& WithCountry(const char* value) { SetCountry(value); return *this;}

  private:

    Aws::String m_streetInfo;
    bool m_streetInfoHasBeenSet = false;

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
