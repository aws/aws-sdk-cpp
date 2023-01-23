/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/RebootBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebootBrokerRequest::RebootBrokerRequest() : 
    m_brokerIdsHasBeenSet(false),
    m_clusterArnHasBeenSet(false)
{
}

Aws::String RebootBrokerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_brokerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> brokerIdsJsonList(m_brokerIds.size());
   for(unsigned brokerIdsIndex = 0; brokerIdsIndex < brokerIdsJsonList.GetLength(); ++brokerIdsIndex)
   {
     brokerIdsJsonList[brokerIdsIndex].AsString(m_brokerIds[brokerIdsIndex]);
   }
   payload.WithArray("brokerIds", std::move(brokerIdsJsonList));

  }

  return payload.View().WriteReadable();
}




