/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionsTaskStatistics.h>
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

DetectMitigationActionsTaskStatistics::DetectMitigationActionsTaskStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

DetectMitigationActionsTaskStatistics& DetectMitigationActionsTaskStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionsExecuted"))
  {
    m_actionsExecuted = jsonValue.GetInt64("actionsExecuted");
    m_actionsExecutedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionsSkipped"))
  {
    m_actionsSkipped = jsonValue.GetInt64("actionsSkipped");
    m_actionsSkippedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionsFailed"))
  {
    m_actionsFailed = jsonValue.GetInt64("actionsFailed");
    m_actionsFailedHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectMitigationActionsTaskStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_actionsExecutedHasBeenSet)
  {
   payload.WithInt64("actionsExecuted", m_actionsExecuted);

  }

  if(m_actionsSkippedHasBeenSet)
  {
   payload.WithInt64("actionsSkipped", m_actionsSkipped);

  }

  if(m_actionsFailedHasBeenSet)
  {
   payload.WithInt64("actionsFailed", m_actionsFailed);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
