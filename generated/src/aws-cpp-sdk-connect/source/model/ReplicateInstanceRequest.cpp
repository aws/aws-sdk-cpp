/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReplicateInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReplicateInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicaRegionHasBeenSet)
  {
   payload.WithString("ReplicaRegion", m_replicaRegion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_replicaAliasHasBeenSet)
  {
   payload.WithString("ReplicaAlias", m_replicaAlias);

  }

  return payload.View().WriteReadable();
}




