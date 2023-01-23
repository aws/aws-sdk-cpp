/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeFlowExecutionRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFlowExecutionRecordsResult::DescribeFlowExecutionRecordsResult()
{
}

DescribeFlowExecutionRecordsResult::DescribeFlowExecutionRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFlowExecutionRecordsResult& DescribeFlowExecutionRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowExecutions"))
  {
    Aws::Utils::Array<JsonView> flowExecutionsJsonList = jsonValue.GetArray("flowExecutions");
    for(unsigned flowExecutionsIndex = 0; flowExecutionsIndex < flowExecutionsJsonList.GetLength(); ++flowExecutionsIndex)
    {
      m_flowExecutions.push_back(flowExecutionsJsonList[flowExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
