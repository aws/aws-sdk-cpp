﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetConnectionRequest::GetConnectionRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_withSecret(false),
    m_withSecretHasBeenSet(false)
{
}

Aws::String GetConnectionRequest::SerializePayload() const
{
  return {};
}

void GetConnectionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_withSecretHasBeenSet)
    {
      ss << m_withSecret;
      uri.AddQueryStringParameter("withSecret", ss.str());
      ss.str("");
    }

}



