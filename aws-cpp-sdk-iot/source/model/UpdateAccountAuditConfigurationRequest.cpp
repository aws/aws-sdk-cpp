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

#include <aws/iot/model/UpdateAccountAuditConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountAuditConfigurationRequest::UpdateAccountAuditConfigurationRequest() : 
    m_roleArnHasBeenSet(false),
    m_auditNotificationTargetConfigurationsHasBeenSet(false),
    m_auditCheckConfigurationsHasBeenSet(false)
{
}

Aws::String UpdateAccountAuditConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_auditNotificationTargetConfigurationsHasBeenSet)
  {
   JsonValue auditNotificationTargetConfigurationsJsonMap;
   for(auto& auditNotificationTargetConfigurationsItem : m_auditNotificationTargetConfigurations)
   {
     auditNotificationTargetConfigurationsJsonMap.WithObject(AuditNotificationTypeMapper::GetNameForAuditNotificationType(auditNotificationTargetConfigurationsItem.first), auditNotificationTargetConfigurationsItem.second.Jsonize());
   }
   payload.WithObject("auditNotificationTargetConfigurations", std::move(auditNotificationTargetConfigurationsJsonMap));

  }

  if(m_auditCheckConfigurationsHasBeenSet)
  {
   JsonValue auditCheckConfigurationsJsonMap;
   for(auto& auditCheckConfigurationsItem : m_auditCheckConfigurations)
   {
     auditCheckConfigurationsJsonMap.WithObject(auditCheckConfigurationsItem.first, auditCheckConfigurationsItem.second.Jsonize());
   }
   payload.WithObject("auditCheckConfigurations", std::move(auditCheckConfigurationsJsonMap));

  }

  return payload.View().WriteReadable();
}




