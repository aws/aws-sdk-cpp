/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeModel.h>
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

EdgeModel::EdgeModel() : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_latestSampleTimeHasBeenSet(false),
    m_latestInferenceHasBeenSet(false)
{
}

EdgeModel::EdgeModel(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_latestSampleTimeHasBeenSet(false),
    m_latestInferenceHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeModel& EdgeModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestSampleTime"))
  {
    m_latestSampleTime = jsonValue.GetDouble("LatestSampleTime");

    m_latestSampleTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestInference"))
  {
    m_latestInference = jsonValue.GetDouble("LatestInference");

    m_latestInferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_latestSampleTimeHasBeenSet)
  {
   payload.WithDouble("LatestSampleTime", m_latestSampleTime.SecondsWithMSPrecision());
  }

  if(m_latestInferenceHasBeenSet)
  {
   payload.WithDouble("LatestInference", m_latestInference.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
