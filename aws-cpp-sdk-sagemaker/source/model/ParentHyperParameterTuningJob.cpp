/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
