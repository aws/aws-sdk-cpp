/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationInferenceConfigSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationInferenceConfigSummary::EvaluationInferenceConfigSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationInferenceConfigSummary& EvaluationInferenceConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelConfigSummary"))
  {
    m_modelConfigSummary = jsonValue.GetObject("modelConfigSummary");
    m_modelConfigSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ragConfigSummary"))
  {
    m_ragConfigSummary = jsonValue.GetObject("ragConfigSummary");
    m_ragConfigSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationInferenceConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelConfigSummaryHasBeenSet)
  {
   payload.WithObject("modelConfigSummary", m_modelConfigSummary.Jsonize());

  }

  if(m_ragConfigSummaryHasBeenSet)
  {
   payload.WithObject("ragConfigSummary", m_ragConfigSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
