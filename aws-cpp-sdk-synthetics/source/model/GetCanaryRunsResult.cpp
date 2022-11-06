/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/GetCanaryRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCanaryRunsResult::GetCanaryRunsResult()
{
}

GetCanaryRunsResult::GetCanaryRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCanaryRunsResult& GetCanaryRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CanaryRuns"))
  {
    Aws::Utils::Array<JsonView> canaryRunsJsonList = jsonValue.GetArray("CanaryRuns");
    for(unsigned canaryRunsIndex = 0; canaryRunsIndex < canaryRunsJsonList.GetLength(); ++canaryRunsIndex)
    {
      m_canaryRuns.push_back(canaryRunsJsonList[canaryRunsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
