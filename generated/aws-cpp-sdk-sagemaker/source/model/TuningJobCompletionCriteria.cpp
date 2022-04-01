/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TuningJobCompletionCriteria.h>
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

TuningJobCompletionCriteria::TuningJobCompletionCriteria() : 
    m_targetObjectiveMetricValue(0.0),
    m_targetObjectiveMetricValueHasBeenSet(false)
{
}

TuningJobCompletionCriteria::TuningJobCompletionCriteria(JsonView jsonValue) : 
    m_targetObjectiveMetricValue(0.0),
    m_targetObjectiveMetricValueHasBeenSet(false)
{
  *this = jsonValue;
}

TuningJobCompletionCriteria& TuningJobCompletionCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetObjectiveMetricValue"))
  {
    m_targetObjectiveMetricValue = jsonValue.GetDouble("TargetObjectiveMetricValue");

    m_targetObjectiveMetricValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TuningJobCompletionCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_targetObjectiveMetricValueHasBeenSet)
  {
   payload.WithDouble("TargetObjectiveMetricValue", m_targetObjectiveMetricValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
