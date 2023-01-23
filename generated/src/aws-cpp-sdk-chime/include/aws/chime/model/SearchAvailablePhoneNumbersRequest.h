/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Chime
{
namespace Model
{

  /**
   */
  class SearchAvailablePhoneNumbersRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API SearchAvailablePhoneNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAvailablePhoneNumbers"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline const Aws::String& GetAreaCode() const{ return m_areaCode; }

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline void SetAreaCode(const Aws::String& value) { m_areaCodeHasBeenSet = true; m_areaCode = value; }

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline void SetAreaCode(Aws::String&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::move(value); }

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline void SetAreaCode(const char* value) { m_areaCodeHasBeenSet = true; m_areaCode.assign(value); }

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const Aws::String& value) { SetAreaCode(value); return *this;}

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(Aws::String&& value) { SetAreaCode(std::move(value)); return *this;}

    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithAreaCode(const char* value) { SetAreaCode(value); return *this;}


    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline const Aws::String& GetTollFreePrefix() const{ return m_tollFreePrefix; }

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline bool TollFreePrefixHasBeenSet() const { return m_tollFreePrefixHasBeenSet; }

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline void SetTollFreePrefix(const Aws::String& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = value; }

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline void SetTollFreePrefix(Aws::String&& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = std::move(value); }

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline void SetTollFreePrefix(const char* value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix.assign(value); }

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const Aws::String& value) { SetTollFreePrefix(value); return *this;}

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(Aws::String&& value) { SetTollFreePrefix(std::move(value)); return *this;}

    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(const char* value) { SetTollFreePrefix(value); return *this;}


    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }

    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }

    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }

    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }

    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
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
} // namespace Chime
} // namespace Aws
