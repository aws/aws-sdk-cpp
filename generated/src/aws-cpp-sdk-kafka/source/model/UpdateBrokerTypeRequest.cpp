/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateBrokerTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBrokerTypeRequest::UpdateBrokerTypeRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetInstanceTypeHasBeenSet(false)
{
}

Aws::String UpdateBrokerTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_targetInstanceTypeHasBeenSet)
  {
   payload.WithString("targetInstanceType", m_targetInstanceType);

  }

  return payload.View().WriteReadable();
}




