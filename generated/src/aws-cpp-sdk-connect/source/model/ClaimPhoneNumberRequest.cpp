/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ClaimPhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ClaimPhoneNumberRequest::ClaimPhoneNumberRequest() : 
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String ClaimPhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_phoneNumberDescriptionHasBeenSet)
  {
   payload.WithString("PhoneNumberDescription", m_phoneNumberDescription);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




