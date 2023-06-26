/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPhoneNumbersRequest::ListPhoneNumbersRequest() : 
    m_instanceIdHasBeenSet(false),
    m_phoneNumberTypesHasBeenSet(false),
    m_phoneNumberCountryCodesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListPhoneNumbersRequest::SerializePayload() const
{
  return {};
}

void ListPhoneNumbersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_phoneNumberTypesHasBeenSet)
    {
      for(const auto& item : m_phoneNumberTypes)
      {
        ss << PhoneNumberTypeMapper::GetNameForPhoneNumberType(item);
        uri.AddQueryStringParameter("phoneNumberTypes", ss.str());
        ss.str("");
      }
    }

    if(m_phoneNumberCountryCodesHasBeenSet)
    {
      for(const auto& item : m_phoneNumberCountryCodes)
      {
        ss << PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(item);
        uri.AddQueryStringParameter("phoneNumberCountryCodes", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



