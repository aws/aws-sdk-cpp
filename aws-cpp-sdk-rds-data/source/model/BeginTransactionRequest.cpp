/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/BeginTransactionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BeginTransactionRequest::BeginTransactionRequest() : 
    m_resourceArnHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

Aws::String BeginTransactionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  return payload.View().WriteReadable();
}




