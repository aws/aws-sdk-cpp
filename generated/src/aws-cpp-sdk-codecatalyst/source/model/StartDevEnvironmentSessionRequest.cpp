/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/StartDevEnvironmentSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDevEnvironmentSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionConfigurationHasBeenSet)
  {
   payload.WithObject("sessionConfiguration", m_sessionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




