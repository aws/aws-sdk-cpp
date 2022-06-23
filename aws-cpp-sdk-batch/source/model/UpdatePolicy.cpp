/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdatePolicy.h>
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

UpdatePolicy::UpdatePolicy() : 
    m_terminateJobsOnUpdate(false),
    m_terminateJobsOnUpdateHasBeenSet(false),
    m_jobExecutionTimeoutMinutes(0),
    m_jobExecutionTimeoutMinutesHasBeenSet(false)
{
}

UpdatePolicy::UpdatePolicy(JsonView jsonValue) : 
    m_terminateJobsOnUpdate(false),
    m_terminateJobsOnUpdateHasBeenSet(false),
    m_jobExecutionTimeoutMinutes(0),
    m_jobExecutionTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

UpdatePolicy& UpdatePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("terminateJobsOnUpdate"))
  {
    m_terminateJobsOnUpdate = jsonValue.GetBool("terminateJobsOnUpdate");

    m_terminateJobsOnUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobExecutionTimeoutMinutes"))
  {
    m_jobExecutionTimeoutMinutes = jsonValue.GetInt64("jobExecutionTimeoutMinutes");

    m_jobExecutionTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdatePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_terminateJobsOnUpdateHasBeenSet)
  {
   payload.WithBool("terminateJobsOnUpdate", m_terminateJobsOnUpdate);

  }

  if(m_jobExecutionTimeoutMinutesHasBeenSet)
  {
   payload.WithInt64("jobExecutionTimeoutMinutes", m_jobExecutionTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
