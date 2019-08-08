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
