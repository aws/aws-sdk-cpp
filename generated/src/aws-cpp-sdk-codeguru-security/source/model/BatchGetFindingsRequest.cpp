/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/BatchGetFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetFindingsRequest::BatchGetFindingsRequest() : 
    m_findingIdentifiersHasBeenSet(false)
{
}

Aws::String BatchGetFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingIdentifiersJsonList(m_findingIdentifiers.size());
   for(unsigned findingIdentifiersIndex = 0; findingIdentifiersIndex < findingIdentifiersJsonList.GetLength(); ++findingIdentifiersIndex)
   {
     findingIdentifiersJsonList[findingIdentifiersIndex].AsObject(m_findingIdentifiers[findingIdentifiersIndex].Jsonize());
   }
   payload.WithArray("findingIdentifiers", std::move(findingIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




