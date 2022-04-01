﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConformancePackStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConformancePackStatusRequest::DescribeConformancePackStatusRequest() : 
    m_conformancePackNamesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeConformancePackStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_conformancePackNamesHasBeenSet)
  {
   Array<JsonValue> conformancePackNamesJsonList(m_conformancePackNames.size());
   for(unsigned conformancePackNamesIndex = 0; conformancePackNamesIndex < conformancePackNamesJsonList.GetLength(); ++conformancePackNamesIndex)
   {
     conformancePackNamesJsonList[conformancePackNamesIndex].AsString(m_conformancePackNames[conformancePackNamesIndex]);
   }
   payload.WithArray("ConformancePackNames", std::move(conformancePackNamesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConformancePackStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeConformancePackStatus"));
  return headers;

}




