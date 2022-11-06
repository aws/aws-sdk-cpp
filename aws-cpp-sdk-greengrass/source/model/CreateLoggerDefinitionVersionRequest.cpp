/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateLoggerDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLoggerDefinitionVersionRequest::CreateLoggerDefinitionVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_loggerDefinitionIdHasBeenSet(false),
    m_loggersHasBeenSet(false)
{
}

Aws::String CreateLoggerDefinitionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loggersJsonList(m_loggers.size());
   for(unsigned loggersIndex = 0; loggersIndex < loggersJsonList.GetLength(); ++loggersIndex)
   {
     loggersJsonList[loggersIndex].AsObject(m_loggers[loggersIndex].Jsonize());
   }
   payload.WithArray("Loggers", std::move(loggersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLoggerDefinitionVersionRequest::GetRequestSpecificHeaders() const
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




