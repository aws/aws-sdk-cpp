/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/ModifyClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyClusterRequest::ModifyClusterRequest() : 
    m_backupRetentionPolicyHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

Aws::String ModifyClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupRetentionPolicyHasBeenSet)
  {
   payload.WithObject("BackupRetentionPolicy", m_backupRetentionPolicy.Jsonize());

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.ModifyCluster"));
  return headers;

}




