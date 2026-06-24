/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMicrovmImageVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", MicrovmImageVersionStatusMapper::GetNameForMicrovmImageVersionStatus(m_status));
  }

  return payload.View().WriteReadable();
}
