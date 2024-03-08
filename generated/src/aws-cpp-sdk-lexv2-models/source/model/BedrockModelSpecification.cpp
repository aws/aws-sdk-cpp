/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BedrockModelSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BedrockModelSpecification::BedrockModelSpecification() : 
    m_modelArnHasBeenSet(false)
{
}

BedrockModelSpecification::BedrockModelSpecification(JsonView jsonValue) : 
    m_modelArnHasBeenSet(false)
{
  *this = jsonValue;
}

BedrockModelSpecification& BedrockModelSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

    m_modelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BedrockModelSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
