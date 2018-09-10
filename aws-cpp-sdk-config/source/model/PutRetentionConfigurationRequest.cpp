/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




