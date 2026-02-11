/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesResult.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSensitiveDataOccurrencesResult::GetSensitiveDataOccurrencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetSensitiveDataOccurrencesResult& GetSensitiveDataOccurrencesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sensitiveDataOccurrences")) {
    Aws::Map<Aws::String, JsonView> sensitiveDataOccurrencesJsonMap = jsonValue.GetObject("sensitiveDataOccurrences").GetAllObjects();
    for (auto& sensitiveDataOccurrencesItem : sensitiveDataOccurrencesJsonMap) {
      Aws::Utils::Array<JsonView> __listOfDetectedDataDetails2JsonList = sensitiveDataOccurrencesItem.second.AsArray();
      Aws::Vector<DetectedDataDetails> __listOfDetectedDataDetails2List;
      __listOfDetectedDataDetails2List.reserve((size_t)__listOfDetectedDataDetails2JsonList.GetLength());
      for (unsigned __listOfDetectedDataDetails2Index = 0;
           __listOfDetectedDataDetails2Index < __listOfDetectedDataDetails2JsonList.GetLength(); ++__listOfDetectedDataDetails2Index) {
        __listOfDetectedDataDetails2List.push_back(__listOfDetectedDataDetails2JsonList[__listOfDetectedDataDetails2Index].AsObject());
      }
      m_sensitiveDataOccurrences[sensitiveDataOccurrencesItem.first] = std::move(__listOfDetectedDataDetails2List);
    }
    m_sensitiveDataOccurrencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RevealRequestStatusMapper::GetRevealRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
