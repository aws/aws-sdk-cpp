/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreAccessBackupVaultListMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RestoreAccessBackupVaultListMember::RestoreAccessBackupVaultListMember(JsonView jsonValue)
{
  *this = jsonValue;
}

RestoreAccessBackupVaultListMember& RestoreAccessBackupVaultListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestoreAccessBackupVaultArn"))
  {
    m_restoreAccessBackupVaultArn = jsonValue.GetString("RestoreAccessBackupVaultArn");
    m_restoreAccessBackupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalDate"))
  {
    m_approvalDate = jsonValue.GetDouble("ApprovalDate");
    m_approvalDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultState"))
  {
    m_vaultState = VaultStateMapper::GetVaultStateForName(jsonValue.GetString("VaultState"));
    m_vaultStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestRevokeRequest"))
  {
    m_latestRevokeRequest = jsonValue.GetObject("LatestRevokeRequest");
    m_latestRevokeRequestHasBeenSet = true;
  }
  return *this;
}

JsonValue RestoreAccessBackupVaultListMember::Jsonize() const
{
  JsonValue payload;

  if(m_restoreAccessBackupVaultArnHasBeenSet)
  {
   payload.WithString("RestoreAccessBackupVaultArn", m_restoreAccessBackupVaultArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_approvalDateHasBeenSet)
  {
   payload.WithDouble("ApprovalDate", m_approvalDate.SecondsWithMSPrecision());
  }

  if(m_vaultStateHasBeenSet)
  {
   payload.WithString("VaultState", VaultStateMapper::GetNameForVaultState(m_vaultState));
  }

  if(m_latestRevokeRequestHasBeenSet)
  {
   payload.WithObject("LatestRevokeRequest", m_latestRevokeRequest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
