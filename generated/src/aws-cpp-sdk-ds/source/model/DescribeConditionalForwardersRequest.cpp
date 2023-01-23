/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> remoteDomainNamesJsonList(m_remoteDomainNames.size());
   for(unsigned remoteDomainNamesIndex = 0; remoteDomainNamesIndex < remoteDomainNamesJsonList.GetLength(); ++remoteDomainNamesIndex)
   {
     remoteDomainNamesJsonList[remoteDomainNamesIndex].AsString(m_remoteDomainNames[remoteDomainNamesIndex]);
   }
   payload.WithArray("RemoteDomainNames", std::move(remoteDomainNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConditionalForwardersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeConditionalForwarders"));
  return headers;

}




