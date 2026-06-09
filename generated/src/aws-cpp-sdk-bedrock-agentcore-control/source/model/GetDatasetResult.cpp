/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetDatasetResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatasetResult::GetDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDatasetResult& GetDatasetResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("datasetArn")) {
    m_datasetArn = jsonValue.GetString("datasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetVersion")) {
    m_datasetVersion = jsonValue.GetString("datasetVersion");
    m_datasetVersionHasBeenSet = true;
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
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schemaType")) {
    m_schemaType = DatasetSchemaTypeMapper::GetDatasetSchemaTypeForName(jsonValue.GetString("schemaType"));
    m_schemaTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exampleCount")) {
    m_exampleCount = jsonValue.GetInt64("exampleCount");
    m_exampleCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("downloadUrl")) {
    m_downloadUrl = jsonValue.GetString("downloadUrl");
    m_downloadUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("downloadUrlExpiresAt")) {
    m_downloadUrlExpiresAt = jsonValue.GetDouble("downloadUrlExpiresAt");
    m_downloadUrlExpiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
