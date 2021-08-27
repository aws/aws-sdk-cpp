/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/ListPresetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPresetsRequest::ListPresetsRequest() : 
    m_ascendingHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String ListPresetsRequest::SerializePayload() const
{
  return {};
}

void ListPresetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ascendingHasBeenSet)
    {
      ss << m_ascending;
      uri.AddQueryStringParameter("Ascending", ss.str());
      ss.str("");
    }

    if(m_pageTokenHasBeenSet)
    {
      ss << m_pageToken;
      uri.AddQueryStringParameter("PageToken", ss.str());
      ss.str("");
    }

}



