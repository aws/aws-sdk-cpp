/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListV2LoggingLevelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListV2LoggingLevelsRequest::ListV2LoggingLevelsRequest() : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListV2LoggingLevelsRequest::SerializePayload() const
{
  return {};
}

void ListV2LoggingLevelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetTypeHasBeenSet)
    {
      ss << LogTargetTypeMapper::GetNameForLogTargetType(m_targetType);
      uri.AddQueryStringParameter("targetType", ss.str());
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



