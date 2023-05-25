/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteRetentionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRetentionConfigurationRequest::DeleteRetentionConfigurationRequest() : 
    m_retentionConfigurationNameHasBeenSet(false)
{
}

Aws::String DeleteRetentionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionConfigurationNameHasBeenSet)
  {
   payload.WithString("RetentionConfigurationName", m_retentionConfigurationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRetentionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteRetentionConfiguration"));
  return headers;

}




