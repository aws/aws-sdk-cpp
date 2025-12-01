/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListWorkspaceMediaResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkspaceMediaResult::ListWorkspaceMediaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWorkspaceMediaResult& ListWorkspaceMediaResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Media")) {
    Aws::Utils::Array<JsonView> mediaJsonList = jsonValue.GetArray("Media");
    for (unsigned mediaIndex = 0; mediaIndex < mediaJsonList.GetLength(); ++mediaIndex) {
      m_media.push_back(mediaJsonList[mediaIndex].AsObject());
    }
    m_mediaHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
