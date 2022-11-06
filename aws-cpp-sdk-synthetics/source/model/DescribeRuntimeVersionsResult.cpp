/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DescribeRuntimeVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRuntimeVersionsResult::DescribeRuntimeVersionsResult()
{
}

DescribeRuntimeVersionsResult::DescribeRuntimeVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRuntimeVersionsResult& DescribeRuntimeVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuntimeVersions"))
  {
    Aws::Utils::Array<JsonView> runtimeVersionsJsonList = jsonValue.GetArray("RuntimeVersions");
    for(unsigned runtimeVersionsIndex = 0; runtimeVersionsIndex < runtimeVersionsJsonList.GetLength(); ++runtimeVersionsIndex)
    {
      m_runtimeVersions.push_back(runtimeVersionsJsonList[runtimeVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
