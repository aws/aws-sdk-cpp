/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
