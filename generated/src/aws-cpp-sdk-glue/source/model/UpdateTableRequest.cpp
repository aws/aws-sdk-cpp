/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTableRequest::SerializePayload() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tableInputHasBeenSet)
  {
   payload.WithObject("TableInput", m_tableInput.Jsonize());

  }

  if(m_skipArchiveHasBeenSet)
  {
   payload.WithBool("SkipArchive", m_skipArchive);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_viewUpdateActionHasBeenSet)
  {
   payload.WithString("ViewUpdateAction", ViewUpdateActionMapper::GetNameForViewUpdateAction(m_viewUpdateAction));
  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("Force", m_force);

  }

  if(m_updateOpenTableFormatInputHasBeenSet)
  {
   payload.WithObject("UpdateOpenTableFormatInput", m_updateOpenTableFormatInput.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateTable"));
  return headers;

}




