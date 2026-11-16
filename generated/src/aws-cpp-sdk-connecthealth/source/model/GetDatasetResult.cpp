/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/GetDatasetResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectHealth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatasetResult::GetDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDatasetResult& GetDatasetResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("config")) {
    m_config = jsonValue.GetObject("config");
    m_configHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusDetails")) {
    m_statusDetails = jsonValue.GetString("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifacts")) {
    m_artifacts = jsonValue.GetObject("artifacts");
    m_artifactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
