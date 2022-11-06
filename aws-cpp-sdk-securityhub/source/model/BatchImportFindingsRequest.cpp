/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchImportFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchImportFindingsRequest::BatchImportFindingsRequest() : 
    m_findingsHasBeenSet(false)
{
}

Aws::String BatchImportFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
   for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
   {
     findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
   }
   payload.WithArray("Findings", std::move(findingsJsonList));

  }

  return payload.View().WriteReadable();
}




