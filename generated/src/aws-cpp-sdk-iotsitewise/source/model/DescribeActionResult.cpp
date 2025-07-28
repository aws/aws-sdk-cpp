/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeActionResult::DescribeActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeActionResult& DescribeActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");
    m_actionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetObject("targetResource");
    m_targetResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionDefinitionId"))
  {
    m_actionDefinitionId = jsonValue.GetString("actionDefinitionId");
    m_actionDefinitionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionPayload"))
  {
    m_actionPayload = jsonValue.GetObject("actionPayload");
    m_actionPayloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionTime"))
  {
    m_executionTime = jsonValue.GetDouble("executionTime");
    m_executionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
