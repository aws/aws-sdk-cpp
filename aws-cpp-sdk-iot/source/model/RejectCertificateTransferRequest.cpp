/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RejectCertificateTransferRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectCertificateTransferRequest::RejectCertificateTransferRequest() : 
    m_certificateIdHasBeenSet(false),
    m_rejectReasonHasBeenSet(false)
{
}

Aws::String RejectCertificateTransferRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rejectReasonHasBeenSet)
  {
   payload.WithString("rejectReason", m_rejectReason);

  }

  return payload.View().WriteReadable();
}




