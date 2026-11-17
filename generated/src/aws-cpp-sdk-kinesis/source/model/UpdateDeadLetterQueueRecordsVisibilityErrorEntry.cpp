/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/UpdateDeadLetterQueueRecordsVisibilityErrorEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

UpdateDeadLetterQueueRecordsVisibilityErrorEntry::UpdateDeadLetterQueueRecordsVisibilityErrorEntry(JsonView jsonValue) {
  *this = jsonValue;
}

UpdateDeadLetterQueueRecordsVisibilityErrorEntry& UpdateDeadLetterQueueRecordsVisibilityErrorEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReceiptHandle")) {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");
    m_receiptHandleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateDeadLetterQueueRecordsVisibilityErrorEntry::Jsonize() const {
  JsonValue payload;

  if (m_receiptHandleHasBeenSet) {
    payload.WithString("ReceiptHandle", m_receiptHandle);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
