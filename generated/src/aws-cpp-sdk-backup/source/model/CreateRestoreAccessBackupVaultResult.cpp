/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateRestoreAccessBackupVaultResult.h>
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

CreateRestoreAccessBackupVaultResult::CreateRestoreAccessBackupVaultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateRestoreAccessBackupVaultResult& CreateRestoreAccessBackupVaultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RestoreAccessBackupVaultArn"))
  {
    m_restoreAccessBackupVaultArn = jsonValue.GetString("RestoreAccessBackupVaultArn");
    m_restoreAccessBackupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultState"))
  {
    m_vaultState = VaultStateMapper::GetVaultStateForName(jsonValue.GetString("VaultState"));
    m_vaultStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestoreAccessBackupVaultName"))
  {
    m_restoreAccessBackupVaultName = jsonValue.GetString("RestoreAccessBackupVaultName");
    m_restoreAccessBackupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
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
