/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/BackupCreationTimeFilter.h>
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

BackupCreationTimeFilter::BackupCreationTimeFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

BackupCreationTimeFilter& BackupCreationTimeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAfter"))
  {
    m_createdAfter = jsonValue.GetDouble("CreatedAfter");
    m_createdAfterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBefore"))
  {
    m_createdBefore = jsonValue.GetDouble("CreatedBefore");
    m_createdBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue BackupCreationTimeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
