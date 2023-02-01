/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociatePhoneNumberContactFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociatePhoneNumberContactFlowRequest::AssociatePhoneNumberContactFlowRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
}

Aws::String AssociatePhoneNumberContactFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  return payload.View().WriteReadable();
}




