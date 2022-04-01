﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListResourceComplianceSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceComplianceSummariesResult::ListResourceComplianceSummariesResult()
{
}

ListResourceComplianceSummariesResult::ListResourceComplianceSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceComplianceSummariesResult& ListResourceComplianceSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceComplianceSummaryItems"))
  {
    Array<JsonView> resourceComplianceSummaryItemsJsonList = jsonValue.GetArray("ResourceComplianceSummaryItems");
    for(unsigned resourceComplianceSummaryItemsIndex = 0; resourceComplianceSummaryItemsIndex < resourceComplianceSummaryItemsJsonList.GetLength(); ++resourceComplianceSummaryItemsIndex)
    {
      m_resourceComplianceSummaryItems.push_back(resourceComplianceSummaryItemsJsonList[resourceComplianceSummaryItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
