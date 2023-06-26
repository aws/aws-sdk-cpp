/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_opsCenterEnabled(false),
    m_opsCenterEnabledHasBeenSet(false),
    m_cWEMonitorEnabled(false),
    m_cWEMonitorEnabledHasBeenSet(false),
    m_opsItemSNSTopicArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoConfigEnabled(false),
    m_autoConfigEnabledHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false),
    m_groupingType(GroupingType::NOT_SET),
    m_groupingTypeHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_autoConfigEnabledHasBeenSet)
  {
   payload.WithBool("AutoConfigEnabled", m_autoConfigEnabled);

  }

  if(m_autoCreateHasBeenSet)
  {
   payload.WithBool("AutoCreate", m_autoCreate);

  }

  if(m_groupingTypeHasBeenSet)
  {
   payload.WithString("GroupingType", GroupingTypeMapper::GetNameForGroupingType(m_groupingType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.CreateApplication"));
  return headers;

}




