/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  return "";
}

Aws::Http::HeaderValueCollection GetExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptsHasBeenSet)
  {
    ss << m_accepts;
    headers.insert(Aws::Http::HeaderValuePair("accept", ss.str()));
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


