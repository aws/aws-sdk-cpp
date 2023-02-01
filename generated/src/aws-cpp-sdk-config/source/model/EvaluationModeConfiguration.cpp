/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EvaluationModeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

EvaluationModeConfiguration::EvaluationModeConfiguration() : 
    m_mode(EvaluationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

EvaluationModeConfiguration::EvaluationModeConfiguration(JsonView jsonValue) : 
    m_mode(EvaluationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationModeConfiguration& EvaluationModeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationModeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EvaluationModeMapper::GetNameForEvaluationMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
