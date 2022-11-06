/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GetSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSnapshotsResult::GetSnapshotsResult()
{
}

GetSnapshotsResult::GetSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSnapshotsResult& GetSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnapShotTimeFilter"))
  {
    m_snapShotTimeFilter = jsonValue.GetObject("SnapShotTimeFilter");

  }

  if(jsonValue.ValueExists("SnapshotsDataHeader"))
  {
    Aws::Utils::Array<JsonView> snapshotsDataHeaderJsonList = jsonValue.GetArray("SnapshotsDataHeader");
    for(unsigned snapshotsDataHeaderIndex = 0; snapshotsDataHeaderIndex < snapshotsDataHeaderJsonList.GetLength(); ++snapshotsDataHeaderIndex)
    {
      m_snapshotsDataHeader.push_back(snapshotsDataHeaderJsonList[snapshotsDataHeaderIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("SnapshotsData"))
  {
    Aws::Utils::Array<JsonView> snapshotsDataJsonList = jsonValue.GetArray("SnapshotsData");
    for(unsigned snapshotsDataIndex = 0; snapshotsDataIndex < snapshotsDataJsonList.GetLength(); ++snapshotsDataIndex)
    {
      Aws::Utils::Array<JsonView> snapshotsDataRecordJsonList = snapshotsDataJsonList[snapshotsDataIndex].AsArray();
      Aws::Vector<Aws::String> snapshotsDataRecordList;
      snapshotsDataRecordList.reserve((size_t)snapshotsDataRecordJsonList.GetLength());
      for(unsigned snapshotsDataRecordIndex = 0; snapshotsDataRecordIndex < snapshotsDataRecordJsonList.GetLength(); ++snapshotsDataRecordIndex)
      {
        snapshotsDataRecordList.push_back(snapshotsDataRecordJsonList[snapshotsDataRecordIndex].AsString());
      }
      m_snapshotsData.push_back(std::move(snapshotsDataRecordList));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
