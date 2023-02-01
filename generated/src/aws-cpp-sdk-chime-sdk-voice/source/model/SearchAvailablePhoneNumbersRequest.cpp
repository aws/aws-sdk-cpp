/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SearchAvailablePhoneNumbersRequest::SearchAvailablePhoneNumbersRequest() : 
    m_areaCodeHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tollFreePrefixHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String SearchAvailablePhoneNumbersRequest::SerializePayload() const
{
  return {};
}

void SearchAvailablePhoneNumbersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_areaCodeHasBeenSet)
    {
      ss << m_areaCode;
      uri.AddQueryStringParameter("area-code", ss.str());
      ss.str("");
    }

    if(m_cityHasBeenSet)
    {
      ss << m_city;
      uri.AddQueryStringParameter("city", ss.str());
      ss.str("");
    }

    if(m_countryHasBeenSet)
    {
      ss << m_country;
      uri.AddQueryStringParameter("country", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << m_state;
      uri.AddQueryStringParameter("state", ss.str());
      ss.str("");
    }

    if(m_tollFreePrefixHasBeenSet)
    {
      ss << m_tollFreePrefix;
      uri.AddQueryStringParameter("toll-free-prefix", ss.str());
      ss.str("");
    }

    if(m_phoneNumberTypeHasBeenSet)
    {
      ss << PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberType);
      uri.AddQueryStringParameter("phone-number-type", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

}



