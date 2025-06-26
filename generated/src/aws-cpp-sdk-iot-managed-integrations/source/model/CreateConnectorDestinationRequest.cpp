/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CreateConnectorDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateConnectorDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_cloudConnectorIdHasBeenSet)
  {
   payload.WithString("CloudConnectorId", m_cloudConnectorId);

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("AuthType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_authConfigHasBeenSet)
  {
   payload.WithObject("AuthConfig", m_authConfig.Jsonize());

  }

  if(m_secretsManagerHasBeenSet)
  {
   payload.WithObject("SecretsManager", m_secretsManager.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




