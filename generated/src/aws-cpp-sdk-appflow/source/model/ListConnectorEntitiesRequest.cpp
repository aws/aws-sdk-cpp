/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ListConnectorEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListConnectorEntitiesRequest::ListConnectorEntitiesRequest() : 
    m_connectorProfileNameHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_entitiesPathHasBeenSet(false),
    m_apiVersionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListConnectorEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_entitiesPathHasBeenSet)
  {
   payload.WithString("entitiesPath", m_entitiesPath);

  }

  if(m_apiVersionHasBeenSet)
  {
   payload.WithString("apiVersion", m_apiVersion);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




