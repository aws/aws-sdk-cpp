/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeServiceEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeServiceEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceEnvironmentsJsonList(m_serviceEnvironments.size());
   for(unsigned serviceEnvironmentsIndex = 0; serviceEnvironmentsIndex < serviceEnvironmentsJsonList.GetLength(); ++serviceEnvironmentsIndex)
   {
     serviceEnvironmentsJsonList[serviceEnvironmentsIndex].AsString(m_serviceEnvironments[serviceEnvironmentsIndex]);
   }
   payload.WithArray("serviceEnvironments", std::move(serviceEnvironmentsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




