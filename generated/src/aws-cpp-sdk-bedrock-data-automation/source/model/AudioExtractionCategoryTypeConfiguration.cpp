/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioExtractionCategoryTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

AudioExtractionCategoryTypeConfiguration::AudioExtractionCategoryTypeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioExtractionCategoryTypeConfiguration& AudioExtractionCategoryTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transcript"))
  {
    m_transcript = jsonValue.GetObject("transcript");
    m_transcriptHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioExtractionCategoryTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("transcript", m_transcript.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
