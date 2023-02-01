/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchWriteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchWriteRequest::BatchWriteRequest() : 
    m_directoryArnHasBeenSet(false),
    m_operationsHasBeenSet(false)
{
}

Aws::String BatchWriteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsObject(m_operations[operationsIndex].Jsonize());
   }
   payload.WithArray("Operations", std::move(operationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchWriteRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




