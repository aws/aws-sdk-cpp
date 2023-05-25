/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FindMatchesTaskRunProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FindMatchesTaskRunProperties::FindMatchesTaskRunProperties() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false)
{
}

FindMatchesTaskRunProperties::FindMatchesTaskRunProperties(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobRunIdHasBeenSet(false)
{
  *this = jsonValue;
}

FindMatchesTaskRunProperties& FindMatchesTaskRunProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");

    m_jobRunIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FindMatchesTaskRunProperties::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
