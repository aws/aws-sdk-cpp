/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ChannelLabelingConfiguration.h>
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

ChannelLabelingConfiguration::ChannelLabelingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelLabelingConfiguration& ChannelLabelingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelLabelingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
