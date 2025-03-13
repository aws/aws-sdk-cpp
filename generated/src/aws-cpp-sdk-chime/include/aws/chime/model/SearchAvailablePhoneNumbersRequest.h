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
    AWS_CHIME_API SearchAvailablePhoneNumbersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAvailablePhoneNumbers"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The area code used to filter results. Only applies to the US.</p>
     */
    inline const Aws::String& GetAreaCode() const { return m_areaCode; }
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }
    template<typename AreaCodeT = Aws::String>
    void SetAreaCode(AreaCodeT&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::forward<AreaCodeT>(value); }
    template<typename AreaCodeT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithAreaCode(AreaCodeT&& value) { SetAreaCode(std::forward<AreaCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city used to filter results. Only applies to the US.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country used to filter results. Defaults to the US Format: ISO 3166-1
     * alpha-2.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state used to filter results. Required only if you provide
     * <code>City</code>. Only applies to the US.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The toll-free prefix that you use to filter results. Only applies to the
     * US.</p>
     */
    inline const Aws::String& GetTollFreePrefix() const { return m_tollFreePrefix; }
    inline bool TollFreePrefixHasBeenSet() const { return m_tollFreePrefixHasBeenSet; }
    template<typename TollFreePrefixT = Aws::String>
    void SetTollFreePrefix(TollFreePrefixT&& value) { m_tollFreePrefixHasBeenSet = true; m_tollFreePrefix = std::forward<TollFreePrefixT>(value); }
    template<typename TollFreePrefixT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithTollFreePrefix(TollFreePrefixT&& value) { SetTollFreePrefix(std::forward<TollFreePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number type used to filter results. Required for non-US
     * numbers.</p>
     */
    inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(PhoneNumberType value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType value) { SetPhoneNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
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

    PhoneNumberType m_phoneNumberType{PhoneNumberType::NOT_SET};
    bool m_phoneNumberTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
