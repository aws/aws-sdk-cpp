/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> coresJsonList(m_cores.size());
   for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
   {
     coresJsonList[coresIndex].AsObject(m_cores[coresIndex].Jsonize());
   }
   payload.WithArray("Cores", std::move(coresJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCoreDefinitionVersionRequest::GetRequestSpecificHeaders() const
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




