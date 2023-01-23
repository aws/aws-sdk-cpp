/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeRegionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRegionsResult::DescribeRegionsResult()
{
}

DescribeRegionsResult::DescribeRegionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRegionsResult& DescribeRegionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegionsDescription"))
  {
    Aws::Utils::Array<JsonView> regionsDescriptionJsonList = jsonValue.GetArray("RegionsDescription");
    for(unsigned regionsDescriptionIndex = 0; regionsDescriptionIndex < regionsDescriptionJsonList.GetLength(); ++regionsDescriptionIndex)
    {
      m_regionsDescription.push_back(regionsDescriptionJsonList[regionsDescriptionIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
