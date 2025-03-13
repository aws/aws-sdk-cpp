/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/AcceptPrimaryEmailUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptPrimaryEmailUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_otpHasBeenSet)
  {
   payload.WithString("Otp", m_otp);

  }

  if(m_primaryEmailHasBeenSet)
  {
   payload.WithString("PrimaryEmail", m_primaryEmail);

  }

  return payload.View().WriteReadable();
}




