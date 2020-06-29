/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AssociateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDomainRequest::AssociateDomainRequest() : 
    m_fleetArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_acmCertificateArnHasBeenSet(false)
{
}

Aws::String AssociateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_acmCertificateArnHasBeenSet)
  {
   payload.WithString("AcmCertificateArn", m_acmCertificateArn);

  }

  return payload.View().WriteReadable();
}




