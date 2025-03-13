/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/CreateWorkspaceApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkspaceApiKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("keyName", m_keyName);

  }

  if(m_keyRoleHasBeenSet)
  {
   payload.WithString("keyRole", m_keyRole);

  }

  if(m_secondsToLiveHasBeenSet)
  {
   payload.WithInteger("secondsToLive", m_secondsToLive);

  }

  return payload.View().WriteReadable();
}




