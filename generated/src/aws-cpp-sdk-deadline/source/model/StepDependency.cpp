/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepDependency.h>
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

StepDependency::StepDependency() : 
    m_status(DependencyConsumerResolutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
}

StepDependency::StepDependency(JsonView jsonValue) : 
    m_status(DependencyConsumerResolutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
  *this = jsonValue;
}

StepDependency& StepDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = DependencyConsumerResolutionStatusMapper::GetDependencyConsumerResolutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StepDependency::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DependencyConsumerResolutionStatusMapper::GetNameForDependencyConsumerResolutionStatus(m_status));
  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
