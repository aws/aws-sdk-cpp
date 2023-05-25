/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectorProfilesRequest::DescribeConnectorProfilesRequest() : 
    m_connectorProfileNamesHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeConnectorProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorProfileNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorProfileNamesJsonList(m_connectorProfileNames.size());
   for(unsigned connectorProfileNamesIndex = 0; connectorProfileNamesIndex < connectorProfileNamesJsonList.GetLength(); ++connectorProfileNamesIndex)
   {
     connectorProfileNamesJsonList[connectorProfileNamesIndex].AsString(m_connectorProfileNames[connectorProfileNamesIndex]);
   }
   payload.WithArray("connectorProfileNames", std::move(connectorProfileNamesJsonList));

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

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




