/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/BedrockEvaluatorModel.h>
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

BedrockEvaluatorModel::BedrockEvaluatorModel(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockEvaluatorModel& BedrockEvaluatorModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelIdentifier"))
  {
    m_modelIdentifier = jsonValue.GetString("modelIdentifier");
    m_modelIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockEvaluatorModel::Jsonize() const
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
