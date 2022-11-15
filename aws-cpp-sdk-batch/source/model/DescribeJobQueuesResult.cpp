/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeJobQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobQueuesResult::DescribeJobQueuesResult()
{
}

DescribeJobQueuesResult::DescribeJobQueuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeJobQueuesResult& DescribeJobQueuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobQueues"))
  {
    Aws::Utils::Array<JsonView> jobQueuesJsonList = jsonValue.GetArray("jobQueues");
    for(unsigned jobQueuesIndex = 0; jobQueuesIndex < jobQueuesJsonList.GetLength(); ++jobQueuesIndex)
    {
      m_jobQueues.push_back(jobQueuesJsonList[jobQueuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
