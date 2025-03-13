/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/StartSearchResultExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupSearch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSearchResultExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_searchJobIdentifierHasBeenSet)
  {
   payload.WithString("SearchJobIdentifier", m_searchJobIdentifier);

  }

  if(m_exportSpecificationHasBeenSet)
  {
   payload.WithObject("ExportSpecification", m_exportSpecification.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




