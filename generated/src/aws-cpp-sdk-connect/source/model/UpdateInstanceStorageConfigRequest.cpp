/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateInstanceStorageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateInstanceStorageConfigRequest::UpdateInstanceStorageConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_resourceType(InstanceStorageResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_storageConfigHasBeenSet(false)
{
}

Aws::String UpdateInstanceStorageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageConfigHasBeenSet)
  {
   payload.WithObject("StorageConfig", m_storageConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdateInstanceStorageConfigRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << InstanceStorageResourceTypeMapper::GetNameForInstanceStorageResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

}



