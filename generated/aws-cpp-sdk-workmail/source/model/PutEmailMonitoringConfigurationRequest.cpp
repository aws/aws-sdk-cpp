/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PutEmailMonitoringConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEmailMonitoringConfigurationRequest::PutEmailMonitoringConfigurationRequest() : 
    m_organizationIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_logGroupArnHasBeenSet(false)
{
}

Aws::String PutEmailMonitoringConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEmailMonitoringConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutEmailMonitoringConfiguration"));
  return headers;

}




