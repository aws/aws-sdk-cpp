/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueRecord::QueueRecord(JsonView jsonValue) { *this = jsonValue; }

QueueRecord& QueueRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReceiptHandle")) {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");
    m_receiptHandleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecordId")) {
    m_recordId = jsonValue.GetString("RecordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionKey")) {
    m_partitionKey = jsonValue.GetString("PartitionKey");
    m_partitionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Data")) {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApproximateArrivalTimestamp")) {
    m_approximateArrivalTimestamp = jsonValue.GetDouble("ApproximateArrivalTimestamp");
    m_approximateArrivalTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirstReceiveTimestamp")) {
    m_firstReceiveTimestamp = jsonValue.GetDouble("FirstReceiveTimestamp");
    m_firstReceiveTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReceiveCount")) {
    m_receiveCount = jsonValue.GetInteger("ReceiveCount");
    m_receiveCountHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueRecord::Jsonize() const {
  JsonValue payload;

  if (m_receiptHandleHasBeenSet) {
    payload.WithString("ReceiptHandle", m_receiptHandle);
  }

  if (m_recordIdHasBeenSet) {
    payload.WithString("RecordId", m_recordId);
  }

  if (m_partitionKeyHasBeenSet) {
    payload.WithString("PartitionKey", m_partitionKey);
  }

  if (m_dataHasBeenSet) {
    payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  }

  if (m_approximateArrivalTimestampHasBeenSet) {
    payload.WithDouble("ApproximateArrivalTimestamp", m_approximateArrivalTimestamp.SecondsWithMSPrecision());
  }

  if (m_firstReceiveTimestampHasBeenSet) {
    payload.WithDouble("FirstReceiveTimestamp", m_firstReceiveTimestamp.SecondsWithMSPrecision());
  }

  if (m_receiveCountHasBeenSet) {
    payload.WithInteger("ReceiveCount", m_receiveCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
