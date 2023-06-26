/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterAppInstanceUserEndpointRequest::RegisterAppInstanceUserEndpointRequest() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AppInstanceUserEndpointType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_endpointAttributesHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_allowMessages(AllowMessages::NOT_SET),
    m_allowMessagesHasBeenSet(false)
{
}

Aws::String RegisterAppInstanceUserEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AppInstanceUserEndpointTypeMapper::GetNameForAppInstanceUserEndpointType(m_type));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_endpointAttributesHasBeenSet)
  {
   payload.WithObject("EndpointAttributes", m_endpointAttributes.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_allowMessagesHasBeenSet)
  {
   payload.WithString("AllowMessages", AllowMessagesMapper::GetNameForAllowMessages(m_allowMessages));
  }

  return payload.View().WriteReadable();
}




