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


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline const Aws::String& GetAreaCode() const{ return m_areaCode; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline void SetAreaCode(const Aws::String& value) { m_areaCodeHasBeenSet = true; m_areaCode = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline void SetAreaCode(Aws::String&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline void SetAreaCode(const char* value) { m_areaCodeHasBeenSet = true; m_areaCode.assign(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const Aws::String& value) { SetAreaCode(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(Aws::String&& value) { SetAreaCode(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * area code.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const char* value) { SetAreaCode(value); return *this;}


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * city.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * country.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * state.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline const Aws::String& GetTollFreePrefix() const{ return m_tollFreePrefix; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline bool TollFreePrefixHasBeenSet() const { return m_tollFreePrefixHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline void SetTollFreePrefix(const Aws::String& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline void SetTollFreePrefix(Aws::String&& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline void SetTollFreePrefix(const char* value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix.assign(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const Aws::String& value) { SetTollFreePrefix(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(Aws::String&& value) { SetTollFreePrefix(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * toll-free prefix.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const char* value) { SetTollFreePrefix(value); return *this;}


    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers associated with the specified
     * phone number type, either <b>local</b> or <b>toll-free</b>.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
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
