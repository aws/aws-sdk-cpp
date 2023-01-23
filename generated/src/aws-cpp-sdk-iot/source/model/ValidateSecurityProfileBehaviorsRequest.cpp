/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ValidateSecurityProfileBehaviorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateSecurityProfileBehaviorsRequest::ValidateSecurityProfileBehaviorsRequest() : 
    m_behaviorsHasBeenSet(false)
{
}

Aws::String ValidateSecurityProfileBehaviorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_behaviorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> behaviorsJsonList(m_behaviors.size());
   for(unsigned behaviorsIndex = 0; behaviorsIndex < behaviorsJsonList.GetLength(); ++behaviorsIndex)
   {
     behaviorsJsonList[behaviorsIndex].AsObject(m_behaviors[behaviorsIndex].Jsonize());
   }
   payload.WithArray("behaviors", std::move(behaviorsJsonList));

  }

  return payload.View().WriteReadable();
}




