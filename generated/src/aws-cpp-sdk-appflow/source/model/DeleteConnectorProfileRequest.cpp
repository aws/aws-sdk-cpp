/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DeleteConnectorProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConnectorProfileRequest::DeleteConnectorProfileRequest() : 
    m_connectorProfileNameHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String DeleteConnectorProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_forceDeleteHasBeenSet)
  {
   payload.WithBool("forceDelete", m_forceDelete);

  }

  return payload.View().WriteReadable();
}




