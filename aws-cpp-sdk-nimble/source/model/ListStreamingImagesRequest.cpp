/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListStreamingImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListStreamingImagesRequest::ListStreamingImagesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String ListStreamingImagesRequest::SerializePayload() const
{
  return {};
}

void ListStreamingImagesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_ownerHasBeenSet)
    {
      ss << m_owner;
      uri.AddQueryStringParameter("owner", ss.str());
      ss.str("");
    }

}



