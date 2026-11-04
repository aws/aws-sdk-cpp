/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationDescription::BulkOperationDescription(JsonView jsonValue) { *this = jsonValue; }

BulkOperationDescription& BulkOperationDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BulkOperationArn")) {
    m_bulkOperationArn = jsonValue.GetString("BulkOperationArn");
    m_bulkOperationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BulkOperationStatus")) {
    m_bulkOperationStatus = BulkOperationStatusMapper::GetBulkOperationStatusForName(jsonValue.GetString("BulkOperationStatus"));
    m_bulkOperationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableDetails")) {
    Aws::Utils::Array<JsonView> tableDetailsJsonList = jsonValue.GetArray("TableDetails");
    for (unsigned tableDetailsIndex = 0; tableDetailsIndex < tableDetailsJsonList.GetLength(); ++tableDetailsIndex) {
      m_tableDetails.push_back(tableDetailsJsonList[tableDetailsIndex].AsObject());
    }
    m_tableDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientToken")) {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputS3Configuration")) {
    m_inputS3Configuration = jsonValue.GetObject("InputS3Configuration");
    m_inputS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputS3Configuration")) {
    m_outputS3Configuration = jsonValue.GetObject("OutputS3Configuration");
    m_outputS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedItemCount")) {
    m_processedItemCount = jsonValue.GetInt64("ProcessedItemCount");
    m_processedItemCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedInputBytes")) {
    m_processedInputBytes = jsonValue.GetInt64("ProcessedInputBytes");
    m_processedInputBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalInputBytes")) {
    m_totalInputBytes = jsonValue.GetInt64("TotalInputBytes");
    m_totalInputBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BulkOperationUsage")) {
    Aws::Utils::Array<JsonView> bulkOperationUsageJsonList = jsonValue.GetArray("BulkOperationUsage");
    for (unsigned bulkOperationUsageIndex = 0; bulkOperationUsageIndex < bulkOperationUsageJsonList.GetLength();
         ++bulkOperationUsageIndex) {
      m_bulkOperationUsage.push_back(bulkOperationUsageJsonList[bulkOperationUsageIndex].AsObject());
    }
    m_bulkOperationUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedItemCount")) {
    m_failedItemCount = jsonValue.GetInt64("FailedItemCount");
    m_failedItemCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCode")) {
    m_failureCode = jsonValue.GetString("FailureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureMessage")) {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxWriteRequestUnits")) {
    m_maxWriteRequestUnits = jsonValue.GetInt64("MaxWriteRequestUnits");
    m_maxWriteRequestUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformanceTier")) {
    m_performanceTier = BulkOperationPerformanceTierMapper::GetBulkOperationPerformanceTierForName(jsonValue.GetString("PerformanceTier"));
    m_performanceTierHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationDescription::Jsonize() const {
  JsonValue payload;

  if (m_bulkOperationArnHasBeenSet) {
    payload.WithString("BulkOperationArn", m_bulkOperationArn);
  }

  if (m_bulkOperationStatusHasBeenSet) {
    payload.WithString("BulkOperationStatus", BulkOperationStatusMapper::GetNameForBulkOperationStatus(m_bulkOperationStatus));
  }

  if (m_tableDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tableDetailsJsonList(m_tableDetails.size());
    for (unsigned tableDetailsIndex = 0; tableDetailsIndex < tableDetailsJsonList.GetLength(); ++tableDetailsIndex) {
      tableDetailsJsonList[tableDetailsIndex].AsObject(m_tableDetails[tableDetailsIndex].Jsonize());
    }
    payload.WithArray("TableDetails", std::move(tableDetailsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_inputS3ConfigurationHasBeenSet) {
    payload.WithObject("InputS3Configuration", m_inputS3Configuration.Jsonize());
  }

  if (m_outputS3ConfigurationHasBeenSet) {
    payload.WithObject("OutputS3Configuration", m_outputS3Configuration.Jsonize());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_processedItemCountHasBeenSet) {
    payload.WithInt64("ProcessedItemCount", m_processedItemCount);
  }

  if (m_processedInputBytesHasBeenSet) {
    payload.WithInt64("ProcessedInputBytes", m_processedInputBytes);
  }

  if (m_totalInputBytesHasBeenSet) {
    payload.WithInt64("TotalInputBytes", m_totalInputBytes);
  }

  if (m_bulkOperationUsageHasBeenSet) {
    Aws::Utils::Array<JsonValue> bulkOperationUsageJsonList(m_bulkOperationUsage.size());
    for (unsigned bulkOperationUsageIndex = 0; bulkOperationUsageIndex < bulkOperationUsageJsonList.GetLength();
         ++bulkOperationUsageIndex) {
      bulkOperationUsageJsonList[bulkOperationUsageIndex].AsObject(m_bulkOperationUsage[bulkOperationUsageIndex].Jsonize());
    }
    payload.WithArray("BulkOperationUsage", std::move(bulkOperationUsageJsonList));
  }

  if (m_failedItemCountHasBeenSet) {
    payload.WithInt64("FailedItemCount", m_failedItemCount);
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("FailureCode", m_failureCode);
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("FailureMessage", m_failureMessage);
  }

  if (m_maxWriteRequestUnitsHasBeenSet) {
    payload.WithInt64("MaxWriteRequestUnits", m_maxWriteRequestUnits);
  }

  if (m_performanceTierHasBeenSet) {
    payload.WithString("PerformanceTier", BulkOperationPerformanceTierMapper::GetNameForBulkOperationPerformanceTier(m_performanceTier));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
