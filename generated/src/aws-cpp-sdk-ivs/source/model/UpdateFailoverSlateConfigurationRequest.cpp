/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/UpdateFailoverSlateConfigurationRequest.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFailoverSlateConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_activationThresholdSecondsHasBeenSet) {
    payload.WithInteger("activationThresholdSeconds", m_activationThresholdSeconds);
  }

  if (m_minSlateDisplaySecondsHasBeenSet) {
    payload.WithInteger("minSlateDisplaySeconds", m_minSlateDisplaySeconds);
  }

  if (m_maxSlateDisplaySecondsHasBeenSet) {
    payload.WithInteger("maxSlateDisplaySeconds", m_maxSlateDisplaySeconds);
  }

  return payload.View().WriteReadable();
}
