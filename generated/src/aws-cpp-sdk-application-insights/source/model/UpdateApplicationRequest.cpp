/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_opsCenterEnabledHasBeenSet)
  {
   payload.WithBool("OpsCenterEnabled", m_opsCenterEnabled);

  }

  if(m_cWEMonitorEnabledHasBeenSet)
  {
   payload.WithBool("CWEMonitorEnabled", m_cWEMonitorEnabled);

  }

  if(m_opsItemSNSTopicArnHasBeenSet)
  {
   payload.WithString("OpsItemSNSTopicArn", m_opsItemSNSTopicArn);

  }

  if(m_sNSNotificationArnHasBeenSet)
  {
   payload.WithString("SNSNotificationArn", m_sNSNotificationArn);

  }

  if(m_removeSNSTopicHasBeenSet)
  {
   payload.WithBool("RemoveSNSTopic", m_removeSNSTopic);

  }

  if(m_autoConfigEnabledHasBeenSet)
  {
   payload.WithBool("AutoConfigEnabled", m_autoConfigEnabled);

  }

  if(m_attachMissingPermissionHasBeenSet)
  {
   payload.WithBool("AttachMissingPermission", m_attachMissingPermission);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateApplication"));
  return headers;

}




