/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/PutFindingsPublicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFindingsPublicationConfigurationRequest::PutFindingsPublicationConfigurationRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_securityHubConfigurationHasBeenSet(false)
{
}

Aws::String PutFindingsPublicationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_securityHubConfigurationHasBeenSet)
  {
   payload.WithObject("securityHubConfiguration", m_securityHubConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




