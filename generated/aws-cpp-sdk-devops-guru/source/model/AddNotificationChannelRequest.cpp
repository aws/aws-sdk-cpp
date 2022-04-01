/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AddNotificationChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddNotificationChannelRequest::AddNotificationChannelRequest() : 
    m_configHasBeenSet(false)
{
}

Aws::String AddNotificationChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configHasBeenSet)
  {
   payload.WithObject("Config", m_config.Jsonize());

  }

  return payload.View().WriteReadable();
}




