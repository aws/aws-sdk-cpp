/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DescribeCanariesLastRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCanariesLastRunResult::DescribeCanariesLastRunResult()
{
}

DescribeCanariesLastRunResult::DescribeCanariesLastRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCanariesLastRunResult& DescribeCanariesLastRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CanariesLastRun"))
  {
    Aws::Utils::Array<JsonView> canariesLastRunJsonList = jsonValue.GetArray("CanariesLastRun");
    for(unsigned canariesLastRunIndex = 0; canariesLastRunIndex < canariesLastRunJsonList.GetLength(); ++canariesLastRunIndex)
    {
      m_canariesLastRun.push_back(canariesLastRunJsonList[canariesLastRunIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
