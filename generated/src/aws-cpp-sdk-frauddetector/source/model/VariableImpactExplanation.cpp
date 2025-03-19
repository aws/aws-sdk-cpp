/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/VariableImpactExplanation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

VariableImpactExplanation::VariableImpactExplanation(JsonView jsonValue)
{
  *this = jsonValue;
}

VariableImpactExplanation& VariableImpactExplanation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventVariableName"))
  {
    m_eventVariableName = jsonValue.GetString("eventVariableName");
    m_eventVariableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relativeImpact"))
  {
    m_relativeImpact = jsonValue.GetString("relativeImpact");
    m_relativeImpactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logOddsImpact"))
  {
    m_logOddsImpact = jsonValue.GetDouble("logOddsImpact");
    m_logOddsImpactHasBeenSet = true;
  }
  return *this;
}

JsonValue VariableImpactExplanation::Jsonize() const
{
  JsonValue payload;

  if(m_eventVariableNameHasBeenSet)
  {
   payload.WithString("eventVariableName", m_eventVariableName);

  }

  if(m_relativeImpactHasBeenSet)
  {
   payload.WithString("relativeImpact", m_relativeImpact);

  }

  if(m_logOddsImpactHasBeenSet)
  {
   payload.WithDouble("logOddsImpact", m_logOddsImpact);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
