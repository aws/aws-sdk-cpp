/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InputAndOutputWithHeadersResult::InputAndOutputWithHeadersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

InputAndOutputWithHeadersResult& InputAndOutputWithHeadersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& headerStringIter = headers.find("x-string");
  if (headerStringIter != headers.end()) {
    m_headerString = headerStringIter->second;
    m_headerStringHasBeenSet = true;
  }

  const auto& headerByteIter = headers.find("x-byte");
  if (headerByteIter != headers.end()) {
    m_headerByte = StringUtils::ConvertToInt32(headerByteIter->second.c_str());
    m_headerByteHasBeenSet = true;
  }

  const auto& headerShortIter = headers.find("x-short");
  if (headerShortIter != headers.end()) {
    m_headerShort = StringUtils::ConvertToInt32(headerShortIter->second.c_str());
    m_headerShortHasBeenSet = true;
  }

  const auto& headerIntegerIter = headers.find("x-integer");
  if (headerIntegerIter != headers.end()) {
    m_headerInteger = StringUtils::ConvertToInt32(headerIntegerIter->second.c_str());
    m_headerIntegerHasBeenSet = true;
  }

  const auto& headerLongIter = headers.find("x-long");
  if (headerLongIter != headers.end()) {
    m_headerLong = StringUtils::ConvertToInt64(headerLongIter->second.c_str());
    m_headerLongHasBeenSet = true;
  }

  const auto& headerFloatIter = headers.find("x-float");
  if (headerFloatIter != headers.end()) {
    m_headerFloat = StringUtils::ConvertToDouble(headerFloatIter->second.c_str());
    m_headerFloatHasBeenSet = true;
  }

  const auto& headerDoubleIter = headers.find("x-double");
  if (headerDoubleIter != headers.end()) {
    m_headerDouble = StringUtils::ConvertToDouble(headerDoubleIter->second.c_str());
    m_headerDoubleHasBeenSet = true;
  }

  const auto& headerTrueBoolIter = headers.find("x-boolean1");
  if (headerTrueBoolIter != headers.end()) {
    m_headerTrueBool = StringUtils::ConvertToBool(headerTrueBoolIter->second.c_str());
    m_headerTrueBoolHasBeenSet = true;
  }

  const auto& headerFalseBoolIter = headers.find("x-boolean2");
  if (headerFalseBoolIter != headers.end()) {
    m_headerFalseBool = StringUtils::ConvertToBool(headerFalseBoolIter->second.c_str());
    m_headerFalseBoolHasBeenSet = true;
  }

  const auto& headerStringListIter = headers.find("x-stringlist");
  if (headerStringListIter != headers.end()) {
    m_headerStringListHasBeenSet = true;
  }

  const auto& headerStringSetIter = headers.find("x-stringset");
  if (headerStringSetIter != headers.end()) {
    m_headerStringSetHasBeenSet = true;
  }

  const auto& headerIntegerListIter = headers.find("x-integerlist");
  if (headerIntegerListIter != headers.end()) {
    m_headerIntegerListHasBeenSet = true;
  }

  const auto& headerBooleanListIter = headers.find("x-booleanlist");
  if (headerBooleanListIter != headers.end()) {
    m_headerBooleanListHasBeenSet = true;
  }

  const auto& headerTimestampListIter = headers.find("x-timestamplist");
  if (headerTimestampListIter != headers.end()) {
    m_headerTimestampListHasBeenSet = true;
  }

  const auto& headerEnumIter = headers.find("x-enum");
  if (headerEnumIter != headers.end()) {
    m_headerEnum = FooEnumMapper::GetFooEnumForName(headerEnumIter->second);
    m_headerEnumHasBeenSet = true;
  }

  const auto& headerEnumListIter = headers.find("x-enumlist");
  if (headerEnumListIter != headers.end()) {
    m_headerEnumListHasBeenSet = true;
  }

  const auto& headerIntegerEnumIter = headers.find("x-integerenum");
  if (headerIntegerEnumIter != headers.end()) {
    m_headerIntegerEnum = StringUtils::ConvertToInt32(headerIntegerEnumIter->second.c_str());
    m_headerIntegerEnumHasBeenSet = true;
  }

  const auto& headerIntegerEnumListIter = headers.find("x-integerenumlist");
  if (headerIntegerEnumListIter != headers.end()) {
    m_headerIntegerEnumListHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
