/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/TranscriptConfiguration.h>
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

TranscriptConfiguration::TranscriptConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TranscriptConfiguration& TranscriptConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("speakerLabeling"))
  {
    m_speakerLabeling = jsonValue.GetObject("speakerLabeling");
    m_speakerLabelingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelLabeling"))
  {
    m_channelLabeling = jsonValue.GetObject("channelLabeling");
    m_channelLabelingHasBeenSet = true;
  }
  return *this;
}

JsonValue TranscriptConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_speakerLabelingHasBeenSet)
  {
   payload.WithObject("speakerLabeling", m_speakerLabeling.Jsonize());

  }

  if(m_channelLabelingHasBeenSet)
  {
   payload.WithObject("channelLabeling", m_channelLabeling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
