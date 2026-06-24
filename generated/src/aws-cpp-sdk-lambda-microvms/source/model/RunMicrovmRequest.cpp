/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/RunMicrovmRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RunMicrovmRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ingressNetworkConnectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ingressNetworkConnectorsJsonList(m_ingressNetworkConnectors.size());
    for (unsigned ingressNetworkConnectorsIndex = 0; ingressNetworkConnectorsIndex < ingressNetworkConnectorsJsonList.GetLength();
         ++ingressNetworkConnectorsIndex) {
      ingressNetworkConnectorsJsonList[ingressNetworkConnectorsIndex].AsString(m_ingressNetworkConnectors[ingressNetworkConnectorsIndex]);
    }
    payload.WithArray("ingressNetworkConnectors", std::move(ingressNetworkConnectorsJsonList));
  }

  if (m_egressNetworkConnectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> egressNetworkConnectorsJsonList(m_egressNetworkConnectors.size());
    for (unsigned egressNetworkConnectorsIndex = 0; egressNetworkConnectorsIndex < egressNetworkConnectorsJsonList.GetLength();
         ++egressNetworkConnectorsIndex) {
      egressNetworkConnectorsJsonList[egressNetworkConnectorsIndex].AsString(m_egressNetworkConnectors[egressNetworkConnectorsIndex]);
    }
    payload.WithArray("egressNetworkConnectors", std::move(egressNetworkConnectorsJsonList));
  }

  if (m_imageIdentifierHasBeenSet) {
    payload.WithString("imageIdentifier", m_imageIdentifier);
  }

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_idlePolicyHasBeenSet) {
    payload.WithObject("idlePolicy", m_idlePolicy.Jsonize());
  }

  if (m_loggingHasBeenSet) {
    payload.WithObject("logging", m_logging.Jsonize());
  }

  if (m_runHookPayloadHasBeenSet) {
    payload.WithString("runHookPayload", m_runHookPayload);
  }

  if (m_maximumDurationInSecondsHasBeenSet) {
    payload.WithInteger("maximumDurationInSeconds", m_maximumDurationInSeconds);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
