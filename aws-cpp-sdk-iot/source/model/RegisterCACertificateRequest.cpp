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
#include <aws/iot/model/RegisterCACertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

RegisterCACertificateRequest::RegisterCACertificateRequest() : 
    m_caCertificateHasBeenSet(false),
    m_verificationCertificateHasBeenSet(false),
    m_setAsActive(false),
    m_setAsActiveHasBeenSet(false),
    m_allowAutoRegistration(false),
    m_allowAutoRegistrationHasBeenSet(false)
{
}

Aws::String RegisterCACertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caCertificateHasBeenSet)
  {
   payload.WithString("caCertificate", m_caCertificate);

  }

  if(m_verificationCertificateHasBeenSet)
  {
   payload.WithString("verificationCertificate", m_verificationCertificate);

  }

  return payload.WriteReadable();
}

void RegisterCACertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsActiveHasBeenSet)
    {
      ss << m_setAsActive;
      uri.AddQueryStringParameter("setAsActive", ss.str());
      ss.str("");
    }

    if(m_allowAutoRegistrationHasBeenSet)
    {
      ss << m_allowAutoRegistration;
      uri.AddQueryStringParameter("allowAutoRegistration", ss.str());
      ss.str("");
    }

}


