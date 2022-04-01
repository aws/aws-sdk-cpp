/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/UnregisterConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnregisterConnectorRequest::UnregisterConnectorRequest() : 
    m_connectorLabelHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String UnregisterConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

  }

  if(m_forceDeleteHasBeenSet)
  {
   payload.WithBool("forceDelete", m_forceDelete);

  }

  return payload.View().WriteReadable();
}




