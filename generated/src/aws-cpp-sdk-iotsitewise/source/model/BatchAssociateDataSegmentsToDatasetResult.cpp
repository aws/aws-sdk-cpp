/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/BatchAssociateDataSegmentsToDatasetResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchAssociateDataSegmentsToDatasetResult::BatchAssociateDataSegmentsToDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchAssociateDataSegmentsToDatasetResult& BatchAssociateDataSegmentsToDatasetResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetVersion")) {
    m_datasetVersion = jsonValue.GetString("datasetVersion");
    m_datasetVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedAssociations")) {
    Aws::Utils::Array<JsonView> failedAssociationsJsonList = jsonValue.GetArray("failedAssociations");
    for (unsigned failedAssociationsIndex = 0; failedAssociationsIndex < failedAssociationsJsonList.GetLength();
         ++failedAssociationsIndex) {
      m_failedAssociations.push_back(failedAssociationsJsonList[failedAssociationsIndex].AsObject());
    }
    m_failedAssociationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
