/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateAppInstanceAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppInstanceAdminRequest::CreateAppInstanceAdminRequest() : 
    m_appInstanceAdminArnHasBeenSet(false),
    m_appInstanceArnHasBeenSet(false)
{
}

Aws::String CreateAppInstanceAdminRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceAdminArnHasBeenSet)
  {
   payload.WithString("AppInstanceAdminArn", m_appInstanceAdminArn);

  }

  return payload.View().WriteReadable();
}




