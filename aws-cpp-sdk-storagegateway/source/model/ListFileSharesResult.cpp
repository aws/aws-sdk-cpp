/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListFileSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFileSharesResult::ListFileSharesResult()
{
}

ListFileSharesResult::ListFileSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFileSharesResult& ListFileSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("FileShareInfoList"))
  {
    Aws::Utils::Array<JsonView> fileShareInfoListJsonList = jsonValue.GetArray("FileShareInfoList");
    for(unsigned fileShareInfoListIndex = 0; fileShareInfoListIndex < fileShareInfoListJsonList.GetLength(); ++fileShareInfoListIndex)
    {
      m_fileShareInfoList.push_back(fileShareInfoListJsonList[fileShareInfoListIndex].AsObject());
    }
  }



  return *this;
}
