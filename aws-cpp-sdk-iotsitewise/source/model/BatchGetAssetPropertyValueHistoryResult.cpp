/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetAssetPropertyValueHistoryResult::BatchGetAssetPropertyValueHistoryResult()
{
}

BatchGetAssetPropertyValueHistoryResult::BatchGetAssetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetAssetPropertyValueHistoryResult& BatchGetAssetPropertyValueHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("errorEntries"))
  {
    Aws::Utils::Array<JsonView> errorEntriesJsonList = jsonValue.GetArray("errorEntries");
    for(unsigned errorEntriesIndex = 0; errorEntriesIndex < errorEntriesJsonList.GetLength(); ++errorEntriesIndex)
    {
      m_errorEntries.push_back(errorEntriesJsonList[errorEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("successEntries"))
  {
    Aws::Utils::Array<JsonView> successEntriesJsonList = jsonValue.GetArray("successEntries");
    for(unsigned successEntriesIndex = 0; successEntriesIndex < successEntriesJsonList.GetLength(); ++successEntriesIndex)
    {
      m_successEntries.push_back(successEntriesJsonList[successEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("skippedEntries"))
  {
    Aws::Utils::Array<JsonView> skippedEntriesJsonList = jsonValue.GetArray("skippedEntries");
    for(unsigned skippedEntriesIndex = 0; skippedEntriesIndex < skippedEntriesJsonList.GetLength(); ++skippedEntriesIndex)
    {
      m_skippedEntries.push_back(skippedEntriesJsonList[skippedEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
