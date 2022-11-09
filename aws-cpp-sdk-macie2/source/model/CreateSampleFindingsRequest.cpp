/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CreateSampleFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSampleFindingsRequest::CreateSampleFindingsRequest() : 
    m_findingTypesHasBeenSet(false)
{
}

Aws::String CreateSampleFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingTypesJsonList(m_findingTypes.size());
   for(unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex)
   {
     findingTypesJsonList[findingTypesIndex].AsString(FindingTypeMapper::GetNameForFindingType(m_findingTypes[findingTypesIndex]));
   }
   payload.WithArray("findingTypes", std::move(findingTypesJsonList));

  }

  return payload.View().WriteReadable();
}




