/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateFunctionDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFunctionDefinitionVersionRequest::CreateFunctionDefinitionVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_defaultConfigHasBeenSet(false),
    m_functionDefinitionIdHasBeenSet(false),
    m_functionsHasBeenSet(false)
{
}

Aws::String CreateFunctionDefinitionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultConfigHasBeenSet)
  {
   payload.WithObject("DefaultConfig", m_defaultConfig.Jsonize());

  }

  if(m_functionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionsJsonList(m_functions.size());
   for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
   {
     functionsJsonList[functionsIndex].AsObject(m_functions[functionsIndex].Jsonize());
   }
   payload.WithArray("Functions", std::move(functionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFunctionDefinitionVersionRequest::GetRequestSpecificHeaders() const
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




