/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecutionSummaryForJob.h>
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

JobExecutionSummaryForJob::JobExecutionSummaryForJob() : 
    m_thingArnHasBeenSet(false),
    m_jobExecutionSummaryHasBeenSet(false)
{
}

JobExecutionSummaryForJob::JobExecutionSummaryForJob(JsonView jsonValue) : 
    m_thingArnHasBeenSet(false),
    m_jobExecutionSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSummaryForJob& JobExecutionSummaryForJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingArn"))
  {
    m_thingArn = jsonValue.GetString("thingArn");

    m_thingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobExecutionSummary"))
  {
    m_jobExecutionSummary = jsonValue.GetObject("jobExecutionSummary");

    m_jobExecutionSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionSummaryForJob::Jsonize() const
{
  JsonValue payload;

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

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
