/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/ListDatasetDataSegmentRelationshipsResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetDataSegmentRelationshipsResult::ListDatasetDataSegmentRelationshipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListDatasetDataSegmentRelationshipsResult& ListDatasetDataSegmentRelationshipsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("dataSegmentRelationshipSummaries")) {
    Aws::Utils::Array<JsonView> dataSegmentRelationshipSummariesJsonList = jsonValue.GetArray("dataSegmentRelationshipSummaries");
    for (unsigned dataSegmentRelationshipSummariesIndex = 0;
         dataSegmentRelationshipSummariesIndex < dataSegmentRelationshipSummariesJsonList.GetLength();
         ++dataSegmentRelationshipSummariesIndex) {
      m_dataSegmentRelationshipSummaries.push_back(
          dataSegmentRelationshipSummariesJsonList[dataSegmentRelationshipSummariesIndex].AsObject());
    }
    m_dataSegmentRelationshipSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
