/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListPhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPhoneNumbersRequest::SerializePayload() const
{
  return {};
}

void ListPhoneNumbersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_statusHasBeenSet)
    {
      ss << m_status;
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



