/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/StartStageDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartStageDeploymentRequest::StartStageDeploymentRequest() : 
    m_clientTokenHasBeenSet(false),
    m_gameNameHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String StartStageDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  return payload.View().WriteReadable();
}




