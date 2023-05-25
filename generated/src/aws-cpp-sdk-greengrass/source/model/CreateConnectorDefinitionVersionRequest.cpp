/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateConnectorDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectorDefinitionVersionRequest::CreateConnectorDefinitionVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_connectorDefinitionIdHasBeenSet(false),
    m_connectorsHasBeenSet(false)
{
}

Aws::String CreateConnectorDefinitionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorsJsonList(m_connectors.size());
   for(unsigned connectorsIndex = 0; connectorsIndex < connectorsJsonList.GetLength(); ++connectorsIndex)
   {
     connectorsJsonList[connectorsIndex].AsObject(m_connectors[connectorsIndex].Jsonize());
   }
   payload.WithArray("Connectors", std::move(connectorsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectorDefinitionVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




