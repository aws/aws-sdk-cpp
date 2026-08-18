/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRecoveryPlanExecutionStepsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionArn", m_recoveryPlanExecutionArn);
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
