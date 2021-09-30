/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/PutAlternateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAlternateContactRequest::PutAlternateContactRequest() : 
    m_accountIdHasBeenSet(false),
    m_alternateContactType(AlternateContactType::NOT_SET),
    m_alternateContactTypeHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

Aws::String PutAlternateContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_alternateContactTypeHasBeenSet)
  {
   payload.WithString("AlternateContactType", AlternateContactTypeMapper::GetNameForAlternateContactType(m_alternateContactType));
  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  return payload.View().WriteReadable();
}




