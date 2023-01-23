/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




