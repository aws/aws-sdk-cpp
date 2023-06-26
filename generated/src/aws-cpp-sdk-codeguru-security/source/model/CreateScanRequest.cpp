/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CreateScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScanRequest::CreateScanRequest() : 
    m_analysisType(AnalysisType::NOT_SET),
    m_analysisTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_resourceIdHasBeenSet(false),
    m_scanNameHasBeenSet(false),
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateScanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("analysisType", AnalysisTypeMapper::GetNameForAnalysisType(m_analysisType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithObject("resourceId", m_resourceId.Jsonize());

  }

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", ScanTypeMapper::GetNameForScanType(m_scanType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




