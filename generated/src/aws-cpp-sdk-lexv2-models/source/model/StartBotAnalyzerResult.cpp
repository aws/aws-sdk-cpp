/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lexv2-models/model/StartBotAnalyzerResult.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartBotAnalyzerResult::StartBotAnalyzerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

StartBotAnalyzerResult& StartBotAnalyzerResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("botId")) {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botVersion")) {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localeId")) {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botAnalyzerStatus")) {
    m_botAnalyzerStatus = BotAnalyzerStatusMapper::GetBotAnalyzerStatusForName(jsonValue.GetString("botAnalyzerStatus"));
    m_botAnalyzerStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botAnalyzerRequestId")) {
    m_botAnalyzerRequestId = jsonValue.GetString("botAnalyzerRequestId");
    m_botAnalyzerRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationDateTime")) {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
