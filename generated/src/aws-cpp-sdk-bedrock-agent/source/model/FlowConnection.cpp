/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowConnection.h>
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

FlowConnection::FlowConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowConnection& FlowConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowConnectionTypeMapper::GetFlowConnectionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowConnection::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowConnectionTypeMapper::GetNameForFlowConnectionType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
