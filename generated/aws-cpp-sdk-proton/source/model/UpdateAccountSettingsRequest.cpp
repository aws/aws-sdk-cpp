﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountSettingsRequest::UpdateAccountSettingsRequest() : 
    m_pipelineProvisioningRepositoryHasBeenSet(false),
    m_pipelineServiceRoleArnHasBeenSet(false)
{
}

Aws::String UpdateAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineProvisioningRepositoryHasBeenSet)
  {
   payload.WithObject("pipelineProvisioningRepository", m_pipelineProvisioningRepository.Jsonize());

  }

  if(m_pipelineServiceRoleArnHasBeenSet)
  {
   payload.WithString("pipelineServiceRoleArn", m_pipelineServiceRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAccountSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateAccountSettings"));
  return headers;

}




