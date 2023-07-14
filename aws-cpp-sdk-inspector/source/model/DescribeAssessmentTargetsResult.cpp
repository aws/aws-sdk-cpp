﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeAssessmentTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssessmentTargetsResult::DescribeAssessmentTargetsResult()
{
}

DescribeAssessmentTargetsResult::DescribeAssessmentTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssessmentTargetsResult& DescribeAssessmentTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentTargets"))
  {
    Array<JsonView> assessmentTargetsJsonList = jsonValue.GetArray("assessmentTargets");
    for(unsigned assessmentTargetsIndex = 0; assessmentTargetsIndex < assessmentTargetsJsonList.GetLength(); ++assessmentTargetsIndex)
    {
      m_assessmentTargets.push_back(assessmentTargetsJsonList[assessmentTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedItems"))
  {
    Aws::Map<Aws::String, JsonView> failedItemsJsonMap = jsonValue.GetObject("failedItems").GetAllObjects();
    for(auto& failedItemsItem : failedItemsJsonMap)
    {
      m_failedItems[failedItemsItem.first] = failedItemsItem.second.AsObject();
    }
  }



  return *this;
}
