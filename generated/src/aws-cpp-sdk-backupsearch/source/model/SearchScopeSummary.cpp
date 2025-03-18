/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/SearchScopeSummary.h>
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

SearchScopeSummary::SearchScopeSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchScopeSummary& SearchScopeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalRecoveryPointsToScanCount"))
  {
    m_totalRecoveryPointsToScanCount = jsonValue.GetInteger("TotalRecoveryPointsToScanCount");
    m_totalRecoveryPointsToScanCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalItemsToScanCount"))
  {
    m_totalItemsToScanCount = jsonValue.GetInt64("TotalItemsToScanCount");
    m_totalItemsToScanCountHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchScopeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalRecoveryPointsToScanCountHasBeenSet)
  {
   payload.WithInteger("TotalRecoveryPointsToScanCount", m_totalRecoveryPointsToScanCount);

  }

  if(m_totalItemsToScanCountHasBeenSet)
  {
   payload.WithInt64("TotalItemsToScanCount", m_totalItemsToScanCount);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
