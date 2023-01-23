/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RegisterCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterCertificateRequest::RegisterCertificateRequest() : 
    m_directoryIdHasBeenSet(false),
    m_certificateDataHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_clientCertAuthSettingsHasBeenSet(false)
{
}

Aws::String RegisterCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_certificateDataHasBeenSet)
  {
   payload.WithString("CertificateData", m_certificateData);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_clientCertAuthSettingsHasBeenSet)
  {
   payload.WithObject("ClientCertAuthSettings", m_clientCertAuthSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.RegisterCertificate"));
  return headers;

}




