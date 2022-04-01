/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ValidationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

ValidationConfiguration::ValidationConfiguration() : 
    m_rulesetArnHasBeenSet(false),
    m_validationMode(ValidationMode::NOT_SET),
    m_validationModeHasBeenSet(false)
{
}

ValidationConfiguration::ValidationConfiguration(JsonView jsonValue) : 
    m_rulesetArnHasBeenSet(false),
    m_validationMode(ValidationMode::NOT_SET),
    m_validationModeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationConfiguration& ValidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RulesetArn"))
  {
    m_rulesetArn = jsonValue.GetString("RulesetArn");

    m_rulesetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationMode"))
  {
    m_validationMode = ValidationModeMapper::GetValidationModeForName(jsonValue.GetString("ValidationMode"));

    m_validationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rulesetArnHasBeenSet)
  {
   payload.WithString("RulesetArn", m_rulesetArn);

  }

  if(m_validationModeHasBeenSet)
  {
   payload.WithString("ValidationMode", ValidationModeMapper::GetNameForValidationMode(m_validationMode));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
