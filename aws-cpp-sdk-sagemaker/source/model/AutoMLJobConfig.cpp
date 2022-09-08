/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobConfig.h>
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

AutoMLJobConfig::AutoMLJobConfig() : 
    m_completionCriteriaHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_dataSplitConfigHasBeenSet(false),
    m_candidateGenerationConfigHasBeenSet(false),
    m_mode(AutoMLMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

AutoMLJobConfig::AutoMLJobConfig(JsonView jsonValue) : 
    m_completionCriteriaHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_dataSplitConfigHasBeenSet(false),
    m_candidateGenerationConfigHasBeenSet(false),
    m_mode(AutoMLMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobConfig& AutoMLJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");

    m_securityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSplitConfig"))
  {
    m_dataSplitConfig = jsonValue.GetObject("DataSplitConfig");

    m_dataSplitConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateGenerationConfig"))
  {
    m_candidateGenerationConfig = jsonValue.GetObject("CandidateGenerationConfig");

    m_candidateGenerationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = AutoMLModeMapper::GetAutoMLModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_securityConfigHasBeenSet)
  {
   payload.WithObject("SecurityConfig", m_securityConfig.Jsonize());

  }

  if(m_dataSplitConfigHasBeenSet)
  {
   payload.WithObject("DataSplitConfig", m_dataSplitConfig.Jsonize());

  }

  if(m_candidateGenerationConfigHasBeenSet)
  {
   payload.WithObject("CandidateGenerationConfig", m_candidateGenerationConfig.Jsonize());

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", AutoMLModeMapper::GetNameForAutoMLMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
