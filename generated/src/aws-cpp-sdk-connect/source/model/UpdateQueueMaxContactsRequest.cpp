/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateQueueMaxContactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueMaxContactsRequest::UpdateQueueMaxContactsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_maxContacts(0),
    m_maxContactsHasBeenSet(false)
{
}

Aws::String UpdateQueueMaxContactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxContactsHasBeenSet)
  {
   payload.WithInteger("MaxContacts", m_maxContacts);

  }

  return payload.View().WriteReadable();
}




