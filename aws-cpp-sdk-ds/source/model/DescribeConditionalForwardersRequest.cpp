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
#include <aws/ds/model/DescribeConditionalForwardersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConditionalForwardersRequest::DescribeConditionalForwardersRequest() : 
    m_directoryIdHasBeenSet(false),
    m_remoteDomainNamesHasBeenSet(false)
{
}

Aws::String DescribeConditionalForwardersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_remoteDomainNamesHasBeenSet)
  {
   Array<JsonValue> remoteDomainNamesJsonList(m_remoteDomainNames.size());
   for(unsigned remoteDomainNamesIndex = 0; remoteDomainNamesIndex < remoteDomainNamesJsonList.GetLength(); ++remoteDomainNamesIndex)
   {
     remoteDomainNamesJsonList[remoteDomainNamesIndex].AsString(m_remoteDomainNames[remoteDomainNamesIndex]);
   }
   payload.WithArray("RemoteDomainNames", std::move(remoteDomainNamesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConditionalForwardersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeConditionalForwarders"));
  return headers;

}



