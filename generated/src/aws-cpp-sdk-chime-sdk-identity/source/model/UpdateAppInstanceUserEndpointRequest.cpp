/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppInstanceUserEndpointRequest::UpdateAppInstanceUserEndpointRequest() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_allowMessages(AllowMessages::NOT_SET),
    m_allowMessagesHasBeenSet(false)
{
}

Aws::String UpdateAppInstanceUserEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_allowMessagesHasBeenSet)
  {
   payload.WithString("AllowMessages", AllowMessagesMapper::GetNameForAllowMessages(m_allowMessages));
  }

  return payload.View().WriteReadable();
}




