/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/RegisterConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterConnectorRequest::RegisterConnectorRequest() : 
    m_connectorLabelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectorProvisioningType(ConnectorProvisioningType::NOT_SET),
    m_connectorProvisioningTypeHasBeenSet(false),
    m_connectorProvisioningConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String RegisterConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_connectorProvisioningTypeHasBeenSet)
  {
   payload.WithString("connectorProvisioningType", ConnectorProvisioningTypeMapper::GetNameForConnectorProvisioningType(m_connectorProvisioningType));
  }

  if(m_connectorProvisioningConfigHasBeenSet)
  {
   payload.WithObject("connectorProvisioningConfig", m_connectorProvisioningConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




