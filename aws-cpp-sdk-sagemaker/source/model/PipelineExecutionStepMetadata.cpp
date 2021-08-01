﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecutionStepMetadata.h>
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

PipelineExecutionStepMetadata::PipelineExecutionStepMetadata() : 
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false),
    m_tuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_registerModelHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
}

PipelineExecutionStepMetadata::PipelineExecutionStepMetadata(JsonView jsonValue) : 
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false),
    m_tuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_registerModelHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecutionStepMetadata& PipelineExecutionStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJob"))
  {
    m_processingJob = jsonValue.GetObject("ProcessingJob");

    m_processingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJob"))
  {
    m_transformJob = jsonValue.GetObject("TransformJob");

    m_transformJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TuningJob"))
  {
    m_tuningJob = jsonValue.GetObject("TuningJob");

    m_tuningJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetObject("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisterModel"))
  {
    m_registerModel = jsonValue.GetObject("RegisterModel");

    m_registerModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Callback"))
  {
    m_callback = jsonValue.GetObject("Callback");

    m_callbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lambda"))
  {
    m_lambda = jsonValue.GetObject("Lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  if(m_processingJobHasBeenSet)
  {
   payload.WithObject("ProcessingJob", m_processingJob.Jsonize());

  }

  if(m_transformJobHasBeenSet)
  {
   payload.WithObject("TransformJob", m_transformJob.Jsonize());

  }

  if(m_tuningJobHasBeenSet)
  {
   payload.WithObject("TuningJob", m_tuningJob.Jsonize());

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("Model", m_model.Jsonize());

  }

  if(m_registerModelHasBeenSet)
  {
   payload.WithObject("RegisterModel", m_registerModel.Jsonize());

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_callbackHasBeenSet)
  {
   payload.WithObject("Callback", m_callback.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("Lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
