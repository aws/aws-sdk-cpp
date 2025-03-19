/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/CurrentSearchProgress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

CurrentSearchProgress::CurrentSearchProgress(JsonView jsonValue)
{
  *this = jsonValue;
}

CurrentSearchProgress& CurrentSearchProgress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointsScannedCount"))
  {
    m_recoveryPointsScannedCount = jsonValue.GetInteger("RecoveryPointsScannedCount");
    m_recoveryPointsScannedCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemsScannedCount"))
  {
    m_itemsScannedCount = jsonValue.GetInt64("ItemsScannedCount");
    m_itemsScannedCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemsMatchedCount"))
  {
    m_itemsMatchedCount = jsonValue.GetInt64("ItemsMatchedCount");
    m_itemsMatchedCountHasBeenSet = true;
  }
  return *this;
}

JsonValue CurrentSearchProgress::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointsScannedCountHasBeenSet)
  {
   payload.WithInteger("RecoveryPointsScannedCount", m_recoveryPointsScannedCount);

  }

  if(m_itemsScannedCountHasBeenSet)
  {
   payload.WithInt64("ItemsScannedCount", m_itemsScannedCount);

  }

  if(m_itemsMatchedCountHasBeenSet)
  {
   payload.WithInt64("ItemsMatchedCount", m_itemsMatchedCount);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
