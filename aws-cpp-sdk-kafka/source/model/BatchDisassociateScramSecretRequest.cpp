/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/BatchDisassociateScramSecretRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateScramSecretRequest::BatchDisassociateScramSecretRequest() : 
    m_clusterArnHasBeenSet(false),
    m_secretArnListHasBeenSet(false)
{
}

Aws::String BatchDisassociateScramSecretRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretArnListJsonList(m_secretArnList.size());
   for(unsigned secretArnListIndex = 0; secretArnListIndex < secretArnListJsonList.GetLength(); ++secretArnListIndex)
   {
     secretArnListJsonList[secretArnListIndex].AsString(m_secretArnList[secretArnListIndex]);
   }
   payload.WithArray("secretArnList", std::move(secretArnListJsonList));

  }

  return payload.View().WriteReadable();
}




