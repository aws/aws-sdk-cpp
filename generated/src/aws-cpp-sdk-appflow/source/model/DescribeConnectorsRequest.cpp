/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectorsRequest::DescribeConnectorsRequest() : 
    m_connectorTypesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeConnectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorTypesJsonList(m_connectorTypes.size());
   for(unsigned connectorTypesIndex = 0; connectorTypesIndex < connectorTypesJsonList.GetLength(); ++connectorTypesIndex)
   {
     connectorTypesJsonList[connectorTypesIndex].AsString(ConnectorTypeMapper::GetNameForConnectorType(m_connectorTypes[connectorTypesIndex]));
   }
   payload.WithArray("connectorTypes", std::move(connectorTypesJsonList));

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




