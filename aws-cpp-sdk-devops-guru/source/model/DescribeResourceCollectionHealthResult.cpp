/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeResourceCollectionHealthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeResourceCollectionHealthResult::DescribeResourceCollectionHealthResult()
{
}

DescribeResourceCollectionHealthResult::DescribeResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeResourceCollectionHealthResult& DescribeResourceCollectionHealthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CloudFormation"))
  {
    Array<JsonView> cloudFormationJsonList = jsonValue.GetArray("CloudFormation");
    for(unsigned cloudFormationIndex = 0; cloudFormationIndex < cloudFormationJsonList.GetLength(); ++cloudFormationIndex)
    {
      m_cloudFormation.push_back(cloudFormationJsonList[cloudFormationIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
