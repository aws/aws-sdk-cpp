/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListDatasetGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetGroupsResult::ListDatasetGroupsResult()
{
}

ListDatasetGroupsResult::ListDatasetGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetGroupsResult& ListDatasetGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetGroups"))
  {
    Aws::Utils::Array<JsonView> datasetGroupsJsonList = jsonValue.GetArray("datasetGroups");
    for(unsigned datasetGroupsIndex = 0; datasetGroupsIndex < datasetGroupsJsonList.GetLength(); ++datasetGroupsIndex)
    {
      m_datasetGroups.push_back(datasetGroupsJsonList[datasetGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
