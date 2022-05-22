/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceARNHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  return {};
}

void UntagResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceARNHasBeenSet)
    {
      ss << m_resourceARN;
      uri.AddQueryStringParameter("resourceARN", ss.str());
      ss.str("");
    }

    if(m_tagKeysHasBeenSet)
    {
      for(const auto& item : m_tagKeys)
      {
        ss << item;
        uri.AddQueryStringParameter("tagKeys", ss.str());
        ss.str("");
      }
    }

}



