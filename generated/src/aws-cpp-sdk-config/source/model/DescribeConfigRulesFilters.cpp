/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigRulesFilters.h>
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

DescribeConfigRulesFilters::DescribeConfigRulesFilters() : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false)
{
}

DescribeConfigRulesFilters::DescribeConfigRulesFilters(JsonView jsonValue) : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeConfigRulesFilters& DescribeConfigRulesFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));

    m_evaluationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeConfigRulesFilters::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationModeHasBeenSet)
  {
   payload.WithString("EvaluationMode", EvaluationModeMapper::GetNameForEvaluationMode(m_evaluationMode));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
