/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/UpdateConnectorScanConfigurationRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectorScanConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("awsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_scanConfigurationHasBeenSet) {
    payload.WithObject("scanConfiguration", m_scanConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
