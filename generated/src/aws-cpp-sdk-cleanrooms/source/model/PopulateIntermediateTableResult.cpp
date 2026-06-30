/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulateIntermediateTableResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PopulateIntermediateTableResult::PopulateIntermediateTableResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

PopulateIntermediateTableResult& PopulateIntermediateTableResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("analysisId")) {
    m_analysisId = jsonValue.GetString("analysisId");
    m_analysisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType =
        PopulateIntermediateTableAnalysisTypeMapper::GetPopulateIntermediateTableAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
