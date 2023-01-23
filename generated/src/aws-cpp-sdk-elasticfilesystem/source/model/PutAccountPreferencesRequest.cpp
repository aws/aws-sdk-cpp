/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/PutAccountPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountPreferencesRequest::PutAccountPreferencesRequest() : 
    m_resourceIdType(ResourceIdType::NOT_SET),
    m_resourceIdTypeHasBeenSet(false)
{
}

Aws::String PutAccountPreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdTypeHasBeenSet)
  {
   payload.WithString("ResourceIdType", ResourceIdTypeMapper::GetNameForResourceIdType(m_resourceIdType));
  }

  return payload.View().WriteReadable();
}




