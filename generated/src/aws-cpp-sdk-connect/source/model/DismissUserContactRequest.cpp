/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DismissUserContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DismissUserContactRequest::DismissUserContactRequest() : 
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false)
{
}

Aws::String DismissUserContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  return payload.View().WriteReadable();
}




