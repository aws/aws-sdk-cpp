/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/ListObjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObjectsResult::ListObjectsResult()
{
}

ListObjectsResult::ListObjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObjectsResult& ListObjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObjectList"))
  {
    Aws::Utils::Array<JsonView> objectListJsonList = jsonValue.GetArray("ObjectList");
    for(unsigned objectListIndex = 0; objectListIndex < objectListJsonList.GetLength(); ++objectListIndex)
    {
      m_objectList.push_back(objectListJsonList[objectListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
