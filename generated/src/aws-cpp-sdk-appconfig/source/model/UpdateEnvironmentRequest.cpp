/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnvironmentRequest::UpdateEnvironmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_monitorsHasBeenSet(false)
{
}

Aws::String UpdateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_monitorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorsJsonList(m_monitors.size());
   for(unsigned monitorsIndex = 0; monitorsIndex < monitorsJsonList.GetLength(); ++monitorsIndex)
   {
     monitorsJsonList[monitorsIndex].AsObject(m_monitors[monitorsIndex].Jsonize());
   }
   payload.WithArray("Monitors", std::move(monitorsJsonList));

  }

  return payload.View().WriteReadable();
}




