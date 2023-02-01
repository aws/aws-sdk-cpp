/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_allowAutoRegistrationHasBeenSet(false),
    m_registrationConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_certificateMode(CertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false)
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

  if(m_registrationConfigHasBeenSet)
  {
   payload.WithObject("registrationConfig", m_registrationConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", CertificateModeMapper::GetNameForCertificateMode(m_certificateMode));
  }

  return payload.View().WriteReadable();
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



