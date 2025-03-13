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
   * <p>A validated address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_CHIMESDKVOICE_API Address() = default;
    AWS_CHIMESDKVOICE_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The address street, such as <code>8th Avenue</code>.</p>
     */
    inline const Aws::String& GetStreetName() const { return m_streetName; }
    inline bool StreetNameHasBeenSet() const { return m_streetNameHasBeenSet; }
    template<typename StreetNameT = Aws::String>
    void SetStreetName(StreetNameT&& value) { m_streetNameHasBeenSet = true; m_streetName = std::forward<StreetNameT>(value); }
    template<typename StreetNameT = Aws::String>
    Address& WithStreetName(StreetNameT&& value) { SetStreetName(std::forward<StreetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address suffix, such as the <code>N</code> in <code>8th Avenue
     * N</code>.</p>
     */
    inline const Aws::String& GetStreetSuffix() const { return m_streetSuffix; }
    inline bool StreetSuffixHasBeenSet() const { return m_streetSuffixHasBeenSet; }
    template<typename StreetSuffixT = Aws::String>
    void SetStreetSuffix(StreetSuffixT&& value) { m_streetSuffixHasBeenSet = true; m_streetSuffix = std::forward<StreetSuffixT>(value); }
    template<typename StreetSuffixT = Aws::String>
    Address& WithStreetSuffix(StreetSuffixT&& value) { SetStreetSuffix(std::forward<StreetSuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An address suffix location, such as the <code>S. Unit A</code> in
     * <code>Central Park S. Unit A</code>.</p>
     */
    inline const Aws::String& GetPostDirectional() const { return m_postDirectional; }
    inline bool PostDirectionalHasBeenSet() const { return m_postDirectionalHasBeenSet; }
    template<typename PostDirectionalT = Aws::String>
    void SetPostDirectional(PostDirectionalT&& value) { m_postDirectionalHasBeenSet = true; m_postDirectional = std::forward<PostDirectionalT>(value); }
    template<typename PostDirectionalT = Aws::String>
    Address& WithPostDirectional(PostDirectionalT&& value) { SetPostDirectional(std::forward<PostDirectionalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An address prefix location, such as the <code>N</code> in <code>N. Third
     * St.</code> </p>
     */
    inline const Aws::String& GetPreDirectional() const { return m_preDirectional; }
    inline bool PreDirectionalHasBeenSet() const { return m_preDirectionalHasBeenSet; }
    template<typename PreDirectionalT = Aws::String>
    void SetPreDirectional(PreDirectionalT&& value) { m_preDirectionalHasBeenSet = true; m_preDirectional = std::forward<PreDirectionalT>(value); }
    template<typename PreDirectionalT = Aws::String>
    Address& WithPreDirectional(PreDirectionalT&& value) { SetPreDirectional(std::forward<PreDirectionalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric portion of an address.</p>
     */
    inline const Aws::String& GetStreetNumber() const { return m_streetNumber; }
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }
    template<typename StreetNumberT = Aws::String>
    void SetStreetNumber(StreetNumberT&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::forward<StreetNumberT>(value); }
    template<typename StreetNumberT = Aws::String>
    Address& WithStreetNumber(StreetNumberT&& value) { SetStreetNumber(std::forward<StreetNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of an address.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    Address& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an address.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    Address& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of an address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    Address& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zip + 4 or postal code + 4 of an address.</p>
     */
    inline const Aws::String& GetPostalCodePlus4() const { return m_postalCodePlus4; }
    inline bool PostalCodePlus4HasBeenSet() const { return m_postalCodePlus4HasBeenSet; }
    template<typename PostalCodePlus4T = Aws::String>
    void SetPostalCodePlus4(PostalCodePlus4T&& value) { m_postalCodePlus4HasBeenSet = true; m_postalCodePlus4 = std::forward<PostalCodePlus4T>(value); }
    template<typename PostalCodePlus4T = Aws::String>
    Address& WithPostalCodePlus4(PostalCodePlus4T&& value) { SetPostalCodePlus4(std::forward<PostalCodePlus4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of an address.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    Address& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}
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
