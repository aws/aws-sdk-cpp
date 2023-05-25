/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeleteAccountSettingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccountSettingRequest::DeleteAccountSettingRequest() : 
    m_name(SettingName::NOT_SET),
    m_nameHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

Aws::String DeleteAccountSettingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SettingNameMapper::GetNameForSettingName(m_name));
  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAccountSettingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeleteAccountSetting"));
  return headers;

}




