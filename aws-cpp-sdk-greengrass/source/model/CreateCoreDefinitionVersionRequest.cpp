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

#include <aws/greengrass/model/CreateCoreDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_coreDefinitionIdHasBeenSet(false),
    m_coresHasBeenSet(false)
{
}

Aws::String CreateCoreDefinitionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_coresHasBeenSet)
  {
   Array<JsonValue> coresJsonList(m_cores.size());
   for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
   {
     coresJsonList[coresIndex].AsObject(m_cores[coresIndex].Jsonize());
   }
   payload.WithArray("Cores", std::move(coresJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCoreDefinitionVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.insert(Aws::Http::HeaderValuePair("x-amzn-client-token", ss.str()));
    ss.str("");
  }

  return headers;

}




