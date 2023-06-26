/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/StartDevEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDevEnvironmentRequest::StartDevEnvironmentRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_idesHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_inactivityTimeoutMinutes(0),
    m_inactivityTimeoutMinutesHasBeenSet(false)
{
}

Aws::String StartDevEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idesJsonList(m_ides.size());
   for(unsigned idesIndex = 0; idesIndex < idesJsonList.GetLength(); ++idesIndex)
   {
     idesJsonList[idesIndex].AsObject(m_ides[idesIndex].Jsonize());
   }
   payload.WithArray("ides", std::move(idesJsonList));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_inactivityTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("inactivityTimeoutMinutes", m_inactivityTimeoutMinutes);

  }

  return payload.View().WriteReadable();
}




