/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TimestampFormatHeadersResult::TimestampFormatHeadersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

TimestampFormatHeadersResult& TimestampFormatHeadersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& memberEpochSecondsIter = headers.find("x-memberepochseconds");
  if (memberEpochSecondsIter != headers.end()) {
    m_memberEpochSeconds = DateTime(StringUtils::ConvertToDouble(memberEpochSecondsIter->second.c_str()));
    if (!m_memberEpochSeconds.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse memberEpochSeconds header as an "
                         "$CppViewHelper.computeTimestampFormatInHeader($memberEntry.value.shape) timestamp: "
                             << memberEpochSecondsIter->second.c_str());
    }
    m_memberEpochSecondsHasBeenSet = true;
  }

  const auto& memberHttpDateIter = headers.find("x-memberhttpdate");
  if (memberHttpDateIter != headers.end()) {
    m_memberHttpDate = DateTime(memberHttpDateIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if (!m_memberHttpDate.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse memberHttpDate header as an RFC822 timestamp: " << memberHttpDateIter->second.c_str());
    }
    m_memberHttpDateHasBeenSet = true;
  }

  const auto& memberDateTimeIter = headers.find("x-memberdatetime");
  if (memberDateTimeIter != headers.end()) {
    m_memberDateTime = DateTime(memberDateTimeIter->second.c_str(), Aws::Utils::DateFormat::ISO_8601);
    if (!m_memberDateTime.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse memberDateTime header as an ISO_8601 timestamp: " << memberDateTimeIter->second.c_str());
    }
    m_memberDateTimeHasBeenSet = true;
  }

  const auto& defaultFormatIter = headers.find("x-defaultformat");
  if (defaultFormatIter != headers.end()) {
    m_defaultFormat = DateTime(defaultFormatIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if (!m_defaultFormat.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse defaultFormat header as an RFC822 timestamp: " << defaultFormatIter->second.c_str());
    }
    m_defaultFormatHasBeenSet = true;
  }

  const auto& targetEpochSecondsIter = headers.find("x-targetepochseconds");
  if (targetEpochSecondsIter != headers.end()) {
    m_targetEpochSeconds = DateTime(StringUtils::ConvertToDouble(targetEpochSecondsIter->second.c_str()));
    if (!m_targetEpochSeconds.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse targetEpochSeconds header as an "
                         "$CppViewHelper.computeTimestampFormatInHeader($memberEntry.value.shape) timestamp: "
                             << targetEpochSecondsIter->second.c_str());
    }
    m_targetEpochSecondsHasBeenSet = true;
  }

  const auto& targetHttpDateIter = headers.find("x-targethttpdate");
  if (targetHttpDateIter != headers.end()) {
    m_targetHttpDate = DateTime(targetHttpDateIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if (!m_targetHttpDate.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse targetHttpDate header as an RFC822 timestamp: " << targetHttpDateIter->second.c_str());
    }
    m_targetHttpDateHasBeenSet = true;
  }

  const auto& targetDateTimeIter = headers.find("x-targetdatetime");
  if (targetDateTimeIter != headers.end()) {
    m_targetDateTime = DateTime(targetDateTimeIter->second.c_str(), Aws::Utils::DateFormat::ISO_8601);
    if (!m_targetDateTime.WasParseSuccessful()) {
      AWS_LOGSTREAM_WARN("RestJsonProtocol::TimestampFormatHeadersResult",
                         "Failed to parse targetDateTime header as an ISO_8601 timestamp: " << targetDateTimeIter->second.c_str());
    }
    m_targetDateTimeHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
