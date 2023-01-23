/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserSettingsRequest::UpdateUserSettingsRequest() : 
    m_accountIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSettingsHasBeenSet(false)
{
}

Aws::String UpdateUserSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userSettingsHasBeenSet)
  {
   payload.WithObject("UserSettings", m_userSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




