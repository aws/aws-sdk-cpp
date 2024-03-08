/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/UpdateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceRequest::UpdateResourceRequest() : 
    m_roleArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_withFederation(false),
    m_withFederationHasBeenSet(false),
    m_hybridAccessEnabled(false),
    m_hybridAccessEnabledHasBeenSet(false)
{
}

Aws::String UpdateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_withFederationHasBeenSet)
  {
   payload.WithBool("WithFederation", m_withFederation);

  }

  if(m_hybridAccessEnabledHasBeenSet)
  {
   payload.WithBool("HybridAccessEnabled", m_hybridAccessEnabled);

  }

  return payload.View().WriteReadable();
}




