/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RegisterThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterThingRequest::RegisterThingRequest() : 
    m_templateBodyHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String RegisterThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  return payload.View().WriteReadable();
}




