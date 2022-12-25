/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupRecoveryPointCalculatedLifecycleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupRecoveryPointCalculatedLifecycleDetails::AwsBackupRecoveryPointCalculatedLifecycleDetails() : 
    m_deleteAtHasBeenSet(false),
    m_moveToColdStorageAtHasBeenSet(false)
{
}

AwsBackupRecoveryPointCalculatedLifecycleDetails::AwsBackupRecoveryPointCalculatedLifecycleDetails(JsonView jsonValue) : 
    m_deleteAtHasBeenSet(false),
    m_moveToColdStorageAtHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupRecoveryPointCalculatedLifecycleDetails& AwsBackupRecoveryPointCalculatedLifecycleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeleteAt"))
  {
    m_deleteAt = jsonValue.GetString("DeleteAt");

    m_deleteAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MoveToColdStorageAt"))
  {
    m_moveToColdStorageAt = jsonValue.GetString("MoveToColdStorageAt");

    m_moveToColdStorageAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupRecoveryPointCalculatedLifecycleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deleteAtHasBeenSet)
  {
   payload.WithString("DeleteAt", m_deleteAt);

  }

  if(m_moveToColdStorageAtHasBeenSet)
  {
   payload.WithString("MoveToColdStorageAt", m_moveToColdStorageAt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
