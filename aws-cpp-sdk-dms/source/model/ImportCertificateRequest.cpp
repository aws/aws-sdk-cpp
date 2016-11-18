/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateRequest::ImportCertificateRequest() : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificatePemHasBeenSet(false)
{
}

Aws::String ImportCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateIdentifierHasBeenSet)
  {
   payload.WithString("CertificateIdentifier", m_certificateIdentifier);

  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("CertificatePem", m_certificatePem);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ImportCertificate"));
  return headers;

}



