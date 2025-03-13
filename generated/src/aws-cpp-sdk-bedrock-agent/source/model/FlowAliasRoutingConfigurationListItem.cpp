/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowAliasRoutingConfigurationListItem.h>
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

FlowAliasRoutingConfigurationListItem::FlowAliasRoutingConfigurationListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowAliasRoutingConfigurationListItem& FlowAliasRoutingConfigurationListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowVersion"))
  {
    m_flowVersion = jsonValue.GetString("flowVersion");
    m_flowVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowAliasRoutingConfigurationListItem::Jsonize() const
{
  JsonValue payload;

  if(m_flowVersionHasBeenSet)
  {
   payload.WithString("flowVersion", m_flowVersion);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
