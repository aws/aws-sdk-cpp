/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CancelLifecycleExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelLifecycleExecutionRequest::CancelLifecycleExecutionRequest() : 
    m_lifecycleExecutionIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CancelLifecycleExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleExecutionIdHasBeenSet)
  {
   payload.WithString("lifecycleExecutionId", m_lifecycleExecutionId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




