/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ImportApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ImportApiRequest::ImportApiRequest() : 
    m_basepathHasBeenSet(false),
    m_failOnWarnings(false),
    m_failOnWarningsHasBeenSet(false),
    m_requestBodyHasBeenSet(false)
{
}

Aws::String ImportApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestBodyHasBeenSet)
  {
   payload.WithString("body", m_requestBody);

  }

  return payload.View().WriteReadable();
}

void ImportApiRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_basepathHasBeenSet)
    {
      ss << m_basepath;
      uri.AddQueryStringParameter("basepath", ss.str());
      ss.str("");
    }

    if(m_failOnWarningsHasBeenSet)
    {
      ss << m_failOnWarnings;
      uri.AddQueryStringParameter("failOnWarnings", ss.str());
      ss.str("");
    }

}



