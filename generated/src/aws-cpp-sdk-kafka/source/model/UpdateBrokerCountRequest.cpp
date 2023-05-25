/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateBrokerCountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBrokerCountRequest::UpdateBrokerCountRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetNumberOfBrokerNodes(0),
    m_targetNumberOfBrokerNodesHasBeenSet(false)
{
}

Aws::String UpdateBrokerCountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_targetNumberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("targetNumberOfBrokerNodes", m_targetNumberOfBrokerNodes);

  }

  return payload.View().WriteReadable();
}




