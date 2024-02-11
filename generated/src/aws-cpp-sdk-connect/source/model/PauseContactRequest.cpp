/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PauseContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PauseContactRequest::PauseContactRequest() : 
    m_contactIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
}

Aws::String PauseContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  return payload.View().WriteReadable();
}




