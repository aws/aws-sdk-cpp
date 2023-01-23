/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateScriptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScriptRequest::CreateScriptRequest() : 
    m_dagNodesHasBeenSet(false),
    m_dagEdgesHasBeenSet(false),
    m_language(Language::NOT_SET),
    m_languageHasBeenSet(false)
{
}

Aws::String CreateScriptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dagNodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dagNodesJsonList(m_dagNodes.size());
   for(unsigned dagNodesIndex = 0; dagNodesIndex < dagNodesJsonList.GetLength(); ++dagNodesIndex)
   {
     dagNodesJsonList[dagNodesIndex].AsObject(m_dagNodes[dagNodesIndex].Jsonize());
   }
   payload.WithArray("DagNodes", std::move(dagNodesJsonList));

  }

  if(m_dagEdgesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dagEdgesJsonList(m_dagEdges.size());
   for(unsigned dagEdgesIndex = 0; dagEdgesIndex < dagEdgesJsonList.GetLength(); ++dagEdgesIndex)
   {
     dagEdgesJsonList[dagEdgesIndex].AsObject(m_dagEdges[dagEdgesIndex].Jsonize());
   }
   payload.WithArray("DagEdges", std::move(dagEdgesJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", LanguageMapper::GetNameForLanguage(m_language));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScriptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateScript"));
  return headers;

}




