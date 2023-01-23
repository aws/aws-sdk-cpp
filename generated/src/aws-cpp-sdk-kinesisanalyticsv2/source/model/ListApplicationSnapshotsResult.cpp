/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationSnapshotsResult::ListApplicationSnapshotsResult()
{
}

ListApplicationSnapshotsResult::ListApplicationSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationSnapshotsResult& ListApplicationSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnapshotSummaries"))
  {
    Aws::Utils::Array<JsonView> snapshotSummariesJsonList = jsonValue.GetArray("SnapshotSummaries");
    for(unsigned snapshotSummariesIndex = 0; snapshotSummariesIndex < snapshotSummariesJsonList.GetLength(); ++snapshotSummariesIndex)
    {
      m_snapshotSummaries.push_back(snapshotSummariesJsonList[snapshotSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
