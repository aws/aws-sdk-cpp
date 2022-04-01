﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppRequest::UpdateAppRequest() : 
    m_appArnHasBeenSet(false),
    m_clearResiliencyPolicyArn(false),
    m_clearResiliencyPolicyArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
}

Aws::String UpdateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_clearResiliencyPolicyArnHasBeenSet)
  {
   payload.WithBool("clearResiliencyPolicyArn", m_clearResiliencyPolicyArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  return payload.View().WriteReadable();
}




