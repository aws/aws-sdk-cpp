/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateReportPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReportPlanRequest::CreateReportPlanRequest() : 
    m_reportPlanNameHasBeenSet(false),
    m_reportPlanDescriptionHasBeenSet(false),
    m_reportDeliveryChannelHasBeenSet(false),
    m_reportSettingHasBeenSet(false),
    m_reportPlanTagsHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateReportPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportPlanNameHasBeenSet)
  {
   payload.WithString("ReportPlanName", m_reportPlanName);

  }

  if(m_reportPlanDescriptionHasBeenSet)
  {
   payload.WithString("ReportPlanDescription", m_reportPlanDescription);

  }

  if(m_reportDeliveryChannelHasBeenSet)
  {
   payload.WithObject("ReportDeliveryChannel", m_reportDeliveryChannel.Jsonize());

  }

  if(m_reportSettingHasBeenSet)
  {
   payload.WithObject("ReportSetting", m_reportSetting.Jsonize());

  }

  if(m_reportPlanTagsHasBeenSet)
  {
   JsonValue reportPlanTagsJsonMap;
   for(auto& reportPlanTagsItem : m_reportPlanTags)
   {
     reportPlanTagsJsonMap.WithString(reportPlanTagsItem.first, reportPlanTagsItem.second);
   }
   payload.WithObject("ReportPlanTags", std::move(reportPlanTagsJsonMap));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}




