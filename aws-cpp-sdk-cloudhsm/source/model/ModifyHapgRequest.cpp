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
   Array<JsonValue> partitionSerialListJsonList(m_partitionSerialList.size());
   for(unsigned partitionSerialListIndex = 0; partitionSerialListIndex < partitionSerialListJsonList.GetLength(); ++partitionSerialListIndex)
   {
     partitionSerialListJsonList[partitionSerialListIndex].AsString(m_partitionSerialList[partitionSerialListIndex]);
   }
   payload.WithArray("PartitionSerialList", std::move(partitionSerialListJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyHapgRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ModifyHapg"));
  return headers;

}



