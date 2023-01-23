/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DeleteWorkGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkGroupRequest::DeleteWorkGroupRequest() : 
    m_workGroupHasBeenSet(false),
    m_recursiveDeleteOption(false),
    m_recursiveDeleteOptionHasBeenSet(false)
{
}

Aws::String DeleteWorkGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_recursiveDeleteOptionHasBeenSet)
  {
   payload.WithBool("RecursiveDeleteOption", m_recursiveDeleteOption);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteWorkGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.DeleteWorkGroup"));
  return headers;

}




