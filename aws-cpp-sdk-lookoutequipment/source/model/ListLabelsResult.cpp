/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLabelsResult::ListLabelsResult()
{
}

ListLabelsResult::ListLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLabelsResult& ListLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("LabelSummaries"))
  {
    Aws::Utils::Array<JsonView> labelSummariesJsonList = jsonValue.GetArray("LabelSummaries");
    for(unsigned labelSummariesIndex = 0; labelSummariesIndex < labelSummariesJsonList.GetLength(); ++labelSummariesIndex)
    {
      m_labelSummaries.push_back(labelSummariesJsonList[labelSummariesIndex].AsObject());
    }
  }



  return *this;
}
