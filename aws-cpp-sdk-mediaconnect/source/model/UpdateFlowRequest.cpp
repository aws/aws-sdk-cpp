/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowRequest::UpdateFlowRequest() : 
    m_flowArnHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false)
{
}

Aws::String UpdateFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




