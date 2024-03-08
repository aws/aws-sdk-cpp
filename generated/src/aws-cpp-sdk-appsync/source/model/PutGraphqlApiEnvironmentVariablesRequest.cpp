/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/PutGraphqlApiEnvironmentVariablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutGraphqlApiEnvironmentVariablesRequest::PutGraphqlApiEnvironmentVariablesRequest() : 
    m_apiIdHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
}

Aws::String PutGraphqlApiEnvironmentVariablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));

  }

  return payload.View().WriteReadable();
}




