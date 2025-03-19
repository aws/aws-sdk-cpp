/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/ListRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecordsResult::ListRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecordsResult& ListRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetSyncCount"))
  {
    m_datasetSyncCount = jsonValue.GetInt64("DatasetSyncCount");
    m_datasetSyncCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MergedDatasetNames"))
  {
    Aws::Utils::Array<JsonView> mergedDatasetNamesJsonList = jsonValue.GetArray("MergedDatasetNames");
    for(unsigned mergedDatasetNamesIndex = 0; mergedDatasetNamesIndex < mergedDatasetNamesJsonList.GetLength(); ++mergedDatasetNamesIndex)
    {
      m_mergedDatasetNames.push_back(mergedDatasetNamesJsonList[mergedDatasetNamesIndex].AsString());
    }
    m_mergedDatasetNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetExists"))
  {
    m_datasetExists = jsonValue.GetBool("DatasetExists");
    m_datasetExistsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetDeletedAfterRequestedSyncCount"))
  {
    m_datasetDeletedAfterRequestedSyncCount = jsonValue.GetBool("DatasetDeletedAfterRequestedSyncCount");
    m_datasetDeletedAfterRequestedSyncCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SyncSessionToken"))
  {
    m_syncSessionToken = jsonValue.GetString("SyncSessionToken");
    m_syncSessionTokenHasBeenSet = true;
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
