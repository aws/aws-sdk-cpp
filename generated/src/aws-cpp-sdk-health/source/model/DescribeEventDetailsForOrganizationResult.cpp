﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEventDetailsForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventDetailsForOrganizationResult::DescribeEventDetailsForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventDetailsForOrganizationResult& DescribeEventDetailsForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successfulSet"))
  {
    Aws::Utils::Array<JsonView> successfulSetJsonList = jsonValue.GetArray("successfulSet");
    for(unsigned successfulSetIndex = 0; successfulSetIndex < successfulSetJsonList.GetLength(); ++successfulSetIndex)
    {
      m_successfulSet.push_back(successfulSetJsonList[successfulSetIndex].AsObject());
    }
    m_successfulSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedSet"))
  {
    Aws::Utils::Array<JsonView> failedSetJsonList = jsonValue.GetArray("failedSet");
    for(unsigned failedSetIndex = 0; failedSetIndex < failedSetJsonList.GetLength(); ++failedSetIndex)
    {
      m_failedSet.push_back(failedSetJsonList[failedSetIndex].AsObject());
    }
    m_failedSetHasBeenSet = true;
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
