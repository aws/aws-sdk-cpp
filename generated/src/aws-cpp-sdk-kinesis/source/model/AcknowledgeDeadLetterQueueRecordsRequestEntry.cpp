/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/AcknowledgeDeadLetterQueueRecordsRequestEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

AcknowledgeDeadLetterQueueRecordsRequestEntry::AcknowledgeDeadLetterQueueRecordsRequestEntry(JsonView jsonValue) { *this = jsonValue; }

AcknowledgeDeadLetterQueueRecordsRequestEntry& AcknowledgeDeadLetterQueueRecordsRequestEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReceiptHandle")) {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");
    m_receiptHandleHasBeenSet = true;
  }
  return *this;
}

JsonValue AcknowledgeDeadLetterQueueRecordsRequestEntry::Jsonize() const {
  JsonValue payload;

  if (m_receiptHandleHasBeenSet) {
    payload.WithString("ReceiptHandle", m_receiptHandle);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
