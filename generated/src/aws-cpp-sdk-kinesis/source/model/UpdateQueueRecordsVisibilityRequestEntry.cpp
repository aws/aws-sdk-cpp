/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/UpdateQueueRecordsVisibilityRequestEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

UpdateQueueRecordsVisibilityRequestEntry::UpdateQueueRecordsVisibilityRequestEntry(JsonView jsonValue) { *this = jsonValue; }

UpdateQueueRecordsVisibilityRequestEntry& UpdateQueueRecordsVisibilityRequestEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReceiptHandle")) {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");
    m_receiptHandleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VisibilityTimeoutSeconds")) {
    m_visibilityTimeoutSeconds = jsonValue.GetInteger("VisibilityTimeoutSeconds");
    m_visibilityTimeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateQueueRecordsVisibilityRequestEntry::Jsonize() const {
  JsonValue payload;

  if (m_receiptHandleHasBeenSet) {
    payload.WithString("ReceiptHandle", m_receiptHandle);
  }

  if (m_visibilityTimeoutSecondsHasBeenSet) {
    payload.WithInteger("VisibilityTimeoutSeconds", m_visibilityTimeoutSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
