/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetResourceRequest::GetResourceRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_embedHasBeenSet(false)
{
}

Aws::String GetResourceRequest::SerializePayload() const
{
  return {};
}

void GetResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_embedHasBeenSet)
    {
      for(const auto& item : m_embed)
      {
        ss << item;
        uri.AddQueryStringParameter("embed", ss.str());
        ss.str("");
      }
    }

}



