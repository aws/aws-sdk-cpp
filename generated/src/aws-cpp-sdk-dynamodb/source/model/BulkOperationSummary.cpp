/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationSummary::BulkOperationSummary(JsonView jsonValue) { *this = jsonValue; }

BulkOperationSummary& BulkOperationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BulkOperationArn")) {
    m_bulkOperationArn = jsonValue.GetString("BulkOperationArn");
    m_bulkOperationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BulkOperationStatus")) {
    m_bulkOperationStatus = BulkOperationStatusMapper::GetBulkOperationStatusForName(jsonValue.GetString("BulkOperationStatus"));
    m_bulkOperationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationSummary::Jsonize() const {
  JsonValue payload;

  if (m_bulkOperationArnHasBeenSet) {
    payload.WithString("BulkOperationArn", m_bulkOperationArn);
  }

  if (m_bulkOperationStatusHasBeenSet) {
    payload.WithString("BulkOperationStatus", BulkOperationStatusMapper::GetNameForBulkOperationStatus(m_bulkOperationStatus));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
