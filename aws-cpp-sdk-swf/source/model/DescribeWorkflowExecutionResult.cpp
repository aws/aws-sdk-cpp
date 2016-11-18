/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/swf/model/DescribeWorkflowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkflowExecutionResult::DescribeWorkflowExecutionResult()
{
}

DescribeWorkflowExecutionResult::DescribeWorkflowExecutionResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWorkflowExecutionResult& DescribeWorkflowExecutionResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("executionInfo"))
  {
    m_executionInfo = jsonValue.GetObject("executionInfo");

  }

  if(jsonValue.ValueExists("executionConfiguration"))
  {
    m_executionConfiguration = jsonValue.GetObject("executionConfiguration");

  }

  if(jsonValue.ValueExists("openCounts"))
  {
    m_openCounts = jsonValue.GetObject("openCounts");

  }

  if(jsonValue.ValueExists("latestActivityTaskTimestamp"))
  {
    m_latestActivityTaskTimestamp = jsonValue.GetDouble("latestActivityTaskTimestamp");

  }

  if(jsonValue.ValueExists("latestExecutionContext"))
  {
    m_latestExecutionContext = jsonValue.GetString("latestExecutionContext");

  }



  return *this;
}
