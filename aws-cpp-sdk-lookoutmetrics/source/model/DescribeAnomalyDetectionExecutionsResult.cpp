/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAnomalyDetectionExecutionsResult::DescribeAnomalyDetectionExecutionsResult()
{
}

DescribeAnomalyDetectionExecutionsResult::DescribeAnomalyDetectionExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAnomalyDetectionExecutionsResult& DescribeAnomalyDetectionExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExecutionList"))
  {
    Aws::Utils::Array<JsonView> executionListJsonList = jsonValue.GetArray("ExecutionList");
    for(unsigned executionListIndex = 0; executionListIndex < executionListJsonList.GetLength(); ++executionListIndex)
    {
      m_executionList.push_back(executionListJsonList[executionListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
