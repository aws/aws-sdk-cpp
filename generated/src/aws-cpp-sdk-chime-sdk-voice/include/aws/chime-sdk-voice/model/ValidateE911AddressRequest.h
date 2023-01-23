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
    AWS_CHIMESDKVOICE_API ValidateE911AddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateE911Address"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    
    inline ValidateE911AddressRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    
    inline ValidateE911AddressRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    
    inline ValidateE911AddressRequest& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    
    inline ValidateE911AddressRequest& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    
    inline const Aws::String& GetStreetInfo() const{ return m_streetInfo; }

    
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }

    
    inline void SetStreetInfo(const Aws::String& value) { m_streetInfoHasBeenSet = true; m_streetInfo = value; }

    
    inline void SetStreetInfo(Aws::String&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::move(value); }

    
    inline void SetStreetInfo(const char* value) { m_streetInfoHasBeenSet = true; m_streetInfo.assign(value); }

    
    inline ValidateE911AddressRequest& WithStreetInfo(const Aws::String& value) { SetStreetInfo(value); return *this;}

    
    inline ValidateE911AddressRequest& WithStreetInfo(Aws::String&& value) { SetStreetInfo(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithStreetInfo(const char* value) { SetStreetInfo(value); return *this;}


    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline ValidateE911AddressRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline ValidateE911AddressRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithCity(const char* value) { SetCity(value); return *this;}


    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline ValidateE911AddressRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline ValidateE911AddressRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithState(const char* value) { SetState(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline ValidateE911AddressRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline ValidateE911AddressRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline ValidateE911AddressRequest& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline ValidateE911AddressRequest& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    
    inline ValidateE911AddressRequest& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

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
