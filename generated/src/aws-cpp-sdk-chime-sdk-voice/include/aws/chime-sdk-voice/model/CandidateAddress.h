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

  /**
   * <p>A suggested address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CandidateAddress">AWS
   * API Reference</a></p>
   */
  class CandidateAddress
  {
  public:
    AWS_CHIMESDKVOICE_API CandidateAddress() = default;
    AWS_CHIMESDKVOICE_API CandidateAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API CandidateAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The street information of the candidate address.</p>
     */
    inline const Aws::String& GetStreetInfo() const { return m_streetInfo; }
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }
    template<typename StreetInfoT = Aws::String>
    void SetStreetInfo(StreetInfoT&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::forward<StreetInfoT>(value); }
    template<typename StreetInfoT = Aws::String>
    CandidateAddress& WithStreetInfo(StreetInfoT&& value) { SetStreetInfo(std::forward<StreetInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric portion of the candidate address.</p>
     */
    inline const Aws::String& GetStreetNumber() const { return m_streetNumber; }
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }
    template<typename StreetNumberT = Aws::String>
    void SetStreetNumber(StreetNumberT&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::forward<StreetNumberT>(value); }
    template<typename StreetNumberT = Aws::String>
    CandidateAddress& WithStreetNumber(StreetNumberT&& value) { SetStreetNumber(std::forward<StreetNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of the candidate address.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    CandidateAddress& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the candidate address.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    CandidateAddress& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of the candidate address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    CandidateAddress& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zip + 4 or postal code +4 of the candidate address.</p>
     */
    inline const Aws::String& GetPostalCodePlus4() const { return m_postalCodePlus4; }
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }
    template<typename PostalCodePlus4T = Aws::String>
    void SetPostalCodePlus4(PostalCodePlus4T&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::forward<PostalCodePlus4T>(value); }
    template<typename PostalCodePlus4T = Aws::String>
    CandidateAddress& WithPostalCodePlus4(PostalCodePlus4T&& value) { SetPostalCodePlus4(std::forward<PostalCodePlus4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of the candidate address.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    CandidateAddress& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}
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
