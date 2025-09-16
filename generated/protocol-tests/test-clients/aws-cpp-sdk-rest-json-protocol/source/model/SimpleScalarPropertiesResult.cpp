/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SimpleScalarPropertiesResult& SimpleScalarPropertiesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("stringValue")) {
    m_stringValue = jsonValue.GetString("stringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trueBooleanValue")) {
    m_trueBooleanValue = jsonValue.GetBool("trueBooleanValue");
    m_trueBooleanValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("falseBooleanValue")) {
    m_falseBooleanValue = jsonValue.GetBool("falseBooleanValue");
    m_falseBooleanValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("byteValue")) {
    m_byteValue = jsonValue.GetInteger("byteValue");
    m_byteValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortValue")) {
    m_shortValue = jsonValue.GetInteger("shortValue");
    m_shortValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerValue")) {
    m_integerValue = jsonValue.GetInteger("integerValue");
    m_integerValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("longValue")) {
    m_longValue = jsonValue.GetInt64("longValue");
    m_longValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("floatValue")) {
    m_floatValue = jsonValue.GetDouble("floatValue");
    m_floatValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DoubleDribble")) {
    m_doubleValue = jsonValue.GetDouble("DoubleDribble");
    m_doubleValueHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if (fooIter != headers.end()) {
    m_foo = fooIter->second;
    m_fooHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
