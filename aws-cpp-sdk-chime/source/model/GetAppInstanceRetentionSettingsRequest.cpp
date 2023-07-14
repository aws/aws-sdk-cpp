/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetAppInstanceRetentionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAppInstanceRetentionSettingsRequest::GetAppInstanceRetentionSettingsRequest() : 
    m_appInstanceArnHasBeenSet(false)
{
}

Aws::String GetAppInstanceRetentionSettingsRequest::SerializePayload() const
{
  return {};
}




