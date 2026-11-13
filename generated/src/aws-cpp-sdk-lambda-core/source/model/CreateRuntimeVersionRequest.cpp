/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/CreateRuntimeVersionRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRuntimeVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_imageUriHasBeenSet) {
    payload.WithString("ImageUri", m_imageUri);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_releaseNotesHasBeenSet) {
    payload.WithString("ReleaseNotes", m_releaseNotes);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}
