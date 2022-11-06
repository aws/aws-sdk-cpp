/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstanceSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInstanceSnapshotsResult::GetInstanceSnapshotsResult()
{
}

GetInstanceSnapshotsResult::GetInstanceSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInstanceSnapshotsResult& GetInstanceSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("instanceSnapshots"))
  {
    Aws::Utils::Array<JsonView> instanceSnapshotsJsonList = jsonValue.GetArray("instanceSnapshots");
    for(unsigned instanceSnapshotsIndex = 0; instanceSnapshotsIndex < instanceSnapshotsJsonList.GetLength(); ++instanceSnapshotsIndex)
    {
      m_instanceSnapshots.push_back(instanceSnapshotsJsonList[instanceSnapshotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
