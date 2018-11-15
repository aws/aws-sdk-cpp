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

#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HyperParameterTuningJobWarmStartConfig::HyperParameterTuningJobWarmStartConfig() : 
    m_parentHyperParameterTuningJobsHasBeenSet(false),
    m_warmStartType(HyperParameterTuningJobWarmStartType::NOT_SET),
    m_warmStartTypeHasBeenSet(false)
{
}

HyperParameterTuningJobWarmStartConfig::HyperParameterTuningJobWarmStartConfig(JsonView jsonValue) : 
    m_parentHyperParameterTuningJobsHasBeenSet(false),
    m_warmStartType(HyperParameterTuningJobWarmStartType::NOT_SET),
    m_warmStartTypeHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobWarmStartConfig& HyperParameterTuningJobWarmStartConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentHyperParameterTuningJobs"))
  {
    Array<JsonView> parentHyperParameterTuningJobsJsonList = jsonValue.GetArray("ParentHyperParameterTuningJobs");
    for(unsigned parentHyperParameterTuningJobsIndex = 0; parentHyperParameterTuningJobsIndex < parentHyperParameterTuningJobsJsonList.GetLength(); ++parentHyperParameterTuningJobsIndex)
    {
      m_parentHyperParameterTuningJobs.push_back(parentHyperParameterTuningJobsJsonList[parentHyperParameterTuningJobsIndex].AsObject());
    }
    m_parentHyperParameterTuningJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmStartType"))
  {
    m_warmStartType = HyperParameterTuningJobWarmStartTypeMapper::GetHyperParameterTuningJobWarmStartTypeForName(jsonValue.GetString("WarmStartType"));

    m_warmStartTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobWarmStartConfig::Jsonize() const
{
  JsonValue payload;

  if(m_parentHyperParameterTuningJobsHasBeenSet)
  {
   Array<JsonValue> parentHyperParameterTuningJobsJsonList(m_parentHyperParameterTuningJobs.size());
   for(unsigned parentHyperParameterTuningJobsIndex = 0; parentHyperParameterTuningJobsIndex < parentHyperParameterTuningJobsJsonList.GetLength(); ++parentHyperParameterTuningJobsIndex)
   {
     parentHyperParameterTuningJobsJsonList[parentHyperParameterTuningJobsIndex].AsObject(m_parentHyperParameterTuningJobs[parentHyperParameterTuningJobsIndex].Jsonize());
   }
   payload.WithArray("ParentHyperParameterTuningJobs", std::move(parentHyperParameterTuningJobsJsonList));

  }

  if(m_warmStartTypeHasBeenSet)
  {
   payload.WithString("WarmStartType", HyperParameterTuningJobWarmStartTypeMapper::GetNameForHyperParameterTuningJobWarmStartType(m_warmStartType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
