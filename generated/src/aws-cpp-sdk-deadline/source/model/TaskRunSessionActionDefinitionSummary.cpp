/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskRunSessionActionDefinitionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

TaskRunSessionActionDefinitionSummary::TaskRunSessionActionDefinitionSummary() : 
    m_stepIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

TaskRunSessionActionDefinitionSummary::TaskRunSessionActionDefinitionSummary(JsonView jsonValue) : 
    m_stepIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

TaskRunSessionActionDefinitionSummary& TaskRunSessionActionDefinitionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskRunSessionActionDefinitionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
