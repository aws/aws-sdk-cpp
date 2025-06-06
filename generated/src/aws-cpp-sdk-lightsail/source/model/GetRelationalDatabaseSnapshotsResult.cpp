﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabaseSnapshotsResult::GetRelationalDatabaseSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabaseSnapshotsResult& GetRelationalDatabaseSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("relationalDatabaseSnapshots"))
  {
    Aws::Utils::Array<JsonView> relationalDatabaseSnapshotsJsonList = jsonValue.GetArray("relationalDatabaseSnapshots");
    for(unsigned relationalDatabaseSnapshotsIndex = 0; relationalDatabaseSnapshotsIndex < relationalDatabaseSnapshotsJsonList.GetLength(); ++relationalDatabaseSnapshotsIndex)
    {
      m_relationalDatabaseSnapshots.push_back(relationalDatabaseSnapshotsJsonList[relationalDatabaseSnapshotsIndex].AsObject());
    }
    m_relationalDatabaseSnapshotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");
    m_nextPageTokenHasBeenSet = true;
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
