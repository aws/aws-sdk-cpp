/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DisassociateWebsiteCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateWebsiteCertificateAuthorityRequest::DisassociateWebsiteCertificateAuthorityRequest() : 
    m_fleetArnHasBeenSet(false),
    m_websiteCaIdHasBeenSet(false)
{
}

Aws::String DisassociateWebsiteCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_websiteCaIdHasBeenSet)
  {
   payload.WithString("WebsiteCaId", m_websiteCaId);

  }

  return payload.View().WriteReadable();
}




