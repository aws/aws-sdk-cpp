/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateInstanceStorageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateInstanceStorageConfigRequest::AssociateInstanceStorageConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_resourceType(InstanceStorageResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_storageConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String AssociateInstanceStorageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", InstanceStorageResourceTypeMapper::GetNameForInstanceStorageResourceType(m_resourceType));
  }

  if(m_storageConfigHasBeenSet)
  {
   payload.WithObject("StorageConfig", m_storageConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




