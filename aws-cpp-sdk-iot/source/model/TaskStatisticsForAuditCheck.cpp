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

#include <aws/iot/model/TaskStatisticsForAuditCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TaskStatisticsForAuditCheck::TaskStatisticsForAuditCheck() : 
    m_totalFindingsCount(0),
    m_totalFindingsCountHasBeenSet(false),
    m_failedFindingsCount(0),
    m_failedFindingsCountHasBeenSet(false),
    m_succeededFindingsCount(0),
    m_succeededFindingsCountHasBeenSet(false),
    m_skippedFindingsCount(0),
    m_skippedFindingsCountHasBeenSet(false),
    m_canceledFindingsCount(0),
    m_canceledFindingsCountHasBeenSet(false)
{
}

TaskStatisticsForAuditCheck::TaskStatisticsForAuditCheck(JsonView jsonValue) : 
    m_totalFindingsCount(0),
    m_totalFindingsCountHasBeenSet(false),
    m_failedFindingsCount(0),
    m_failedFindingsCountHasBeenSet(false),
    m_succeededFindingsCount(0),
    m_succeededFindingsCountHasBeenSet(false),
    m_skippedFindingsCount(0),
    m_skippedFindingsCountHasBeenSet(false),
    m_canceledFindingsCount(0),
    m_canceledFindingsCountHasBeenSet(false)
{
  *this = jsonValue;
}

TaskStatisticsForAuditCheck& TaskStatisticsForAuditCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalFindingsCount"))
  {
    m_totalFindingsCount = jsonValue.GetInt64("totalFindingsCount");

    m_totalFindingsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedFindingsCount"))
  {
    m_failedFindingsCount = jsonValue.GetInt64("failedFindingsCount");

    m_failedFindingsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeededFindingsCount"))
  {
    m_succeededFindingsCount = jsonValue.GetInt64("succeededFindingsCount");

    m_succeededFindingsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skippedFindingsCount"))
  {
    m_skippedFindingsCount = jsonValue.GetInt64("skippedFindingsCount");

    m_skippedFindingsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canceledFindingsCount"))
  {
    m_canceledFindingsCount = jsonValue.GetInt64("canceledFindingsCount");

    m_canceledFindingsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskStatisticsForAuditCheck::Jsonize() const
{
  JsonValue payload;

  if(m_totalFindingsCountHasBeenSet)
  {
   payload.WithInt64("totalFindingsCount", m_totalFindingsCount);

  }

  if(m_failedFindingsCountHasBeenSet)
  {
   payload.WithInt64("failedFindingsCount", m_failedFindingsCount);

  }

  if(m_succeededFindingsCountHasBeenSet)
  {
   payload.WithInt64("succeededFindingsCount", m_succeededFindingsCount);

  }

  if(m_skippedFindingsCountHasBeenSet)
  {
   payload.WithInt64("skippedFindingsCount", m_skippedFindingsCount);

  }

  if(m_canceledFindingsCountHasBeenSet)
  {
   payload.WithInt64("canceledFindingsCount", m_canceledFindingsCount);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
