/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DeleteBackupPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteBackupPlanResult::DeleteBackupPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteBackupPlanResult& DeleteBackupPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");
    m_backupPlanIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupPlanArn"))
  {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");
    m_backupPlanArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");
    m_deletionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
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
