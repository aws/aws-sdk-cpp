/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeMapRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMapRunResult::DescribeMapRunResult() : 
    m_status(MapRunStatus::NOT_SET),
    m_maxConcurrency(0),
    m_toleratedFailurePercentage(0.0),
    m_toleratedFailureCount(0)
{
}

DescribeMapRunResult::DescribeMapRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MapRunStatus::NOT_SET),
    m_maxConcurrency(0),
    m_toleratedFailurePercentage(0.0),
    m_toleratedFailureCount(0)
{
  *this = result;
}

DescribeMapRunResult& DescribeMapRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

  }

  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MapRunStatusMapper::GetMapRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

  }

  if(jsonValue.ValueExists("stopDate"))
  {
    m_stopDate = jsonValue.GetDouble("stopDate");

  }

  if(jsonValue.ValueExists("maxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetInteger("maxConcurrency");

  }

  if(jsonValue.ValueExists("toleratedFailurePercentage"))
  {
    m_toleratedFailurePercentage = jsonValue.GetDouble("toleratedFailurePercentage");

  }

  if(jsonValue.ValueExists("toleratedFailureCount"))
  {
    m_toleratedFailureCount = jsonValue.GetInt64("toleratedFailureCount");

  }

  if(jsonValue.ValueExists("itemCounts"))
  {
    m_itemCounts = jsonValue.GetObject("itemCounts");

  }

  if(jsonValue.ValueExists("executionCounts"))
  {
    m_executionCounts = jsonValue.GetObject("executionCounts");

  }



  return *this;
}
