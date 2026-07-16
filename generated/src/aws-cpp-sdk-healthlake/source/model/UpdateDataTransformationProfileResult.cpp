/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/healthlake/model/UpdateDataTransformationProfileResult.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDataTransformationProfileResult::UpdateDataTransformationProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateDataTransformationProfileResult& UpdateDataTransformationProfileResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceFormat")) {
    m_sourceFormat = SourceFormatMapper::GetSourceFormatForName(jsonValue.GetString("SourceFormat"));
    m_sourceFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetFormat")) {
    m_targetFormat = TargetFormatMapper::GetTargetFormatForName(jsonValue.GetString("TargetFormat"));
    m_targetFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileName")) {
    m_profileName = jsonValue.GetString("ProfileName");
    m_profileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
