/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/ListChunksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChunksResult::ListChunksResult()
{
}

ListChunksResult::ListChunksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChunksResult& ListChunksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChunkList"))
  {
    Aws::Utils::Array<JsonView> chunkListJsonList = jsonValue.GetArray("ChunkList");
    for(unsigned chunkListIndex = 0; chunkListIndex < chunkListJsonList.GetLength(); ++chunkListIndex)
    {
      m_chunkList.push_back(chunkListJsonList[chunkListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
