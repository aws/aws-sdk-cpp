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

#include <aws/sagemaker/model/SearchRecord.h>
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

SearchRecord::SearchRecord() : 
    m_trainingJobHasBeenSet(false)
{
}

SearchRecord::SearchRecord(JsonView jsonValue) : 
    m_trainingJobHasBeenSet(false)
{
  *this = jsonValue;
}

SearchRecord& SearchRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchRecord::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
