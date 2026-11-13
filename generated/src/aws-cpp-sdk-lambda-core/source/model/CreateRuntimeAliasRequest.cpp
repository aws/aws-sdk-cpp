/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/CreateRuntimeAliasRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRuntimeAliasRequest::SerializePayload() const {
  JsonValue payload;

  if (m_runtimeVersionHasBeenSet) {
    payload.WithString("RuntimeVersion", m_runtimeVersion);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_releaseLifecycleHasBeenSet) {
    payload.WithObject("ReleaseLifecycle", m_releaseLifecycle.Jsonize());
  }

  return payload.View().WriteReadable();
}
