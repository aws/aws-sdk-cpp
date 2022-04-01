/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Predecessor.h>
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

Predecessor::Predecessor() : 
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

Predecessor::Predecessor(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
  *this = jsonValue;
}

Predecessor& Predecessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Predecessor::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
