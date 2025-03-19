/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/DisassociateApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationIdentifiersJsonList(m_applicationIdentifiers.size());
   for(unsigned applicationIdentifiersIndex = 0; applicationIdentifiersIndex < applicationIdentifiersJsonList.GetLength(); ++applicationIdentifiersIndex)
   {
     applicationIdentifiersJsonList[applicationIdentifiersIndex].AsString(m_applicationIdentifiers[applicationIdentifiersIndex]);
   }
   payload.WithArray("ApplicationIdentifiers", std::move(applicationIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




