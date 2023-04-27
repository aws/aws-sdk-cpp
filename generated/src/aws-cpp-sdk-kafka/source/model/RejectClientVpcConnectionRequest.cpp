/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/RejectClientVpcConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectClientVpcConnectionRequest::RejectClientVpcConnectionRequest() : 
    m_clusterArnHasBeenSet(false),
    m_vpcConnectionArnHasBeenSet(false)
{
}

Aws::String RejectClientVpcConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("vpcConnectionArn", m_vpcConnectionArn);

  }

  return payload.View().WriteReadable();
}




