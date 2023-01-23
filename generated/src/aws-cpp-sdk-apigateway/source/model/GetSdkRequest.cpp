/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetSdkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSdkRequest::GetSdkRequest() : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_sdkTypeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String GetSdkRequest::SerializePayload() const
{
  return {};
}

void GetSdkRequest::AddQueryStringParameters(URI& uri) const
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



