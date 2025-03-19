/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ConverseResult::ConverseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ConverseResult& ConverseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stopReason"))
  {
    m_stopReason = StopReasonMapper::GetStopReasonForName(jsonValue.GetString("stopReason"));
    m_stopReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metrics"))
  {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalModelResponseFields"))
  {
    m_additionalModelResponseFields = jsonValue.GetObject("additionalModelResponseFields");
    m_additionalModelResponseFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trace"))
  {
    m_trace = jsonValue.GetObject("trace");
    m_traceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performanceConfig"))
  {
    m_performanceConfig = jsonValue.GetObject("performanceConfig");
    m_performanceConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
