/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/GetBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBaselineRequest::GetBaselineRequest() : 
    m_baselineIdentifierHasBeenSet(false)
{
}

Aws::String GetBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baselineIdentifierHasBeenSet)
  {
   payload.WithString("baselineIdentifier", m_baselineIdentifier);

  }

  return payload.View().WriteReadable();
}




