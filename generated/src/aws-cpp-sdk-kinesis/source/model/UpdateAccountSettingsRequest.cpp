/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/UpdateAccountSettingsRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAccountSettingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_minimumThroughputBillingCommitmentHasBeenSet) {
    payload.WithObject("MinimumThroughputBillingCommitment", m_minimumThroughputBillingCommitment.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAccountSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.UpdateAccountSettings"));
  return headers;
}
