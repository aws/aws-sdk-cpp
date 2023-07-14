/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetApiKeyRequest::GetApiKeyRequest() : 
    m_apiKeyHasBeenSet(false),
    m_includeValue(false),
    m_includeValueHasBeenSet(false)
{
}

Aws::String GetApiKeyRequest::SerializePayload() const
{
  return {};
}

void GetApiKeyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeValueHasBeenSet)
    {
      ss << m_includeValue;
      uri.AddQueryStringParameter("includeValue", ss.str());
      ss.str("");
    }

}



