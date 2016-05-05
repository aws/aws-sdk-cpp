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
#include <aws/iot/model/RegisterCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

RegisterCertificateRequest::RegisterCertificateRequest() : 
    m_certificatePemHasBeenSet(false),
    m_caCertificatePemHasBeenSet(false),
    m_setAsActive(false),
    m_setAsActiveHasBeenSet(false)
{
}

Aws::String RegisterCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("certificatePem", m_certificatePem);

  }

  if(m_caCertificatePemHasBeenSet)
  {
   payload.WithString("caCertificatePem", m_caCertificatePem);

  }

  return payload.WriteReadable();
}

void RegisterCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsActiveHasBeenSet)
    {
      ss << m_setAsActive;
      uri.AddQueryStringParameter("setAsActive", ss.str());
      ss.str("");
    }

}


