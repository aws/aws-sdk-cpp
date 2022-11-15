/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobNodeDetails.h>
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

JobNodeDetails::JobNodeDetails() : 
    m_jobRunsHasBeenSet(false)
{
}

JobNodeDetails::JobNodeDetails(JsonView jsonValue) : 
    m_jobRunsHasBeenSet(false)
{
  *this = jsonValue;
}

JobNodeDetails& JobNodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobRuns"))
  {
    Aws::Utils::Array<JsonView> jobRunsJsonList = jsonValue.GetArray("JobRuns");
    for(unsigned jobRunsIndex = 0; jobRunsIndex < jobRunsJsonList.GetLength(); ++jobRunsIndex)
    {
      m_jobRuns.push_back(jobRunsJsonList[jobRunsIndex].AsObject());
    }
    m_jobRunsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobNodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_jobRunsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobRunsJsonList(m_jobRuns.size());
   for(unsigned jobRunsIndex = 0; jobRunsIndex < jobRunsJsonList.GetLength(); ++jobRunsIndex)
   {
     jobRunsJsonList[jobRunsIndex].AsObject(m_jobRuns[jobRunsIndex].Jsonize());
   }
   payload.WithArray("JobRuns", std::move(jobRunsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
