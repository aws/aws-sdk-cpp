/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowAliasConcurrencyConfiguration.h>
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

FlowAliasConcurrencyConfiguration::FlowAliasConcurrencyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowAliasConcurrencyConfiguration& FlowAliasConcurrencyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ConcurrencyTypeMapper::GetConcurrencyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetInteger("maxConcurrency");
    m_maxConcurrencyHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowAliasConcurrencyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ConcurrencyTypeMapper::GetNameForConcurrencyType(m_type));
  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithInteger("maxConcurrency", m_maxConcurrency);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
