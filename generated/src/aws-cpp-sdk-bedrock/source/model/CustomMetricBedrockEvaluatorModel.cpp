/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomMetricBedrockEvaluatorModel.h>
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

CustomMetricBedrockEvaluatorModel::CustomMetricBedrockEvaluatorModel(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomMetricBedrockEvaluatorModel& CustomMetricBedrockEvaluatorModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelIdentifier"))
  {
    m_modelIdentifier = jsonValue.GetString("modelIdentifier");
    m_modelIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomMetricBedrockEvaluatorModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdentifierHasBeenSet)
  {
   payload.WithString("modelIdentifier", m_modelIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
