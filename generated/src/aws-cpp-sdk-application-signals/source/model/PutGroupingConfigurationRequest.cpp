/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/PutGroupingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutGroupingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupingAttributeDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupingAttributeDefinitionsJsonList(m_groupingAttributeDefinitions.size());
   for(unsigned groupingAttributeDefinitionsIndex = 0; groupingAttributeDefinitionsIndex < groupingAttributeDefinitionsJsonList.GetLength(); ++groupingAttributeDefinitionsIndex)
   {
     groupingAttributeDefinitionsJsonList[groupingAttributeDefinitionsIndex].AsObject(m_groupingAttributeDefinitions[groupingAttributeDefinitionsIndex].Jsonize());
   }
   payload.WithArray("GroupingAttributeDefinitions", std::move(groupingAttributeDefinitionsJsonList));

  }

  return payload.View().WriteReadable();
}




