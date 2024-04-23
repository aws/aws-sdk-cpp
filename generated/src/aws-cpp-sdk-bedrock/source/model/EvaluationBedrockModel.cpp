/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationBedrockModel.h>
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

EvaluationBedrockModel::EvaluationBedrockModel() : 
    m_modelIdentifierHasBeenSet(false),
    m_inferenceParamsHasBeenSet(false)
{
}

EvaluationBedrockModel::EvaluationBedrockModel(JsonView jsonValue) : 
    m_modelIdentifierHasBeenSet(false),
    m_inferenceParamsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationBedrockModel& EvaluationBedrockModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelIdentifier"))
  {
    m_modelIdentifier = jsonValue.GetString("modelIdentifier");

    m_modelIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceParams"))
  {
    m_inferenceParams = jsonValue.GetString("inferenceParams");

    m_inferenceParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationBedrockModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdentifierHasBeenSet)
  {
   payload.WithString("modelIdentifier", m_modelIdentifier);

  }

  if(m_inferenceParamsHasBeenSet)
  {
   payload.WithString("inferenceParams", m_inferenceParams);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
