/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dms/model/DescribeMetadataModelResult.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetadataModelResult::DescribeMetadataModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeMetadataModelResult& DescribeMetadataModelResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("MetadataModelName")) {
    m_metadataModelName = jsonValue.GetString("MetadataModelName");
    m_metadataModelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetadataModelType")) {
    m_metadataModelType = jsonValue.GetString("MetadataModelType");
    m_metadataModelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetMetadataModels")) {
    Aws::Utils::Array<JsonView> targetMetadataModelsJsonList = jsonValue.GetArray("TargetMetadataModels");
    for (unsigned targetMetadataModelsIndex = 0; targetMetadataModelsIndex < targetMetadataModelsJsonList.GetLength();
         ++targetMetadataModelsIndex) {
      m_targetMetadataModels.push_back(targetMetadataModelsJsonList[targetMetadataModelsIndex].AsObject());
    }
    m_targetMetadataModelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Definition")) {
    m_definition = jsonValue.GetString("Definition");
    m_definitionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
