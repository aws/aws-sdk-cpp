/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeAccessPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccessPointsResult::DescribeAccessPointsResult()
{
}

DescribeAccessPointsResult::DescribeAccessPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccessPointsResult& DescribeAccessPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessPoints"))
  {
    Aws::Utils::Array<JsonView> accessPointsJsonList = jsonValue.GetArray("AccessPoints");
    for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
    {
      m_accessPoints.push_back(accessPointsJsonList[accessPointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
