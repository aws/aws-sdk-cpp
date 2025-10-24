﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/model/DeregisterMemberFromAddressListRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeregisterMemberFromAddressListRequest::SerializePayload() const {
  JsonValue payload;

  if (m_addressListIdHasBeenSet) {
    payload.WithString("AddressListId", m_addressListId);
  }

  if (m_addressHasBeenSet) {
    payload.WithString("Address", m_address);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterMemberFromAddressListRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.DeregisterMemberFromAddressList"));
  return headers;
}
