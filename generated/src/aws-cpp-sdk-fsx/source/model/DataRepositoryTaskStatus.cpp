/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryTaskStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DataRepositoryTaskStatus::DataRepositoryTaskStatus() : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_succeededCount(0),
    m_succeededCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_releasedCapacity(0),
    m_releasedCapacityHasBeenSet(false)
{
}

DataRepositoryTaskStatus::DataRepositoryTaskStatus(JsonView jsonValue) : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_succeededCount(0),
    m_succeededCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_releasedCapacity(0),
    m_releasedCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

DataRepositoryTaskStatus& DataRepositoryTaskStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SucceededCount"))
  {
    m_succeededCount = jsonValue.GetInt64("SucceededCount");

    m_succeededCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedCount"))
  {
    m_failedCount = jsonValue.GetInt64("FailedCount");

    m_failedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleasedCapacity"))
  {
    m_releasedCapacity = jsonValue.GetInt64("ReleasedCapacity");

    m_releasedCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRepositoryTaskStatus::Jsonize() const
{
  JsonValue payload;

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  if(m_succeededCountHasBeenSet)
  {
   payload.WithInt64("SucceededCount", m_succeededCount);

  }

  if(m_failedCountHasBeenSet)
  {
   payload.WithInt64("FailedCount", m_failedCount);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_releasedCapacityHasBeenSet)
  {
   payload.WithInt64("ReleasedCapacity", m_releasedCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
