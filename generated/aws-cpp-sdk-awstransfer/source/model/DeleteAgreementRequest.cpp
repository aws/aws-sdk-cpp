/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteAgreementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAgreementRequest::DeleteAgreementRequest() : 
    m_agreementIdHasBeenSet(false),
    m_serverIdHasBeenSet(false)
{
}

Aws::String DeleteAgreementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("AgreementId", m_agreementId);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAgreementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteAgreement"));
  return headers;

}




