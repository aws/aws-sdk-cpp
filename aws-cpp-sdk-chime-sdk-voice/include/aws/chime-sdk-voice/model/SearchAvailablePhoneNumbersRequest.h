/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class SearchAvailablePhoneNumbersRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API SearchAvailablePhoneNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAvailablePhoneNumbers"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetAreaCode() const{ return m_areaCode; }

    
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }

    
    inline void SetAreaCode(const Aws::String& value) { m_areaCodeHasBeenSet = true; m_areaCode = value; }

    
    inline void SetAreaCode(Aws::String&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::move(value); }

    
    inline void SetAreaCode(const char* value) { m_areaCodeHasBeenSet = true; m_areaCode.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const Aws::String& value) { SetAreaCode(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(Aws::String&& value) { SetAreaCode(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const char* value) { SetAreaCode(value); return *this;}


    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithCity(const char* value) { SetCity(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithState(const char* value) { SetState(value); return *this;}


    
    inline const Aws::String& GetTollFreePrefix() const{ return m_tollFreePrefix; }

    
    inline bool TollFreePrefixHasBeenSet() const { return m_tollFreePrefixHasBeenSet; }

    
    inline void SetTollFreePrefix(const Aws::String& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = value; }

    
    inline void SetTollFreePrefix(Aws::String&& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = std::move(value); }

    
    inline void SetTollFreePrefix(const char* value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const Aws::String& value) { SetTollFreePrefix(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(Aws::String&& value) { SetTollFreePrefix(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const char* value) { SetTollFreePrefix(value); return *this;}


    
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }

    
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }

    
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }

    
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_areaCode;
    bool m_areaCodeHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_tollFreePrefix;
    bool m_tollFreePrefixHasBeenSet = false;

    PhoneNumberType m_phoneNumberType;
    bool m_phoneNumberTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
