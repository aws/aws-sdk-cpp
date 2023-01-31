/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetAgentConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAgentConfigurationRequest::GetAgentConfigurationRequest() : 
    m_agentIdHasBeenSet(false)
{
}

Aws::String GetAgentConfigurationRequest::SerializePayload() const
{
  return {};
}




