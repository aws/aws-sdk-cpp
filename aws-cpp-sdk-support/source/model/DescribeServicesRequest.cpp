/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> serviceCodeListJsonList(m_serviceCodeList.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeServices"));
  return headers;

}



