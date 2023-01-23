/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/UpdateGameConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameConfigurationRequest::UpdateGameConfigurationRequest() : 
    m_gameNameHasBeenSet(false),
    m_modificationsHasBeenSet(false)
{
}

Aws::String UpdateGameConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modificationsJsonList(m_modifications.size());
   for(unsigned modificationsIndex = 0; modificationsIndex < modificationsJsonList.GetLength(); ++modificationsIndex)
   {
     modificationsJsonList[modificationsIndex].AsObject(m_modifications[modificationsIndex].Jsonize());
   }
   payload.WithArray("Modifications", std::move(modificationsJsonList));

  }

  return payload.View().WriteReadable();
}




