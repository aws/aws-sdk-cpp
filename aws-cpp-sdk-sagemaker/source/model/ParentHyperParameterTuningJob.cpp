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

#include <aws/sagemaker/model/ParentHyperParameterTuningJob.h>
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

ParentHyperParameterTuningJob::ParentHyperParameterTuningJob() : 
    m_hyperParameterTuningJobNameHasBeenSet(false)
{
}

ParentHyperParameterTuningJob::ParentHyperParameterTuningJob(JsonView jsonValue) : 
    m_hyperParameterTuningJobNameHasBeenSet(false)
{
  *this = jsonValue;
}

ParentHyperParameterTuningJob& ParentHyperParameterTuningJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HyperParameterTuningJobName"))
  {
    m_hyperParameterTuningJobName = jsonValue.GetString("HyperParameterTuningJobName");

    m_hyperParameterTuningJobNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ParentHyperParameterTuningJob::Jsonize() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
