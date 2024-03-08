/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DetectProfileObjectTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectProfileObjectTypeRequest::DetectProfileObjectTypeRequest() : 
    m_objectsHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String DetectProfileObjectTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectsJsonList(m_objects.size());
   for(unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex)
   {
     objectsJsonList[objectsIndex].AsString(m_objects[objectsIndex]);
   }
   payload.WithArray("Objects", std::move(objectsJsonList));

  }

  return payload.View().WriteReadable();
}




