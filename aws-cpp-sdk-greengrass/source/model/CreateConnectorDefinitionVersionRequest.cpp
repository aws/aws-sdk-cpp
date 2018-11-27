/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> connectorsJsonList(m_connectors.size());
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




