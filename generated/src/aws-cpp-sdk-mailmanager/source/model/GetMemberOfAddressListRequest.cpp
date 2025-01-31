﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetMemberOfAddressListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMemberOfAddressListRequest::GetMemberOfAddressListRequest() : 
    m_addressHasBeenSet(false),
    m_addressListIdHasBeenSet(false)
{
}

Aws::String GetMemberOfAddressListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_addressListIdHasBeenSet)
  {
   payload.WithString("AddressListId", m_addressListId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMemberOfAddressListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetMemberOfAddressList"));
  return headers;

}




