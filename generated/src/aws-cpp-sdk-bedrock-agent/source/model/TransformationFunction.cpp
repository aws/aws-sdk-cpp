/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/TransformationFunction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

TransformationFunction::TransformationFunction(JsonView jsonValue)
{
  *this = jsonValue;
}

TransformationFunction& TransformationFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transformationLambdaConfiguration"))
  {
    m_transformationLambdaConfiguration = jsonValue.GetObject("transformationLambdaConfiguration");
    m_transformationLambdaConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationFunction::Jsonize() const
{
  JsonValue payload;

  if(m_transformationLambdaConfigurationHasBeenSet)
  {
   payload.WithObject("transformationLambdaConfiguration", m_transformationLambdaConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
