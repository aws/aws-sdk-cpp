/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetStagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetStagesRequest::GetStagesRequest() : 
    m_restApiIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false)
{
}

Aws::String GetStagesRequest::SerializePayload() const
{
  return {};
}

void GetStagesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deploymentIdHasBeenSet)
    {
      ss << m_deploymentId;
      uri.AddQueryStringParameter("deploymentId", ss.str());
      ss.str("");
    }

}



