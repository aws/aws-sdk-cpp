/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/UpdateIdentityProviderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIdentityProviderConfigurationRequest::UpdateIdentityProviderConfigurationRequest() : 
    m_fleetArnHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_identityProviderSamlMetadataHasBeenSet(false)
{
}

Aws::String UpdateIdentityProviderConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("IdentityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_identityProviderSamlMetadataHasBeenSet)
  {
   payload.WithString("IdentityProviderSamlMetadata", m_identityProviderSamlMetadata);

  }

  return payload.View().WriteReadable();
}




