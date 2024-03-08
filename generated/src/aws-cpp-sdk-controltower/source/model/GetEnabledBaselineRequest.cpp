/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/GetEnabledBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEnabledBaselineRequest::GetEnabledBaselineRequest() : 
    m_enabledBaselineIdentifierHasBeenSet(false)
{
}

Aws::String GetEnabledBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledBaselineIdentifierHasBeenSet)
  {
   payload.WithString("enabledBaselineIdentifier", m_enabledBaselineIdentifier);

  }

  return payload.View().WriteReadable();
}




