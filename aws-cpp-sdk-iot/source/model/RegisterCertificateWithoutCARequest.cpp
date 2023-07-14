/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RegisterCertificateWithoutCARequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterCertificateWithoutCARequest::RegisterCertificateWithoutCARequest() : 
    m_certificatePemHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String RegisterCertificateWithoutCARequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("certificatePem", m_certificatePem);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  return payload.View().WriteReadable();
}




