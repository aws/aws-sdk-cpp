/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataflowGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataflowGraphRequest::GetDataflowGraphRequest() : 
    m_pythonScriptHasBeenSet(false)
{
}

Aws::String GetDataflowGraphRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pythonScriptHasBeenSet)
  {
   payload.WithString("PythonScript", m_pythonScript);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDataflowGraphRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetDataflowGraph"));
  return headers;

}




