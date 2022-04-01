/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutRetentionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRetentionSettingsRequest::PutRetentionSettingsRequest() : 
    m_accountIdHasBeenSet(false),
    m_retentionSettingsHasBeenSet(false)
{
}

Aws::String PutRetentionSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionSettingsHasBeenSet)
  {
   payload.WithObject("RetentionSettings", m_retentionSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




