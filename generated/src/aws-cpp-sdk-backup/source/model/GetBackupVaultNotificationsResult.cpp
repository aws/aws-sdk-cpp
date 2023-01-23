/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetBackupVaultNotificationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBackupVaultNotificationsResult::GetBackupVaultNotificationsResult()
{
}

GetBackupVaultNotificationsResult::GetBackupVaultNotificationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBackupVaultNotificationsResult& GetBackupVaultNotificationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

  }

  if(jsonValue.ValueExists("SNSTopicArn"))
  {
    m_sNSTopicArn = jsonValue.GetString("SNSTopicArn");

  }

  if(jsonValue.ValueExists("BackupVaultEvents"))
  {
    Aws::Utils::Array<JsonView> backupVaultEventsJsonList = jsonValue.GetArray("BackupVaultEvents");
    for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
    {
      m_backupVaultEvents.push_back(BackupVaultEventMapper::GetBackupVaultEventForName(backupVaultEventsJsonList[backupVaultEventsIndex].AsString()));
    }
  }



  return *this;
}
