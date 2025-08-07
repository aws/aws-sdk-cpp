/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_applicationLogPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationLogPathsJsonList(m_applicationLogPaths.size());
   for(unsigned applicationLogPathsIndex = 0; applicationLogPathsIndex < applicationLogPathsJsonList.GetLength(); ++applicationLogPathsIndex)
   {
     applicationLogPathsJsonList[applicationLogPathsIndex].AsString(m_applicationLogPaths[applicationLogPathsIndex]);
   }
   payload.WithArray("ApplicationLogPaths", std::move(applicationLogPathsJsonList));

  }

  if(m_applicationLogOutputUriHasBeenSet)
  {
   payload.WithString("ApplicationLogOutputUri", m_applicationLogOutputUri);

  }

  return payload.View().WriteReadable();
}




