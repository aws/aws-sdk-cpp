/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ModifyHapgRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyHapgRequest::ModifyHapgRequest() : 
    m_hapgArnHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_partitionSerialListHasBeenSet(false)
{
}

Aws::String ModifyHapgRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hapgArnHasBeenSet)
  {
   payload.WithString("HapgArn", m_hapgArn);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_partitionSerialListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionSerialListJsonList(m_partitionSerialList.size());
   for(unsigned partitionSerialListIndex = 0; partitionSerialListIndex < partitionSerialListJsonList.GetLength(); ++partitionSerialListIndex)
   {
     partitionSerialListJsonList[partitionSerialListIndex].AsString(m_partitionSerialList[partitionSerialListIndex]);
   }
   payload.WithArray("PartitionSerialList", std::move(partitionSerialListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyHapgRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ModifyHapg"));
  return headers;

}




