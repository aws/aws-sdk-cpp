/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/datazone/model/CreateNotebookResult.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateNotebookResult::CreateNotebookResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateNotebookResult& CreateNotebookResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owningProjectId")) {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cellOrder")) {
    Aws::Utils::Array<JsonView> cellOrderJsonList = jsonValue.GetArray("cellOrder");
    for (unsigned cellOrderIndex = 0; cellOrderIndex < cellOrderJsonList.GetLength(); ++cellOrderIndex) {
      m_cellOrder.push_back(cellOrderJsonList[cellOrderIndex].AsObject());
    }
    m_cellOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = NotebookStatusMapper::GetNotebookStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockedBy")) {
    m_lockedBy = jsonValue.GetString("lockedBy");
    m_lockedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockedAt")) {
    m_lockedAt = jsonValue.GetDouble("lockedAt");
    m_lockedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockExpiresAt")) {
    m_lockExpiresAt = jsonValue.GetDouble("lockExpiresAt");
    m_lockExpiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeId")) {
    m_computeId = jsonValue.GetString("computeId");
    m_computeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentConfiguration")) {
    m_environmentConfiguration = jsonValue.GetObject("environmentConfiguration");
    m_environmentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
