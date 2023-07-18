/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateConnectivityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectivityRequest::UpdateConnectivityRequest() : 
    m_clusterArnHasBeenSet(false),
    m_connectivityInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String UpdateConnectivityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectivityInfoHasBeenSet)
  {
   payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  return payload.View().WriteReadable();
}




