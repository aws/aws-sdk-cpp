/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DatasetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DatasetSummary::DatasetSummary(JsonView jsonValue) { *this = jsonValue; }

DatasetSummary& DatasetSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetArn")) {
    m_datasetArn = jsonValue.GetString("datasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetName")) {
    m_datasetName = jsonValue.GetString("datasetName");
    m_datasetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("draftStatus")) {
    m_draftStatus = DraftStatusMapper::GetDraftStatusForName(jsonValue.GetString("draftStatus"));
    m_draftStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schemaType")) {
    m_schemaType = DatasetSchemaTypeMapper::GetDatasetSchemaTypeForName(jsonValue.GetString("schemaType"));
    m_schemaTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exampleCount")) {
    m_exampleCount = jsonValue.GetInt64("exampleCount");
    m_exampleCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetSummary::Jsonize() const {
  JsonValue payload;

  if (m_datasetArnHasBeenSet) {
    payload.WithString("datasetArn", m_datasetArn);
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_datasetNameHasBeenSet) {
    payload.WithString("datasetName", m_datasetName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if (m_draftStatusHasBeenSet) {
    payload.WithString("draftStatus", DraftStatusMapper::GetNameForDraftStatus(m_draftStatus));
  }

  if (m_schemaTypeHasBeenSet) {
    payload.WithString("schemaType", DatasetSchemaTypeMapper::GetNameForDatasetSchemaType(m_schemaType));
  }

  if (m_exampleCountHasBeenSet) {
    payload.WithInt64("exampleCount", m_exampleCount);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
