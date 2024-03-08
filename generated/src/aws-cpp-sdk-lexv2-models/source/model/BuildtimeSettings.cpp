/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuildtimeSettings.h>
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

BuildtimeSettings::BuildtimeSettings() : 
    m_descriptiveBotBuilderHasBeenSet(false),
    m_sampleUtteranceGenerationHasBeenSet(false)
{
}

BuildtimeSettings::BuildtimeSettings(JsonView jsonValue) : 
    m_descriptiveBotBuilderHasBeenSet(false),
    m_sampleUtteranceGenerationHasBeenSet(false)
{
  *this = jsonValue;
}

BuildtimeSettings& BuildtimeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("descriptiveBotBuilder"))
  {
    m_descriptiveBotBuilder = jsonValue.GetObject("descriptiveBotBuilder");

    m_descriptiveBotBuilderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleUtteranceGeneration"))
  {
    m_sampleUtteranceGeneration = jsonValue.GetObject("sampleUtteranceGeneration");

    m_sampleUtteranceGenerationHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildtimeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_descriptiveBotBuilderHasBeenSet)
  {
   payload.WithObject("descriptiveBotBuilder", m_descriptiveBotBuilder.Jsonize());

  }

  if(m_sampleUtteranceGenerationHasBeenSet)
  {
   payload.WithObject("sampleUtteranceGeneration", m_sampleUtteranceGeneration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
