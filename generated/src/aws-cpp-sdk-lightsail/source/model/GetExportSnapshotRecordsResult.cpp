/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetExportSnapshotRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExportSnapshotRecordsResult::GetExportSnapshotRecordsResult()
{
}

GetExportSnapshotRecordsResult::GetExportSnapshotRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExportSnapshotRecordsResult& GetExportSnapshotRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportSnapshotRecords"))
  {
    Aws::Utils::Array<JsonView> exportSnapshotRecordsJsonList = jsonValue.GetArray("exportSnapshotRecords");
    for(unsigned exportSnapshotRecordsIndex = 0; exportSnapshotRecordsIndex < exportSnapshotRecordsJsonList.GetLength(); ++exportSnapshotRecordsIndex)
    {
      m_exportSnapshotRecords.push_back(exportSnapshotRecordsJsonList[exportSnapshotRecordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
