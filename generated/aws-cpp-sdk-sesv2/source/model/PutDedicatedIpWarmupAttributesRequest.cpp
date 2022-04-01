/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDedicatedIpWarmupAttributesRequest::PutDedicatedIpWarmupAttributesRequest() : 
    m_ipHasBeenSet(false),
    m_warmupPercentage(0),
    m_warmupPercentageHasBeenSet(false)
{
}

Aws::String PutDedicatedIpWarmupAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_warmupPercentageHasBeenSet)
  {
   payload.WithInteger("WarmupPercentage", m_warmupPercentage);

  }

  return payload.View().WriteReadable();
}




