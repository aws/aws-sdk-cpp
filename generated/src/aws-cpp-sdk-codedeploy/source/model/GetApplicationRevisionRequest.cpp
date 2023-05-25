/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GetApplicationRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationRevisionRequest::GetApplicationRevisionRequest() : 
    m_applicationNameHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

Aws::String GetApplicationRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithObject("revision", m_revision.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetApplicationRevisionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.GetApplicationRevision"));
  return headers;

}




