/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibraryIngestionJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibraryIngestionJob::DataAutomationLibraryIngestionJob(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibraryIngestionJob& DataAutomationLibraryIngestionJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobArn")) {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("entityType"));
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationType")) {
    m_operationType =
        LibraryIngestionJobOperationTypeMapper::GetLibraryIngestionJobOperationTypeForName(jsonValue.GetString("operationType"));
    m_operationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobStatus")) {
    m_jobStatus = LibraryIngestionJobStatusMapper::GetLibraryIngestionJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfiguration")) {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");
    m_outputConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completionTime")) {
    m_completionTime = jsonValue.GetString("completionTime");
    m_completionTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorType")) {
    m_errorType = jsonValue.GetString("errorType");
    m_errorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibraryIngestionJob::Jsonize() const {
  JsonValue payload;

  if (m_jobArnHasBeenSet) {
    payload.WithString("jobArn", m_jobArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  if (m_operationTypeHasBeenSet) {
    payload.WithString("operationType",
                       LibraryIngestionJobOperationTypeMapper::GetNameForLibraryIngestionJobOperationType(m_operationType));
  }

  if (m_jobStatusHasBeenSet) {
    payload.WithString("jobStatus", LibraryIngestionJobStatusMapper::GetNameForLibraryIngestionJobStatus(m_jobStatus));
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());
  }

  if (m_completionTimeHasBeenSet) {
    payload.WithString("completionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_errorTypeHasBeenSet) {
    payload.WithString("errorType", m_errorType);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
