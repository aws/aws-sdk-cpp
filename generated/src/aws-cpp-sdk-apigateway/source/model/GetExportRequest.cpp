/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetExportRequest::GetExportRequest() : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_acceptsHasBeenSet(false)
{
}

Aws::String GetExportRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptsHasBeenSet)
  {
    ss << m_accepts;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetExportRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_parametersHasBeenSet)
    {
      for(auto& item : m_parameters)
      {
        ss << item.second;
        uri.AddQueryStringParameter(item.first.c_str(), ss.str());
        ss.str("");
      }
    }

}



