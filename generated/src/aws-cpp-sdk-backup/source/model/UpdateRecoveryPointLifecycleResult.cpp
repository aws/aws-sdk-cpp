/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRecoveryPointLifecycleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRecoveryPointLifecycleResult::UpdateRecoveryPointLifecycleResult()
{
}

UpdateRecoveryPointLifecycleResult::UpdateRecoveryPointLifecycleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateRecoveryPointLifecycleResult& UpdateRecoveryPointLifecycleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

  }

  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");

  }

  if(jsonValue.ValueExists("CalculatedLifecycle"))
  {
    m_calculatedLifecycle = jsonValue.GetObject("CalculatedLifecycle");

  }



  return *this;
}
