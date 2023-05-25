/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetModelRequest::GetModelRequest() : 
    m_restApiIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_flatten(false),
    m_flattenHasBeenSet(false)
{
}

Aws::String GetModelRequest::SerializePayload() const
{
  return {};
}

void GetModelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_flattenHasBeenSet)
    {
      ss << m_flatten;
      uri.AddQueryStringParameter("flatten", ss.str());
      ss.str("");
    }

}



