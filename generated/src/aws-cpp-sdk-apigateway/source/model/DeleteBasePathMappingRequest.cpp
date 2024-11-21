﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DeleteBasePathMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteBasePathMappingRequest::DeleteBasePathMappingRequest() : 
    m_domainNameHasBeenSet(false),
    m_domainNameIdHasBeenSet(false),
    m_basePathHasBeenSet(false)
{
}

Aws::String DeleteBasePathMappingRequest::SerializePayload() const
{
  return {};
}

void DeleteBasePathMappingRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainNameIdHasBeenSet)
    {
      ss << m_domainNameId;
      uri.AddQueryStringParameter("domainNameId", ss.str());
      ss.str("");
    }

}



