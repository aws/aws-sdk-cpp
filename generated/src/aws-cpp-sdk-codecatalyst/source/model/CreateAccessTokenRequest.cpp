/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/CreateAccessTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccessTokenRequest::CreateAccessTokenRequest() : 
    m_nameHasBeenSet(false),
    m_expiresTimeHasBeenSet(false)
{
}

Aws::String CreateAccessTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_expiresTimeHasBeenSet)
  {
   payload.WithString("expiresTime", m_expiresTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload.View().WriteReadable();
}




