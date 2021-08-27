/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectorEntityRequest::DescribeConnectorEntityRequest() : 
    m_connectorEntityNameHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




