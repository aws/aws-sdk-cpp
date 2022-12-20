/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetStreamingSessionBackupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStreamingSessionBackupRequest::GetStreamingSessionBackupRequest() : 
    m_backupIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String GetStreamingSessionBackupRequest::SerializePayload() const
{
  return {};
}




