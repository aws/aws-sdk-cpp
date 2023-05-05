/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DisassociateIdentityProviderConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateIdentityProviderConfigRequest::DisassociateIdentityProviderConfigRequest() : 
    m_clusterNameHasBeenSet(false),
    m_identityProviderConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String DisassociateIdentityProviderConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityProviderConfigHasBeenSet)
  {
   payload.WithObject("identityProviderConfig", m_identityProviderConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




