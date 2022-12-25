/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeServicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeServicesRequest::DescribeServicesRequest() : 
    m_serviceCodeListHasBeenSet(false),
    m_languageHasBeenSet(false)
{
}

Aws::String DescribeServicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceCodeListJsonList(m_serviceCodeList.size());
   for(unsigned serviceCodeListIndex = 0; serviceCodeListIndex < serviceCodeListJsonList.GetLength(); ++serviceCodeListIndex)
   {
     serviceCodeListJsonList[serviceCodeListIndex].AsString(m_serviceCodeList[serviceCodeListIndex]);
   }
   payload.WithArray("serviceCodeList", std::move(serviceCodeListJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeServices"));
  return headers;

}




