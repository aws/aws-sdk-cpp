/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeRaidArraysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRaidArraysResult::DescribeRaidArraysResult()
{
}

DescribeRaidArraysResult::DescribeRaidArraysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRaidArraysResult& DescribeRaidArraysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RaidArrays"))
  {
    Aws::Utils::Array<JsonView> raidArraysJsonList = jsonValue.GetArray("RaidArrays");
    for(unsigned raidArraysIndex = 0; raidArraysIndex < raidArraysJsonList.GetLength(); ++raidArraysIndex)
    {
      m_raidArrays.push_back(raidArraysJsonList[raidArraysIndex].AsObject());
    }
  }



  return *this;
}
