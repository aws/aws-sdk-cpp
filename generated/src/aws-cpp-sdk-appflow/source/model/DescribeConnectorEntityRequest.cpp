﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeConnectorEntityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorEntityNameHasBeenSet)
  {
   payload.WithString("connectorEntityName", m_connectorEntityName);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_apiVersionHasBeenSet)
  {
   payload.WithString("apiVersion", m_apiVersion);

  }

  return payload.View().WriteReadable();
}




