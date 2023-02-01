/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/RegisterAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterAgentRequest::RegisterAgentRequest() : 
    m_agentDetailsHasBeenSet(false),
    m_discoveryDataHasBeenSet(false)
{
}

Aws::String RegisterAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentDetailsHasBeenSet)
  {
   payload.WithObject("agentDetails", m_agentDetails.Jsonize());

  }

  if(m_discoveryDataHasBeenSet)
  {
   payload.WithObject("discoveryData", m_discoveryData.Jsonize());

  }

  return payload.View().WriteReadable();
}




