/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotReplicaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBotReplicaRequest::CreateBotReplicaRequest() : 
    m_botIdHasBeenSet(false),
    m_replicaRegionHasBeenSet(false)
{
}

Aws::String CreateBotReplicaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicaRegionHasBeenSet)
  {
   payload.WithString("replicaRegion", m_replicaRegion);

  }

  return payload.View().WriteReadable();
}




