/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetBuiltinSlotTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest() : 
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_signatureContainsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetBuiltinSlotTypesRequest::SerializePayload() const
{
  return {};
}

void GetBuiltinSlotTypesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_localeHasBeenSet)
    {
      ss << LocaleMapper::GetNameForLocale(m_locale);
      uri.AddQueryStringParameter("locale", ss.str());
      ss.str("");
    }

    if(m_signatureContainsHasBeenSet)
    {
      ss << m_signatureContains;
      uri.AddQueryStringParameter("signatureContains", ss.str());
      ss.str("");
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



