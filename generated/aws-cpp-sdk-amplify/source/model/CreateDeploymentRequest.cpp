/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_appIdHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_fileMapHasBeenSet(false)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileMapHasBeenSet)
  {
   JsonValue fileMapJsonMap;
   for(auto& fileMapItem : m_fileMap)
   {
     fileMapJsonMap.WithString(fileMapItem.first, fileMapItem.second);
   }
   payload.WithObject("fileMap", std::move(fileMapJsonMap));

  }

  return payload.View().WriteReadable();
}




