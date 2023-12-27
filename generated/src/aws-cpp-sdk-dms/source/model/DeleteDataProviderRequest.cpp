/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteDataProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDataProviderRequest::DeleteDataProviderRequest() : 
    m_dataProviderIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDataProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataProviderIdentifierHasBeenSet)
  {
   payload.WithString("DataProviderIdentifier", m_dataProviderIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDataProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteDataProvider"));
  return headers;

}




