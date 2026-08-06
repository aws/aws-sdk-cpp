/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupAccessPointsByResourceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupAccessPointsByResourceResult::ListBackupAccessPointsByResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListBackupAccessPointsByResourceResult& ListBackupAccessPointsByResourceResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("BackupAccessPoints")) {
    Aws::Utils::Array<JsonView> backupAccessPointsJsonList = jsonValue.GetArray("BackupAccessPoints");
    for (unsigned backupAccessPointsIndex = 0; backupAccessPointsIndex < backupAccessPointsJsonList.GetLength();
         ++backupAccessPointsIndex) {
      m_backupAccessPoints.push_back(backupAccessPointsJsonList[backupAccessPointsIndex].AsObject());
    }
    m_backupAccessPointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
