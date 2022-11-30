/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ExperimentConfig.h>
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

ExperimentConfig::ExperimentConfig() : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_trialComponentDisplayNameHasBeenSet(false),
    m_runNameHasBeenSet(false)
{
}

ExperimentConfig::ExperimentConfig(JsonView jsonValue) : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_trialComponentDisplayNameHasBeenSet(false),
    m_runNameHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentConfig& ExperimentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentDisplayName"))
  {
    m_trialComponentDisplayName = jsonValue.GetString("TrialComponentDisplayName");

    m_trialComponentDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunName"))
  {
    m_runName = jsonValue.GetString("RunName");

    m_runNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  if(m_trialComponentDisplayNameHasBeenSet)
  {
   payload.WithString("TrialComponentDisplayName", m_trialComponentDisplayName);

  }

  if(m_runNameHasBeenSet)
  {
   payload.WithString("RunName", m_runName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
