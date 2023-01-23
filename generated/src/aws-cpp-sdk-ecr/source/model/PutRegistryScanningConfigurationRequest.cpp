/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutRegistryScanningConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRegistryScanningConfigurationRequest::PutRegistryScanningConfigurationRequest() : 
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

Aws::String PutRegistryScanningConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", ScanTypeMapper::GetNameForScanType(m_scanType));
  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRegistryScanningConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.PutRegistryScanningConfiguration"));
  return headers;

}




