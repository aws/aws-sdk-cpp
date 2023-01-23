/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAccountSettingsRequest::ListAccountSettingsRequest() : 
    m_name(SettingName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_effectiveSettings(false),
    m_effectiveSettingsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SettingNameMapper::GetNameForSettingName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  if(m_effectiveSettingsHasBeenSet)
  {
   payload.WithBool("effectiveSettings", m_effectiveSettings);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAccountSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListAccountSettings"));
  return headers;

}




