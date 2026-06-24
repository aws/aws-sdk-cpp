/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteInstrumentationConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteInstrumentationConfigurationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_deletionTargetHasBeenSet) {
    payload.WithObject("DeletionTarget", m_deletionTarget.Jsonize());
  }

  return payload.View().WriteReadable();
}
