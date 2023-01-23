/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeJobDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobDefinitionsResult::DescribeJobDefinitionsResult()
{
}

DescribeJobDefinitionsResult::DescribeJobDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeJobDefinitionsResult& DescribeJobDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobDefinitions"))
  {
    Aws::Utils::Array<JsonView> jobDefinitionsJsonList = jsonValue.GetArray("jobDefinitions");
    for(unsigned jobDefinitionsIndex = 0; jobDefinitionsIndex < jobDefinitionsJsonList.GetLength(); ++jobDefinitionsIndex)
    {
      m_jobDefinitions.push_back(jobDefinitionsJsonList[jobDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
