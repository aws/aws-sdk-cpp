/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConnectionRequest::GetConnectionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_hidePassword(false),
    m_hidePasswordHasBeenSet(false)
{
}

Aws::String GetConnectionRequest::SerializePayload() const
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

  if(m_hidePasswordHasBeenSet)
  {
   payload.WithBool("HidePassword", m_hidePassword);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetConnection"));
  return headers;

}




