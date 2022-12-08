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
   * <p>A suggested address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CandidateAddress">AWS
   * API Reference</a></p>
   */
  class CandidateAddress
  {
  public:
    AWS_CHIME_API CandidateAddress();
    AWS_CHIME_API CandidateAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API CandidateAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The street information of a candidate address</p>
     */
    inline const Aws::String& GetStreetInfo() const{ return m_streetInfo; }

    /**
     * <p>The street information of a candidate address</p>
     */
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }

    /**
     * <p>The street information of a candidate address</p>
     */
    inline void SetStreetInfo(const Aws::String& value) { m_streetInfoHasBeenSet = true; m_streetInfo = value; }

    /**
     * <p>The street information of a candidate address</p>
     */
    inline void SetStreetInfo(Aws::String&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::move(value); }

    /**
     * <p>The street information of a candidate address</p>
     */
    inline void SetStreetInfo(const char* value) { m_streetInfoHasBeenSet = true; m_streetInfo.assign(value); }

    /**
     * <p>The street information of a candidate address</p>
     */
    inline CandidateAddress& WithStreetInfo(const Aws::String& value) { SetStreetInfo(value); return *this;}

    /**
     * <p>The street information of a candidate address</p>
     */
    inline CandidateAddress& WithStreetInfo(Aws::String&& value) { SetStreetInfo(std::move(value)); return *this;}

    /**
     * <p>The street information of a candidate address</p>
     */
    inline CandidateAddress& WithStreetInfo(const char* value) { SetStreetInfo(value); return *this;}


    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline CandidateAddress& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline CandidateAddress& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    /**
     * <p>The numeric portion of a candidate address.</p>
     */
    inline CandidateAddress& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    /**
     * <p>The city of a candidate address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city of a candidate address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city of a candidate address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city of a candidate address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city of a candidate address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city of a candidate address.</p>
     */
    inline CandidateAddress& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city of a candidate address.</p>
     */
    inline CandidateAddress& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city of a candidate address.</p>
     */
    inline CandidateAddress& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The state of a candidate address.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of a candidate address.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of a candidate address.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of a candidate address.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of a candidate address.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of a candidate address.</p>
     */
    inline CandidateAddress& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of a candidate address.</p>
     */
    inline CandidateAddress& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of a candidate address.</p>
     */
    inline CandidateAddress& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal code of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline const Aws::String& GetPostalCodePlus4() const{ return m_postalCodePlus4; }

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline void SetPostalCodePlus4(const Aws::String& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = value; }

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline void SetPostalCodePlus4(Aws::String&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::move(value); }

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline void SetPostalCodePlus4(const char* value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4.assign(value); }

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCodePlus4(const Aws::String& value) { SetPostalCodePlus4(value); return *this;}

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCodePlus4(Aws::String&& value) { SetPostalCodePlus4(std::move(value)); return *this;}

    /**
     * <p>The Zip + 4 or postal code + 4 of a candidate address.</p>
     */
    inline CandidateAddress& WithPostalCodePlus4(const char* value) { SetPostalCodePlus4(value); return *this;}


    /**
     * <p>The country of a candidate address.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country of a candidate address.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country of a candidate address.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country of a candidate address.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country of a candidate address.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country of a candidate address.</p>
     */
    inline CandidateAddress& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country of a candidate address.</p>
     */
    inline CandidateAddress& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The country of a candidate address.</p>
     */
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
} // namespace Chime
} // namespace Aws
