/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTagsRequest::ListTagsRequest() : 
    m_aRNHasBeenSet(false)
{
}

Aws::String ListTagsRequest::SerializePayload() const
{
  return {};
}

void ListTagsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_aRNHasBeenSet)
    {
      ss << m_aRN;
      uri.AddQueryStringParameter("arn", ss.str());
      ss.str("");
    }

}



