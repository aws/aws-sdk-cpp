/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountSettingsRequest::UpdateAccountSettingsRequest() : 
    m_accountIdHasBeenSet(false),
    m_accountSettingsHasBeenSet(false)
{
}

Aws::String UpdateAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountSettingsHasBeenSet)
  {
   payload.WithObject("AccountSettings", m_accountSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




