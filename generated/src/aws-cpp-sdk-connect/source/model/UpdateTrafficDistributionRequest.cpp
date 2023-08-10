/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateTrafficDistributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrafficDistributionRequest::UpdateTrafficDistributionRequest() : 
    m_idHasBeenSet(false),
    m_telephonyConfigHasBeenSet(false),
    m_signInConfigHasBeenSet(false),
    m_agentConfigHasBeenSet(false)
{
}

Aws::String UpdateTrafficDistributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_telephonyConfigHasBeenSet)
  {
   payload.WithObject("TelephonyConfig", m_telephonyConfig.Jsonize());

  }

  if(m_signInConfigHasBeenSet)
  {
   payload.WithObject("SignInConfig", m_signInConfig.Jsonize());

  }

  if(m_agentConfigHasBeenSet)
  {
   payload.WithObject("AgentConfig", m_agentConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




