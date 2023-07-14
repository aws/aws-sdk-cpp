/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DeleteParameterGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteParameterGroupRequest::DeleteParameterGroupRequest() : 
    m_parameterGroupNameHasBeenSet(false)
{
}

Aws::String DeleteParameterGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteParameterGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DeleteParameterGroup"));
  return headers;

}




