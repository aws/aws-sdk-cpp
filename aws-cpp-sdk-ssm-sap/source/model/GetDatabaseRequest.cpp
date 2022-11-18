/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/GetDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDatabaseRequest::GetDatabaseRequest() : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseArnHasBeenSet(false)
{
}

Aws::String GetDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_databaseArnHasBeenSet)
  {
   payload.WithString("DatabaseArn", m_databaseArn);

  }

  return payload.View().WriteReadable();
}




