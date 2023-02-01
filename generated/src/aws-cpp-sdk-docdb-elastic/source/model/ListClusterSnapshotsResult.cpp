/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ListClusterSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterSnapshotsResult::ListClusterSnapshotsResult()
{
}

ListClusterSnapshotsResult::ListClusterSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClusterSnapshotsResult& ListClusterSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("snapshots"))
  {
    Aws::Utils::Array<JsonView> snapshotsJsonList = jsonValue.GetArray("snapshots");
    for(unsigned snapshotsIndex = 0; snapshotsIndex < snapshotsJsonList.GetLength(); ++snapshotsIndex)
    {
      m_snapshots.push_back(snapshotsJsonList[snapshotsIndex].AsObject());
    }
  }



  return *this;
}
