/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/GetMicrovmImageResult.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMicrovmImageResult::GetMicrovmImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMicrovmImageResult& GetMicrovmImageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MicrovmImageStateMapper::GetMicrovmImageStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestActiveImageVersion")) {
    m_latestActiveImageVersion = jsonValue.GetString("latestActiveImageVersion");
    m_latestActiveImageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestFailedImageVersion")) {
    m_latestFailedImageVersion = jsonValue.GetString("latestFailedImageVersion");
    m_latestFailedImageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
