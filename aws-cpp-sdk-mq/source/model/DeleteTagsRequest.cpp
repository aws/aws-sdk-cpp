/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DeleteTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteTagsRequest::DeleteTagsRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String DeleteTagsRequest::SerializePayload() const
{
  return {};
}

void DeleteTagsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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



