/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteUserDefinedFunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserDefinedFunctionRequest::DeleteUserDefinedFunctionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_functionNameHasBeenSet(false)
{
}

Aws::String DeleteUserDefinedFunctionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteUserDefinedFunctionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteUserDefinedFunction"));
  return headers;

}




