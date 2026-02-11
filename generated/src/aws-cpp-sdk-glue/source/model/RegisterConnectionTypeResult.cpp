/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/RegisterConnectionTypeResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterConnectionTypeResult::RegisterConnectionTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RegisterConnectionTypeResult& RegisterConnectionTypeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConnectionTypeArn")) {
    m_connectionTypeArn = jsonValue.GetString("ConnectionTypeArn");
    m_connectionTypeArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
