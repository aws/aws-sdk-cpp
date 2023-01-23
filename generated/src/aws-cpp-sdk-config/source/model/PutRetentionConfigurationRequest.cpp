/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutRetentionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRetentionConfigurationRequest::PutRetentionConfigurationRequest() : 
    m_retentionPeriodInDays(0),
    m_retentionPeriodInDaysHasBeenSet(false)
{
}

Aws::String PutRetentionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodInDays", m_retentionPeriodInDays);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRetentionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutRetentionConfiguration"));
  return headers;

}




