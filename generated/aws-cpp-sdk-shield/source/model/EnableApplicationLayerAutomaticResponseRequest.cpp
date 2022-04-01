/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/EnableApplicationLayerAutomaticResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableApplicationLayerAutomaticResponseRequest::EnableApplicationLayerAutomaticResponseRequest() : 
    m_resourceArnHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

Aws::String EnableApplicationLayerAutomaticResponseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableApplicationLayerAutomaticResponseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.EnableApplicationLayerAutomaticResponse"));
  return headers;

}




