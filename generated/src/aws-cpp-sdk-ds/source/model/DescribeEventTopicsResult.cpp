/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeEventTopicsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventTopicsResult::DescribeEventTopicsResult()
{
}

DescribeEventTopicsResult::DescribeEventTopicsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventTopicsResult& DescribeEventTopicsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventTopics"))
  {
    Aws::Utils::Array<JsonView> eventTopicsJsonList = jsonValue.GetArray("EventTopics");
    for(unsigned eventTopicsIndex = 0; eventTopicsIndex < eventTopicsJsonList.GetLength(); ++eventTopicsIndex)
    {
      m_eventTopics.push_back(eventTopicsJsonList[eventTopicsIndex].AsObject());
    }
  }



  return *this;
}
