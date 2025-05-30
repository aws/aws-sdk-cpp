﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ReimportApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ReimportApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestBodyHasBeenSet)
  {
   payload.WithString("body", m_requestBody);

  }

  return payload.View().WriteReadable();
}

void ReimportApiRequest::AddQueryStringParameters(URI& uri) const
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



