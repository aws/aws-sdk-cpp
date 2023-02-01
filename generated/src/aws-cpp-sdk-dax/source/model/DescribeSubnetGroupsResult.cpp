/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DescribeSubnetGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSubnetGroupsResult::DescribeSubnetGroupsResult()
{
}

DescribeSubnetGroupsResult::DescribeSubnetGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSubnetGroupsResult& DescribeSubnetGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SubnetGroups"))
  {
    Aws::Utils::Array<JsonView> subnetGroupsJsonList = jsonValue.GetArray("SubnetGroups");
    for(unsigned subnetGroupsIndex = 0; subnetGroupsIndex < subnetGroupsJsonList.GetLength(); ++subnetGroupsIndex)
    {
      m_subnetGroups.push_back(subnetGroupsJsonList[subnetGroupsIndex].AsObject());
    }
  }



  return *this;
}
