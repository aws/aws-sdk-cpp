/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetRetentionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRetentionSettingsRequest::GetRetentionSettingsRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String GetRetentionSettingsRequest::SerializePayload() const
{
  return {};
}




