/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ConfirmCustomerAgreementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfirmCustomerAgreementRequest::ConfirmCustomerAgreementRequest() : 
    m_agreementNameHasBeenSet(false)
{
}

Aws::String ConfirmCustomerAgreementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agreementNameHasBeenSet)
  {
   payload.WithString("agreementName", m_agreementName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ConfirmCustomerAgreementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.ConfirmCustomerAgreement"));
  return headers;

}




