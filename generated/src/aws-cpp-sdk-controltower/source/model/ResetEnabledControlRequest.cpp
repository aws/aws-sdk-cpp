/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ResetEnabledControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ResetEnabledControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledControlIdentifierHasBeenSet)
  {
   payload.WithString("enabledControlIdentifier", m_enabledControlIdentifier);

  }

  return payload.View().WriteReadable();
}




