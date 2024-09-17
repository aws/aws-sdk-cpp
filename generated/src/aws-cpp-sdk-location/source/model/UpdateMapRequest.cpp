/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/UpdateMapRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMapRequest::UpdateMapRequest() : 
    m_mapNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configurationUpdateHasBeenSet(false)
{
}

Aws::String UpdateMapRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_configurationUpdateHasBeenSet)
  {
   payload.WithObject("ConfigurationUpdate", m_configurationUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}




