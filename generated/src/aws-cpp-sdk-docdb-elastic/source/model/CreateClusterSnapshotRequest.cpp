/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/CreateClusterSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterSnapshotRequest::CreateClusterSnapshotRequest() : 
    m_clusterArnHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateClusterSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

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




