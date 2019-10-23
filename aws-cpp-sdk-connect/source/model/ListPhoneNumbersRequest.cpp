/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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



