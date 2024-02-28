/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/TaskContainerDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

TaskContainerDependency::TaskContainerDependency() : 
    m_containerNameHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

TaskContainerDependency::TaskContainerDependency(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

TaskContainerDependency& TaskContainerDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskContainerDependency::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
