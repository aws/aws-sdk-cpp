/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AssociateWebsiteCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWebsiteCertificateAuthorityRequest::AssociateWebsiteCertificateAuthorityRequest() : 
    m_fleetArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

Aws::String AssociateWebsiteCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload.View().WriteReadable();
}




