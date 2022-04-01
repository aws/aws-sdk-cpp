/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatabaseRequest::UpdateDatabaseRequest() : 
    m_catalogIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_databaseInputHasBeenSet(false)
{
}

Aws::String UpdateDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseInputHasBeenSet)
  {
   payload.WithObject("DatabaseInput", m_databaseInput.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateDatabase"));
  return headers;

}




