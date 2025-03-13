/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxClusterDatabasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKxClusterDatabasesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_databasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databasesJsonList(m_databases.size());
   for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
   {
     databasesJsonList[databasesIndex].AsObject(m_databases[databasesIndex].Jsonize());
   }
   payload.WithArray("databases", std::move(databasesJsonList));

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




