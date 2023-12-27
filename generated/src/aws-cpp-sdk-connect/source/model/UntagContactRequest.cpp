/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UntagContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UntagContactRequest::UntagContactRequest() : 
    m_contactIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagContactRequest::SerializePayload() const
{
  return {};
}

void UntagContactRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_tagKeysHasBeenSet)
    {
      for(const auto& item : m_tagKeys)
      {
        ss << item;
        uri.AddQueryStringParameter("TagKeys", ss.str());
        ss.str("");
      }
    }

}



