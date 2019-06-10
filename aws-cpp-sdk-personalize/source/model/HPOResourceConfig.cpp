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

#include <aws/personalize/model/HPOResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

HPOResourceConfig::HPOResourceConfig() : 
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
}

HPOResourceConfig::HPOResourceConfig(JsonView jsonValue) : 
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
  *this = jsonValue;
}

HPOResourceConfig& HPOResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxNumberOfTrainingJobs"))
  {
    m_maxNumberOfTrainingJobs = jsonValue.GetString("maxNumberOfTrainingJobs");

    m_maxNumberOfTrainingJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxParallelTrainingJobs"))
  {
    m_maxParallelTrainingJobs = jsonValue.GetString("maxParallelTrainingJobs");

    m_maxParallelTrainingJobsHasBeenSet = true;
  }

  return *this;
}

JsonValue HPOResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxNumberOfTrainingJobsHasBeenSet)
  {
   payload.WithString("maxNumberOfTrainingJobs", m_maxNumberOfTrainingJobs);

  }

  if(m_maxParallelTrainingJobsHasBeenSet)
  {
   payload.WithString("maxParallelTrainingJobs", m_maxParallelTrainingJobs);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
