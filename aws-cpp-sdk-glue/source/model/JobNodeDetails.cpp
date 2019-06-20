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
    Array<JsonView> jobRunsJsonList = jsonValue.GetArray("JobRuns");
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
   Array<JsonValue> jobRunsJsonList(m_jobRuns.size());
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
