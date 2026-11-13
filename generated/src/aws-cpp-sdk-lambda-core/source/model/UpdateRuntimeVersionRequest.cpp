/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/UpdateRuntimeVersionRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRuntimeVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_releaseNotesHasBeenSet) {
    payload.WithString("ReleaseNotes", m_releaseNotes);
  }

  return payload.View().WriteReadable();
}
