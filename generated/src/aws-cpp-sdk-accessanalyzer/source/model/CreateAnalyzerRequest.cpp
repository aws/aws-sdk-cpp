/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CreateAnalyzerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnalyzerRequest::CreateAnalyzerRequest() : 
    m_analyzerNameHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_archiveRulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateAnalyzerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerNameHasBeenSet)
  {
   payload.WithString("analyzerName", m_analyzerName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  if(m_archiveRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> archiveRulesJsonList(m_archiveRules.size());
   for(unsigned archiveRulesIndex = 0; archiveRulesIndex < archiveRulesJsonList.GetLength(); ++archiveRulesIndex)
   {
     archiveRulesJsonList[archiveRulesIndex].AsObject(m_archiveRules[archiveRulesIndex].Jsonize());
   }
   payload.WithArray("archiveRules", std::move(archiveRulesJsonList));

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




