/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberRequest::UpdatePhoneNumberRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePhoneNumberRequest::SerializePayload() const
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




