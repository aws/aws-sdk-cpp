/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/GetCustomActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCustomActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customActionArnHasBeenSet)
  {
   payload.WithString("CustomActionArn", m_customActionArn);

  }

  return payload.View().WriteReadable();
}




