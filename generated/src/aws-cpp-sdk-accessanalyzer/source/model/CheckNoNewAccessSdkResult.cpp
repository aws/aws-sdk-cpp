﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckNoNewAccessSdkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckNoNewAccessSdkResult::CheckNoNewAccessSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CheckNoNewAccessSdkResult& CheckNoNewAccessSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("result"))
  {
    m_result = CheckNoNewAccessResultMapper::GetCheckNoNewAccessResultForName(jsonValue.GetString("result"));
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(reasonsJsonList[reasonsIndex].AsObject());
    }
    m_reasonsHasBeenSet = true;
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
