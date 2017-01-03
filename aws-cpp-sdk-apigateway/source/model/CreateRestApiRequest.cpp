﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRestApiRequest::CreateRestApiRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_cloneFromHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false)
{
}

Aws::String CreateRestApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_cloneFromHasBeenSet)
  {
   payload.WithString("cloneFrom", m_cloneFrom);

  }

  if(m_binaryMediaTypesHasBeenSet)
  {
   Array<JsonValue> binaryMediaTypesJsonList(m_binaryMediaTypes.size());
   for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
   {
     binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString(m_binaryMediaTypes[binaryMediaTypesIndex]);
   }
   payload.WithArray("binaryMediaTypes", std::move(binaryMediaTypesJsonList));

  }

  return payload.WriteReadable();
}



