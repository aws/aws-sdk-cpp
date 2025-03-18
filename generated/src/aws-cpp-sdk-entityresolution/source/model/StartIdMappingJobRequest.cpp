/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/StartIdMappingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartIdMappingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outputSourceConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSourceConfigJsonList(m_outputSourceConfig.size());
   for(unsigned outputSourceConfigIndex = 0; outputSourceConfigIndex < outputSourceConfigJsonList.GetLength(); ++outputSourceConfigIndex)
   {
     outputSourceConfigJsonList[outputSourceConfigIndex].AsObject(m_outputSourceConfig[outputSourceConfigIndex].Jsonize());
   }
   payload.WithArray("outputSourceConfig", std::move(outputSourceConfigJsonList));

  }

  return payload.View().WriteReadable();
}




