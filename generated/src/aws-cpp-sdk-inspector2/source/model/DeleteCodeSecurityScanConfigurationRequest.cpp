﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/DeleteCodeSecurityScanConfigurationRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteCodeSecurityScanConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scanConfigurationArnHasBeenSet) {
    payload.WithString("scanConfigurationArn", m_scanConfigurationArn);
  }

  return payload.View().WriteReadable();
}
