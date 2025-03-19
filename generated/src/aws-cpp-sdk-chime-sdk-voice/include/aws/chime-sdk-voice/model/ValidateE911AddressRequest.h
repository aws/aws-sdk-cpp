/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class ValidateE911AddressRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API ValidateE911AddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateE911Address"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    ValidateE911AddressRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline const Aws::String& GetStreetNumber() const { return m_streetNumber; }
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }
    template<typename StreetNumberT = Aws::String>
    void SetStreetNumber(StreetNumberT&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::forward<StreetNumberT>(value); }
    template<typename StreetNumberT = Aws::String>
    ValidateE911AddressRequest& WithStreetNumber(StreetNumberT&& value) { SetStreetNumber(std::forward<StreetNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline const Aws::String& GetStreetInfo() const { return m_streetInfo; }
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }
    template<typename StreetInfoT = Aws::String>
    void SetStreetInfo(StreetInfoT&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::forward<StreetInfoT>(value); }
    template<typename StreetInfoT = Aws::String>
    ValidateE911AddressRequest& WithStreetInfo(StreetInfoT&& value) { SetStreetInfo(std::forward<StreetInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ValidateE911AddressRequest& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ValidateE911AddressRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in the address being validated as two-letter country code in ISO
     * 3166-1 alpha-2 format, such as <code>US</code>. For more information, see <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * in Wikipedia.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    ValidateE911AddressRequest& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dress postal code, such <code>04352</code>.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    ValidateE911AddressRequest& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_streetNumber;
    bool m_streetNumberHasBeenSet = false;

    Aws::String m_streetInfo;
    bool m_streetInfoHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
