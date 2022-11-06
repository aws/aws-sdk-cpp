/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListDatasetEntriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetEntriesResult::ListDatasetEntriesResult()
{
}

ListDatasetEntriesResult::ListDatasetEntriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetEntriesResult& ListDatasetEntriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetEntries"))
  {
    Aws::Utils::Array<JsonView> datasetEntriesJsonList = jsonValue.GetArray("DatasetEntries");
    for(unsigned datasetEntriesIndex = 0; datasetEntriesIndex < datasetEntriesJsonList.GetLength(); ++datasetEntriesIndex)
    {
      m_datasetEntries.push_back(datasetEntriesJsonList[datasetEntriesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
