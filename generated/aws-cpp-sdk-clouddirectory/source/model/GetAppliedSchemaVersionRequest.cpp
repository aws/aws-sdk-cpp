/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/GetAppliedSchemaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAppliedSchemaVersionRequest::GetAppliedSchemaVersionRequest() : 
    m_schemaArnHasBeenSet(false)
{
}

Aws::String GetAppliedSchemaVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  return payload.View().WriteReadable();
}




