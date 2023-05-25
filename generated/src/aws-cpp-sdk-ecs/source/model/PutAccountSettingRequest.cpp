/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PutAccountSettingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountSettingRequest::PutAccountSettingRequest() : 
    m_name(SettingName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

Aws::String PutAccountSettingRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAccountSettingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.PutAccountSetting"));
  return headers;

}




