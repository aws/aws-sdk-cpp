/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateCACertificateRequest::UpdateCACertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_newStatus(CACertificateStatus::NOT_SET),
    m_newStatusHasBeenSet(false),
    m_newAutoRegistrationStatus(AutoRegistrationStatus::NOT_SET),
    m_newAutoRegistrationStatusHasBeenSet(false),
    m_registrationConfigHasBeenSet(false),
    m_removeAutoRegistration(false),
    m_removeAutoRegistrationHasBeenSet(false)
{
}

Aws::String UpdateCACertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationConfigHasBeenSet)
  {
   payload.WithObject("registrationConfig", m_registrationConfig.Jsonize());

  }

  if(m_removeAutoRegistrationHasBeenSet)
  {
   payload.WithBool("removeAutoRegistration", m_removeAutoRegistration);

  }

  return payload.View().WriteReadable();
}

void UpdateCACertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_newStatusHasBeenSet)
    {
      ss << CACertificateStatusMapper::GetNameForCACertificateStatus(m_newStatus);
      uri.AddQueryStringParameter("newStatus", ss.str());
      ss.str("");
    }

    if(m_newAutoRegistrationStatusHasBeenSet)
    {
      ss << AutoRegistrationStatusMapper::GetNameForAutoRegistrationStatus(m_newAutoRegistrationStatus);
      uri.AddQueryStringParameter("newAutoRegistrationStatus", ss.str());
      ss.str("");
    }

}



