/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesResult.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SimpleScalarPropertiesResult& SimpleScalarPropertiesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("floatValue")) {
    m_floatValue = jsonValue.GetDouble("floatValue");
    m_floatValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("doubleValue")) {
    m_doubleValue = jsonValue.GetDouble("doubleValue");
    m_doubleValueHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
