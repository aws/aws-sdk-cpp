﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StopContactRecordingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopContactRecordingRequest::StopContactRecordingRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_contactRecordingType(ContactRecordingType::NOT_SET),
    m_contactRecordingTypeHasBeenSet(false)
{
}

Aws::String StopContactRecordingRequest::SerializePayload() const
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

  if(m_contactRecordingTypeHasBeenSet)
  {
   payload.WithString("ContactRecordingType", ContactRecordingTypeMapper::GetNameForContactRecordingType(m_contactRecordingType));
  }

  return payload.View().WriteReadable();
}




