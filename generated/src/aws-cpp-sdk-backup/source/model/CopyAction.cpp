/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CopyAction.h>
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

CopyAction::CopyAction() : 
    m_lifecycleHasBeenSet(false),
    m_destinationBackupVaultArnHasBeenSet(false)
{
}

CopyAction::CopyAction(JsonView jsonValue) : 
    m_lifecycleHasBeenSet(false),
    m_destinationBackupVaultArnHasBeenSet(false)
{
  *this = jsonValue;
}

CopyAction& CopyAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationBackupVaultArn"))
  {
    m_destinationBackupVaultArn = jsonValue.GetString("DestinationBackupVaultArn");

    m_destinationBackupVaultArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyAction::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_destinationBackupVaultArnHasBeenSet)
  {
   payload.WithString("DestinationBackupVaultArn", m_destinationBackupVaultArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
