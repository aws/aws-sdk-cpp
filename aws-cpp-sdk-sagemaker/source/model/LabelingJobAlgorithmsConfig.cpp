/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
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

LabelingJobAlgorithmsConfig::LabelingJobAlgorithmsConfig() : 
    m_labelingJobAlgorithmSpecificationArnHasBeenSet(false),
    m_initialActiveLearningModelArnHasBeenSet(false),
    m_labelingJobResourceConfigHasBeenSet(false)
{
}

LabelingJobAlgorithmsConfig::LabelingJobAlgorithmsConfig(JsonView jsonValue) : 
    m_labelingJobAlgorithmSpecificationArnHasBeenSet(false),
    m_initialActiveLearningModelArnHasBeenSet(false),
    m_labelingJobResourceConfigHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobAlgorithmsConfig& LabelingJobAlgorithmsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelingJobAlgorithmSpecificationArn"))
  {
    m_labelingJobAlgorithmSpecificationArn = jsonValue.GetString("LabelingJobAlgorithmSpecificationArn");

    m_labelingJobAlgorithmSpecificationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialActiveLearningModelArn"))
  {
    m_initialActiveLearningModelArn = jsonValue.GetString("InitialActiveLearningModelArn");

    m_initialActiveLearningModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingJobResourceConfig"))
  {
    m_labelingJobResourceConfig = jsonValue.GetObject("LabelingJobResourceConfig");

    m_labelingJobResourceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobAlgorithmsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_labelingJobAlgorithmSpecificationArnHasBeenSet)
  {
   payload.WithString("LabelingJobAlgorithmSpecificationArn", m_labelingJobAlgorithmSpecificationArn);

  }

  if(m_initialActiveLearningModelArnHasBeenSet)
  {
   payload.WithString("InitialActiveLearningModelArn", m_initialActiveLearningModelArn);

  }

  if(m_labelingJobResourceConfigHasBeenSet)
  {
   payload.WithObject("LabelingJobResourceConfig", m_labelingJobResourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
