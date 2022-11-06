/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDiskSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDiskSnapshotsResult::GetDiskSnapshotsResult()
{
}

GetDiskSnapshotsResult::GetDiskSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDiskSnapshotsResult& GetDiskSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("diskSnapshots"))
  {
    Aws::Utils::Array<JsonView> diskSnapshotsJsonList = jsonValue.GetArray("diskSnapshots");
    for(unsigned diskSnapshotsIndex = 0; diskSnapshotsIndex < diskSnapshotsJsonList.GetLength(); ++diskSnapshotsIndex)
    {
      m_diskSnapshots.push_back(diskSnapshotsJsonList[diskSnapshotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
