﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeEventCategoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventCategoriesResult::DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventCategoriesResult& DescribeEventCategoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventCategoryGroupList"))
  {
    Aws::Utils::Array<JsonView> eventCategoryGroupListJsonList = jsonValue.GetArray("EventCategoryGroupList");
    for(unsigned eventCategoryGroupListIndex = 0; eventCategoryGroupListIndex < eventCategoryGroupListJsonList.GetLength(); ++eventCategoryGroupListIndex)
    {
      m_eventCategoryGroupList.push_back(eventCategoryGroupListJsonList[eventCategoryGroupListIndex].AsObject());
    }
    m_eventCategoryGroupListHasBeenSet = true;
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
