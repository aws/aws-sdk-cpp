/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ListConnectorScanConfigurationsRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListConnectorScanConfigurationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsConfigConnectorArnsJsonList(m_awsConfigConnectorArns.size());
    for (unsigned awsConfigConnectorArnsIndex = 0; awsConfigConnectorArnsIndex < awsConfigConnectorArnsJsonList.GetLength();
         ++awsConfigConnectorArnsIndex) {
      awsConfigConnectorArnsJsonList[awsConfigConnectorArnsIndex].AsString(m_awsConfigConnectorArns[awsConfigConnectorArnsIndex]);
    }
    payload.WithArray("awsConfigConnectorArns", std::move(awsConfigConnectorArnsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
