/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecutionSummaryForThing.h>
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

JobExecutionSummaryForThing::JobExecutionSummaryForThing() : 
    m_jobIdHasBeenSet(false),
    m_jobExecutionSummaryHasBeenSet(false)
{
}

JobExecutionSummaryForThing::JobExecutionSummaryForThing(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobExecutionSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSummaryForThing& JobExecutionSummaryForThing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobExecutionSummary"))
  {
    m_jobExecutionSummary = jsonValue.GetObject("jobExecutionSummary");

    m_jobExecutionSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionSummaryForThing::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobExecutionSummaryHasBeenSet)
  {
   payload.WithObject("jobExecutionSummary", m_jobExecutionSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
