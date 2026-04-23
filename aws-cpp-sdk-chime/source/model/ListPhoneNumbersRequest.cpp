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

#include <aws/chime/model/ListPhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPhoneNumbersRequest::ListPhoneNumbersRequest() : 
    m_status(PhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_filterName(PhoneNumberAssociationName::NOT_SET),
    m_filterNameHasBeenSet(false),
    m_filterValueHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListPhoneNumbersRequest::SerializePayload() const
{
  return {};
}

void ListPhoneNumbersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_statusHasBeenSet)
    {
      ss << PhoneNumberStatusMapper::GetNameForPhoneNumberStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_productTypeHasBeenSet)
    {
      ss << PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType);
      uri.AddQueryStringParameter("product-type", ss.str());
      ss.str("");
    }

    if(m_filterNameHasBeenSet)
    {
      ss << PhoneNumberAssociationNameMapper::GetNameForPhoneNumberAssociationName(m_filterName);
      uri.AddQueryStringParameter("filter-name", ss.str());
      ss.str("");
    }

    if(m_filterValueHasBeenSet)
    {
      ss << m_filterValue;
      uri.AddQueryStringParameter("filter-value", ss.str());
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



