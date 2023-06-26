/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribeAgreementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAgreementRequest::DescribeAgreementRequest() : 
    m_agreementIdHasBeenSet(false),
    m_serverIdHasBeenSet(false)
{
}

Aws::String DescribeAgreementRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DescribeAgreementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DescribeAgreement"));
  return headers;

}




