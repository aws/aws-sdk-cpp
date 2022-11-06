/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupPlanTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupPlanTemplatesResult::ListBackupPlanTemplatesResult()
{
}

ListBackupPlanTemplatesResult::ListBackupPlanTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupPlanTemplatesResult& ListBackupPlanTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BackupPlanTemplatesList"))
  {
    Aws::Utils::Array<JsonView> backupPlanTemplatesListJsonList = jsonValue.GetArray("BackupPlanTemplatesList");
    for(unsigned backupPlanTemplatesListIndex = 0; backupPlanTemplatesListIndex < backupPlanTemplatesListJsonList.GetLength(); ++backupPlanTemplatesListIndex)
    {
      m_backupPlanTemplatesList.push_back(backupPlanTemplatesListJsonList[backupPlanTemplatesListIndex].AsObject());
    }
  }



  return *this;
}
