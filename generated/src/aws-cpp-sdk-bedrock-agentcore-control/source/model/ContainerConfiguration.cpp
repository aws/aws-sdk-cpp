/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ContainerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

ContainerConfiguration::ContainerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerConfiguration& ContainerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerUri"))
  {
    m_containerUri = jsonValue.GetString("containerUri");
    m_containerUriHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_containerUriHasBeenSet)
  {
   payload.WithString("containerUri", m_containerUri);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
