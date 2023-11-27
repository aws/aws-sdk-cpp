/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SampleUtteranceGenerationSpecification.h>
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

SampleUtteranceGenerationSpecification::SampleUtteranceGenerationSpecification() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bedrockModelSpecificationHasBeenSet(false)
{
}

SampleUtteranceGenerationSpecification::SampleUtteranceGenerationSpecification(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bedrockModelSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

SampleUtteranceGenerationSpecification& SampleUtteranceGenerationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bedrockModelSpecification"))
  {
    m_bedrockModelSpecification = jsonValue.GetObject("bedrockModelSpecification");

    m_bedrockModelSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue SampleUtteranceGenerationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_bedrockModelSpecificationHasBeenSet)
  {
   payload.WithObject("bedrockModelSpecification", m_bedrockModelSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
