/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PutNotificationChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutNotificationChannelRequest::PutNotificationChannelRequest() : 
    m_snsTopicArnHasBeenSet(false),
    m_snsRoleNameHasBeenSet(false)
{
}

Aws::String PutNotificationChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_snsRoleNameHasBeenSet)
  {
   payload.WithString("SnsRoleName", m_snsRoleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutNotificationChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.PutNotificationChannel"));
  return headers;

}




