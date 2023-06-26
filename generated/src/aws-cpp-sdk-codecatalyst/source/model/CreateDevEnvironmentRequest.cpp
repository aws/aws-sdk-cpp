/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/CreateDevEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDevEnvironmentRequest::CreateDevEnvironmentRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_idesHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_inactivityTimeoutMinutes(0),
    m_inactivityTimeoutMinutesHasBeenSet(false),
    m_persistentStorageHasBeenSet(false)
{
}

Aws::String CreateDevEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
   for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
   {
     repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
   }
   payload.WithArray("repositories", std::move(repositoriesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

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

  if(m_persistentStorageHasBeenSet)
  {
   payload.WithObject("persistentStorage", m_persistentStorage.Jsonize());

  }

  return payload.View().WriteReadable();
}




