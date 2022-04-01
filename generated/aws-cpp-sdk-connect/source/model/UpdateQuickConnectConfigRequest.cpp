/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateQuickConnectConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQuickConnectConfigRequest::UpdateQuickConnectConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_quickConnectIdHasBeenSet(false),
    m_quickConnectConfigHasBeenSet(false)
{
}

Aws::String UpdateQuickConnectConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_quickConnectConfigHasBeenSet)
  {
   payload.WithObject("QuickConnectConfig", m_quickConnectConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




