/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  return {};
}

void ListTagsForResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

}



