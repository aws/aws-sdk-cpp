/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserProficienciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserProficienciesRequest::UpdateUserProficienciesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userProficienciesHasBeenSet(false)
{
}

Aws::String UpdateUserProficienciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userProficienciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userProficienciesJsonList(m_userProficiencies.size());
   for(unsigned userProficienciesIndex = 0; userProficienciesIndex < userProficienciesJsonList.GetLength(); ++userProficienciesIndex)
   {
     userProficienciesJsonList[userProficienciesIndex].AsObject(m_userProficiencies[userProficienciesIndex].Jsonize());
   }
   payload.WithArray("UserProficiencies", std::move(userProficienciesJsonList));

  }

  return payload.View().WriteReadable();
}




