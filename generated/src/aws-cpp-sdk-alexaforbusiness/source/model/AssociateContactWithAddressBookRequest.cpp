/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/AssociateContactWithAddressBookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateContactWithAddressBookRequest::AssociateContactWithAddressBookRequest() : 
    m_contactArnHasBeenSet(false),
    m_addressBookArnHasBeenSet(false)
{
}

Aws::String AssociateContactWithAddressBookRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_addressBookArnHasBeenSet)
  {
   payload.WithString("AddressBookArn", m_addressBookArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateContactWithAddressBookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.AssociateContactWithAddressBook"));
  return headers;

}




