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

JobExecutionSummaryForJob::JobExecutionSummaryForJob(const JsonValue& jsonValue) : 
    m_thingArnHasBeenSet(false),
    m_jobExecutionSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSummaryForJob& JobExecutionSummaryForJob::operator =(const JsonValue& jsonValue)
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
