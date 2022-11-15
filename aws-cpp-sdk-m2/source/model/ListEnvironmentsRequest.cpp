/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEnvironmentsRequest::ListEnvironmentsRequest() : 
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListEnvironmentsRequest::SerializePayload() const
{
  return {};
}

void ListEnvironmentsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_engineTypeHasBeenSet)
    {
      ss << EngineTypeMapper::GetNameForEngineType(m_engineType);
      uri.AddQueryStringParameter("engineType", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_namesHasBeenSet)
    {
      for(const auto& item : m_names)
      {
        ss << item;
        uri.AddQueryStringParameter("names", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



