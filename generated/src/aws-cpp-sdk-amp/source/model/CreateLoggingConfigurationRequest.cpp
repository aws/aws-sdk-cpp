﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/CreateLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLoggingConfigurationRequest::CreateLoggingConfigurationRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




