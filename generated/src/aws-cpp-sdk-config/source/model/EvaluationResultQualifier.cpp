/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EvaluationResultQualifier.h>
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

EvaluationResultQualifier::EvaluationResultQualifier() : 
    m_configRuleNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false)
{
}

EvaluationResultQualifier::EvaluationResultQualifier(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResultQualifier& EvaluationResultQualifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));

    m_evaluationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResultQualifier::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_evaluationModeHasBeenSet)
  {
   payload.WithString("EvaluationMode", EvaluationModeMapper::GetNameForEvaluationMode(m_evaluationMode));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
