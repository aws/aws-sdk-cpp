/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MetadataConfigurationForReranking.h>
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

MetadataConfigurationForReranking::MetadataConfigurationForReranking(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataConfigurationForReranking& MetadataConfigurationForReranking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selectionMode"))
  {
    m_selectionMode = RerankingMetadataSelectionModeMapper::GetRerankingMetadataSelectionModeForName(jsonValue.GetString("selectionMode"));
    m_selectionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectiveModeConfiguration"))
  {
    m_selectiveModeConfiguration = jsonValue.GetObject("selectiveModeConfiguration");
    m_selectiveModeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataConfigurationForReranking::Jsonize() const
{
  JsonValue payload;

  if(m_selectionModeHasBeenSet)
  {
   payload.WithString("selectionMode", RerankingMetadataSelectionModeMapper::GetNameForRerankingMetadataSelectionMode(m_selectionMode));
  }

  if(m_selectiveModeConfigurationHasBeenSet)
  {
   payload.WithObject("selectiveModeConfiguration", m_selectiveModeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
