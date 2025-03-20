/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationPrecomputedInferenceSource.h>
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

EvaluationPrecomputedInferenceSource::EvaluationPrecomputedInferenceSource(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationPrecomputedInferenceSource& EvaluationPrecomputedInferenceSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inferenceSourceIdentifier"))
  {
    m_inferenceSourceIdentifier = jsonValue.GetString("inferenceSourceIdentifier");
    m_inferenceSourceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationPrecomputedInferenceSource::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceSourceIdentifierHasBeenSet)
  {
   payload.WithString("inferenceSourceIdentifier", m_inferenceSourceIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
