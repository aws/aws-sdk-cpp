/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SuspendContactRecordingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SuspendContactRecordingRequest::SuspendContactRecordingRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_initialContactIdHasBeenSet(false)
{
}

Aws::String SuspendContactRecordingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_initialContactIdHasBeenSet)
  {
   payload.WithString("InitialContactId", m_initialContactId);

  }

  return payload.View().WriteReadable();
}




