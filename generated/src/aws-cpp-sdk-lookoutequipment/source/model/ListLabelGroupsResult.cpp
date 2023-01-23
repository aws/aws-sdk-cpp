/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListLabelGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLabelGroupsResult::ListLabelGroupsResult()
{
}

ListLabelGroupsResult::ListLabelGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLabelGroupsResult& ListLabelGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("LabelGroupSummaries"))
  {
    Aws::Utils::Array<JsonView> labelGroupSummariesJsonList = jsonValue.GetArray("LabelGroupSummaries");
    for(unsigned labelGroupSummariesIndex = 0; labelGroupSummariesIndex < labelGroupSummariesJsonList.GetLength(); ++labelGroupSummariesIndex)
    {
      m_labelGroupSummaries.push_back(labelGroupSummariesJsonList[labelGroupSummariesIndex].AsObject());
    }
  }



  return *this;
}
