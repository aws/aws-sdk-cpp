/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmValidationProfile.h>
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

AlgorithmValidationProfile::AlgorithmValidationProfile() : 
    m_profileNameHasBeenSet(false),
    m_trainingJobDefinitionHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
}

AlgorithmValidationProfile::AlgorithmValidationProfile(JsonView jsonValue) : 
    m_profileNameHasBeenSet(false),
    m_trainingJobDefinitionHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmValidationProfile& AlgorithmValidationProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobDefinition"))
  {
    m_trainingJobDefinition = jsonValue.GetObject("TrainingJobDefinition");

    m_trainingJobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJobDefinition"))
  {
    m_transformJobDefinition = jsonValue.GetObject("TransformJobDefinition");

    m_transformJobDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmValidationProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_trainingJobDefinitionHasBeenSet)
  {
   payload.WithObject("TrainingJobDefinition", m_trainingJobDefinition.Jsonize());

  }

  if(m_transformJobDefinitionHasBeenSet)
  {
   payload.WithObject("TransformJobDefinition", m_transformJobDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
