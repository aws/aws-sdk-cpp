/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeAssessmentTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssessmentTemplatesResult::DescribeAssessmentTemplatesResult()
{
}

DescribeAssessmentTemplatesResult::DescribeAssessmentTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssessmentTemplatesResult& DescribeAssessmentTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentTemplates"))
  {
    Aws::Utils::Array<JsonView> assessmentTemplatesJsonList = jsonValue.GetArray("assessmentTemplates");
    for(unsigned assessmentTemplatesIndex = 0; assessmentTemplatesIndex < assessmentTemplatesJsonList.GetLength(); ++assessmentTemplatesIndex)
    {
      m_assessmentTemplates.push_back(assessmentTemplatesJsonList[assessmentTemplatesIndex].AsObject());
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
