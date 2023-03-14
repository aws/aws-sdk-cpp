/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/EvaluateFeatureResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateFeatureResult::EvaluateFeatureResult()
{
}

EvaluateFeatureResult::EvaluateFeatureResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EvaluateFeatureResult& EvaluateFeatureResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

  }

  if(jsonValue.ValueExists("variation"))
  {
    m_variation = jsonValue.GetString("variation");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
