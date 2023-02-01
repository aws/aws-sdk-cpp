/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateBackupPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBackupPlanResult::CreateBackupPlanResult()
{
}

CreateBackupPlanResult::CreateBackupPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateBackupPlanResult& CreateBackupPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");

  }

  if(jsonValue.ValueExists("BackupPlanArn"))
  {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

  }

  if(jsonValue.ValueExists("AdvancedBackupSettings"))
  {
    Aws::Utils::Array<JsonView> advancedBackupSettingsJsonList = jsonValue.GetArray("AdvancedBackupSettings");
    for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
    {
      m_advancedBackupSettings.push_back(advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject());
    }
  }



  return *this;
}
