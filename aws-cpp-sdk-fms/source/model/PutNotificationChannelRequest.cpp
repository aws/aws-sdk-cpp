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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutNotificationChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.PutNotificationChannel"));
  return headers;

}




