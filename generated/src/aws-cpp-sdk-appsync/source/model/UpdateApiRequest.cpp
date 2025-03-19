/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UpdateApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerContactHasBeenSet)
  {
   payload.WithString("ownerContact", m_ownerContact);

  }

  if(m_eventConfigHasBeenSet)
  {
   payload.WithObject("eventConfig", m_eventConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




