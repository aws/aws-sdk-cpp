/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/PutContactInformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutContactInformationRequest::PutContactInformationRequest() : 
    m_accountIdHasBeenSet(false),
    m_contactInformationHasBeenSet(false)
{
}

Aws::String PutContactInformationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_contactInformationHasBeenSet)
  {
   payload.WithObject("ContactInformation", m_contactInformation.Jsonize());

  }

  return payload.View().WriteReadable();
}




