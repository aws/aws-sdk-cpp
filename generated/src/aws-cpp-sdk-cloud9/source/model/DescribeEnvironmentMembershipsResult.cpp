/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/DescribeEnvironmentMembershipsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEnvironmentMembershipsResult::DescribeEnvironmentMembershipsResult()
{
}

DescribeEnvironmentMembershipsResult::DescribeEnvironmentMembershipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEnvironmentMembershipsResult& DescribeEnvironmentMembershipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("memberships"))
  {
    Aws::Utils::Array<JsonView> membershipsJsonList = jsonValue.GetArray("memberships");
    for(unsigned membershipsIndex = 0; membershipsIndex < membershipsJsonList.GetLength(); ++membershipsIndex)
    {
      m_memberships.push_back(membershipsJsonList[membershipsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
