/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DataSourceSyncJobMetricTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DataSourceSyncJobMetricTarget::DataSourceSyncJobMetricTarget() : 
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceSyncJobIdHasBeenSet(false)
{
}

DataSourceSyncJobMetricTarget::DataSourceSyncJobMetricTarget(JsonView jsonValue) : 
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceSyncJobIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSyncJobMetricTarget& DataSourceSyncJobMetricTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceSyncJobId"))
  {
    m_dataSourceSyncJobId = jsonValue.GetString("DataSourceSyncJobId");

    m_dataSourceSyncJobIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSyncJobMetricTarget::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_dataSourceSyncJobIdHasBeenSet)
  {
   payload.WithString("DataSourceSyncJobId", m_dataSourceSyncJobId);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
